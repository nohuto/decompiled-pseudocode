/*
 * XREFs of SetOrClrWF @ 0x1C00964B4
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000A1E0 (xxxSetModernAppWindow.c)
 *     FreeSpb @ 0x1C000CAC0 (FreeSpb.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     xxxBeginPaint @ 0x1C00552FC (xxxBeginPaint.c)
 *     ClearHungFlag @ 0x1C00554FC (ClearHungFlag.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0055650 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     CleanupWindowRedirection @ 0x1C00567B0 (CleanupWindowRedirection.c)
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     xxxRemoveFullScreen @ 0x1C0056D5C (xxxRemoveFullScreen.c)
 *     InternalInvalidate3 @ 0x1C005AD8C (InternalInvalidate3.c)
 *     xxxDoPaint @ 0x1C005B83C (xxxDoPaint.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C005E76C (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     SelectWindowRgn @ 0x1C0061AA0 (SelectWindowRgn.c)
 *     SetRedirectedWindow @ 0x1C00620F4 (SetRedirectedWindow.c)
 *     ImeSetTopmost @ 0x1C0063C38 (ImeSetTopmost.c)
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     UnsetLayeredWindow @ 0x1C0066114 (UnsetLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C006F768 (SetWindowSubtreeCoreWindowStatus.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0078230 (xxxEndDeferWindowPosEx.c)
 *     xxxDispatchMessage @ 0x1C0078FD0 (xxxDispatchMessage.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     DestroyWindowSmIcon @ 0x1C008E0D8 (DestroyWindowSmIcon.c)
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     NtUserSetCoreWindow @ 0x1C00963F0 (NtUserSetCoreWindow.c)
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C009C580 (xxxMakeWindowForegroundWithState.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     SetVisible @ 0x1C00A0D80 (SetVisible.c)
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     SetWindowGroupBand @ 0x1C00A4DA4 (SetWindowGroupBand.c)
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     xxxDWP_DoNCActivate @ 0x1C00AD2F8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     SetMinimize @ 0x1C00B2954 (SetMinimize.c)
 *     xxxShowOwnedWindows @ 0x1C00B29B0 (xxxShowOwnedWindows.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00D7B74 (UnsetRedirectedWindow.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxSetShellWindow @ 0x1C00ED41C (xxxSetShellWindow.c)
 *     SetDialogPointer @ 0x1C00ED940 (SetDialogPointer.c)
 *     PatchThreadWindows @ 0x1C00EDDD0 (PatchThreadWindows.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00F9850 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     xxxEndPaint @ 0x1C0100BCC (xxxEndPaint.c)
 *     _SelectPalette @ 0x1C01045F0 (_SelectPalette.c)
 *     xxxSendEraseBkgnd @ 0x1C010BBF0 (xxxSendEraseBkgnd.c)
 *     xxxSimpleDoSyncPaint @ 0x1C010D750 (xxxSimpleDoSyncPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0112454 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C0112E90 (SfnPOWERBROADCAST.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C01141CC (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0114818 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C01148BC (xxxDWP_UpdateUIState.c)
 *     xxxGetUpdateRect @ 0x1C01173D4 (xxxGetUpdateRect.c)
 *     ClrFTrueVis @ 0x1C0118F3C (ClrFTrueVis.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C011B3C8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C011E944 (xxxCreateWindowSmIcon.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0121CAC (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     CreateSpb @ 0x1C012210C (CreateSpb.c)
 *     SetHungFlag @ 0x1C012635C (SetHungFlag.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0126500 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxAddFullScreen @ 0x1C0129B34 (xxxAddFullScreen.c)
 *     _RegisterShellHookWindow @ 0x1C012C4D0 (_RegisterShellHookWindow.c)
 *     _DeregisterShellHookWindow @ 0x1C012D320 (_DeregisterShellHookWindow.c)
 *     NtUserSetChildWindowNoActivate @ 0x1C012EA70 (NtUserSetChildWindowNoActivate.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     SetWindowState @ 0x1C0152310 (SetWindowState.c)
 *     ClearWindowState @ 0x1C0152370 (ClearWindowState.c)
 *     ?ClearWFBeingActivated@@YAXPEAUHWND__@@@Z @ 0x1C01CA910 (-ClearWFBeingActivated@@YAXPEAUHWND__@@@Z.c)
 *     ClrWFNoDwmNotify @ 0x1C01CE62C (ClrWFNoDwmNotify.c)
 *     SetMsgBox @ 0x1C01CE660 (SetMsgBox.c)
 *     xxxDisableImmersiveOwner @ 0x1C01FB834 (xxxDisableImmersiveOwner.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01FCEF8 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C02036C0 (xxxEndSetWindowArrangement.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C020E370 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxGetUpdateRgn @ 0x1C020E404 (xxxGetUpdateRgn.c)
 *     VerifyChildMenu @ 0x1C02245FC (VerifyChildMenu.c)
 *     xxxUpdateShadowZorder @ 0x1C0224E68 (xxxUpdateShadowZorder.c)
 *     xxxCompositedPaint @ 0x1C0225130 (xxxCompositedPaint.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022B3CC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022B5BC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C00965BC (DwmAsyncChildStyleChange.c)
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
