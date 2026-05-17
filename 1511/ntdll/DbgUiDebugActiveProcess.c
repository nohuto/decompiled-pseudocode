/*
 * XREFs of DbgUiDebugActiveProcess @ 0x1800C8EF0
 * Callers:
 *     <none>
 * Callees:
 *     NtDebugActiveProcess @ 0x1800A68B0 (NtDebugActiveProcess.c)
 *     DbgUiIssueRemoteBreakin @ 0x1800C8F70 (DbgUiIssueRemoteBreakin.c)
 *     DbgUiStopDebugging @ 0x1800C9070 (DbgUiStopDebugging.c)
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
