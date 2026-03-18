/*
 * XREFs of PsChargeSharedPoolQuota @ 0x14046B774
 * Callers:
 *     RtlpAllocateAtom @ 0x14046A750 (RtlpAllocateAtom.c)
 *     ObAdjustSecurityQuota @ 0x14046B604 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x14046B680 (ObpChargeQuotaForObject.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspAllocateRateControl @ 0x140487898 (PspAllocateRateControl.c)
 * Callees:
 *     PspChargeQuota @ 0x140063930 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(struct _KPROCESS *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = a1[1].ActiveProcessors.Bitmap[4];
  if ( !a2 || (int)PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)PspChargeQuota(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      PspReturnQuota((char *)v5, 0LL, 1, a2);
  }
  return 0LL;
}
