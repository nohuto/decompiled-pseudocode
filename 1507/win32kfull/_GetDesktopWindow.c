/*
 * XREFs of _GetDesktopWindow @ 0x1C00665E0
 * Callers:
 *     SelectWindowRgn @ 0x1C000E814 (SelectWindowRgn.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedWindows @ 0x1C003F7A8 (xxxShowOwnedWindows.c)
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 *     NextTopWindow @ 0x1C0042A00 (NextTopWindow.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     SetHungFlag @ 0x1C00448B4 (SetHungFlag.c)
 *     zzzLockWindowUpdate2 @ 0x1C0044DC8 (zzzLockWindowUpdate2.c)
 *     ImeCanDestroyDefIMEforChild @ 0x1C004FAC0 (ImeCanDestroyDefIMEforChild.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0050090 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetInheritedMonitor @ 0x1C005C590 (GetInheritedMonitor.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0060E9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0064790 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     LinkWindow @ 0x1C006616C (LinkWindow.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C00664CC (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0066998 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     GetLastTopMostWindow @ 0x1C0081574 (GetLastTopMostWindow.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     _GetWindowPlacement @ 0x1C0083148 (_GetWindowPlacement.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00836EC (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     _DeferWindowPosAndBand @ 0x1C00843D4 (_DeferWindowPosAndBand.c)
 *     CkptUpdate @ 0x1C0085D0C (CkptUpdate.c)
 *     xxxPaintRect @ 0x1C00863E8 (xxxPaintRect.c)
 *     xxxRedrawWindow @ 0x1C008E8E0 (xxxRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     NtUserGetAncestor @ 0x1C00C6DD0 (NtUserGetAncestor.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00D52D0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00DF69C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     SetTiledRect @ 0x1C00E3178 (SetTiledRect.c)
 *     xxxHandleWindowPosChanged @ 0x1C00E56F4 (xxxHandleWindowPosChanged.c)
 *     _GetAncestor @ 0x1C00E9F5C (_GetAncestor.c)
 *     xxxMoveWindow @ 0x1C00ED36C (xxxMoveWindow.c)
 *     xxxGetUpdateRect @ 0x1C00EFDD4 (xxxGetUpdateRect.c)
 *     xxxSetWindowPlacement @ 0x1C00F297C (xxxSetWindowPlacement.c)
 *     NtUserSetParent @ 0x1C00F8C50 (NtUserSetParent.c)
 *     CreateSpb @ 0x1C00FF068 (CreateSpb.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00FF7D0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     _ChildWindowFromPointEx @ 0x1C011A1EC (_ChildWindowFromPointEx.c)
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0120BC4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     xxxGetUpdateRgn @ 0x1C0121A90 (xxxGetUpdateRgn.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
 *     PowerOnGdi @ 0x1C01301F0 (PowerOnGdi.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     GetTopMostInsertAfter @ 0x1C01C39FC (GetTopMostInsertAfter.c)
 *     xxxSetForegroundCheckNoActivate @ 0x1C01D13A0 (xxxSetForegroundCheckNoActivate.c)
 *     xxxMetricsRecalc @ 0x1C01D61DC (xxxMetricsRecalc.c)
 *     xxxSoundSentry @ 0x1C01EF4B0 (xxxSoundSentry.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F6D00 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F6DE8 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01FA850 (-xxxPointerActivate@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01FAA90 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C020425C (xxxSetInternalWindowPos.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C0207048 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     EvaluateArrangeState @ 0x1C020AF20 (EvaluateArrangeState.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     xxxInitializeMoveSizeData @ 0x1C020C6A4 (xxxInitializeMoveSizeData.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0215704 (xxxBroadcastPaletteChanged.c)
 *     xxxDrawAnimatedRects @ 0x1C02274D4 (xxxDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 *     xxxActivateEnabledPopup @ 0x1C0231300 (xxxActivateEnabledPopup.c)
 *     _RealChildWindowFromPoint @ 0x1C023BFBC (_RealChildWindowFromPoint.c)
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
