/*
 * XREFs of PpmParkReportUnparkedCores @ 0x1400D3134
 * Callers:
 *     <none>
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x1400C6910 (KeCountSetBitsAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmPerfQueueAction @ 0x14012FC4C (PpmPerfQueueAction.c)
 *     KeSubtractAffinityEx @ 0x1401447FC (KeSubtractAffinityEx.c)
 */

char PpmParkReportUnparkedCores()
{
  __int64 Prcb; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v3; // [rsp+30h] [rbp-18h]
  ULONG v4; // [rsp+50h] [rbp+8h] BYREF

  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeSubtractAffinityEx(
                        &PpmPerfChangedCoreParkingMask,
                        &PpmPerfNewCoreParkingMask,
                        &PpmPerfNewUnparkedMask) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
  v2[1] = qword_1402F8EB8;
  v3 = 0;
  v2[0] = &PpmPerfNewUnparkedMask;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v2) )
  {
    Prcb = KeGetPrcb(v4);
    PpmPerfQueueAction(Prcb, 1LL);
  }
  return 0;
}
