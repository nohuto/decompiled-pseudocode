/*
 * XREFs of RtlGetLastWin32Error @ 0x180089020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG RtlGetLastWin32Error(void)
{
  return NtCurrentTeb()->LastErrorValue;
}
