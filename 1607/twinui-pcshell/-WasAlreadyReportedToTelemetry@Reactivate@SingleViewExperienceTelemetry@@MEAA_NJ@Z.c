/*
 * XREFs of ?WasAlreadyReportedToTelemetry@Reactivate@SingleViewExperienceTelemetry@@MEAA_NJ@Z @ 0x18000D930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall SingleViewExperienceTelemetry::Reactivate::WasAlreadyReportedToTelemetry(
        SingleViewExperienceTelemetry::Reactivate *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
