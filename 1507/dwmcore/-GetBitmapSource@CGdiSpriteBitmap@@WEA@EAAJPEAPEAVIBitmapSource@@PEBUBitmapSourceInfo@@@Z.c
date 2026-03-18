/*
 * XREFs of ?GetBitmapSource@CGdiSpriteBitmap@@WEA@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18009A6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetBitmapSource(
        __int64 a1,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  return CGdiSpriteBitmap::GetBitmapSource((CGdiSpriteBitmap *)(a1 - 64), a2, a3);
}
