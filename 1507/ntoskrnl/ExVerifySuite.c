/*
 * XREFs of ExVerifySuite @ 0x14016C2D4
 * Callers:
 *     MmWriteTriageInformation @ 0x140218D8C (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x1405B5788 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407DDA08 (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v1 = dword_140356908;
  return _bittest(&v1, SuiteType);
}
