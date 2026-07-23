/*
 * XREFs of PfSnPowerBoostUpdate @ 0x140458EA4
 * Callers:
 *     PfSnPowerBoost @ 0x140458E08 (PfSnPowerBoost.c)
 *     PfSnPowerBoostWorker @ 0x1406AFFF4 (PfSnPowerBoostWorker.c)
 * Callees:
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PfSnPowerBoostUpdate(int a1)
{
  signed __int32 v1; // edx
  NTSTATUS result; // eax
  int Buffer; // [rsp+58h] [rbp+10h] BYREF
  int v4; // [rsp+5Ch] [rbp+14h]

  v1 = _InterlockedExchangeAdd(&dword_140353744, a1 != 0 ? 1 : -1);
  result = 0;
  if ( !v1 && a1 || v1 == 1 && !a1 )
  {
    v4 = -1;
    Buffer = (2 * (a1 & 1)) | 1;
    return NtUpdateWnfStateData(&WNF_SEB_APP_LAUNCH_PREFETCH, &Buffer, 8u, 0LL, 0LL, 0, 0);
  }
  return result;
}
