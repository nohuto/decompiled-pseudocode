/*
 * XREFs of ?GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180032650
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180032790 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800833F0 (-GetAlphaMode@CBitmapRealization@@UEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 */

enum DXGI_ALPHA_MODE __fastcall CDxHandleBitmapRealization::GetD2DAlphaMode(CDxHandleBitmapRealization *this)
{
  enum DXGI_ALPHA_MODE (__fastcall *v1)(CBitmapRealization *__hidden); // rdi

  v1 = *(enum DXGI_ALPHA_MODE (__fastcall **)(CBitmapRealization *__hidden))(*((_QWORD *)this + 14) + 48LL);
  if ( v1 == CBitmapRealization::GetAlphaMode )
    return CBitmapRealization::GetAlphaMode((CDxHandleBitmapRealization *)((char *)this + 112));
  else
    return v1((CDxHandleBitmapRealization *)((char *)this + 112));
}
