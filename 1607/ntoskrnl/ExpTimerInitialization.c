/*
 * XREFs of ExpTimerInitialization @ 0x14079DF80
 * Callers:
 *     ExpInitSystemPhase1 @ 0x14079EB74 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 */

bool ExpTimerInitialization()
{
  char v0; // di
  int v1; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v4[16]; // [rsp+30h] [rbp-29h] BYREF

  v0 = 0;
  ExpWakeTimerLock = 0LL;
  qword_1402FB5C8 = (__int64)&ExpWakeTimerList;
  ExpWakeTimerList = (__int64)&ExpWakeTimerList;
  RtlInitUnicodeString(&DestinationString, L"Timer");
  memset(v4, 0, 0x78uLL);
  LOWORD(v4[0]) = 120;
  LODWORD(v4[1]) = 256;
  HIDWORD(v4[4]) = 512;
  HIDWORD(v4[5]) = 312;
  HIDWORD(v4[3]) = 2031619;
  *(_OWORD *)((char *)&v4[1] + 4) = ExpTimerMapping;
  v4[9] = ExpDeleteTimer;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v4, 0LL, (__int64)&ExTimerObjectType) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IRTimer");
    HIDWORD(v4[5]) = 136;
    v4[9] = ExpDeleteTimer2;
    v1 = ObCreateObjectType(&DestinationString, (__int64)v4, 0LL, (__int64)&ExpIRTimerObjectType);
    ExpTimerFreedCookie = ExGenRandom(0);
    return v1 >= 0;
  }
  return v0;
}
