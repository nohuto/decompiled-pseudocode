/*
 * XREFs of PfSnPowerBoostUpdate @ 0x1404C17F0
 * Callers:
 *     PfSnPowerBoost @ 0x1404C178C (PfSnPowerBoost.c)
 *     PfSnPowerBoostWorker @ 0x140631B58 (PfSnPowerBoostWorker.c)
 * Callees:
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PfSnPowerBoostUpdate(int a1)
{
  signed __int32 v1; // edx
  NTSTATUS result; // eax
  int Buffer; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+5Ch] [rbp+14h]

  v1 = _InterlockedExchangeAdd(&dword_1403059D4, a1 != 0 ? 1 : -1);
  result = 0;
  if ( !v1 && a1 || v1 == 1 && !a1 )
  {
    v4 = -1;
    Buffer = (2 * (a1 & 1)) | 1;
    return NtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  return result;
}
