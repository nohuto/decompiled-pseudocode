/*
 * XREFs of KeAdjustInterruptTime @ 0x14014C7D0
 * Callers:
 *     KiSetSystemTimeDpc @ 0x1401549C4 (KiSetSystemTimeDpc.c)
 *     xHalTscSynchronization @ 0x1401E48A0 (xHalTscSynchronization.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     KeIpiGenericCall @ 0x140156B40 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall KeAdjustInterruptTime(__int64 a1, char a2)
{
  unsigned int Number; // ecx
  char Context; // [rsp+20h] [rbp-38h] BYREF
  unsigned int Context_4; // [rsp+24h] [rbp-34h]
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  if ( a1 < 0 )
    return 0;
  Number = KeGetCurrentPrcb()->Number;
  Context = a2;
  Context_4 = Number;
  v8 = KeNumberProcessors_0;
  v7 = a1;
  v9 = 1;
  KeIpiGenericCall(KiCalibrateTimeAdjustment, (ULONG_PTR)&Context);
  return 1;
}
