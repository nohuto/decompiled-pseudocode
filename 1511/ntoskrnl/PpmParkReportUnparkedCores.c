/*
 * XREFs of PpmParkReportUnparkedCores @ 0x14007560C
 * Callers:
 *     <none>
 * Callees:
 *     KeSubtractAffinityEx @ 0x140077490 (KeSubtractAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140096030 (KeCountSetBitsAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009C650 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmPerfQueueAction @ 0x14012453C (PpmPerfQueueAction.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  unsigned int v4; // [rsp+50h] [rbp+8h] BYREF

  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeSubtractAffinityEx(
                        &PpmPerfChangedCoreParkingMask,
                        &PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
  v2[1] = qword_1402D3498;
  v3 = 0;
  v2[0] = &PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v2) )
  {
    Prcb = KeGetPrcb(v4);
    PpmPerfQueueAction(Prcb, 1LL);
  }
  return 0;
}
