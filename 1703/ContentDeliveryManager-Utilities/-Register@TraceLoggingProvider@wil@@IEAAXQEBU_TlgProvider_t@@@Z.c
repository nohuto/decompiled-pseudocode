/*
 * XREFs of ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180024040
 * Callers:
 *     ?Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ @ 0x18002418C (-Provider@ShellPlacementLogging@Logging@CreativeFramework@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180026114 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 * Callees:
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
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
