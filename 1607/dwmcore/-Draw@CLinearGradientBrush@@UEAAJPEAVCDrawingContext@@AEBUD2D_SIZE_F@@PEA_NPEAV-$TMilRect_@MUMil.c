/*
 * XREFs of ?Draw@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013F030
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 */

__int64 __fastcall CLinearGradientBrush::Draw(
        struct CSpriteVisualContent *a1,
        CDrawingContext *this,
        struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  struct CVisual *CurrentVisual; // rax
  int v8; // eax

  v3 = 0;
  if ( a3->width > 0.0 && a3->height > 0.0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)a1 + 176LL))(a1) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 128));
      v8 = CDrawingContext::DrawCommonRenderingEffect(this, CurrentVisual, a1, a3);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xC1u);
    }
  }
  return v3;
}
