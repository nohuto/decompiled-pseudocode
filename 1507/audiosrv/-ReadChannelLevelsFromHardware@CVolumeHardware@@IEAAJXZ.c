/*
 * XREFs of ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18006FCE0
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18006F670 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003E6B8 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180067CCC (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_dg @ 0x18007118C (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::ReadChannelLevelsFromHardware(CVolumeHardware *this)
{
  int v1; // ebx
  unsigned int v3; // ebp
  int v5; // [rsp+20h] [rbp-28h]
  float v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 12) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      v5 = *((_DWORD *)this + 17);
      WPP_SF_qD(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x3Eu,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        this,
        v5);
    }
    v3 = 0;
    if ( !*((_DWORD *)this + 17) )
    {
LABEL_15:
      CVolumeControlBase::RecalcMasterFromChannelLevels(this);
      return (unsigned int)v1;
    }
    while ( 1 )
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**((_QWORD **)this + 12) + 40LL))(
             *((_QWORD *)this + 12),
             v3,
             &v6);
      if ( v1 < 0 )
        break;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_dg(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          63LL,
          &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
          v3,
          v6);
      }
      if ( (unsigned __int64)v3 >= *((_QWORD *)this + 5) )
        ATL::AtlThrowImpl(-2147024809);
      CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * v3++), v6);
      if ( v3 >= *((_DWORD *)this + 17) )
        goto LABEL_15;
    }
  }
  else
  {
    v1 = -2147418113;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x40u,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      v1);
  }
  return (unsigned int)v1;
}
