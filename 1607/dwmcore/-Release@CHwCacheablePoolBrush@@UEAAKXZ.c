/*
 * XREFs of ?Release@CHwCacheablePoolBrush@@UEAAKXZ @ 0x180018DC0
 * Callers:
 *     ?Release@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x1800C1BF0 (-Release@CHwCacheablePoolBrush@@W7EAAKXZ.c)
 *     ?Release@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800C1C00 (-Release@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCacheablePoolBrush::Release(CHwCacheablePoolBrush *this)
{
  return CMILPoolResource::Release((CHwCacheablePoolBrush *)((char *)this + 8));
}
