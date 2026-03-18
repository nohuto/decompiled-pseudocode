/*
 * XREFs of ?DxgkEngAddRedirBitmapD3DDirtyRgnApiExt@@YAXPEAUHDC__@@PEBUtagCDDDXGK_REDIRBITMAPPRESENTINFO@@@Z @ 0x1C00B7F40
 * Callers:
 *     <none>
 * Callees:
 *     IsDxgkEngAddRedirBitmapD3DDirtyRgnSupported_0 @ 0x1C00014F8 (IsDxgkEngAddRedirBitmapD3DDirtyRgnSupported_0.c)
 *     DxgkEngAddRedirBitmapD3DDirtyRgn_0 @ 0x1C0001500 (DxgkEngAddRedirBitmapD3DDirtyRgn_0.c)
 */

void __fastcall DxgkEngAddRedirBitmapD3DDirtyRgnApiExt(HDC a1, const struct tagCDDDXGK_REDIRBITMAPPRESENTINFO *a2)
{
  if ( (int)IsDxgkEngAddRedirBitmapD3DDirtyRgnSupported_0() >= 0 )
    DxgkEngAddRedirBitmapD3DDirtyRgn_0();
}
