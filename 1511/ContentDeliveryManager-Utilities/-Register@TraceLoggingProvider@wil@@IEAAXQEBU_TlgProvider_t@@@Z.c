/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18000B780
 * Callers:
 *     ??1Completer@?$static_lazy@VShellPlacementTelemetry@Logging@CreativeFramework@@@details@wil@@QEAA@XZ @ 0x180016064 (--1Completer@-$static_lazy@VShellPlacementTelemetry@Logging@CreativeFramework@@@details@wil@@QEA.c)
 *     ??1Completer@?$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@details@wil@@QEAA@XZ @ 0x18001615C (--1Completer@-$static_lazy@VContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@@.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

void __fastcall wil::TraceLoggingProvider::Register(
        wil::TraceLoggingProvider *this,
        const struct _TlgProvider_t *const a2)
{
  GUID v4; // xmm0
  __int64 v5; // rax
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 1;
  v4 = *(GUID *)(*((_QWORD *)a2 + 1) - 16LL);
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  ProviderId = v4;
  if ( !EventRegister(&ProviderId, TlgEnableCallback, a2, (PREGHANDLE)a2 + 4) )
    EventSetInformation(*((_QWORD *)a2 + 4), 2LL, *((_QWORD *)a2 + 1), **((unsigned __int16 **)a2 + 1));
  v5 = *(_QWORD *)this;
  *((_DWORD *)this + 5) = 1;
  (*(void (__fastcall **)(wil::TraceLoggingProvider *))(v5 + 8))(this);
}
