/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@@Z @ 0x18006FF60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18003E6B8 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x180067CCC (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006E74C (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 */

__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevel(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  int v4; // ebp
  unsigned __int64 v7; // r14
  float DB; // xmm0_4
  __int64 v9; // rax

  v4 = -2147024809;
  v7 = a2;
  if ( a2 >= *((_DWORD *)this + 17) )
    goto LABEL_18;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * a2));
  if ( v7 >= *((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  v9 = *((_QWORD *)this + 4) + 56LL * (unsigned int)v7;
  if ( *(float *)(v9 + 8) > a3 || a3 > *(float *)(v9 + 12) )
    goto LABEL_18;
  if ( v7 >= *((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  CVolumeUnit::SetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * (unsigned int)v7), a3);
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
  if ( v4 < 0 )
  {
LABEL_18:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x22u,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v4);
    }
  }
  return (unsigned int)v4;
}
