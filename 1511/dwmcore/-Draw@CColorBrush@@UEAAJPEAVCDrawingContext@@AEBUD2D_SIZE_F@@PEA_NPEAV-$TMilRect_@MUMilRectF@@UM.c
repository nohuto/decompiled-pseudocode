/*
 * XREFs of ?Draw@CColorBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121010
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180043690 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 */

__int64 __fastcall CColorBrush::Draw(struct CSpriteVisualContent *a1, CDrawingContext *this, struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  struct CVisual *CurrentVisual; // rax
  int v8; // eax

  v3 = 0;
  if ( a3->width != 0.0 && a3->height != 0.0 )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 56));
    if ( *((float *)a1 + 15) > 0.0 )
    {
      v8 = CDrawingContext::DrawCommonRenderingEffect(this, CurrentVisual, a1, a3);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x90u);
    }
  }
  return v3;
}
