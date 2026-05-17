/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x18003776C
 * Callers:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlpCreateLowFragHeap @ 0x180004D48 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180007A98 (RtlpDestroyHeapSegment.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpDecommitBlock @ 0x180037624 (RtlpDecommitBlock.c)
 *     RtlValidateProcessHeaps @ 0x1800D8750 (RtlValidateProcessHeaps.c)
 *     RtlDebugDestroyHeap @ 0x1800EC724 (RtlDebugDestroyHeap.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800DE8C0 (RtlFlushSecureMemoryCache.c)
 */

__int64 __fastcall RtlpSecMemFreeVirtualMemory(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi

  v4 = a4;
  v7 = ZwFreeVirtualMemory(-1LL, a2, a3, a4);
  if ( v7 == -1073741755 && (unsigned __int8)RtlFlushSecureMemoryCache(*a2, *a3) )
    return ZwFreeVirtualMemory(-1LL, a2, a3, v4);
  else
    return v7;
}
