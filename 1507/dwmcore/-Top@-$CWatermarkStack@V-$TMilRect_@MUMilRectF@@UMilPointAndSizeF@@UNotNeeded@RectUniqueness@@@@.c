/*
 * XREFs of ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180059230
 * Callers:
 *     ?FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_NPEBUMilPointAndSizeF@@@Z @ 0x1800107A4 (-FillEffect@CDrawingContext@@AEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180027E60 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058EE0 (-Top@CBaseClipStack@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800DBE20 (-PostSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
        int *a1,
        _OWORD *a2)
{
  __int64 result; // rax
  int v4; // ecx

  result = 0LL;
  v4 = *a1;
  if ( !v4 )
    return 2147500037LL;
  *a2 = *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * (unsigned int)(v4 - 1));
  return result;
}
