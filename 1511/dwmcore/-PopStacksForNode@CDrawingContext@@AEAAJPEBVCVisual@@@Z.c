/*
 * XREFs of ?PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x1800F37DC
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800F36D0 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003C8F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Top@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEBAJPEAUStackStateEntry@CDrawingContext@@I@Z @ 0x1800A9B4C (-Top@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEBAJPEAUStackStateEntry@C.c)
 */

__int64 __fastcall CDrawingContext::PopStacksForNode(CDrawingContext *this, const struct CVisual *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  while ( (int)CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Top((int *)this + 106, &v7) >= 0
       && *((const struct CVisual **)&v7 + 1) == a2 )
  {
    v5 = CDrawingContext::Pop(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x161Fu);
      return v4;
    }
  }
  return v4;
}
