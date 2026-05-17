/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800BC1D0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800944F0 (NtDebugActiveProcess.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800BC250 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x1800BC350 (DbgUiStopDebugging.c)
 */

__int64 __fastcall DbgUiDebugActiveProcess(__int64 a1)
{
  int active; // ebx

  active = NtDebugActiveProcess();
  if ( active >= 0 )
  {
    active = DbgUiIssueRemoteBreakin(a1);
    if ( active < 0 )
      DbgUiStopDebugging(a1);
  }
  return (unsigned int)active;
}
