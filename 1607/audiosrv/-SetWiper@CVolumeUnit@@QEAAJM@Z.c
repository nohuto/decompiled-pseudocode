/*
 * XREFs of ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180027038
 * Callers:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180027244 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x180057CA0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180057F10 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x180058350 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?ScalarFromTaper@CVolumeUnit@@IEAANNN@Z @ 0x180026F74 (-ScalarFromTaper@CVolumeUnit@@IEAANNN@Z.c)
 *     _o_log10_0 @ 0x180036D18 (_o_log10_0.c)
 *     pow @ 0x180036D3C (pow.c)
 */

__int64 __fastcall CVolumeUnit::SetWiper(CVolumeUnit *this, float a2)
{
  double v3; // xmm6_8
  double v4; // xmm0_8
  float v5; // xmm0_4
  __int64 result; // rax

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v3 = CVolumeUnit::ScalarFromTaper(
         this,
         (*((double *)this + 4) - *((double *)this + 3)) * a2 + *((double *)this + 3),
         *((double *)this + 5));
  if ( pow(10.0, -9.6) > v3 )
    v4 = DOUBLE_N192_0;
  else
    v4 = o_log10_0(v3) * 20.0;
  v5 = v4;
  result = 0LL;
  *((float *)this + 1) = fminf(v5, *((float *)this + 5));
  return result;
}
