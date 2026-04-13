/*
 * XREFs of ??_EShellPlacementTelemetry@Logging@CreativeFramework@@UEAAPEAXI@Z @ 0x18000B8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CreativeFramework::Logging::ShellPlacementTelemetry *__fastcall CreativeFramework::Logging::ShellPlacementTelemetry::`vector deleting destructor'(
        CreativeFramework::Logging::ShellPlacementTelemetry *this,
        char a2)
{
  bool v2; // zf
  __int64 v5; // rbx

  v2 = *((_BYTE *)this + 16) == 0;
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementLogging::`vftable';
  if ( !v2 )
  {
    v5 = *((_QWORD *)this + 1);
    EventUnregister(*(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_DWORD *)v5 = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
