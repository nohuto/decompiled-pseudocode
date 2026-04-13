/*
 * XREFs of ?FailureLoggingCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@CAXPEAUFailureInfo@wil@@PEAG_K@Z @ 0x18000D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ @ 0x18000D6B4 (-Instance@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@KAPEAV123@XZ.c)
 *     ?LogFailure_@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEAUFailureInfo@wil@@@Z @ 0x18000D73C (-LogFailure_@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEAUFailure.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FailureLoggingCallback(
        struct wil::FailureInfo *a1,
        unsigned __int16 *a2)
{
  _DWORD *v3; // rdx
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry *v4; // rcx

  v3 = (_DWORD *)*((_QWORD *)ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance() + 1);
  if ( v3 )
  {
    if ( *v3 )
    {
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance();
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::LogFailure_(v4, a1);
    }
  }
}
