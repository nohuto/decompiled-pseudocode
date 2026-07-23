/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140129078
 * Callers:
 *     RaspLoadBearings @ 0x140128E84 (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x140128FE0 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x1401290A8 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x140129DE4 (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14023A9B8 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x14023B044 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x1401294A4 (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUshortAtOffset(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 2LL, a3);
  if ( (int)result >= 0 )
  {
    *a3 = __ROR2__(*a3, 8);
    return 0LL;
  }
  return result;
}
