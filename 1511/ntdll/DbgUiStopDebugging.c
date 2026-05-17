/*
 * XREFs of DbgUiStopDebugging @ 0x1800C9070
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800C8EF0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
