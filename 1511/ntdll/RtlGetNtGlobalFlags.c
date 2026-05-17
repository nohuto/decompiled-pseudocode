/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1800DC1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtCurrentPeb()->NtGlobalFlag;
}
