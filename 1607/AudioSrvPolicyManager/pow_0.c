/*
 * XREFs of pow_0 @ 0x180024CD2
 * Callers:
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x18000A294 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180015580 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ConvertDbToEngineVolume @ 0x18001F6F0 (ConvertDbToEngineVolume.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x1800236CC (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow_0(double X, double Y)
{
  return pow(X, Y);
}
