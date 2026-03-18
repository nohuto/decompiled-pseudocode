/*
 * XREFs of xxxSetWindowPos @ 0x140048EC0
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserMoveWindow @ 0x140048CE0 (NtUserMoveWindow.c)
 *     xxxAddShadow @ 0x140083B00 (xxxAddShadow.c)
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxActivateEnabledPopup @ 0x1401AF0B0 (xxxActivateEnabledPopup.c)
 *     xxxSwitchDesktop @ 0x1401B29E0 (xxxSwitchDesktop.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     xxxShowScrollBar @ 0x1401DA46C (xxxShowScrollBar.c)
 *     xxxSetWindowPlacement @ 0x1401FBF30 (xxxSetWindowPlacement.c)
 *     ?xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z @ 0x1401FE864 (-xxxShowWindowViaSetWindowPos@@YAXPEAUtagWND@@I@Z.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x14021643C (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x140218B1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x14021F578 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     xxxSetMenu @ 0x1402224F0 (xxxSetMenu.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     xxxDrawMenuBar @ 0x14023A2F8 (xxxDrawMenuBar.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x14023A878 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     NtUserRaiseLowerShellWindow @ 0x14024B1E0 (NtUserRaiseLowerShellWindow.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1402536E8 (xxxUpdateShadowZorder.c)
 *     NtUserSetWindowPos @ 0x14025CDA0 (NtUserSetWindowPos.c)
 *     NtUserRedrawFrame @ 0x140262730 (NtUserRedrawFrame.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140277DD8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x14027C828 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x14027CE6C (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140296A44 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z @ 0x14029D7A0 (-xxxSwitchToThisWindow@@YAXPEAUtagWND@@W4SwitchToThisWindowOptions@@@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1402A06E8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1402A1D70 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     NtUserRedrawFrameAndHook @ 0x1402B9620 (NtUserRedrawFrameAndHook.c)
 *     ?xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1402C65EC (-xxxCommitMoveSizeOld@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1402C8BFC (xxxSetInternalWindowPos.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1402DCAF4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     xxxMNUpdateShownMenu @ 0x1402F3090 (xxxMNUpdateShownMenu.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046210 (-GetCompositeAppFrameWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x140049010 (xxxSetWindowPosAndBand.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x1400494F0 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall xxxSetWindowPos(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  bool v8; // di
  int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *CompositeAppFrameWindow; // rax
  struct tagWND *v15; // rsi
  int v16; // edi
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  v8 = !a2 && (unsigned int)CoreWindowProp::IsComponent(a1, 0LL) && (a7 & 0xFFFFFFEF) == 3;
  v9 = a7 | 0x60400;
  if ( !v8 )
    v9 = a7;
  v10 = xxxSetWindowPosAndBand(a1, a5, a6, v9);
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v10 )
    {
      if ( v8 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18928) )
      {
        CompositeAppFrameWindow = CoreWindowProp::GetCompositeAppFrameWindow(a1);
        v15 = CompositeAppFrameWindow;
        if ( CompositeAppFrameWindow )
        {
          v16 = 394259;
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
            BugCheckParameter3,
            (__int64)CompositeAppFrameWindow);
          if ( (*(_BYTE *)(*((_QWORD *)v15 + 5) + 24LL) & 8) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 8) == 0 )
            v16 = 2491411;
          xxxSetWindowPosAndBand(v15, 0, 0, v16);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        }
      }
    }
  }
  return v10;
}
