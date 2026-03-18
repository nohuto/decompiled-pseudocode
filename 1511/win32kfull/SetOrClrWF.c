/*
 * XREFs of SetOrClrWF @ 0x1C0080070
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0007700 (xxxSetModernAppWindow.c)
 *     FreeSpb @ 0x1C00098E8 (FreeSpb.c)
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0051394 (xxxEndDeferWindowPosEx.c)
 *     InternalInvalidate3 @ 0x1C0052F58 (InternalInvalidate3.c)
 *     xxxDispatchMessage @ 0x1C0054E2C (xxxDispatchMessage.c)
 *     xxxDoPaint @ 0x1C0055FF8 (xxxDoPaint.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxBeginPaint @ 0x1C0067C4C (xxxBeginPaint.c)
 *     ClearHungFlag @ 0x1C0067F28 (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0067FF4 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     CleanupWindowRedirection @ 0x1C00686E8 (CleanupWindowRedirection.c)
 *     xxxCheckFullScreen @ 0x1C006899C (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C0068C7C (xxxRemoveFullScreen.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C0069A20 (xxxSendEraseBkgnd.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C0071278 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetWindowGroupBand @ 0x1C0076224 (SetWindowGroupBand.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     SetRedirectedWindow @ 0x1C0079E60 (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C007A120 (SetVisible.c)
 *     SelectWindowRgn @ 0x1C007AAB8 (SelectWindowRgn.c)
 *     ClrFTrueVis @ 0x1C007D45C (ClrFTrueVis.c)
 *     xxxSetLayeredWindow @ 0x1C007D4C8 (xxxSetLayeredWindow.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C007EEF8 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     UnsetLayeredWindow @ 0x1C007FC9C (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C007FEDC (UnsetRedirectedWindow.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C008A368 (SetWindowSubtreeCoreWindowStatus.c)
 *     SetHungFlag @ 0x1C008BFF0 (SetHungFlag.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C008C694 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C008F264 (xxxMakeWindowForegroundWithState.c)
 *     ImeSetTopmost @ 0x1C0090288 (ImeSetTopmost.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0090D48 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00964EC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C00C9468 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00C94C4 (xxxShowOwnedWindows.c)
 *     xxxSetScrollBar @ 0x1C00CA7B4 (xxxSetScrollBar.c)
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     xxxSetShellWindow @ 0x1C00D49B4 (xxxSetShellWindow.c)
 *     PatchThreadWindows @ 0x1C00D9140 (PatchThreadWindows.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00DBA3C (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     _SelectPalette @ 0x1C00E4700 (_SelectPalette.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00EE158 (xxxSimpleDoSyncPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F1FD4 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C00F579C (xxxDWP_UpdateUIState.c)
 *     xxxGetUpdateRect @ 0x1C00F5B84 (xxxGetUpdateRect.c)
 *     DestroyWindowSmIcon @ 0x1C00F9404 (DestroyWindowSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00FE3C0 (xxxCreateWindowSmIcon.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0100EB8 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     SetDialogPointer @ 0x1C0107440 (SetDialogPointer.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107888 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxAddFullScreen @ 0x1C01092CC (xxxAddFullScreen.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 *     _RegisterShellHookWindow @ 0x1C010A9C0 (_RegisterShellHookWindow.c)
 *     NtUserSetCoreWindow @ 0x1C010B2B0 (NtUserSetCoreWindow.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     _DeregisterShellHookWindow @ 0x1C010C170 (_DeregisterShellHookWindow.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C010E020 (NtUserSetChildWindowNoActivate.c)
 *     SfnPOWERBROADCAST @ 0x1C011F250 (SfnPOWERBROADCAST.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013EC54 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxGetUpdateRgn @ 0x1C014B844 (xxxGetUpdateRgn.c)
 *     SetWindowState @ 0x1C014CD40 (SetWindowState.c)
 *     ClearWindowState @ 0x1C014CDA0 (ClearWindowState.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 *     SetMsgBox @ 0x1C014F8A0 (SetMsgBox.c)
 *     xxxDisableImmersiveOwner @ 0x1C02044E4 (xxxDisableImmersiveOwner.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C0205BFC (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C020C568 (xxxEndSetWindowArrangement.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0215660 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C02242A0 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C0224568 (xxxCompositedPaint.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C023260C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02327FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0233B14 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0238BDC (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C0080178 (DwmAsyncChildStyleChange.c)
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
        if ( ((v6 ^ v11) & 0x5C00180) != 0 )
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
