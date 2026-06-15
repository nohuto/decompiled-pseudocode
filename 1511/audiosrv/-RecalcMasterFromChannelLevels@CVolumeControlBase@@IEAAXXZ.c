/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180041F08
 * Callers:
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18003ABD0 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800416D0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?LoadVolumeState@CVolumeSoftware@@AEAAJXZ @ 0x18006DAA4 (-LoadVolumeState@CVolumeSoftware@@AEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18006E520 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x18006E630 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x18006E7B0 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18003B2C4 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     pow_0 @ 0x180048C4A (pow_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x18006F92C (WPP_SF_qdg.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  unsigned int v2; // esi
  double v3; // xmm0_8
  TraceLoggingHProvider v4; // rdi
  float v5; // xmm6_4
  float v6; // xmm1_4
  float Wiper; // xmm0_4
  double v8; // xmm0_8

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      21LL,
      &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      this,
      *((_DWORD *)this + 17));
  }
  v2 = 0;
  if ( !*((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  v3 = pow_0(10.0, *(float *)(*((_QWORD *)this + 4) + 4LL) / 20.0);
  *((_DWORD *)this + 16) = 0;
  v4 = WPP_GLOBAL_Control;
  v5 = v3;
  if ( *((_DWORD *)this + 17) )
  {
    do
    {
      if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)v4 + 7) & 0x10000) != 0
        && *((_BYTE *)v4 + 25) >= 4u )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 5) )
          ATL::AtlThrowImpl(-2147024809);
        Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * v2));
        WPP_SF_qdg(*((_QWORD *)v4 + 2), 22LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, this, v2, Wiper);
        v4 = WPP_GLOBAL_Control;
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
        v4 = WPP_GLOBAL_Control;
        v5 = v8;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 17) );
  }
  if ( v4 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v4 + 7) & 0x10000) != 0
    && *((_BYTE *)v4 + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)v4 + 2),
      23LL,
      &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
      this,
      *((_DWORD *)this + 16),
      v5);
  }
}
