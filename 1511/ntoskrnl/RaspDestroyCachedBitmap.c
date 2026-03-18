/*
 * XREFs of RaspDestroyCachedBitmap @ 0x1406DC30C
 * Callers:
 *     BgpRasPrintGlyph @ 0x14011C50C (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x1406D9924 (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x1406DC2A8 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspFreeMemory @ 0x14011E4B4 (RaspFreeMemory.c)
 *     RaspRectangleDestroy @ 0x1401377AC (RaspRectangleDestroy.c)
 */

__int64 __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 24);
  RaspRectangleDestroy(*(_QWORD *)(a1 + 16), v3);
  return RaspFreeMemory(a1, v3);
}
