/*
 * XREFs of RaspDestroyCachedBitmap @ 0x14075F354
 * Callers:
 *     BgpRasPrintGlyph @ 0x14015078C (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x14075C96C (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x14075F2F0 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspFreeMemory @ 0x140152734 (RaspFreeMemory.c)
 *     RaspRectangleDestroy @ 0x140166350 (RaspRectangleDestroy.c)
 */

__int64 __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 24);
  RaspRectangleDestroy(*(_QWORD *)(a1 + 16), v3);
  return RaspFreeMemory(a1, v3);
}
