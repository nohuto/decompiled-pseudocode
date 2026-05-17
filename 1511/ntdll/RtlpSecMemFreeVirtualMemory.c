/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x180052EB0
 * Callers:
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpDecommitBlock @ 0x180052D68 (RtlpDecommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x180053214 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800590E0 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800592C8 (RtlpDestroyHeapSegment.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlValidateProcessHeaps @ 0x1800E07B0 (RtlValidateProcessHeaps.c)
 *     RtlDebugDestroyHeap @ 0x1800EF1BC (RtlDebugDestroyHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E4010 (RtlFlushSecureMemoryCache.c)
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
