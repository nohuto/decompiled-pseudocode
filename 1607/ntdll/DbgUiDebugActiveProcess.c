/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800D0390
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A7C50 (NtDebugActiveProcess.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800D0410 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x1800D0500 (DbgUiStopDebugging.c)
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
