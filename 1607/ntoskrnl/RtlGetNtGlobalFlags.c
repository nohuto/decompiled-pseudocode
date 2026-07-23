/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140688668
 * Callers:
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
