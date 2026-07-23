/*
 * XREFs of ExVerifySuite @ 0x14013D6F8
 * Callers:
 *     MmWriteTriageInformation @ 0x1401E7F6C (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x140554B44 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407AA814 (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v1 = MEMORY[0xFFFFF780000002D0];
  return _bittest(&v1, SuiteType);
}
