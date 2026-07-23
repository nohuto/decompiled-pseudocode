/*
 * XREFs of RtlpHpMetadataFree @ 0x18004F70C
 * Callers:
 *     RtlpHpLargeFree @ 0x18004F620 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x180050BF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpTagRunOnceInit @ 0x180051080 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800522E4 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x1800F8030 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1800F847C (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 */

__int64 __fastcall RtlpHpMetadataFree(unsigned __int64 a1)
{
  return RtlpHpFreeHeap((__int64)RtlpHpMetadataHeap, a1, 0x1000000, 0LL, 0LL);
}
