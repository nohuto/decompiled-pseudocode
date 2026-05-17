/*
 * XREFs of RtlpHpMetadataFree @ 0x18004F71C
 * Callers:
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x180050C04 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagRunOnceInit @ 0x180051090 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800522F4 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1800F8030 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1800F847C (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x180047A70 (RtlpHpFreeHeap.c)
 */

__int64 __fastcall RtlpHpMetadataFree(unsigned __int64 a1)
{
  return RtlpHpFreeHeap(RtlpHpMetadataHeap, a1, 0x1000000, 0LL, 0LL);
}
