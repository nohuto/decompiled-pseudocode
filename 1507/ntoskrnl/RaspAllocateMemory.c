/*
 * XREFs of RaspAllocateMemory @ 0x140152588
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x140150190 (RaspLoadEmptyGlyph.c)
 *     RaspScanConvert @ 0x140151030 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x140151848 (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x140151914 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x140151BE8 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x140152110 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x14015244C (RaspInterpolatePoint.c)
 *     RaspGetXExtent @ 0x1401661BC (RaspGetXExtent.c)
 *     RaspGetCompositeGlyphList @ 0x14026E440 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14026E760 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 */

__int64 __fastcall RaspAllocateMemory(unsigned __int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 Memory; // rdx
  __int64 v7; // rcx

  v4 = *a2;
  if ( v4 )
  {
    v7 = a2[2];
    if ( a1 > a2[1] - v7 )
    {
      return 0LL;
    }
    else
    {
      Memory = v7 + v4;
      a2[2] = v7 + a1;
    }
  }
  else
  {
    Memory = BgpFwAllocateMemory(a1);
    if ( Memory )
      a2[2] += a1;
  }
  return Memory;
}
