/*
 * XREFs of ??1Completer@?$static_lazy@VShellPlacementTelemetry@Logging@CreativeFramework@@@details@wil@@QEAA@XZ @ 0x180016064
 * Callers:
 *     ?Instance@ShellPlacementTelemetry@Logging@CreativeFramework@@KAPEAV123@XZ @ 0x18000B914 (-Instance@ShellPlacementTelemetry@Logging@CreativeFramework@@KAPEAV123@XZ.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18000B780 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180027D64 (atexit.c)
 */

BOOL __fastcall wil::details::static_lazy<CreativeFramework::Logging::ShellPlacementTelemetry>::Completer::~Completer(
        __int64 a1)
{
  LPINIT_ONCE v2; // rsi
  union _RTL_RUN_ONCE v3; // rax
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( !*(_DWORD *)(a1 + 8) )
  {
    v2 = *(LPINIT_ONCE *)a1;
    if ( (`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::`local static guard' & 1) == 0 )
    {
      `CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::`local static guard' |= 1u;
      atexit(`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
    }
    InitOnceBeginInitialize(
      &`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::wrapper,
      0,
      &fPending,
      &Context);
    if ( fPending )
    {
      Context = &qword_18003DD68;
      qword_18003DD68 = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
      qword_18003DD80 = (__int64)&`CreativeFramework::Logging::ShellPlacementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      wil::TraceLoggingProvider::Register(
        (wil::TraceLoggingProvider *)&qword_18003DD68,
        (const struct _TlgProvider_t *const)&`CreativeFramework::Logging::ShellPlacementLogging::StaticHandle::StaticHandle'::`2'::__hInner);
      InitOnceComplete(
        &`CreativeFramework::Logging::ShellPlacementLogging::Instance'::`2'::wrapper,
        0,
        &qword_18003DD68);
    }
    v3.Ptr = v2[1].Ptr;
    v2[2].Ptr = *(PVOID *)((char *)Context + 8);
    LOBYTE(v2[3].Ptr) = 0;
    HIDWORD(v2[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v3.Ptr + 1))(v2 + 1);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, *(_DWORD *)(a1 + 8), (LPVOID)(*(_QWORD *)a1 + 8LL));
}
