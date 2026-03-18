/*
 * XREFs of ?GetWindowNodeDirtyRects@CWindowNode@@QEAA_NPEA_KPEAIPEAPEBUMilRectF@@@Z @ 0x180123F6C
 * Callers:
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180067CD4 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 * Callees:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x18002CF74 (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 */

char __fastcall CWindowNode::GetWindowNodeDirtyRects(
        CWindowNode *this,
        unsigned __int64 *a2,
        unsigned int *a3,
        const struct MilRectF **a4)
{
  char v4; // bl

  v4 = 0;
  if ( *((_DWORD *)this + 156) )
  {
    *a2 = *((_QWORD *)this + 35);
    v4 = 1;
    CMergedRectBase<4>::GetRects((__int64)this + 552, a3, a4);
  }
  else
  {
    *a3 = 0;
  }
  return v4;
}
