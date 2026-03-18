/*
 * XREFs of ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041100
 * Callers:
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180011FB0 (-GetBoundsInternal@CHwndBitmap@@AEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800532E0 (-GetBounds@CCachedVisualImage@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x180053DA4 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?SetVisualTree@CAnalogRenderTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x1801276A0 (-SetVisualTree@CAnalogRenderTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualTree::GetBounds(struct CVisualTree *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  __int64 result; // rax
  int v8; // eax

  v2 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 3) + 88LL) & 0xF) != 0 && (v8 = CVisualTree::PreCompute(a1, 0LL), v2 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x5Bu);
    *(_OWORD *)a2 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v6 = qword_180190C70;
  }
  else
  {
    v5 = *((_QWORD *)a1 + 3);
    *(_OWORD *)a2 = *(_OWORD *)(v5 + 156);
    v6 = *(_QWORD *)(v5 + 172);
  }
  result = v2;
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}
