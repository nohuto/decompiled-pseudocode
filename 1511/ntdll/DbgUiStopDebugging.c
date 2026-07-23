/*
 * XREFs of DbgUiStopDebugging @ 0x1800C9070
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800C8EF0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiStopDebugging(HANDLE Process)
{
  return ZwRemoveProcessDebug(Process, NtCurrentTeb()->DbgSsReserved[1]);
}
