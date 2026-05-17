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
