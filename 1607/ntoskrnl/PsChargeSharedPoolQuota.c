/*
 * XREFs of PsChargeSharedPoolQuota @ 0x1404A5550
 * Callers:
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     RtlpAllocateAtom @ 0x1404A4B10 (RtlpAllocateAtom.c)
 *     ObAdjustSecurityQuota @ 0x1404A53E0 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404A545C (ObpChargeQuotaForObject.c)
 *     PspAllocateRateControl @ 0x1404D1D58 (PspAllocateRateControl.c)
 * Callees:
 *     PspReturnQuota @ 0x140010AA0 (PspReturnQuota.c)
 *     PspChargeQuota @ 0x14002BB90 (PspChargeQuota.c)
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
