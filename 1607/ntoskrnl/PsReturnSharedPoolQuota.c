/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1404A5FD0
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     AlpcMessageDestroyProcedure @ 0x140448980 (AlpcMessageDestroyProcedure.c)
 *     ObpIncrementHandleCountEx @ 0x14044DC50 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     RtlpFreeAtom @ 0x1404A3DD8 (RtlpFreeAtom.c)
 *     ObAdjustSecurityQuota @ 0x1404A53E0 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404A545C (ObpChargeQuotaForObject.c)
 *     PspFreeRateControl @ 0x1404D1D14 (PspFreeRateControl.c)
 * Callees:
 *     PspReturnQuota @ 0x140010AA0 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1404A6018 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1u, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
