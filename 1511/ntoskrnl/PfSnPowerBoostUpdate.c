/*
 * XREFs of PfSnPowerBoostUpdate @ 0x1404C17F0
 * Callers:
 *     PfSnPowerBoost @ 0x1404C178C (PfSnPowerBoost.c)
 *     PfSnPowerBoostWorker @ 0x140631B58 (PfSnPowerBoostWorker.c)
 * Callees:
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 */

__int64 __fastcall PfSnPowerBoostUpdate(int a1)
{
  signed __int32 v1; // edx
  __int64 result; // rax
  int v3; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+5Ch] [rbp+14h]

  v1 = _InterlockedExchangeAdd(&dword_1403059D4, a1 != 0 ? 1 : -1);
  result = 0LL;
  if ( !v1 && a1 || v1 == 1 && !a1 )
  {
    v4 = -1;
    v3 = (2 * (a1 & 1)) | 1;
    return NtUpdateWnfStateData((__int64)&WNF_SEB_APP_LAUNCH_PREFETCH, (__int64)&v3, 8u, 0LL, 0LL, 0, 0);
  }
  return result;
}
