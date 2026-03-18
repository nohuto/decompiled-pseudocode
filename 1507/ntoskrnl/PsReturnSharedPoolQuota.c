/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1404D0010
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     AlpcMessageDestroyProcedure @ 0x14047A9E0 (AlpcMessageDestroyProcedure.c)
 *     ObpIncrementHandleCountEx @ 0x1404952B0 (ObpIncrementHandleCountEx.c)
 *     ObAdjustSecurityQuota @ 0x1404CF5A0 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404CF634 (ObpChargeQuotaForObject.c)
 *     RtlpFreeAtom @ 0x140504D9C (RtlpFreeAtom.c)
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1404D0058 (PspDereferenceQuotaBlock.c)
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
