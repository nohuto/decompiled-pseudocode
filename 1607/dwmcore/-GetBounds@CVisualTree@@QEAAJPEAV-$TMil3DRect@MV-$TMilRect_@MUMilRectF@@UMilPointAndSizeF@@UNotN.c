/*
 * XREFs of ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C9F8
 * Callers:
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A4F4 (-GetBoundsInternal@CHwndBitmap@@AEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033840 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 *     ?SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z @ 0x180166B60 (-SetVisualTree@CAnalogTextureTarget@@UEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000C8B8 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualTree::GetBounds(CVisualTree *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  __int64 result; // rax
  int v8; // eax

  v2 = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 3) + 152LL) & 0xF) != 0 && (v8 = CVisualTree::PreCompute(a1), v2 = v8, v8 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x68u);
    *(_OWORD *)a2 = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v6 = qword_1801EC898;
  }
  else
  {
    v5 = *((_QWORD *)a1 + 3);
    *(_OWORD *)a2 = *(_OWORD *)(v5 + 200);
    v6 = *(_QWORD *)(v5 + 216);
  }
  result = v2;
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}
