/*
 * XREFs of FioFwReadUlongAtOffset @ 0x14013C974
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x14011D8A0 (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x1407880A4 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140788198 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14011DD6C (FioFwReadBytesAtOffset.c)
 */

__int64 __fastcall FioFwReadUlongAtOffset(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  result = FioFwReadBytesAtOffset(a1, a2, 4u, a3);
  if ( (int)result >= 0 )
  {
    *a3 = _byteswap_ulong(*a3);
    return 0LL;
  }
  return result;
}
