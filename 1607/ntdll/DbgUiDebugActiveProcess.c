/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800D0390
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A7C50 (NtDebugActiveProcess.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D0410 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x1800D0500 (DbgUiStopDebugging.c)
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
