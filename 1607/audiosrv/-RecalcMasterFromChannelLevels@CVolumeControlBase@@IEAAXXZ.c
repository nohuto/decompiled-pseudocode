/*
 * XREFs of ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180026BFC
 * Callers:
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x1800266A0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18002D5F4 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x1800568F0 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x180057CA0 (-SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180057DA0 (-SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 *     ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x180057F10 (-SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x180026EF8 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     pow @ 0x180036D3C (pow.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qdg @ 0x180058FD8 (WPP_SF_qdg.c)
 */

void __fastcall CVolumeControlBase::RecalcMasterFromChannelLevels(CVolumeControlBase *this)
{
  unsigned int v2; // esi
  double v3; // xmm0_8
  CAudioSession *v4; // rdi
  float v5; // xmm6_4
  float v6; // xmm1_4
  float Wiper; // xmm0_4
  double v8; // xmm0_8

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16LL,
      &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
      this,
      *((_DWORD *)this + 29));
  }
  v2 = 0;
  if ( !*((_QWORD *)this + 11) )
    ATL::AtlThrowImpl(-2147024809);
  v3 = pow(10.0, *(float *)(*((_QWORD *)this + 10) + 4LL) / 20.0);
  *((_DWORD *)this + 28) = 0;
  v4 = WPP_GLOBAL_Control;
  v5 = v3;
  if ( *((_DWORD *)this + 29) )
  {
    do
    {
      if ( v4 != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)v4 + 7) & 0x10000) != 0
        && *((_BYTE *)v4 + 25) >= 4u )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        Wiper = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + 56LL * v2));
        WPP_SF_qdg(*((_QWORD *)v4 + 2), 17LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids, this, v2, Wiper);
        v4 = WPP_GLOBAL_Control;
      }
      if ( (unsigned __int64)v2 >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      v6 = pow(10.0, *(float *)(56LL * v2 + *((_QWORD *)this + 10) + 4) / 20.0);
      if ( v6 > v5 )
      {
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 11) )
          ATL::AtlThrowImpl(-2147024809);
        v8 = pow(10.0, *(float *)(56LL * v2 + *((_QWORD *)this + 10) + 4) / 20.0);
        *((_DWORD *)this + 28) = v2;
        v4 = WPP_GLOBAL_Control;
        v5 = v8;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 29) );
  }
  if ( v4 != (CAudioSession *)&WPP_GLOBAL_Control && (*((_DWORD *)v4 + 7) & 0x10000) != 0 && *((_BYTE *)v4 + 25) >= 4u )
    WPP_SF_qdg(
      *((_QWORD *)v4 + 2),
      18LL,
      &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids,
      this,
      *((_DWORD *)this + 28),
      v5);
}
