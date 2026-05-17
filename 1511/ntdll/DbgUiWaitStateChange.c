/*
 * XREFs of DbgUiWaitStateChange @ 0x1800C9090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 DbgUiWaitStateChange()
{
  return ZwWaitForDebugEvent();
}
