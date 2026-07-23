/*
 * XREFs of RtlpHpTaggableHeap @ 0x180087254
 * Callers:
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 *     RtlpHpTagAllocateHeap @ 0x1800871E0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(_DWORD *a1)
{
  return a1[4] == -571548178 && a1 != RtlpHpMetadataHeap;
}
