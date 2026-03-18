/*
 * XREFs of ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F336C
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawRectangleOverlay(CDrawingContext *a1, __int128 *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CDrawingContext::DrawSolidRectangle(
         a1,
         a2,
         (const struct _D3DCOLORVALUE *)&g_DirtyRegionColors + g_DirtyRegionColor);
  v3 = v2;
  if ( v2 >= 0 )
    g_DirtyRegionColor = (g_DirtyRegionColor + 1) % 3;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x25F9u);
  return v3;
}
