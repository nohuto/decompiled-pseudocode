/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140128B08
 * Callers:
 *     RaspLoadBearings @ 0x140128914 (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x140128A70 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x140128B38 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x140129874 (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14023AAD4 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x14023B160 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140128F34 (FioFwReadBytesAtOffset.c)
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
