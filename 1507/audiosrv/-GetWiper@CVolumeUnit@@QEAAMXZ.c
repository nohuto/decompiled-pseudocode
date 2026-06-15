/*
 * XREFs of ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180031BDC
 * Callers:
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180031B60 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003E6B8 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z @ 0x18006E4F8 (-FillLevels@CVolumeControlBase@@QEAAXIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x18006E6B0 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z @ 0x1800704F0 (-SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?TaperFromScalar@CVolumeUnit@@IEAANNN@Z @ 0x180031C58 (-TaperFromScalar@CVolumeUnit@@IEAANNN@Z.c)
 *     pow_0 @ 0x1800449FA (pow_0.c)
 */

float __fastcall CVolumeUnit::GetWiper(CVolumeUnit *this)
{
  double v2; // xmm0_8
  double v3; // xmm0_8

  v2 = pow_0(10.0, *((float *)this + 1) / 20.0);
  v3 = (CVolumeUnit::TaperFromScalar(this, v2, *((double *)this + 5)) - *((double *)this + 3))
     / (*((double *)this + 4) - *((double *)this + 3));
  if ( v3 >= 1.0 )
    v3 = DOUBLE_1_0;
  if ( v3 <= 0.0 )
    return 0.0;
  return v3;
}
