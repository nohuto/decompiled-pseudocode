/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x18004FC48
 * Callers:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x180025610 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTaggableHeap @ 0x18004FCC0 (RtlpHpTaggableHeap.c)
 *     RtlpHpTagFree @ 0x180050324 (RtlpHpTagFree.c)
 *     RtlpHpTagContextGetTag @ 0x1800EE940 (RtlpHpTagContextGetTag.c)
 */

unsigned __int64 __fastcall RtlpHpTagAllocateHeap(unsigned __int64 BaseAddress, unsigned __int64 a2, int a3)
{
  unsigned __int16 Tag; // bx
  __int64 v7; // rcx
  unsigned __int64 HeapInternal; // rsi

  if ( (unsigned int)RtlpHpTaggableHeap() )
    Tag = RtlpHpTagContextGetTag();
  else
    Tag = 0;
  HeapInternal = RtlpAllocateHeapInternal(BaseAddress, a2, a3, Tag);
  if ( !HeapInternal && Tag )
    RtlpHpTagFree(v7, Tag, a2);
  return HeapInternal;
}
