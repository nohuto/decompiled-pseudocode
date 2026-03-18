/*
 * XREFs of ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x1801072CC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013A0F0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x1800040A0 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x1801100D4 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180124000 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 */

char __fastcall CDrawingContext::IsOverlayAssigned(
        COverlayContext **this,
        const struct CVisual *a2,
        struct ISwapChainContent *a3,
        bool *a4)
{
  char v4; // bl
  CDrawingContext *v9; // rcx

  v4 = 0;
  if ( this[814]
    && (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a3 + 96LL))(a3)
    && !CDrawingContext::IsInLayer((CDrawingContext *)this)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(v9) )
  {
    return COverlayContext::IsOverlayAssigned(this[814], a2, a3, a4);
  }
  return v4;
}
