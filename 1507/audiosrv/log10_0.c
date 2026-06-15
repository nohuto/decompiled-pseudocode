/*
 * XREFs of log10_0 @ 0x1800449E2
 * Callers:
 *     ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x18003E860 (-CallConstructors@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVC.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003EA40 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180067C78 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl log10_0(double X)
{
  return log10(X);
}
