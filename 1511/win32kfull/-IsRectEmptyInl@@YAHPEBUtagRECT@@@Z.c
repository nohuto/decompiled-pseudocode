/*
 * XREFs of ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0041E08
 * Callers:
 *     GreUnlockDisplayArea @ 0x1C000CC58 (GreUnlockDisplayArea.c)
 *     GreLockDisplayArea @ 0x1C000CCF8 (GreLockDisplayArea.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00526DC (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     GetInheritedMonitor @ 0x1C006E21C (GetInheritedMonitor.c)
 *     DwmChildRectChange @ 0x1C006EE8C (DwmChildRectChange.c)
 *     xxxSetWindowPosAndBand @ 0x1C0074F6C (xxxSetWindowPosAndBand.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C00BC010 (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00C80C4 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     IsTitleWindow @ 0x1C00EB340 (IsTitleWindow.c)
 *     GreRectangle @ 0x1C00FC0C4 (GreRectangle.c)
 *     GreGetBoundsRect @ 0x1C00FCBE0 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C00FDB28 (GreSetBoundsRect.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C012F830 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0133580 (-MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C0134B7C (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01C518C (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C0203BA0 (-VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0209FA4 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0224568 (xxxCompositedPaint.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0231F10 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0261A78 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02B7FD0 (-bClipRectsToSurfaces@@YA_NPEAU_SURFOBJ@@0PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsRectEmptyInl(const struct tagRECT *a1)
{
  return a1->left >= a1->right || a1->top >= a1->bottom;
}
