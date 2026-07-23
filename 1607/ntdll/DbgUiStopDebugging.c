/*
 * XREFs of DbgUiStopDebugging @ 0x1800D0500
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800D0390 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiStopDebugging(HANDLE Process)
{
  return ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
}
