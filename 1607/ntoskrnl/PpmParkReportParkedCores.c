/*
 * XREFs of PpmParkReportParkedCores @ 0x1400D30F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx @ 0x14007DAF0 (KeAndAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400C6910 (KeCountSetBitsAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     PpmPerfQueueAction @ 0x14012FC4C (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char PpmParkReportParkedCores()
{
  __int64 Prcb; // rax
  ULONG v2; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v3[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v4; // [rsp+38h] [rbp-D0h]
  __int16 v5; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+48h] [rbp-C0h]

  if ( !PpmIsParkingEnabled
    || !(unsigned int)KeAndAffinityEx(&PpmPerfChangedCoreParkingMask, (__int16 *)&PpmPerfNewCoreParkingMask, &v5) )
  {
    return 1;
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&v5);
  v3[1] = v6;
  v3[0] = &v5;
  v4 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v2, v3) )
  {
    Prcb = KeGetPrcb(v2);
    PpmPerfQueueAction(Prcb, 3LL);
  }
  return 0;
}
