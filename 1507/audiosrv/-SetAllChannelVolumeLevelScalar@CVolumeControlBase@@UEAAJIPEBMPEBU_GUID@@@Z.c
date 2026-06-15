/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18006FE50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003E6B8 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180067CF0 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CVolumeControlBase::SetAllChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        const float *a3,
        const struct _GUID *a4)
{
  int v8; // esi
  __int64 v9; // rbx

  v8 = -2147024809;
  if ( a2 < *((_DWORD *)this + 17) )
  {
    v9 = 0LL;
    if ( a2 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(unsigned int)v9 >= *((_QWORD *)this + 5) )
          ATL::AtlThrowImpl(-2147024809);
        v8 = CVolumeUnit::SetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * (unsigned int)v9), a3[v9]);
        if ( v8 < 0 )
          break;
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= a2 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      CVolumeControlBase::RecalcMasterFromChannelLevels(this);
      v8 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 216LL))(this);
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 10) + 48LL))(
          *((_QWORD *)this + 10),
          0LL,
          a4);
        return (unsigned int)v8;
      }
    }
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Au,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      v8);
  }
  return (unsigned int)v8;
}
