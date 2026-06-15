/*
 * XREFs of ?SetMute@CMuteControlBase@@UEAAJHPEBU_GUID@@@Z @ 0x1800466F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qd_guid_ @ 0x18006CD1C (WPP_SF_qd_guid_.c)
 */

__int64 __fastcall CMuteControlBase::SetMute(CMuteControlBase *this, unsigned int a2, const struct _GUID *a3)
{
  TraceLoggingHProvider v6; // rcx
  int v7; // ebx
  int v8; // eax

  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, (_DWORD)a3, (_DWORD)this, a2, (__int64)a3);
    v6 = WPP_GLOBAL_Control;
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
    v6 = WPP_GLOBAL_Control;
    v7 = v8;
    goto LABEL_10;
  }
  v6 = WPP_GLOBAL_Control;
LABEL_11:
  if ( v6 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v6 + 7) & 0x10000) != 0
    && *((_BYTE *)v6 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v6 + 2), 0xFu, (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids, v7);
  }
  return (unsigned int)v7;
}
