/*
 * XREFs of RtlpBreakPointHeap @ 0x1800EDA10
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180006558 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800069E8 (RtlpCreateSplitBlock.c)
 *     RtlLockHeap @ 0x180027440 (RtlLockHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpCheckHeapSignature @ 0x18003479C (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x180038924 (RtlpValidateHeapEntry.c)
 *     RtlpCoalesceFreeBlocks @ 0x18007902C (RtlpCoalesceFreeBlocks.c)
 *     RtlpCheckBusyBlockTail @ 0x1800DCFB8 (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x1800EBDCC (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x1800EC2EC (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x1800EC7E4 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800ECDE8 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
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
