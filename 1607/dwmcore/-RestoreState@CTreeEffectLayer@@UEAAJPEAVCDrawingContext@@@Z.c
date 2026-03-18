/*
 * XREFs of ?RestoreState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180013A80 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z @ 0x18012FD40 (-RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::RestoreState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CExternalLayer::RestoreState(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x54u);
  }
  else
  {
    v6 = CTreeEffectLayer::RenderLayer(this, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x56u);
  }
  return v5;
}
