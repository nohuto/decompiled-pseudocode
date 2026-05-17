/*
 * XREFs of RtlpBreakPointHeap @ 0x1800FB678
 * Callers:
 *     RtlpCheckHeapSignature @ 0x180019D84 (RtlpCheckHeapSignature.c)
 *     RtlpReAllocateHeap @ 0x1800211D0 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18004B4AC (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x18004BF00 (RtlpCreateSplitBlock.c)
 *     RtlpGrowBlockInPlace @ 0x18004C470 (RtlpGrowBlockInPlace.c)
 *     RtlpCheckBusyBlockTail @ 0x18005D4CC (RtlpCheckBusyBlockTail.c)
 *     RtlpValidateHeapEntry @ 0x1800769B8 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 *     RtlDebugAllocateHeap @ 0x1800917D4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180091B60 (RtlDebugFreeHeap.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800FAA84 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *RtlpBreakPointHeap()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
