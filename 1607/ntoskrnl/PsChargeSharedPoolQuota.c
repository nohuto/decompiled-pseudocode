/*
 * XREFs of PsChargeSharedPoolQuota @ 0x14051D950
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspAllocateRateControl @ 0x1404B57F8 (PspAllocateRateControl.c)
 *     RtlpAllocateAtom @ 0x14051CF10 (RtlpAllocateAtom.c)
 *     ObAdjustSecurityQuota @ 0x14051D7E0 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x14051D85C (ObpChargeQuotaForObject.c)
 * Callees:
 *     PspReturnQuota @ 0x140010620 (PspReturnQuota.c)
 *     PspChargeQuota @ 0x14002B710 (PspChargeQuota.c)
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
      PspReturnQuota((char *)v5, 0LL, 1u, a2);
  }
  return 0LL;
}
