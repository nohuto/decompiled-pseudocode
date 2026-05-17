/*
 * XREFs of RtlpBreakPointHeap @ 0x1800F019C
 * Callers:
 *     RtlpCoalesceFreeBlocks @ 0x18001DDEC (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpCheckHeapSignature @ 0x18002EB04 (RtlpCheckHeapSignature.c)
 *     RtlpCheckBusyBlockTail @ 0x18004B868 (RtlpCheckBusyBlockTail.c)
 *     RtlpGrowBlockInPlace @ 0x180056578 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlpValidateHeapEntry @ 0x18007587C (RtlpValidateHeapEntry.c)
 *     RtlDebugAllocateHeap @ 0x180092580 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlDebugCreateHeap @ 0x1800EED84 (RtlDebugCreateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800EF574 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *__fastcall RtlpBreakPointHeap(__int64 a1)
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    RtlpHeapInvalidBadAddress = a1;
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
