/*
 * XREFs of KeAdjustInterruptTime @ 0x140126A0C
 * Callers:
 *     KiSetSystemTimeDpc @ 0x14012A438 (KiSetSystemTimeDpc.c)
 *     xHalTscSynchronization @ 0x1401BA878 (xHalTscSynchronization.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400D4030 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14012FA64 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

char __fastcall KeAdjustInterruptTime(__int64 a1, char a2)
{
  char Context; // [rsp+20h] [rbp-38h] BYREF
  unsigned int Context_4; // [rsp+24h] [rbp-34h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  ULONG ActiveProcessorCount; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  if ( a1 < 0 )
    return 0;
  Context_4 = KeGetCurrentPrcb()->Number;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v7 = a1;
  Context = a2;
  v9 = 1;
  KeIpiGenericCall(KiCalibrateTimeAdjustment, (ULONG_PTR)&Context);
  return 1;
}
