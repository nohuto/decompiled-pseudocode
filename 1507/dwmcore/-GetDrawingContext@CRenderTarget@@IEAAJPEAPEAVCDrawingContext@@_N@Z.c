/*
 * XREFs of ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x180058584
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004BAA8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800E9CF8 (-Clear@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z @ 0x1801272F4 (-RenderSlate@CAnalogRenderTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRenderTarget::GetDrawingContext(CRenderTarget *this, struct CDrawingContext **a2)
{
  unsigned int v2; // ebx
  int v6; // eax

  v2 = 0;
  if ( *((_QWORD *)this + 9)
    || (v6 = (*(__int64 (__fastcall **)(CRenderTarget *))(*(_QWORD *)this + 40LL))(this), v2 = v6, v6 >= 0) )
  {
    *a2 = (struct CDrawingContext *)*((_QWORD *)this + 9);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x60u);
  }
  return v2;
}
