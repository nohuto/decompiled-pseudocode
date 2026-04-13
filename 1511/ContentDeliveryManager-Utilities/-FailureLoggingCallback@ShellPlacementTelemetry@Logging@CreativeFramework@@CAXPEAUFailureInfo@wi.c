/*
 * XREFs of ?FailureLoggingCallback@ShellPlacementTelemetry@Logging@CreativeFramework@@CAXPEAUFailureInfo@wil@@PEAG_K@Z @ 0x18000CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ShellPlacementTelemetry@Logging@CreativeFramework@@KAPEAV123@XZ @ 0x18000B914 (-Instance@ShellPlacementTelemetry@Logging@CreativeFramework@@KAPEAV123@XZ.c)
 *     ?LogFailure_@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEAUFailureInfo@wil@@@Z @ 0x18000CC98 (-LogFailure_@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEAUFailureInfo@wil@@@Z.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::FailureLoggingCallback(
        struct wil::FailureInfo *a1,
        unsigned __int16 *a2)
{
  _DWORD *v3; // rdx
  CreativeFramework::Logging::ShellPlacementTelemetry *v4; // rcx

  v3 = (_DWORD *)*((_QWORD *)CreativeFramework::Logging::ShellPlacementTelemetry::Instance() + 1);
  if ( v3 )
  {
    if ( *v3 )
    {
      CreativeFramework::Logging::ShellPlacementTelemetry::Instance();
      CreativeFramework::Logging::ShellPlacementTelemetry::LogFailure_(v4, a1);
    }
  }
}
