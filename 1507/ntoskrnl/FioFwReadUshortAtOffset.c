/*
 * XREFs of FioFwReadUshortAtOffset @ 0x140151BB8
 * Callers:
 *     RaspLoadBearings @ 0x1401519C4 (RaspLoadBearings.c)
 *     RaspMapGlyphIndexToLocation @ 0x140151B20 (RaspMapGlyphIndexToLocation.c)
 *     RaspInitializeGlyphData @ 0x140151BE8 (RaspInitializeGlyphData.c)
 *     RaspLoadGlyphData @ 0x14015292C (RaspLoadGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x14026E440 (RaspGetCompositeGlyphList.c)
 *     RaspLoadCompositeGlyphData @ 0x14026EACC (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140151FEC (FioFwReadBytesAtOffset.c)
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
