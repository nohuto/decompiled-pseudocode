/*
 * XREFs of ?ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F190
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F3C0 (-RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CHDRConvertLayer::ApplyState(struct IRenderTarget **this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CDrawingContext::PushRenderTarget(a2, this[15]);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2Eu);
    goto LABEL_5;
  }
  *((_BYTE *)this + 33) = 1;
  v6 = CDrawingContext::Clear((CD2DContext **)a2, &`CVisual::SetHeatMapColor'::`2'::sc_defaultValue);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x31u);
LABEL_5:
    CHDRConvertLayer::RestoreState((CHDRConvertLayer *)this, a2);
  }
  return v5;
}
