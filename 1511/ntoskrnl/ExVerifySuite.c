/*
 * XREFs of ExVerifySuite @ 0x14013E80C
 * Callers:
 *     MmWriteTriageInformation @ 0x1401D68AC (MmWriteTriageInformation.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PsLocateSystemDlls @ 0x14053F938 (PsLocateSystemDlls.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x1407696E4 (ExpUpdateProductSuiteTypeInRegistry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExVerifySuite(SUITE_TYPE SuiteType)
{
  int v1; // eax

  if ( SuiteType > MaxSuiteType )
    return 0;
  v1 = dword_140306608;
  return _bittest(&v1, SuiteType);
}
