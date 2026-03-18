/*
 * XREFs of ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x1800F3B24
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180027DB0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180051368 (-GetRects@CMergedRect@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

char __fastcall CWindowNode::GetWindowNodeDirtyRects(
        CWindowNode *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        __m128i **a4)
{
  char v4; // bl

  v4 = 0;
  if ( *((_DWORD *)this + 216) )
  {
    *a2 = *((_QWORD *)this + 29);
    v4 = 1;
    CMergedRect::GetRects((__m128i *)((char *)this + 792), a3, a4);
  }
  else
  {
    *a3 = 0;
  }
  return v4;
}
