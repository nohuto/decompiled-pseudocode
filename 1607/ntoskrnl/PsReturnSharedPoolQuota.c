/*
 * XREFs of PsReturnSharedPoolQuota @ 0x14051E3D0
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     AlpcMessageDestroyProcedure @ 0x140447850 (AlpcMessageDestroyProcedure.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspFreeRateControl @ 0x1404B57B4 (PspFreeRateControl.c)
 *     RtlpFreeAtom @ 0x14051C1D8 (RtlpFreeAtom.c)
 *     ObAdjustSecurityQuota @ 0x14051D7E0 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x14051D85C (ObpChargeQuotaForObject.c)
 * Callees:
 *     PspReturnQuota @ 0x140010620 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x14051E418 (PspDereferenceQuotaBlock.c)
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
