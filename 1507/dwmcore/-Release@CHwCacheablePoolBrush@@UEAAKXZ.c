/*
 * XREFs of ?Release@CHwCacheablePoolBrush@@UEAAKXZ @ 0x180142E60
 * Callers:
 *     ?Release@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x18009B6D0 (-Release@CHwCacheablePoolBrush@@W7EAAKXZ.c)
 *     ?Release@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x18009B6E0 (-Release@CHwCacheablePoolBrush@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCacheablePoolBrush::Release(CHwCacheablePoolBrush *this)
{
  return CMILPoolResource::Release((CHwCacheablePoolBrush *)((char *)this + 8));
}
