/*
 * XREFs of RaspDestroyCachedBitmap @ 0x1407283D4
 * Callers:
 *     BgpRasPrintGlyph @ 0x140127D20 (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x140725934 (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x140728370 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     RaspRectangleDestroy @ 0x14014125C (RaspRectangleDestroy.c)
 */

__int64 __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 24);
  RaspRectangleDestroy(*(_QWORD *)(a1 + 16), v3);
  return RaspFreeMemory(a1, v3);
}
