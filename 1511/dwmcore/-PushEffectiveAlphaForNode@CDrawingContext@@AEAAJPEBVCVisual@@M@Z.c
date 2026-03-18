/*
 * XREFs of ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M@Z @ 0x18003C96C
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B1C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800A9B7C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800A9F70 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 */

__int64 __fastcall CDrawingContext::PushEffectiveAlphaForNode(
        CDrawingContext *this,
        const struct CVisual *a2,
        float a3)
{
  char *v3; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // r8
  int v10; // [rsp+30h] [rbp-18h] BYREF
  const struct CVisual *v11; // [rsp+38h] [rbp-10h]
  float v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v3 = (char *)this + 424;
  v11 = a2;
  v10 = 7;
  v5 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 424, &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x18D4u);
  }
  else
  {
    v7 = CWatermarkStack<float,64,2,10>::Push((char *)this + 2584, &v12);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x18D6u);
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v3, 0LL, v9);
    }
  }
  return v6;
}
