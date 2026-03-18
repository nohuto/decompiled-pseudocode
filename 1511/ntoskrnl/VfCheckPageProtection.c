/*
 * XREFs of VfCheckPageProtection @ 0x1406B818C
 * Callers:
 *     VfCheckNxPageProtection @ 0x14020ABE0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1406CF7D0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x1406CFC60 (VerifierMmCreateSection.c)
 *     VerifierMmMapViewOfSection @ 0x1406D00BC (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x1406D02D8 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x1406D0544 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x1406D05A4 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x1406D11E4 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x1406D1D50 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x1406D26E8 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x1406D316C (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14020BA88 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1406B8314 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1406C44AC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(int a1, __int64 a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_1402D3F24,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(196, 8193, a2, a1, 0LL, byte_1402D3F24);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 252LL);
    _InterlockedIncrement(&dword_1402E1914);
  }
}
