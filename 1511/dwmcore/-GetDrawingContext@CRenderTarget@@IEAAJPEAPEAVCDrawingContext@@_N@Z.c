/*
 * XREFs of ?GetDrawingContext@CRenderTarget@@IEAAJPEAPEAVCDrawingContext@@_N@Z @ 0x1800AD350
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D178 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B7D20 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
