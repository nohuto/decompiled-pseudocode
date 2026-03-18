/*
 * XREFs of ?RestoreState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F3C0
 * Callers:
 *     ?ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F190 (-ApplyState@CHDRConvertLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180005658 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderLayer@CHDRConvertLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012F2F0 (-RenderLayer@CHDRConvertLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CHDRConvertLayer::RestoreState(CHDRConvertLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  if ( *((_BYTE *)this + 33) && (v4 = CDrawingContext::PopRenderTargetInternal(a2, 0), v5 = v4, v4 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x44u);
  }
  else
  {
    v6 = CHDRConvertLayer::RenderLayer(this, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x47u);
  }
  return v5;
}
