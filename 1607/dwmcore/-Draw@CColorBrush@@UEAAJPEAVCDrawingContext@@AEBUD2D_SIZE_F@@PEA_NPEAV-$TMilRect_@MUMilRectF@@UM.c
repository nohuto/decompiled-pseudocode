/*
 * XREFs of ?Draw@CColorBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180139340
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 */

__int64 __fastcall CColorBrush::Draw(struct CSpriteVisualContent *a1, CDrawingContext *this, struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  struct CVisual *CurrentVisual; // rax
  float v8; // xmm1_4
  int v9; // eax

  v3 = 0;
  if ( a3->width > 0.0 && a3->height > 0.0 )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 128));
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 33)) & _xmm);
    if ( v8 >= 0.0000011920929 )
    {
      v9 = CDrawingContext::DrawCommonRenderingEffect(this, CurrentVisual, a1, a3);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x8Au);
    }
  }
  return v3;
}
