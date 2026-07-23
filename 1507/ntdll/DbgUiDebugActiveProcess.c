/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800BC1D0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800944F0 (NtDebugActiveProcess.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800BC250 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x1800BC350 (DbgUiStopDebugging.c)
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
