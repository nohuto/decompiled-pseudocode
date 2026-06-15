/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800109E0
 * Callers:
 *     ?SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z @ 0x1800188E0 (-SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z.c)
 * Callees:
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180017B00 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF__guid_ @ 0x180072E00 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  struct _GUID *v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall *v8)(CAudioSession *); // rbx

  v3 = (struct _GUID *)((char *)this + 208);
  v6 = *((_QWORD *)this + 26) - *(_QWORD *)&a2->Data1;
  if ( !v6 )
    v6 = *((_QWORD *)this + 27) - *(_QWORD *)a2->Data4;
  if ( v6 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF__guid_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        25LL,
        &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        a2);
    }
    v7 = *(_QWORD *)this;
    *v3 = *a2;
    (*(void (__fastcall **)(CAudioSession *))(v7 + 8))(this);
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 472));
    v8 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v8 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v8(this);
  }
  return 0LL;
}
