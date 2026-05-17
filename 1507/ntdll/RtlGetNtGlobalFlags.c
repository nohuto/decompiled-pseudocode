/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1800D4010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtCurrentPeb()->NtGlobalFlag;
}
