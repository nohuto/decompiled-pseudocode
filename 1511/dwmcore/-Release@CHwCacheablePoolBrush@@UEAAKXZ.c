/*
 * XREFs of ?Release@CHwCacheablePoolBrush@@UEAAKXZ @ 0x180014F30
 * Callers:
 *     ?Release@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x1800BE490 (-Release@CHwCacheablePoolBrush@@W7EAAKXZ.c)
 *     ?Release@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800BE4A0 (-Release@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCacheablePoolBrush::Release(CHwCacheablePoolBrush *this)
{
  return CMILPoolResource::Release((CHwCacheablePoolBrush *)((char *)this + 8));
}
