/*
 * XREFs of ?PopStacksForNode@CDrawingContext@@AEAAJPEBVCVisual@@@Z @ 0x180107390
 * Callers:
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1801071B0 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18001B740 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180067D80 (-Pop@CDrawingContext@@UEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::PopStacksForNode(CDrawingContext *this, const struct CVisual *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  while ( (int)CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
                 (int *)this + 126,
                 &v7) >= 0
       && *((const struct CVisual **)&v7 + 1) == a2 )
  {
    v5 = CDrawingContext::Pop(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x160Fu);
      return v4;
    }
  }
  return v4;
}
