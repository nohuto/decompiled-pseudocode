/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x1800700E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003E6B8 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180067CCC (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x180067CF0 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006E74C (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  int v4; // esi
  unsigned __int64 v7; // r14
  float DB; // xmm0_4

  v4 = -2147024809;
  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 17) )
  {
LABEL_15:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x29u,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v4);
    }
    return (unsigned int)v4;
  }
  if ( a3 >= 0.0 && a3 <= 1.0 )
  {
    if ( (unsigned __int64)a2 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * a2));
    if ( v7 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    v4 = CVolumeUnit::SetWiper((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * (unsigned int)v7), a3);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 208LL))(this, (unsigned int)v7);
      if ( v4 < 0 )
      {
        if ( v7 >= *((_QWORD *)this + 5) )
          ATL::AtlThrowImpl(-2147024809);
        CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * (unsigned int)v7), DB);
      }
      else
      {
        CVolumeControlBase::RecalcMasterFromChannelLevels(this);
        (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 10) + 48LL))(
          *((_QWORD *)this + 10),
          0LL,
          a4);
      }
      if ( v4 >= 0 )
        return (unsigned int)v4;
    }
    goto LABEL_15;
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x28u,
      (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
      -2147024809);
  }
  return 2147942487LL;
}
