/*
 * XREFs of PpmCapturePerformanceDistribution @ 0x14020A2E4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x14020A41C (PpmCapturePerformanceDistributionCallback.c)
 */

__int64 __fastcall PpmCapturePerformanceDistribution(_DWORD *a1, unsigned int a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 Prcb; // r14
  unsigned __int8 CurrentIrql; // bl
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  ULONG v12; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD *v13; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v14; // [rsp+30h] [rbp-D0h]
  __int64 v15; // [rsp+34h] [rbp-CCh]
  int v16; // [rsp+3Ch] [rbp-C4h]
  unsigned __int16 *v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v18; // [rsp+50h] [rbp-B0h]
  _DWORD v19[44]; // [rsp+60h] [rbp-A0h] BYREF

  v17[0] = 0LL;
  v14 = 0;
  v16 = 0;
  v15 = (unsigned int)(4 * a3 + 4);
  v18 = *(_WORD *)(a4 + 8);
  v17[1] = *(unsigned __int16 **)a4;
  v13 = a1;
  v14 = a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v17) )
  {
    Prcb = KeGetPrcb(v12);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = PpmCapturePerformanceDistributionCallback(Prcb);
    __writecr8(CurrentIrql);
    if ( v9 < 0 )
    {
      v19[0] = 1310721;
      memset(&v19[1], 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v19, *(_DWORD *)(Prcb + 36));
      result = PopExecuteOnTargetProcessors(
                 (__int64)v19,
                 (__int64)PpmCapturePerformanceDistributionCallback,
                 (__int64)&v13,
                 0LL);
      if ( (int)result < 0 )
        return result;
    }
  }
  v11 = v15;
  *a5 = v15;
  if ( v11 > a2 )
    return 3221225476LL;
  *v13 = a3;
  return 0LL;
}
