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

void *__fastcall RtlpHpMetadataAlloc(size_t Size, int a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // r8

  v4 = RtlRunOnceExecuteOnce(&RtlpHpMetadataHeapInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpMetadataHeapInit, 0LL, 0LL);
  v5 = 0LL;
  if ( v4 >= 0 )
  {
    if ( a2 )
      return RtlpHpSegAlloc(RtlpHpMetadataHeap, Size, Size, 0);
    else
      return (void *)RtlpHpAllocateHeap(RtlpHpMetadataHeap);
  }
  return (void *)v5;
}
