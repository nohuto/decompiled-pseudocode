/*
 * XREFs of ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x180107500
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180067D80 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18006D260 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 */

void __fastcall CDrawingContext::PopClippingScope(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = this;
  if ( a2 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 126, &v3);
  --*((_DWORD *)v2 + 234);
}
