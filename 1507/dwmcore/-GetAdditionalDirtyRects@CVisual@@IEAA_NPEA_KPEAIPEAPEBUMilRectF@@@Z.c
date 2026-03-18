/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1800F3A0C
 * Callers:
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x1800F4768 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180051368 (-GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

char __fastcall CVisual::GetAdditionalDirtyRects(__m128i *this, unsigned __int64 *a2, unsigned int *a3, __m128i **a4)
{
  char v4; // bl

  v4 = 0;
  if ( this[19].m128i_i32[2] )
  {
    *a2 = this[14].m128i_u64[1];
    v4 = 1;
    CMergedRect::GetRects(this + 15, a3, a4);
  }
  else
  {
    *a3 = 0;
  }
  return v4;
}
