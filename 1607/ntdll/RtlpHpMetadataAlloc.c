/*
 * XREFs of RtlpHpMetadataAlloc @ 0x180050764
 * Callers:
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x180050C04 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeSparseBmpAlloc @ 0x180051080 (RtlpHpLargeSparseBmpAlloc.c)
 *     RtlpHpTagRunOnceInit @ 0x180051090 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x1800F7FA0 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackDbAllocRoutine @ 0x1800F8020 (RtlpHpStackDbAllocRoutine.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpSegAlloc @ 0x18003E7CC (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1800507D8 (RtlpHpAllocateHeap.c)
 */

void *__fastcall RtlpHpMetadataAlloc(size_t a1, int a2)
{
  int v4; // eax
  __int64 v5; // r8

  v4 = RtlRunOnceExecuteOnce(
         &RtlpHpMetadataHeapInitVar,
         (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpMetadataHeapInit,
         0LL,
         0LL);
  v5 = 0LL;
  if ( v4 >= 0 )
  {
    if ( a2 )
      return RtlpHpSegAlloc(RtlpHpMetadataHeap, a1, a1, 0x1000000u);
    else
      return (void *)RtlpHpAllocateHeap(RtlpHpMetadataHeap, a1, 0x1000000LL, 0LL);
  }
  return (void *)v5;
}
