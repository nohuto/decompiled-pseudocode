/*
 * XREFs of ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180087E9C
 * Callers:
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x1800069EC (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18000D204 (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18008771C (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1800F722C (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x1800F739C (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18014E7BC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 * Callees:
 *     <none>
 */

FastRegion::CRegion *__fastcall FastRegion::CRegion::CRegion(FastRegion::CRegion *this, const struct tagRECT *a2)
{
  _DWORD *v2; // r8
  LONG right; // r10d
  LONG left; // r11d
  LONG bottom; // ebx
  LONG top; // eax

  v2 = (_DWORD *)((char *)this + 8);
  *(_QWORD *)this = (char *)this + 8;
  right = a2->right;
  left = a2->left;
  bottom = a2->bottom;
  top = a2->top;
  if ( a2->left >= right || top >= bottom )
  {
    *v2 = 0;
  }
  else
  {
    *v2 = 2;
    *((_DWORD *)this + 3) = left;
    *((_DWORD *)this + 4) = right;
    *((_DWORD *)this + 5) = top;
    *((_DWORD *)this + 6) = 16;
    *((_DWORD *)this + 9) = left;
    *((_DWORD *)this + 10) = right;
    *((_DWORD *)this + 7) = bottom;
    *((_DWORD *)this + 8) = 16;
  }
  return this;
}
