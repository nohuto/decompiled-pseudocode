/*
 * XREFs of RaspAllocateMemory @ 0x14011E308
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x14011BF0C (RaspLoadEmptyGlyph.c)
 *     RaspScanConvert @ 0x14011CDB0 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x14011D5C8 (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x14011D694 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x14011D968 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x14011DE90 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x14011E1CC (RaspInterpolatePoint.c)
 *     RaspGetXExtent @ 0x140137618 (RaspGetXExtent.c)
 *     RaspGetCompositeGlyphList @ 0x14021F018 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14021F338 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
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
