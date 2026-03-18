/*
 * XREFs of ?GetBitmapSource@CGdiSpriteBitmap@@WII@EAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800C03E0
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
  return CGdiSpriteBitmap::GetBitmapSource((CGdiSpriteBitmap *)(a1 - 136), a2, a3);
}
