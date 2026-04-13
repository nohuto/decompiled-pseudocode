/*
 * XREFs of ?NotifyFailure@TraceLoggingProvider@wil@@EEAA_NAEBUFailureInfo@2@@Z @ 0x18000B840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

char __fastcall wil::TraceLoggingProvider::NotifyFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == *((_DWORD *)a2 + 2);
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = *((_DWORD *)a2 + 2);
  if ( !v2 )
    (*(void (__fastcall **)(wil::TraceLoggingProvider *, _QWORD, const struct wil::FailureInfo *))(*(_QWORD *)this + 16LL))(
      this,
      0LL,
      a2);
  return 1;
}
