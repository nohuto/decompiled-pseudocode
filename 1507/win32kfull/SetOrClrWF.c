/*
 * XREFs of SetOrClrWF @ 0x1C005B694
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0006F50 (xxxSetModernAppWindow.c)
 *     FreeSpb @ 0x1C0008718 (FreeSpb.c)
 *     UnsetRedirectedWindow @ 0x1C000BB60 (UnsetRedirectedWindow.c)
 *     UnsetLayeredWindow @ 0x1C000CA0C (UnsetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C000E0B0 (SetRedirectedWindow.c)
 *     SelectWindowRgn @ 0x1C000E814 (SelectWindowRgn.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C003F74C (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C003F7A8 (xxxShowOwnedWindows.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0044810 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     SetHungFlag @ 0x1C00448B4 (SetHungFlag.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0045988 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxDWP_DoNCActivate @ 0x1C004EB68 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     ImeSetTopmost @ 0x1C004FED8 (ImeSetTopmost.c)
 *     xxxSetLayeredWindow @ 0x1C0056D10 (xxxSetLayeredWindow.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C005CA7C (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxInternalDoSyncPaint @ 0x1C0062240 (xxxInternalDoSyncPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxEndPaint @ 0x1C0079A28 (xxxEndPaint.c)
 *     xxxDispatchMessage @ 0x1C007C9DC (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C007CE24 (xxxSimpleDoSyncPaint.c)
 *     xxxCreateWindowSmIcon @ 0x1C007D400 (xxxCreateWindowSmIcon.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C007FBFC (xxxMakeWindowForegroundWithState.c)
 *     ClrFTrueVis @ 0x1C008101C (ClrFTrueVis.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     SetVisible @ 0x1C0081FA0 (SetVisible.c)
 *     SetWindowGroupBand @ 0x1C0083598 (SetWindowGroupBand.c)
 *     DestroyWindowSmIcon @ 0x1C0086174 (DestroyWindowSmIcon.c)
 *     xxxSendEraseBkgnd @ 0x1C0088150 (xxxSendEraseBkgnd.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     xxxBeginPaint @ 0x1C0089C38 (xxxBeginPaint.c)
 *     ClearHungFlag @ 0x1C0089EE8 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0089FB4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     CleanupWindowRedirection @ 0x1C008B0D0 (CleanupWindowRedirection.c)
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C008B664 (xxxRemoveFullScreen.c)
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 *     xxxDoPaint @ 0x1C008FE9C (xxxDoPaint.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCalcClientRect @ 0x1C0094474 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 *     PatchThreadWindows @ 0x1C00C5F30 (PatchThreadWindows.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00D52D0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxSetScrollBar @ 0x1C00D55C0 (xxxSetScrollBar.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00DF69C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     _SelectPalette @ 0x1C00E0AA0 (_SelectPalette.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EB40C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00EC2A8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C00EE930 (SfnPOWERBROADCAST.c)
 *     xxxDWP_UpdateUIState @ 0x1C00EF9E4 (xxxDWP_UpdateUIState.c)
 *     xxxGetUpdateRect @ 0x1C00EFDD4 (xxxGetUpdateRect.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C00F8D94 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00FB378 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     SetDialogPointer @ 0x1C00FBB50 (SetDialogPointer.c)
 *     xxxAddFullScreen @ 0x1C00FCEA4 (xxxAddFullScreen.c)
 *     _RegisterShellHookWindow @ 0x1C00FE290 (_RegisterShellHookWindow.c)
 *     zzzCancelJournalling @ 0x1C00FEE88 (zzzCancelJournalling.c)
 *     CreateSpb @ 0x1C00FF068 (CreateSpb.c)
 *     _DeregisterShellHookWindow @ 0x1C00FF250 (_DeregisterShellHookWindow.c)
 *     NtUserSetCoreWindow @ 0x1C00FF600 (NtUserSetCoreWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxGetUpdateRgn @ 0x1C0121A90 (xxxGetUpdateRgn.c)
 *     SetWindowState @ 0x1C0123D30 (SetWindowState.c)
 *     ClearWindowState @ 0x1C0123D90 (ClearWindowState.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
 *     xxxSetShellWindow @ 0x1C014992C (xxxSetShellWindow.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C01532B0 (NtUserSetChildWindowNoActivate.c)
 *     ClrWFNoDwmNotify @ 0x1C01D5C48 (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01D5C80 (SetMsgBox.c)
 *     xxxDisableImmersiveOwner @ 0x1C0204174 (xxxDisableImmersiveOwner.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C0205830 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020BEC4 (xxxEndSetWindowArrangement.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02157B0 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     VerifyChildMenu @ 0x1C02239A8 (VerifyChildMenu.c)
 *     xxxUpdateShadowZorder @ 0x1C0223A60 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C0225058 (xxxCompositedPaint.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02321DC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02323CC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C02336E4 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C005B79C (DwmAsyncChildStyleChange.c)
 */

__int16 __fastcall SetOrClrWF(int a1, _DWORD *a2, unsigned __int16 a3, int a4)
{
  int v4; // esi
  int v5; // ebp
  int v6; // r14d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edi
  void *v12; // rax

  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( a4 )
  {
    v4 = a2[13];
    v5 = a2[12];
    v6 = a2[72];
  }
  LOWORD(v8) = HIBYTE(a3);
  if ( a1 )
    *((_BYTE *)a2 + HIBYTE(a3) + 40) |= a3;
  else
    *((_BYTE *)a2 + HIBYTE(a3) + 40) &= ~(_BYTE)a3;
  if ( a4 )
  {
    v8 = IsWindowDesktopComposed(a2);
    if ( v8 )
    {
      v9 = (unsigned int)a2[13];
      v10 = (unsigned int)a2[12];
      v11 = a2[72];
      LOWORD(v8) = v4 != (_DWORD)v9;
      if ( v4 != (_DWORD)v9 )
      {
        LOWORD(v8) = v4 ^ v9;
        if ( ((v4 ^ (unsigned int)v9) & 0xB9CF0000) == 0 )
          return v8;
        goto LABEL_13;
      }
      if ( v5 != (_DWORD)v10 )
      {
        LOWORD(v8) = v5 ^ v10;
        if ( ((v5 ^ (unsigned int)v10) & 0x4E27A9) == 0 )
          return v8;
        goto LABEL_13;
      }
      if ( v6 != v11 )
      {
        LOWORD(v8) = v6 ^ v11;
        if ( ((v6 ^ v11) & 0x4C00180) != 0 )
        {
LABEL_13:
          v12 = (void *)ReferenceDwmApiPort(v9, v10, v6 != v11, v5 != (_DWORD)v10);
          LOWORD(v8) = DwmAsyncChildStyleChange(v12);
        }
      }
    }
  }
  return v8;
}
