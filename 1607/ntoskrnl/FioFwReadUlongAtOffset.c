/*
 * XREFs of FioFwReadUlongAtOffset @ 0x140145E88
 * Callers:
 *     RaspMapGlyphIndexToLocation @ 0x140128A70 (RaspMapGlyphIndexToLocation.c)
 *     BgpFoInitialize @ 0x1407D42D4 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x1407D43C8 (FopInitializeFonts.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x140128F34 (FioFwReadBytesAtOffset.c)
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
