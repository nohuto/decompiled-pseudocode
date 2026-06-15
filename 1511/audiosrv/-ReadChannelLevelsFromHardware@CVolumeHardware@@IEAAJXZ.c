/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18003ABD0
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18003ACC0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x180041F08 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x1800421C4 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dg @ 0x18006F8A4 (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // ebx
  unsigned int v3; // ebp
  float v5; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 12) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        62LL,
        &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids,
        this,
        *((_DWORD *)this + 17));
    }
    v3 = 0;
    if ( !*((_DWORD *)this + 17) )
    {
LABEL_14:
      CVolumeControlBase::RecalcMasterFromChannelLevels(this);
      return (unsigned int)v1;
    }
    while ( 1 )
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 12) + 40LL))(
             *((_QWORD *)this + 12),
             v3,
             &v5);
      if ( v1 < 0 )
        break;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dg(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, &WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v3, v5);
      }
      if ( (unsigned __int64)v3 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * v3++), v5);
      if ( v3 >= *((_DWORD *)this + 17) )
        goto LABEL_14;
    }
  }
  else
  {
    v1 = -2147418113;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x40u, (__int64)&WPP_d155ec871d18c6e5af7e88d93bf1f92f_Traceguids, v1);
  }
  return (unsigned int)v1;
}
