/*
 * XREFs of VfCheckPoolType @ 0x1406B822C
 * Callers:
 *     VfCheckNxPoolType @ 0x14020ABF8 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePool @ 0x1406B6244 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1406B62C0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1406B63B0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x1406B64A4 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1406B6504 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExInitializeLookasideListEx @ 0x1406C88A8 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1406C89E8 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x1406CE140 (VerifierExAllocateCacheAwareRundownProtection.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1406B8314 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
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
    ViCiPreprocessOptions(byte_1402D3F28, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(196, 0x2000, a2, a1, v4, byte_1402D3F28);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 248LL);
    _InterlockedIncrement(&dword_1402E1910);
  }
}
