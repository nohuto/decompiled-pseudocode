/*
 * XREFs of _GetDesktopWindow @ 0x1C00573D0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C004EC70 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     xxxRedrawWindow @ 0x1C00520F0 (xxxRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C0052F58 (InternalInvalidate3.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C005594C (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     LinkWindow @ 0x1C00564E4 (LinkWindow.c)
 *     ValidateParentDepth @ 0x1C0056948 (ValidateParentDepth.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00569D8 (IsToplevelWindowDesktopComposed.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006E21C (GetInheritedMonitor.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00704E0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetTiledRect @ 0x1C0073CCC (SetTiledRect.c)
 *     _DeferWindowPosAndBand @ 0x1C0074600 (_DeferWindowPosAndBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0076330 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     _GetWindowPlacement @ 0x1C0076EB4 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C0077428 (CkptUpdate.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     SelectWindowRgn @ 0x1C007AAB8 (SelectWindowRgn.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     NextTopWindow @ 0x1C008B4E8 (NextTopWindow.c)
 *     SetHungFlag @ 0x1C008BFF0 (SetHungFlag.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C008F864 (ImeCanDestroyDefIMEforChild.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0090440 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0090970 (zzzLockWindowUpdate2.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     GetLastTopMostWindow @ 0x1C00C7B04 (GetLastTopMostWindow.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedWindows @ 0x1C00C94C4 (xxxShowOwnedWindows.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     _GetAncestor @ 0x1C00D0504 (_GetAncestor.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     NtUserGetAncestor @ 0x1C00D9D10 (NtUserGetAncestor.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00DBA3C (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxPaintRect @ 0x1C00E7A28 (xxxPaintRect.c)
 *     xxxMouseActivate @ 0x1C00E95C4 (xxxMouseActivate.c)
 *     xxxHandleWindowPosChanged @ 0x1C00EC0A4 (xxxHandleWindowPosChanged.c)
 *     xxxMoveWindow @ 0x1C00F2A0C (xxxMoveWindow.c)
 *     xxxGetUpdateRect @ 0x1C00F5B84 (xxxGetUpdateRect.c)
 *     xxxSetWindowPlacement @ 0x1C00F7AE0 (xxxSetWindowPlacement.c)
 *     NtUserSetParent @ 0x1C00FF920 (NtUserSetParent.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C010C060 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSoundSentry @ 0x1C01144E8 (xxxSoundSentry.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013EC54 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     _ChildWindowFromPointEx @ 0x1C01451D0 (_ChildWindowFromPointEx.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C014A340 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     xxxGetUpdateRgn @ 0x1C014B844 (xxxGetUpdateRgn.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 *     PowerOnGdi @ 0x1C014F210 (PowerOnGdi.c)
 *     GetTopMostInsertAfter @ 0x1C01C55BC (GetTopMostInsertAfter.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D3018 (xxxSetForegroundCheckNoActivate.c)
 *     xxxMetricsRecalc @ 0x1C01D7D60 (xxxMetricsRecalc.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F71BC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F72A4 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FACF0 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01FAF30 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C02045CC (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207464 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     EvaluateArrangeState @ 0x1C020B46C (EvaluateArrangeState.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C020CE20 (xxxInitializeMoveSizeData.c)
 *     xxxBroadcastPaletteChanged @ 0x1C02155B0 (xxxBroadcastPaletteChanged.c)
 *     xxxDrawAnimatedRects @ 0x1C0227878 (xxxDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C02279D4 (xxxMinimizeHungWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C0231730 (xxxActivateEnabledPopup.c)
 *     _RealChildWindowFromPoint @ 0x1C023C18C (_RealChildWindowFromPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDesktopWindow(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      return *(_QWORD *)(v3 + 16);
  }
  return result;
}
