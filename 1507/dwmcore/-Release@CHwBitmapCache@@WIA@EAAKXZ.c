/*
 * XREFs of ?Release@CHwBitmapCache@@WIA@EAAKXZ @ 0x18009B410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwBitmapCache::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - 128));
}
