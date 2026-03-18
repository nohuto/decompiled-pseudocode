/*
 * XREFs of VfCheckPagePriority @ 0x1406B80EC
 * Callers:
 *     VfCheckNxPagePriority @ 0x14020ABC8 (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1406CFFAC (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1406B8314 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, __int64 a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    ViCiPreprocessOptions(
      byte_1402D3F1C,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(196, 8194, a2, a1, 0LL, byte_1402D3F1C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 256LL);
    _InterlockedIncrement(&dword_1402E1918);
  }
}
