/*
 * XREFs of VfCheckPoolType @ 0x1407042B0
 * Callers:
 *     VfCheckNxPoolType @ 0x1402226B4 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePool @ 0x1407020A4 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePoolWithTag @ 0x140702120 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140702180 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140702270 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140702364 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExInitializeLookasideListEx @ 0x140717250 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x140717390 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x14071A1F8 (VerifierExAllocateCacheAwareRundownProtection.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223544 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407043A0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140710564 (ViTargetIncrementCounter.c)
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
    ViCiPreprocessOptions(byte_1402F9904, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(196, 0x2000, a2, a1, v4, byte_1402F9904);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 248LL);
    _InterlockedIncrement(&dword_140307290);
  }
}
