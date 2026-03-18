/*
 * XREFs of ?RestoreState@CColorTransformLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FBF60
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180001BF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FBB60 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CColorTransformLayer::RestoreState(CColorTransformLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CColorTransformLayer::RenderLayer(this, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x44u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x42u);
  }
  return v5;
}
