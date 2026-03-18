/*
 * XREFs of ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z @ 0x1800102B8
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z @ 0x1800073A4 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVIImageSource@@PEA_N@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180010268 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ @ 0x1800296F4 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEAA_NXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CDrawingContext::IsOverlayAssigned(
        COverlayContext **this,
        const struct CVisual *a2,
        struct IImageSource *a3,
        bool *a4)
{
  char v4; // di
  CDrawingContext *v10; // rcx

  v4 = 0;
  if ( this[723]
    && (*(unsigned __int8 (__fastcall **)(struct IImageSource *))(*(_QWORD *)a3 + 72LL))(a3)
    && !CDrawingContext::IsInLayer((CDrawingContext *)this)
    && CDrawingContext::IsDirectRenderingToDisplayRenderTarget(v10) )
  {
    return COverlayContext::IsOverlayAssigned(this[723], a2, a3, a4);
  }
  return v4;
}
