/*
 * XREFs of RtlpHpMetadataAlloc @ 0x18005A854
 * Callers:
 *     RtlpHpTagContextAllocateTag @ 0x180059F30 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeAlloc @ 0x18005A614 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeSparseBmpAlloc @ 0x18005ABB0 (RtlpHpLargeSparseBmpAlloc.c)
 *     RtlpHpTagRunOnceInit @ 0x18005AF60 (RtlpHpTagRunOnceInit.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpSegAlloc @ 0x18005895C (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x18005A8C8 (RtlpHpAllocateHeap.c)
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
      return (void *)RtlpHpAllocateHeap(RtlpHpMetadataHeap);
  }
  return (void *)v5;
}
