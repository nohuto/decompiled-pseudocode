/*
 * XREFs of ConvertDbToEngineVolume @ 0x1800A154C
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x180030658 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     ?ValidateScreenReaderDuckingGain@@YAMM@Z @ 0x1800A061C (-ValidateScreenReaderDuckingGain@@YAMM@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x1800A1A60 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x1800A41B4 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 * Callees:
 *     pow_0 @ 0x1800449FA (pow_0.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow_0(10.0, a1 / 20.0);
}
