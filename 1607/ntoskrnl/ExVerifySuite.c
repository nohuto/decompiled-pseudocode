/*
 * XREFs of ExVerifySuite @ 0x14013D188
 * Callers:
 *     MmWriteTriageInformation @ 0x1401E8140 (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x140554604 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407AA814 (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MultiUserTS )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
