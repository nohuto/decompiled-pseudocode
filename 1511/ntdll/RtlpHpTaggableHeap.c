/*
 * XREFs of RtlpHpTaggableHeap @ 0x18004FCC0
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x18004FC48 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpSegHeapDestroy @ 0x180050600 (RtlpHpSegHeapDestroy.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(_DWORD *a1)
{
  return a1[4] == -571548178 && a1 != RtlpHpMetadataHeap;
}
