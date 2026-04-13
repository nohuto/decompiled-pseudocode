/*
 * XREFs of ??1Completer@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAA@XZ @ 0x18001615C
 * Callers:
 *     ?Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ @ 0x18000D6B4 (-Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18000B780 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180027D64 (atexit.c)
 */

BOOL __fastcall wil::details::static_lazy<ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry>::Completer::~Completer(
        __int64 a1)
{
  LPINIT_ONCE v2; // rsi
  union _RTL_RUN_ONCE v3; // rax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    if ( (`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::`local static guard' & 1) == 0 )
    {
      `ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::`local static guard' |= 1u;
      atexit(`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
    }
    InitOnceBeginInitialize(
      &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper,
      0,
      &fPending,
      &Context);
    if ( fPending )
    {
      Context = qword_18003E578;
      qword_18003E578[0] = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
      qword_18003E590 = (__int64)&`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      wil::TraceLoggingProvider::Register(
        (wil::TraceLoggingProvider *)qword_18003E578,
        (const struct _TlgProvider_t *const)&`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner);
      InitOnceComplete(
        &`ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Instance'::`2'::wrapper,
        0,
        qword_18003E578);
    }
    v3.Ptr = v2[1].Ptr;
    v2[2].Ptr = *(PVOID *)((char *)Context + 8);
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v3.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
