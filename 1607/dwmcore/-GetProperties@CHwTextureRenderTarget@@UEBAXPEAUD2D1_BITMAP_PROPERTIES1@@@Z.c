/*
 * XREFs of ?GetProperties@CHwTextureRenderTarget@@UEBAXPEAUD2D1_BITMAP_PROPERTIES1@@@Z @ 0x1800C1860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwTextureRenderTarget::GetProperties(CHwTextureRenderTarget *this, struct D2D1_BITMAP_PROPERTIES1 *a2)
{
  D2D1_ALPHA_MODE v2; // eax
  D2D1_PIXEL_FORMAT v3; // [rsp+8h] [rbp+8h]

  v3.format = *((_DWORD *)this + 8);
  v2 = *((_DWORD *)this + 9);
  a2->colorContext = 0LL;
  v3.alphaMode = v2;
  a2->pixelFormat = v3;
  a2->dpiX = 96.0;
  a2->dpiY = 96.0;
  a2->bitmapOptions = D2D1_BITMAP_OPTIONS_TARGET;
}
