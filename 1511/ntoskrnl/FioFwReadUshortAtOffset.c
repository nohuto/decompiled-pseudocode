/*
 * XREFs of FioFwReadUshortAtOffset @ 0x14011D938
 * Callers:
 *     RaspLoadBearings @ 0x14011D744 (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x14011D8A0 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x14011D968 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14011E6AC (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14021F018 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x14021F6A4 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14011DD6C (FioFwReadBytesAtOffset.c)
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
