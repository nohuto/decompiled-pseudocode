/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800287E0
 * Callers:
 *     ?SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z @ 0x180015EE0 (-SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180014FF0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800257E0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF__guid_ @ 0x180070DE4 (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  void (__fastcall **v3)(_QWORD, volatile signed __int32 **); // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CAudioSession *); // rbx
  void (__fastcall **v11[5])(_QWORD, volatile signed __int32 **); // [rsp+20h] [rbp-28h] BYREF

  v3 = (void (__fastcall **)(_QWORD, volatile signed __int32 **))((char *)this + 352);
  v7 = *((_QWORD *)this + 44) - *(_QWORD *)&a2->Data1;
  if ( !v7 )
    v7 = *((_QWORD *)this + 45) - *(_QWORD *)a2->Data4;
  if ( v7 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, a2);
    }
    v8 = *(_QWORD *)this;
    *(struct _GUID *)v3 = *a2;
    (*(void (__fastcall **)(CAudioSession *))(v8 + 8))(this);
    v11[1] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))this;
    v11[0] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))&CAudioSessionGroupingParamChanged::`vftable';
    v11[2] = v3;
    v11[3] = (void (__fastcall **)(_QWORD, volatile signed __int32 **))a3;
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 624), v11);
    v9 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL);
    if ( v9 == CAudioSession::Release )
      CAudioSession::Release(this);
    else
      v9(this);
  }
  return 0LL;
}
