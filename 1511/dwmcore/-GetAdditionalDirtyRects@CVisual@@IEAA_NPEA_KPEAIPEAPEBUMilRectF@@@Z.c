/*
 * XREFs of ?GetAdditionalDirtyRects@CVisual@@IEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x18010DA20
 * Callers:
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18010E44C (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180064780 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

char __fastcall CVisual::GetAdditionalDirtyRects(
        CVisual *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        const struct MilRectF **a4)
{
  char v4; // bl

  v4 = 0;
  if ( *((_DWORD *)this + 74) )
  {
    *a2 = *((_QWORD *)this + 27);
    v4 = 1;
    CMergedRectBase<4>::GetRects((__int64)this + 224, a3, a4);
  }
  else
  {
    *a3 = 0;
  }
  return v4;
}
