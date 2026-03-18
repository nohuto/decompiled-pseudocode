/*
 * XREFs of ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18000CE10
 * Callers:
 *     ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BD90 (-IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetTextureFormat@CD2DBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x180030960 (-GetTextureFormat@CD2DBitmap@@UEBA-AW4DXGI_FORMAT@@XZ.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180032790 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetTextureFormat(CDxHandleBitmapRealization *this)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v3)(CDxHandleBitmapRealization *__hidden); // rsi
  int v4; // eax
  __int64 v5; // rbx
  enum DXGI_FORMAT (__fastcall *v6)(CD2DBitmap *__hidden); // rdi

  v1 = 0;
  v3 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*((_QWORD *)this - 14) + 112LL);
  if ( v3 == CDxHandleBitmapRealization::EnsureD2DBitmap )
    v4 = CDxHandleBitmapRealization::EnsureD2DBitmap((CDxHandleBitmapRealization *)((char *)this - 112));
  else
    v4 = v3((CDxHandleBitmapRealization *)((char *)this - 112));
  if ( v4 >= 0 )
  {
    v5 = *((_QWORD *)this + 43);
    v6 = *(enum DXGI_FORMAT (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)(v5 + 112) + 32LL);
    if ( v6 == CD2DBitmap::GetTextureFormat )
      return (unsigned int)CD2DBitmap::GetTextureFormat((CD2DBitmap *)(v5 + 112));
    else
      return (unsigned int)v6((CD2DBitmap *)(v5 + 112));
  }
  return v1;
}
