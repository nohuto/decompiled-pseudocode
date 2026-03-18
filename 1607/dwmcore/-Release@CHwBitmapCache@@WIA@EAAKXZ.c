/*
 * XREFs of ?Release@CHwBitmapCache@@WIA@EAAKXZ @ 0x1800C19D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwBitmapCache::Release(__int64 a1)
{
  return CD3DSurface::Release((CD3DSurface *)(a1 - 128));
}
