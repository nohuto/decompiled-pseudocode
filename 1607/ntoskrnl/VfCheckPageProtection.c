/*
 * XREFs of VfCheckPageProtection @ 0x140704240
 * Callers:
 *     VfCheckNxPageProtection @ 0x1402224C8 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x14071B888 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x14071BD24 (VerifierMmCreateSection.c)
 *     VerifierMmMapViewOfSection @ 0x14071C1C0 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x14071C404 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x14071C6D4 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x14071C734 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x14071D38C (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x14071DEF8 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x14071E8B4 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x14071F338 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1407043D0 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140710594 (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(int a1, __int64 a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_1402F9900,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(196, 8193, a2, a1, 0LL, byte_1402F9900);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 252LL);
    _InterlockedIncrement(&dword_1403072D4);
  }
}
