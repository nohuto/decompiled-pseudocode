/*
 * XREFs of ?PopLight@CDrawingContext@@AEAAJXZ @ 0x180124060
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180067D80 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180022168 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAHPEAUStackStateEntry@C.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18012DFCC (-Pop@CLightStack@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::PopLight(CDrawingContext *this)
{
  __int64 v1; // r8
  int v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 126, &v5);
  v2 = CLightStack::Pop((CLightStack *)(v1 + 728));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2709u);
  return v3;
}
