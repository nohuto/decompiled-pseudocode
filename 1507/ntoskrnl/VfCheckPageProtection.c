/*
 * XREFs of VfCheckPageProtection @ 0x1407386B0
 * Callers:
 *     VfCheckNxPageProtection @ 0x14025A154 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x14075329C (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x14075372C (VerifierMmCreateSection.c)
 *     VerifierMmMapViewOfSection @ 0x140753B88 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x140753DA4 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x140754010 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x140754070 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x140754DAC (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x140755918 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x1407562B0 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x140756D34 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140738838 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140745D60 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(int a1, __int64 a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140323058,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(196, 8193, a2, a1, 0LL, byte_140323058);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 252LL);
    _InterlockedIncrement(&dword_140331D94);
  }
}
