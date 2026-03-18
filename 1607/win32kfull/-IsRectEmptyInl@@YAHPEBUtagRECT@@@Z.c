/*
 * XREFs of ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534
 * Callers:
 *     GreUnlockDisplayArea @ 0x1C000E2D0 (GreUnlockDisplayArea.c)
 *     GreLockDisplayArea @ 0x1C000E370 (GreLockDisplayArea.c)
 *     GreRectangle @ 0x1C000E9CC (GreRectangle.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z @ 0x1C004FDF0 (-GreExtSelectClipRgnLocked@@YAHAEAVXDCOBJ@@PEAU_RECTL@@H@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C005A510 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     DwmChildRectChange @ 0x1C006C824 (DwmChildRectChange.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     GetInheritedMonitor @ 0x1C0070E64 (GetInheritedMonitor.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     zzzClipCursorEx @ 0x1C0097C50 (zzzClipCursorEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C00A652C (xxxSetWindowPosAndBand.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxEngNineGrid @ 0x1C00D38DC (xxEngNineGrid.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z @ 0x1C00D644C (-ExcludeWindowRects@@YAHPEAUtagWND@@0PEAUtagRECT@@PEAU_CalcVisRgnData@@@Z.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00FAB38 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C0100A90 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     IsTitleWindow @ 0x1C010C644 (IsTitleWindow.c)
 *     GreSetBoundsRect @ 0x1C011E338 (GreSetBoundsRect.c)
 *     GreGetBoundsRect @ 0x1C011EC10 (GreGetBoundsRect.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0139170 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     FindBestPos @ 0x1C013BA14 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0140258 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01C4368 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01FAEC0 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0201088 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0225130 (xxxCompositedPaint.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C022ACCC (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C025F3CC (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02BB204 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmptyInl(const struct tagRECT *a1)
{
  return a1->left >= a1->right || a1->top >= a1->bottom;
}
