/*
 * XREFs of RtlpHpMetadataFree @ 0x1800586CC
 * Callers:
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 *     RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60 (RtlpHpVirtHeapTableDereferenceHeap.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 *     RtlpHpVirtTableFreeRoutine @ 0x1800EBCB0 (RtlpHpVirtTableFreeRoutine.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F0430 (RtlpHpLargeAllocationDestroy.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpMetadataFree(unsigned __int64 a1)
{
  return RtlpHpFreeHeap((__int64)RtlpHpMetadataHeap, a1, 0);
}
