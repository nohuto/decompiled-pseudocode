/*
 * XREFs of VfCheckPagePriority @ 0x140738610
 * Callers:
 *     VfCheckNxPagePriority @ 0x14025A13C (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140753A78 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140738838 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, __int64 a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    ViCiPreprocessOptions(
      byte_14032304C,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(196, 8194, a2, a1, 0LL, byte_14032304C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 256LL);
    _InterlockedIncrement(&dword_140331D98);
  }
}
