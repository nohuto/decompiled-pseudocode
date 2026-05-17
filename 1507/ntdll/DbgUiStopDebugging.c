/*
 * XREFs of DbgUiStopDebugging @ 0x1800BC350
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800BC1D0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

__int64 DbgUiStopDebugging()
{
  return ZwRemoveProcessDebug();
}
