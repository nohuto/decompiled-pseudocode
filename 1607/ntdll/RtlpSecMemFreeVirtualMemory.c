/*
 * XREFs of RtlpSecMemFreeVirtualMemory @ 0x180028DFC
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800211D0 (RtlpReAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpDecommitBlock @ 0x180028CB4 (RtlpDecommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x180029C34 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlpFreeHeap @ 0x180049370 (RtlpFreeHeap.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A810 (RtlpDeCommitFreeBlock.c)
 *     RtlDestroyHeap @ 0x180052060 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x180052264 (RtlpDestroyHeapSegment.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 *     RtlValidateProcessHeaps @ 0x1800E9910 (RtlValidateProcessHeaps.c)
 *     RtlDebugDestroyHeap @ 0x1800FA6D4 (RtlDebugDestroyHeap.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A67E0 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800ED190 (RtlFlushSecureMemoryCache.c)
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
