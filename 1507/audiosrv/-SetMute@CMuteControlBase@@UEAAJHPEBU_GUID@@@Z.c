/*
 * XREFs of ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x18006DEE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qd_guid_ @ 0x18006E31C (WPP_SF_qd_guid_.c)
 */

__int64 __fastcall CMuteControlBase::SetMute(CMuteControlBase *this, unsigned int a2, const struct _GUID *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax

  v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qd_guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      a2,
      (_DWORD)a3,
      (_DWORD)this,
      a2,
      (__int64)a3);
    v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( *((_DWORD *)this + 6) == a2 )
  {
    v7 = 1;
LABEL_10:
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_11;
  }
  v7 = (*(__int64 (__fastcall **)(CMuteControlBase *, _QWORD))(*(_QWORD *)this + 80LL))(this, a2);
  if ( v7 >= 0 )
  {
    *((_DWORD *)this + 6) = a2;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           0LL,
           a3);
    v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    v7 = v8;
    goto LABEL_10;
  }
  v6 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_11:
  if ( (struct _GUID *)v6 != &WPP_GLOBAL_Control && (*(_DWORD *)(v6 + 28) & 0x10000) != 0 && *(_BYTE *)(v6 + 25) >= 2u )
    WPP_SF_D(*(_QWORD *)(v6 + 16), 0xFu, (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids, v7);
  return (unsigned int)v7;
}
