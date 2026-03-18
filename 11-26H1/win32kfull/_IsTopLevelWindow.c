/*
 * XREFs of _IsTopLevelWindow @ 0x14004DFC0
 * Callers:
 *     FVisCountable @ 0x1400105A0 (FVisCountable.c)
 *     CalcWindowFullScreen @ 0x140010674 (CalcWindowFullScreen.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140013EAC (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x14002EC34 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x14004B044 (GetNewMonitor.c)
 *     UpdateWindowMonitor @ 0x14004BA40 (UpdateWindowMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x14004C50C (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x14004DA2C (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x14004DA94 (-Update@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x14004DB50 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     NtUserIsTopLevelWindow @ 0x14004DF60 (NtUserIsTopLevelWindow.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     InitializeMonitorInfo @ 0x1400A6978 (InitializeMonitorInfo.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14012D750 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x14015EFB0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x140161F90 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1401620BC (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1401D3714 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1401D77C4 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1401E07E0 (NtUserGetWindowCompositionAttribute.c)
 *     GetGestureConfigSettings @ 0x1401E4A1C (GetGestureConfigSettings.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1401EC228 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 *     ?s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z @ 0x1401F3684 (-s_xxxOnWindowBecomingVisible@CRecalcProp@@SAXPEAUtagWND@@PEAUtagWINDOWPOS@@@Z.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1401FD9F8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     GetDisplayAffinity @ 0x1401FF1C0 (GetDisplayAffinity.c)
 *     FeedbackGetWindowSetting @ 0x1401FFAEC (FeedbackGetWindowSetting.c)
 *     ShouldHaveShadow @ 0x1402005A8 (ShouldHaveShadow.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 *     _anonymous_namespace_::GetWindowVisualizationSetting @ 0x14020525C (_anonymous_namespace_--GetWindowVisualizationSetting.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x14021643C (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     NtUserBeginLayoutUpdate @ 0x140218660 (NtUserBeginLayoutUpdate.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x140220848 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x14024B060 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     NtUserSetBrokeredForeground @ 0x14024E900 (NtUserSetBrokeredForeground.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140250868 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x140251560 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x140257B44 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     NtUserGetWindowDisplayAffinity @ 0x140262000 (NtUserGetWindowDisplayAffinity.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x14026CBFC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14026F0F4 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     xxxConsoleControl @ 0x140278BE4 (xxxConsoleControl.c)
 *     NtUserSetAdditionalPowerThrottlingProcess @ 0x140279E40 (NtUserSetAdditionalPowerThrottlingProcess.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14027BDC8 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x14027C828 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     ?SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z @ 0x140290E10 (-SendNormalToDwm@CHECKPOINT@@QEAAXPEBUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x14029454C (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1402A1DF8 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     ?NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z @ 0x1402AE210 (-NtUserSetFallbackForeground@@YA_JPEAUHWND__@@K@Z.c)
 *     NtUserApplyWindowAction @ 0x1402AF630 (NtUserApplyWindowAction.c)
 *     NtUserConvertToInterceptWindow @ 0x1402B08D0 (NtUserConvertToInterceptWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1402B0FF0 (NtUserDisableImmersiveOwner.c)
 *     NtUserEnterMoveSizeLoop @ 0x1402B1BD0 (NtUserEnterMoveSizeLoop.c)
 *     NtUserForceWindowToDpiForTest @ 0x1402B2180 (NtUserForceWindowToDpiForTest.c)
 *     NtUserRegisterCloakedNotification @ 0x1402B9E40 (NtUserRegisterCloakedNotification.c)
 *     NtUserSetBridgeWindowChild @ 0x1402BBB10 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetShellSpecialWindow @ 0x1402BDD00 (NtUserSetShellSpecialWindow.c)
 *     NtUserSetWindowCompositionTransition @ 0x1402BE3D0 (NtUserSetWindowCompositionTransition.c)
 *     NtUserShellMigrateWindow @ 0x1402BED70 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1402BF280 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1402C08A0 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z @ 0x1402C75E0 (-xxxProcessEnterMoveSizeRequest@MoveSizeApi@@YAXPEAUtagWND@@_K@Z.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1402CAA34 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E474C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z @ 0x1402E4C80 (-xxxApplyActionAsyncImpl@@YA_NPEAUtagWND@@PEAVCMonitorTopology@@PEAU_WINDOW_ACTION@@@Z.c)
 *     ?xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z @ 0x1402EC54C (-xxxProcessAsyncWindowAction@AdvancedWindowPos@@YAXPEAUHWND__@@_J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // r8
  _BOOL8 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 104);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        return v1 == *(_QWORD *)(v4 + 24);
    }
  }
  return result;
}
