/*
 * XREFs of VfCheckPoolType @ 0x140738750
 * Callers:
 *     VfCheckNxPoolType @ 0x14025A16C (VfCheckNxPoolType.c)
 *     VerifierExAllocatePool @ 0x140736534 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolWithTag @ 0x1407365B0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140736610 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140736700 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1407367F4 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExInitializeLookasideListEx @ 0x14074B434 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x14074B574 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x140751AD0 (VerifierExAllocateCacheAwareRundownProtection.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140738838 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPoolType(int a1, __int64 a2, unsigned int a3)
{
  ULONG_PTR v4; // rbx
  const char *v6; // rdx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 1) == 0 && (a1 & 0x200) == 0 )
  {
    v4 = a3;
    v6 = "The caller 0x%p specified an executable pool type 0x%x.";
    if ( a3 )
      v6 = "The caller 0x%p specified an executable pool type 0x%x (tag 0x%x).";
    ViCiPreprocessOptions(byte_140323054, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(196, 0x2000, a2, a1, v4, byte_140323054);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 248LL);
    _InterlockedIncrement(&dword_140331D90);
  }
}
