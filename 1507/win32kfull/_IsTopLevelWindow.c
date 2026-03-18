/*
 * XREFs of _IsTopLevelWindow @ 0x1C00665B0
 * Callers:
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     SelectWindowRgn @ 0x1C000E814 (SelectWindowRgn.c)
 *     GetWindowExtendedMargin @ 0x1C0044788 (GetWindowExtendedMargin.c)
 *     UpdateWindowDPITransform @ 0x1C0058AD0 (UpdateWindowDPITransform.c)
 *     ?PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z @ 0x1C0058B34 (-PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0058BB0 (NtUserUpdateLayeredWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C005C038 (UpdateMonitorForWindowAndChildren.c)
 *     UpdateWindowMonitor @ 0x1C005C120 (UpdateWindowMonitor.c)
 *     GetNewMonitor @ 0x1C005C238 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0063AFC (IsTopLevelOrLayeredChildWindow.c)
 *     CalcWindowFullScreen @ 0x1C006601C (CalcWindowFullScreen.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C007C5B0 (xxxEnableChildWindowDpiMessageX.c)
 *     ?xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C007DE64 (-xxxSendDpiChangedMsgs@@YAXPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C007E314 (xxxNotifyMonitorChanged.c)
 *     xxxUpdateTray @ 0x1C007FA48 (xxxUpdateTray.c)
 *     FVisCountable @ 0x1C0082240 (FVisCountable.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0082470 (NtUserSetWindowCompositionAttribute.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     ShouldHaveShadow @ 0x1C00F63F0 (ShouldHaveShadow.c)
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C00F7184 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C00FC640 (NtUserSetWindowCompositionTransition.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00FF7D0 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C01001C4 (IsWindowBroadcastingDpiToChildrenX.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0149EF4 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C014AB34 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C01549C0 (NtUserSetBrokeredForeground.c)
 *     FeedbackGetWindowSetting @ 0x1C01DB828 (FeedbackGetWindowSetting.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F6D00 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C0203B5C (GetGestureConfigSettings.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0218D30 (NtUserDisableImmersiveOwner.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C021C6D0 (NtUserGetWindowDisplayAffinity.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C0220CC0 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C02217A0 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0238F50 (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C0238FD0 (GetDisplayAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 88);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v4 = 0LL;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 8);
      if ( v5 )
        v4 = *(_QWORD *)(v5 + 16);
    }
    if ( v1 == v4 )
      return 1LL;
  }
  return result;
}
