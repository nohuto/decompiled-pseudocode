/*
 * XREFs of PsChargeSharedPoolQuota @ 0x1404CF74C
 * Callers:
 *     RtlpAllocateAtom @ 0x140416BA8 (RtlpAllocateAtom.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     ObAdjustSecurityQuota @ 0x1404CF5A0 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404CF634 (ObpChargeQuotaForObject.c)
 *     PspAllocateRateControl @ 0x14053CE10 (PspAllocateRateControl.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 *     PspChargeQuota @ 0x14008F940 (PspChargeQuota.c)
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
