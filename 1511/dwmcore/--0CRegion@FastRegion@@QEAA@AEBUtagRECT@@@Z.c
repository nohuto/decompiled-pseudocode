/*
 * XREFs of ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18006D9C4
 * Callers:
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180007640 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180007808 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1800191FC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180019244 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18006D65C (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x1801106F4 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1801116AC (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x1801117DC (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 * Callees:
 *     ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18006D960 (-SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z.c)
 */

FastRegion::CRegion *__fastcall FastRegion::CRegion::CRegion(FastRegion::CRegion *this, const struct tagRECT *a2)
{
  *(_QWORD *)this = (char *)this + 8;
  FastRegion::CRegion::SetRectangle(this, a2->left, a2->top, a2->right, a2->bottom);
  return this;
}
