/*
 * XREFs of ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x18000C140
 * Callers:
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 * Callees:
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180006778 (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CCompositionSurfaceBitmap::SetSwapChainOrientation(
        CCompositionSurfaceBitmap *this,
        enum DXGI_MODE_ROTATION a2)
{
  int v3; // r8d
  __int64 v4; // rsi
  __int64 v5; // rdi
  CComposition *v6; // rax

  if ( CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)((char *)this - 40)) )
  {
    v4 = *((_QWORD *)this + 50);
    if ( v3 != *(_DWORD *)(v4 + 140) )
    {
      v5 = *(_QWORD *)(v4 + 24);
      *(_DWORD *)(v4 + 140) = v3;
      v6 = (CComposition *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      CComposition::AddCompSurfInfoUpdate(v6, (struct CCompositionSurfaceInfo *)v4);
    }
  }
}
