/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003E6B8
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x18003EA40 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18006F158 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18006FCE0 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18006FE50 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x18006FF60 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x1800700E0 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180031BDC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     pow_0 @ 0x1800449FA (pow_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x180071214 (WPP_SF_qdg.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  unsigned int v2; // esi
  double v3; // xmm0_8
  __int64 v4; // rdi
  float v5; // xmm6_4
  float v6; // xmm1_4
  float Wiper; // xmm0_4
  double v8; // xmm0_8

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      21LL,
      &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      this,
      *((_DWORD *)this + 17));
  }
  v2 = 0;
  if ( !*((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  v3 = pow_0(10.0, *(float *)(*((_QWORD *)this + 4) + 4LL) / 20.0);
  *((_DWORD *)this + 16) = 0;
  v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  v5 = v3;
  if ( *((_DWORD *)this + 17) )
  {
    do
    {
      if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(v4 + 28) & 0x10000) != 0
        && *(_BYTE *)(v4 + 25) >= 4u )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 5) )
          ATL::AtlThrowImpl(-2147024809);
        Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * v2));
        WPP_SF_qdg(*(_QWORD *)(v4 + 16), 22LL, &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, this, v2, Wiper);
        v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      }
      if ( (unsigned __int64)v2 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      v6 = pow_0(10.0, *(float *)(56LL * v2 + *((_QWORD *)this + 4) + 4) / 20.0);
      if ( v6 > v5 )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 5) )
          ATL::AtlThrowImpl(-2147024809);
        v8 = pow_0(10.0, *(float *)(56LL * v2 + *((_QWORD *)this + 4) + 4) / 20.0);
        *((_DWORD *)this + 16) = v2;
        v4 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
        v5 = v8;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 17) );
  }
  if ( (struct _GUID *)v4 != &WPP_GLOBAL_Control && (*(_DWORD *)(v4 + 28) & 0x10000) != 0 && *(_BYTE *)(v4 + 25) >= 4u )
    WPP_SF_qdg(
      *(_QWORD *)(v4 + 16),
      23LL,
      &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      this,
      *((_DWORD *)this + 16),
      v5);
}
