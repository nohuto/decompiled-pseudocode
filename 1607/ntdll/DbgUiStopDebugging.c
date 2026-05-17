/*
 * XREFs of DbgUiStopDebugging @ 0x1800D0500
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800D0390 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
