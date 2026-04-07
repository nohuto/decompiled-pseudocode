/*
 * XREFs of ?NotifyFailure@TraceLoggingProvider@wil@@EEAA_NAEBUFailureInfo@2@@Z @ 0x180077220
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

char __fastcall wil::TraceLoggingProvider::NotifyFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  int v2; // eax

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = *((_DWORD *)a2 + 2);
  if ( v2 != `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen )
    (*(void (__fastcall **)(wil::TraceLoggingProvider *, _QWORD, const struct wil::FailureInfo *))(*(_QWORD *)this + 16LL))(
      this,
      0LL,
      a2);
  return 1;
}
