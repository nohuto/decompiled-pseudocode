/*
 * XREFs of ConvertDbToEngineVolume @ 0x1800A8F6C
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z @ 0x18003835C (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEA_NAEAMAEA_J@Z.c)
 *     ?ValidateScreenReaderDuckingGain@@YAMM@Z @ 0x18009D808 (-ValidateScreenReaderDuckingGain@@YAMM@Z.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z @ 0x18009EAC0 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAUScreenReaderStateChangedContext@@@Z.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x1800A1520 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 * Callees:
 *     pow_0 @ 0x180048C4A (pow_0.c)
 */

float __fastcall ConvertDbToEngineVolume(float a1)
{
  if ( a1 == -INFINITY )
    return 0.0;
  else
    return pow_0(10.0, a1 / 20.0);
}
