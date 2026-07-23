/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800C8EF0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A68B0 (NtDebugActiveProcess.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800C8F70 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x1800C9070 (DbgUiStopDebugging.c)
 */

NTSTATUS __cdecl DbgUiDebugActiveProcess(HANDLE Process)
{
  int active; // ebx

  active = NtDebugActiveProcess(Process, NtCurrentTeb()->DbgSsReserved[1]);
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(Process);
    if ( active < 0 )
      DbgUiStopDebugging(Process);
  }
  return active;
}
