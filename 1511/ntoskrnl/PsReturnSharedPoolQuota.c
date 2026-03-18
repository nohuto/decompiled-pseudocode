/*
 * XREFs of PsReturnSharedPoolQuota @ 0x14046C2DC
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     ObpIncrementHandleCountEx @ 0x14040BFB0 (ObpIncrementHandleCountEx.c)
 *     AlpcMessageDestroyProcedure @ 0x140426FA0 (AlpcMessageDestroyProcedure.c)
 *     RtlpFreeAtom @ 0x1404603BC (RtlpFreeAtom.c)
 *     ObAdjustSecurityQuota @ 0x14046B604 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x14046B680 (ObpChargeQuotaForObject.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspFreeRateControl @ 0x140487854 (PspFreeRateControl.c)
 * Callees:
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x14046C324 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
