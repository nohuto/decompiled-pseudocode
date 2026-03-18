/*
 * XREFs of ?IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180118560
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 */

void __fastcall CBrushRenderingEffect::IssueSurfaceNotifications(__int64 a1, CDrawingContext *a2, struct MilRectF *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  CCachedVisualImage *v10; // rdx

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) + 48LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) + 48LL));
  if ( v6 )
  {
    v7 = 0LL;
    v8 = v6;
    do
    {
      if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(*(CCompositionSurfaceBitmap **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 184LL) + v7)
                                                                                                 + 64LL)) )
      {
        if ( v9 )
          v10 = (CCachedVisualImage *)(v9 + 40);
        else
          v10 = 0LL;
        CDrawingContext::RecordBitmapContentInfo(a2, v10, v10, a3, 0LL);
      }
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
  }
}
