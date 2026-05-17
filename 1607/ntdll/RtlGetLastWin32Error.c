/*
 * XREFs of RtlGetLastWin32Error @ 0x180089030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastWin32Error()
{
  return NtCurrentTeb()->LastErrorValue;
}
