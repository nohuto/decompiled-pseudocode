/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140648FC0
 * Callers:
 *     RtlpAllocateHeap @ 0x1400D3E80 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
