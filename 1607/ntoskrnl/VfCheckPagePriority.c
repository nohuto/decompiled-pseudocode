/*
 * XREFs of VfCheckPagePriority @ 0x1407041A0
 * Callers:
 *     VfCheckNxPagePriority @ 0x1402224B0 (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x14071C09C (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407043D0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, __int64 a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    ViCiPreprocessOptions(
      byte_1402F98F8,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(196, 8194, a2, a1, 0LL, byte_1402F98F8);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 256LL);
    _InterlockedIncrement(&dword_1403072D8);
  }
}
