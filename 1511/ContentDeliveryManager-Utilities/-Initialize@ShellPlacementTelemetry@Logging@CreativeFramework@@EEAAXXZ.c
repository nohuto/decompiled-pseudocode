/*
 * XREFs of ?Initialize@ShellPlacementTelemetry@Logging@CreativeFramework@@EEAAXXZ @ 0x18000CE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::Initialize(
        CreativeFramework::Logging::ShellPlacementTelemetry *this)
{
  wil::g_pfnResultLoggingCallback = (void (*)(struct wil::FailureInfo *, unsigned __int16 *, unsigned __int64))CreativeFramework::Logging::ShellPlacementTelemetry::FailureLoggingCallback;
}
