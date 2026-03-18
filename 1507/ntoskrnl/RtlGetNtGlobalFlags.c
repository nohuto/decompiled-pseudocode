/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1406CC044
 * Callers:
 *     RtlpAllocateHeap @ 0x14010A2D0 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
