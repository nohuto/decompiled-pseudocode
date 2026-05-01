/*
 * XREFs of ?WasAlreadyReportedToTelemetry@TileRebuildChanges@TileDataLayerItemWrappersTelemetry@@MEAA_NJ@Z @ 0x180021BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall TileDataLayerItemWrappersTelemetry::TileRebuildChanges::WasAlreadyReportedToTelemetry(
        TileDataLayerItemWrappersTelemetry::TileRebuildChanges *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
