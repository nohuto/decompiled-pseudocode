/*
 * XREFs of RtlGetLastNtStatus @ 0x180088EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
