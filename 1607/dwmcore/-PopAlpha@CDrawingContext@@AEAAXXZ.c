/*
 * XREFs of ?PopAlpha@CDrawingContext@@AEAAXXZ @ 0x180107360
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180067D80 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z @ 0x18012FD40 (-RenderLayer@CTreeEffectLayer@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 */

void __fastcall CDrawingContext::PopAlpha(CDrawingContext *this)
{
  __int64 v1; // r8
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 126, &v2);
  CWatermarkStack<bool,64,2,10>::Pop(v1 + 3016);
}
