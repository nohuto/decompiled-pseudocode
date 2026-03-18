/*
 * XREFs of ?Draw@CEffectBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013B900
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z @ 0x180121C8C (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x180138A00 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z @ 0x18013C254 (-IsReadyToDraw@CEffectBrush@@QEBA_N_N@Z.c)
 */

__int64 __fastcall CEffectBrush::Draw(struct CEffectBrush *a1, CDrawingContext *this, struct D2D_SIZE_F *a3)
{
  unsigned int v6; // ebx
  CVisual *CurrentVisual; // rax
  struct CVisual *v8; // r14
  bool HasSubtreeSurface; // al
  int v10; // eax
  int v11; // eax

  v6 = 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 128));
  v8 = CurrentVisual;
  if ( a3->width > 0.0 && a3->height > 0.0 )
  {
    HasSubtreeSurface = CVisual::HasSubtreeSurface(CurrentVisual);
    if ( CEffectBrush::IsReadyToDraw(a1, HasSubtreeSurface) )
    {
      v10 = (*(__int64 (__fastcall **)(struct CEffectBrush *, CDrawingContext *, struct D2D_SIZE_F *))(*(_QWORD *)a1 + 184LL))(
              a1,
              this,
              a3);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xA1u);
      }
      else
      {
        v11 = CDrawingContext::DrawBrushEffect(this, v8, a1, a3);
        v6 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA6u);
      }
    }
  }
  return v6;
}
