/*
 * XREFs of RtlpHpMetadataAlloc @ 0x180058944
 * Callers:
 *     RtlpHpLargeSparseBmpAlloc @ 0x180058510 (RtlpHpLargeSparseBmpAlloc.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 *     RtlpHpVirtLargeTreeInsert @ 0x1800EB5F8 (RtlpHpVirtLargeTreeInsert.c)
 *     RtlpHpVirtTableAllocRoutine @ 0x1800EBC94 (RtlpHpVirtTableAllocRoutine.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpSegAlloc @ 0x180036200 (RtlpHpSegAlloc.c)
 *     RtlpHpAllocateHeap @ 0x1800589AC (RtlpHpAllocateHeap.c)
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
      return RtlpHpSegAlloc(RtlpHpMetadataHeap, a1, a1, 0);
    else
      return (void *)RtlpHpAllocateHeap(RtlpHpMetadataHeap, a1, 0LL);
  }
  return (void *)v5;
}
