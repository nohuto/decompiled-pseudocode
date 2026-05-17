/*
 * XREFs of RtlpHpVirtTableFreeRoutine @ 0x1800EBCB0
 * Callers:
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
_BOOL8 __fastcall RtlpHpVirtTableFreeRoutine(unsigned __int64 a1)
{
  return RtlpHpMetadataFree(a1);
}
