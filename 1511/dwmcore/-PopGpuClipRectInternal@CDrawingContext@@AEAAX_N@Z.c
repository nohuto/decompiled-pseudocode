/*
 * XREFs of ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18000DC18
 * Callers:
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180010C40 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010E18 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180019DB4 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003C8F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800B8CE8 (-RenderComposeTopWorker@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ @ 0x180015B28 (-PopGpuClipFromScope@CScopedClipStack@@QEAAXXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B1C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 */

void __fastcall CDrawingContext::PopGpuClipRectInternal(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  __int64 v3; // r8
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = this;
  if ( a2 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 424, v4, this);
  CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)v2 + 680));
  *(_WORD *)(v3 + 5965) = 257;
}
