/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x1800D03F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *DbgUiGetThreadDebugObject()
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
