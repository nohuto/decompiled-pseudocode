/*
 * XREFs of ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x18000DC74
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C480 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121CF0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C350 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18000E09C (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x1800FB734 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18010DBE0 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 */

char __fastcall CDrawingContext::IsOverlayAssigned(
        COverlayContext **this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3,
        bool *a4)
{
  char v4; // bl
  char (__fastcall *v9)(CCompositionSurfaceBitmap *); // rbp
  char IsOverlayCompatible; // al
  CDrawingContext *v12; // rcx

  v4 = 0;
  if ( this[727] )
  {
    v9 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 96LL);
    if ( v9 == CCompositionSurfaceBitmap::IsOverlayCompatible )
      IsOverlayCompatible = CCompositionSurfaceBitmap::IsOverlayCompatible(a3);
    else
      IsOverlayCompatible = v9(a3);
    if ( IsOverlayCompatible
      && !CDrawingContext::IsInLayer((CDrawingContext *)this)
      && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(v12) )
    {
      return COverlayContext::IsOverlayAssigned(this[727], a2, a3, a4);
    }
  }
  return v4;
}
