/*
 * XREFs of _IsTopLevelWindow @ 0x1C0056918
 * Callers:
 *     ?UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z @ 0x1C0006E54 (-UpdateWindowInputSinkHint@@YAJPEAUHWND__@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     CalcWindowFullScreen @ 0x1C0055DBC (CalcWindowFullScreen.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C0055FC4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0056840 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     NtUserUpdateLayeredWindow @ 0x1C0069CF0 (NtUserUpdateLayeredWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006CE7C (UpdateMonitorForWindowAndChildren.c)
 *     UpdateWindowMonitor @ 0x1C006CF60 (UpdateWindowMonitor.c)
 *     GetNewMonitor @ 0x1C006DEC0 (GetNewMonitor.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0078590 (NtUserSetWindowCompositionAttribute.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     FVisCountable @ 0x1C007A3B0 (FVisCountable.c)
 *     SelectWindowRgn @ 0x1C007AAB8 (SelectWindowRgn.c)
 *     xxxUpdateTray @ 0x1C008F0B0 (xxxUpdateTray.c)
 *     GetWindowExtendedMargin @ 0x1C00916E4 (GetWindowExtendedMargin.c)
 *     xxxNotifyMonitorChanged @ 0x1C0091974 (xxxNotifyMonitorChanged.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0091B34 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxEnableChildWindowDpiMessageX @ 0x1C0092C74 (xxxEnableChildWindowDpiMessageX.c)
 *     ?PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z @ 0x1C0094710 (-PruneHwndListForDPIChangedMessages@@YAPEAPEAUHWND__@@PEAUtagBWL@@@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00D1D3C (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00D29C0 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D58E0 (NtUserSetBrokeredForeground.c)
 *     UpdateWindowDPITransform @ 0x1C00F17E0 (UpdateWindowDPITransform.c)
 *     ShouldHaveShadow @ 0x1C00FD28C (ShouldHaveShadow.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0104760 (NtUserSetWindowCompositionTransition.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C010C060 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C010F49C (IsWindowBroadcastingDpiToChildrenX.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01DBE2C (FeedbackGetWindowSetting.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F71BC (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     GetGestureConfigSettings @ 0x1C0203ECC (GetGestureConfigSettings.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     NtUserDisableImmersiveOwner @ 0x1C0218BB0 (NtUserDisableImmersiveOwner.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C021C4C0 (NtUserGetWindowDisplayAffinity.c)
 *     NtUserSetFallbackForeground @ 0x1C021FE20 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C0220B40 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C02217C0 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0239364 (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 *     GetDisplayAffinity @ 0x1C02393E4 (GetDisplayAffinity.c)
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
