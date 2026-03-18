/*
 * XREFs of ?RectContainsRect@COverlayContext@@CA_NPEAUtagRECT@@0@Z @ 0x18005E234
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 *     ?UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z @ 0x18007F070 (-UpdateDirtyAccum@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEA_N@Z.c)
 *     ?CheckPaddingCorrectness@COverlayContext@@CA_NAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEAUOverlayPlaneInfo@1@@Z @ 0x1800F67F8 (-CheckPaddingCorrectness@COverlayContext@@CA_NAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContex.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall COverlayContext::RectContainsRect(struct tagRECT *a1, struct tagRECT *a2)
{
  return a1->left <= a2->left && a1->top <= a2->top && a1->right >= a2->right && a1->bottom >= a2->bottom;
}
