/*
 * XREFs of pow @ 0x180021684
 * Callers:
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x180009FD8 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x180013EA0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ConvertDbToEngineVolume @ 0x18001D13C (ConvertDbToEngineVolume.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x1800201C4 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl pow(double X, double Y)
{
  return _o_pow(X, Y);
}
