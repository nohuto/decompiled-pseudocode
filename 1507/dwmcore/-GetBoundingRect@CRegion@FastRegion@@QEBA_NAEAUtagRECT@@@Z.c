/*
 * XREFs of ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800F6AD8
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18001248C (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAX_N00PEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@.c)
 *     ?EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014EB48 (-EnsureRestoredContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014F278 (-RestoreOverdrawContentBackToRealization@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ @ 0x18014F368 (-SaveOverdrawContent@CDxHandleAdvancedDirectFlipBitmapRealization@@QEAAJXZ.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18015B8F0 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FastRegion::CRegion::GetBoundingRect(LONG **this, struct tagRECT *a2)
{
  LONG *v2; // r8
  bool result; // al

  v2 = *this;
  if ( !**this )
    return 0;
  a2->left = v2[1];
  a2->right = v2[2];
  a2->top = v2[3];
  result = 1;
  a2->bottom = v2[2 * *v2 + 1];
  return result;
}
