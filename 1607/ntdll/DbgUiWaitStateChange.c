/*
 * XREFs of DbgUiWaitStateChange @ 0x1800D0520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiWaitStateChange()
{
  return ZwWaitForDebugEvent();
}
