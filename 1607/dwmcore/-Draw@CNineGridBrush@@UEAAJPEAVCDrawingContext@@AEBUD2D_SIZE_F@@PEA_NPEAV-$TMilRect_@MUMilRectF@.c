/*
 * XREFs of ?Draw@CNineGridBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013F8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 */

__int64 __fastcall CNineGridBrush::Draw(struct CSpriteVisualContent *a1, CDrawingContext *this, struct D2D_SIZE_F *a3)
{
  unsigned int v3; // ebx
  struct CVisual *CurrentVisual; // r14
  int v8; // eax
  int v9; // eax

  v3 = 0;
  if ( a3->width > 0.0
    && a3->height > 0.0
    && (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)a1 + 176LL))(a1) )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 128));
    v8 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, CDrawingContext *, struct D2D_SIZE_F *))(*(_QWORD *)a1 + 184LL))(
           a1,
           this,
           a3);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x76u);
    }
    else
    {
      v9 = CDrawingContext::DrawCommonRenderingEffect(this, CurrentVisual, a1, a3);
      v3 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x7Bu);
    }
  }
  return v3;
}
