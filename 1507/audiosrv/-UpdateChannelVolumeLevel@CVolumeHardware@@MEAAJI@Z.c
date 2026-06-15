/*
 * XREFs of ?UpdateChannelVolumeLevel@CVolumeHardware@@MEAAJI@Z @ 0x180070980
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006E74C (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_dg @ 0x18007118C (WPP_SF_dg.c)
 */

__int64 __fastcall CVolumeHardware::UpdateChannelVolumeLevel(CVolumeHardware *this, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  float DB; // xmm0_4
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r8

  v3 = a2;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    if ( (unsigned __int64)a2 >= *((_QWORD *)this + 5) )
      ATL::AtlThrowImpl(-2147024809);
    DB = CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56LL * a2));
    WPP_SF_dg(*(_QWORD *)(v5 + 16), 61LL, &WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids, (unsigned int)v3, DB);
  }
  v6 = *((_QWORD *)this + 12);
  if ( v3 >= *((_QWORD *)this + 5) )
    ATL::AtlThrowImpl(-2147024809);
  CVolumeUnit::GetDB((CVolumeUnit *)(*((_QWORD *)this + 4) + 56 * v3));
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(v7 + 48))(
           v6,
           (unsigned int)v3,
           v8,
           (char *)this + 104);
}
