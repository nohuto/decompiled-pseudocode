/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1800E54C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtCurrentPeb()->NtGlobalFlag;
}
