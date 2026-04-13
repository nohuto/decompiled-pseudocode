/*
 * XREFs of ?Initialize@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@EEAAXXZ @ 0x18000D8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Initialize(
        ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry *this)
{
  wil::g_pfnResultLoggingCallback = (void (*)(struct wil::FailureInfo *, unsigned __int16 *, unsigned __int64))ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FailureLoggingCallback;
}
