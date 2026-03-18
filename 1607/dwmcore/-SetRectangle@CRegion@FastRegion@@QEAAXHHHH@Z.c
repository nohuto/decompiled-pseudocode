/*
 * XREFs of ?SetRectangle@CRegion@FastRegion@@QEAAXHHHH@Z @ 0x18009AA50
 * Callers:
 *     ??$AppendRects@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18001210C (--$AppendRects@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@CRegio.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x18004D1B4 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETDIRT.c)
 *     ?Initialize@COverlayContext@@IEAAJXZ @ 0x1800790EC (-Initialize@COverlayContext@@IEAAJXZ.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180099DA4 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18009A078 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009AAB4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@AEAVCRegion@@@Z @ 0x180127C60 (-ComputeDesktopClip@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180129E40 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18012C1FC (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCRegion@@@Z @ 0x180131604 (-ExcludeRegionFromRect@CDwmMetaRegion@@SA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z @ 0x180166CBC (-UpdateProtectedContentRegion@CAnalogTextureTarget@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::CRegion::SetRectangle(FastRegion::CRegion *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r10

  if ( a2 >= a4 || a3 >= a5 )
  {
    **(_DWORD **)this = 0;
  }
  else
  {
    v5 = *(_DWORD **)this;
    *v5 = 2;
    v5[1] = a2;
    v5[2] = a4;
    v5[3] = a3;
    v5[4] = 16;
    v5[7] = a2;
    v5[8] = a4;
    v5[5] = a5;
    v5[6] = 16;
  }
}
