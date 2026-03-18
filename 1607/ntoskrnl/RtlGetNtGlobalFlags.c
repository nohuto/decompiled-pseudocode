/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140688584
 * Callers:
 *     RtlpAllocateHeap @ 0x14009409C (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
