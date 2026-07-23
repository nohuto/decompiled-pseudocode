/*
 * XREFs of RaspAllocateMemory @ 0x140129A3C
 * Callers:
 *     RaspLoadEmptyGlyph @ 0x140127708 (RaspLoadEmptyGlyph.c)
 *     RaspScanConvert @ 0x140128500 (RaspScanConvert.c)
 *     RaspRectangleCreate @ 0x140128D08 (RaspRectangleCreate.c)
 *     RaspCreatePointList @ 0x140128DD4 (RaspCreatePointList.c)
 *     RaspInitializeGlyphData @ 0x1401290A8 (RaspInitializeGlyphData.c)
 *     RaspCreateSegmentList @ 0x1401295C8 (RaspCreateSegmentList.c)
 *     RaspInterpolatePoint @ 0x140129900 (RaspInterpolatePoint.c)
 *     RaspGetXExtent @ 0x1401410C8 (RaspGetXExtent.c)
 *     RaspGetCompositeGlyphList @ 0x14023A9B8 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14023ACD8 (RaspInitializeCompositeGlyphData.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
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
