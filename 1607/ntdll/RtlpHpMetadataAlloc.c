/*
 * XREFs of RtlpHpMetadataAlloc @ 0x180050754
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x180050BF4 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeSparseBmpAlloc @ 0x180051070 (RtlpHpLargeSparseBmpAlloc.c)
 *     RtlpHpTagRunOnceInit @ 0x180051080 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x1800F7FA0 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x1800F8020 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpSegAlloc @ 0x18003E7BC (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1800507C8 (RtlpHpAllocateHeap.c)
 */

void *__fastcall RtlpHpMetadataAlloc(size_t Size, int a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // r8

  v4 = RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, RtlpHpMetadataHeapInit, 0LL, 0LL);
  v5 = 0LL;
  if ( v4 >= 0 )
  {
    if ( a2 )
      return RtlpHpSegAlloc(RtlpHpMetadataHeap, Size, Size, 0x1000000u);
    else
      return (void *)RtlpHpAllocateHeap(RtlpHpMetadataHeap, Size);
  }
  return (void *)v5;
}
