/*
 * XREFs of RtlpHpTaggableHeap @ 0x180087264
 * Callers:
 *     RtlpHpSegHeapDestroy @ 0x180052528 (RtlpHpSegHeapDestroy.c)
 *     RtlpHpTagAllocateHeap @ 0x1800871F0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(__int64 a1)
{
  return *(_DWORD *)(a1 + 16) == -571548178 && a1 != RtlpHpMetadataHeap;
}
