/*
 * XREFs of _IsTopLevelWindow @ 0x1C00725F0
 * Callers:
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0009A94 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0053B90 (NtUserUpdateLayeredWindow.c)
 *     SelectWindowRgn @ 0x1C0061AA0 (SelectWindowRgn.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     GetNewMonitor @ 0x1C0070AA8 (GetNewMonitor.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C007219C (UpdateMonitorForWindowAndChildren.c)
 *     UpdateWindowMonitor @ 0x1C0072260 (UpdateWindowMonitor.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0072364 (ShouldUseLogPixelsForWindowMetrics.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00723B0 (IsToplevelWindowDesktopComposed.c)
 *     CalcWindowFullScreen @ 0x1C00723E0 (CalcWindowFullScreen.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00725BC (IsTopLevelOrLayeredChildWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00937D8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0097780 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     xxxUpdateTray @ 0x1C009C3D0 (xxxUpdateTray.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     FVisCountable @ 0x1C00A21C0 (FVisCountable.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C00A6AF0 (NtUserSetWindowCompositionAttribute.c)
 *     GetWindowExtendedMargin @ 0x1C00ACD48 (GetWindowExtendedMargin.c)
 *     xxxNotifyMonitorChanged @ 0x1C00AEA64 (xxxNotifyMonitorChanged.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00B0260 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C00B2504 (xxxEnableChildWindowDpiMessageX.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C00D55A4 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00ED700 (NtUserSetBrokeredForeground.c)
 *     UpdateWindowDPITransform @ 0x1C0111C18 (UpdateWindowDPITransform.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C011DD14 (IsWindowBroadcastingDpiToChildrenX.c)
 *     ShouldHaveShadow @ 0x1C011E238 (ShouldHaveShadow.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0126030 (NtUserSetWindowCompositionTransition.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01D382C (FeedbackGetWindowSetting.c)
 *     IsNonClientDpiScalingEnabledX @ 0x1C01DC110 (IsNonClientDpiScalingEnabledX.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01DD334 (xxxEnableNonClientDpiScaling.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE34C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01F65B0 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     GetGestureConfigSettings @ 0x1C01FB21C (GetGestureConfigSettings.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0211870 (NtUserDisableImmersiveOwner.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C0215680 (NtUserGetWindowDisplayAffinity.c)
 *     NtUserSetFallbackForeground @ 0x1C0219A90 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C021AAA0 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C021B900 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     GetDisplayAffinity @ 0x1C0231440 (GetDisplayAffinity.c)
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
