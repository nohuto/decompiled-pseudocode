/*
 * XREFs of ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x1800420A4
 * Callers:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x180042358 (--0CVolumeUnit@@QEAA@XZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18006E520 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x18006E7B0 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x18006EBC0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?ScalarFromTaper@CVolumeUnit@@IEAANNN@Z @ 0x180042124 (-ScalarFromTaper@CVolumeUnit@@IEAANNN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x180042178 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 */

__int64 __fastcall CVolumeUnit::SetWiper(CVolumeUnit *this, float a2)
{
  double v3; // xmm0_8
  CVolumeUnit *v4; // rcx
  float v5; // xmm1_4
  float v6; // xmm0_4

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v3 = CVolumeUnit::ScalarFromTaper(
         this,
         (*((double *)this + 4) - *((double *)this + 3)) * a2 + *((double *)this + 3),
         *((double *)this + 5));
  v5 = CVolumeUnit::ConvertScalarToDb(v4, v3);
  v6 = *((float *)this + 5);
  *((float *)this + 1) = v5;
  if ( v6 <= v5 )
    v5 = v6;
  *((float *)this + 1) = v5;
  return 0LL;
}
