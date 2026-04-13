/*
 * XREFs of ??_GShellPlacementLogging@Logging@CreativeFramework@@UEAAPEAXI@Z @ 0x180024130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CreativeFramework::Logging::ShellPlacementLogging *__fastcall CreativeFramework::Logging::ShellPlacementLogging::`scalar deleting destructor'(
        CreativeFramework::Logging::ShellPlacementLogging *this,
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
