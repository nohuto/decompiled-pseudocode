/*
 * XREFs of DbgUiGetThreadDebugObject @ 0x1800D03F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE DbgUiGetThreadDebugObject(void)
{
  return NtCurrentTeb()->DbgSsReserved[1];
}
