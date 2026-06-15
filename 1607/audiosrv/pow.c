/*
 * XREFs of pow @ 0x180036D3C
 * Callers:
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180026BFC (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180026EF8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?ScalarFromTaper@CVolumeUnit@@IEAANNN@Z @ 0x180026F74 (-ScalarFromTaper@CVolumeUnit@@IEAANNN@Z.c)
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x180026FC8 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180027038 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z @ 0x1800270D8 (-SetTaperOverallRange@CVolumeUnit@@QEAAXMM@Z.c)
 *     ?SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z @ 0x180027170 (-SetDBRange@CVolumeUnit@@QEAAXW4TAPERTYPE@@MMM@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180050958 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180058A60 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ConvertDbToEngineVolume @ 0x18007A154 (ConvertDbToEngineVolume.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
