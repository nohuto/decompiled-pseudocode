/*
 * XREFs of ?PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z @ 0x180124684
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800AD570 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z @ 0x18012E018 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushLight(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CCompositionLight *a3)
{
  int *v3; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v3 = (int *)((char *)this + 504);
  *((_QWORD *)&v10 + 1) = a2;
  LODWORD(v10) = 9;
  v6 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 126, &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x26F0u);
  }
  else
  {
    v8 = CLightStack::Push((CDrawingContext *)((char *)this + 728), a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x26F3u);
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v3, 0LL);
    }
  }
  return v7;
}
