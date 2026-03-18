/*
 * XREFs of ?IsYUV@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000BD90
 * Callers:
 *     ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18000B3E8 (-GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18000CE10 (-GetTextureFormat@CDxHandleBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsYUV(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdi
  char v2; // bl
  enum DXGI_FORMAT (__fastcall *v3)(CDxHandleBitmapRealization *__hidden); // rsi
  enum DXGI_FORMAT TextureFormat; // eax

  v1 = *((_QWORD *)this + 51);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(enum DXGI_FORMAT (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(v1 + 112) + 40LL);
    if ( v3 == CDxHandleBitmapRealization::GetTextureFormat )
      TextureFormat = CDxHandleBitmapRealization::GetTextureFormat((CDxHandleBitmapRealization *)(v1 + 112));
    else
      TextureFormat = v3((CDxHandleBitmapRealization *)(v1 + 112));
    if ( TextureFormat == DXGI_FORMAT_NV12 || TextureFormat > DXGI_FORMAT_P016 && TextureFormat <= DXGI_FORMAT_YUY2 )
      return 1;
  }
  return v2;
}
