/*
 * XREFs of ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x180015D80
 * Callers:
 *     ?SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z @ 0x18000EF10 (-SetGroupingParam@CServerAudioSessionControl@@UEAAJPEBU_GUID@@0@Z.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18000E430 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70 (-Release@CAudioSession@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_ @ 0x180059BDC (WPP_SF__guid_.c)
 */

__int64 __fastcall CAudioSession::SetGroupingParam(CAudioSession *this, const struct _GUID *a2, const struct _GUID *a3)
{
  void (__fastcall **v3)(_QWORD, volatile signed __int32 **); // rsi
  __int64 v7; // rax
  void (__fastcall *v8)(CAudioSession *); // rax
  __int64 (__fastcall *v9)(CAudioSession *); // rax
  void (__fastcall **v11[5])(_QWORD, volatile signed __int32 **); // [rsp+20h] [rbp-28h] BYREF

  v3 = (void (__fastcall **)(_QWORD, volatile signed __int32 **))((char *)this + 352);
  v7 = *((_QWORD *)this + 44) - *(_QWORD *)&a2->Data1;
  if ( !v7 )
    v7 = *((_QWORD *)this + 45) - *(_QWORD *)a2->Data4;
  if ( v7 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids, a2);
    }
    v8 = *(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL);
    *(struct _GUID *)v3 = *a2;
    v8(this);
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
