/*
 * XREFs of pow_0 @ 0x180048C4A
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18003A6D0 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x18003A838 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18003B2C4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180041F08 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?ScalarFromTaper@CVolumeUnit@@IEAANNN@Z @ 0x180042124 (-ScalarFromTaper@CVolumeUnit@@IEAANNN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180042178 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x1800421EC (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x180042284 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x18006F290 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ConvertDbToEngineVolume @ 0x1800A8F6C (ConvertDbToEngineVolume.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow_0(double X, double Y)
{
  return pow(X, Y);
}
