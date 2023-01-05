int iot = 12;
int ntp = 15;
int wifi = 2;

void setup() {
  pinMode(iot, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(wifi, OUTPUT);

}

void loop() {
  iotblink();
  ntpblink(100);
  digitalWrite(wifi,LOW);
  delay(wifiblink(100));
  digitalWrite(wifi,HIGH);
  delay(wifiblink(100));
}


void iotblink(void){
  digitalWrite(iot, LOW);
  delay(500);
  digitalWrite(iot, HIGH);
  delay(500);
}

void ntpblink(int value){
  digitalWrite(ntp, LOW);
  delay(value);
  digitalWrite(ntp, HIGH);
  delay(value);

}
