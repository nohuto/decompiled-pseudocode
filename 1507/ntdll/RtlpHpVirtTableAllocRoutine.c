/*
 * XREFs of RtlpHpVirtTableAllocRoutine @ 0x1800EBC94
 * Callers:
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpVirtTableAllocRoutine(size_t a1)
{
  return RtlpHpMetadataAlloc(a1, 0);
}
