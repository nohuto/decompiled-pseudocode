/*
 * XREFs of ?WasAlreadyReportedToTelemetry@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAA_NJ@Z @ 0x18000BDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::WasAlreadyReportedToTelemetry(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
