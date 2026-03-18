/*
 * XREFs of SetOrClrWF @ 0x14004EE90
 * Callers:
 *     SfnPOWERBROADCAST @ 0x140006240 (SfnPOWERBROADCAST.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x14000FBF8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1400105EC (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x140010D38 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     SelectWindowRgn @ 0x140018490 (SelectWindowRgn.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     xxxGetUpdateRect @ 0x14002BE14 (xxxGetUpdateRect.c)
 *     xxxGetUpdateRgn @ 0x14002C328 (xxxGetUpdateRgn.c)
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxDWP_UpdateUIState @ 0x140041D68 (xxxDWP_UpdateUIState.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1400452D8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x14004643C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x140046E40 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x14004C92C (xxxSetWindowData.c)
 *     xxxDoPaint @ 0x14004F698 (xxxDoPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     DestroyWindowSmIcon @ 0x140094E54 (DestroyWindowSmIcon.c)
 *     CleanupWindowRedirection @ 0x1400A2EF0 (CleanupWindowRedirection.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1400A3250 (UnsetRedirectedWindow.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x1400A703C (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxCompositedPaint @ 0x14011E700 (xxxCompositedPaint.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x140121918 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     xxxSetScrollBar @ 0x140127BBC (xxxSetScrollBar.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     xxxEndPaint @ 0x14012B900 (xxxEndPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x14012C19C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x14012C244 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x14012C99C (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14012D750 (-xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     PatchThreadWindows @ 0x140149BF0 (PatchThreadWindows.c)
 *     xxxTrackCaptionButton @ 0x140149F00 (xxxTrackCaptionButton.c)
 *     xxxDCETrackCaptionButton @ 0x14014B2F4 (xxxDCETrackCaptionButton.c)
 *     xxxSetLayeredWindow @ 0x14014CE10 (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x14014DABC (SetRedirectedWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14015E3EC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x140165EB4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x140179CA8 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z @ 0x14017A5C0 (-zzzUpdateWindowCloak@@YAXPEAUtagWND@@W4CloakState@@1@Z.c)
 *     SetWindowGroupBand @ 0x14017A7AC (SetWindowGroupBand.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     NtUserSelectPalette @ 0x1401AEB50 (NtUserSelectPalette.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1401B8F18 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxShowOwnedWindows @ 0x1401C0368 (xxxShowOwnedWindows.c)
 *     ?CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z @ 0x1401C0B30 (-CleanupShellRelatedData@@YA_NPEAUtagWND@@@Z.c)
 *     _DeregisterShellHookWindow @ 0x1401C0E60 (_DeregisterShellHookWindow.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     _SelectPalette @ 0x1401D49D0 (_SelectPalette.c)
 *     CheckFullScreen @ 0x1401D954C (CheckFullScreen.c)
 *     _RegisterShellHookWindow @ 0x1401E52EC (_RegisterShellHookWindow.c)
 *     zzzDesktopSwitchSideEffects @ 0x1401F1F04 (zzzDesktopSwitchSideEffects.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z @ 0x1401F8550 (-xxxSwpActivate@@YAHPEAUtagWND@@W4SwpActivateOptions@@@Z.c)
 *     ClearWindowState @ 0x140207724 (ClearWindowState.c)
 *     SetWindowState @ 0x140207784 (SetWindowState.c)
 *     SetDialogPointer @ 0x140222198 (SetDialogPointer.c)
 *     ?SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z @ 0x140235DB8 (-SetMinimize@@YAXPEAUtagWND@@W4MinimizeCommand@@@Z.c)
 *     ?MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402386CC (-MarkWindowAsNotArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     NtUserRaiseLowerShellWindow @ 0x14024B1E0 (NtUserRaiseLowerShellWindow.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxUpdateShadowZorder @ 0x1402536E8 (xxxUpdateShadowZorder.c)
 *     NtUserSetMsgBox @ 0x140255DB0 (NtUserSetMsgBox.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x140268C0C (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?RegisterShell@@YA_NPEAUtagWND@@@Z @ 0x14027C828 (-RegisterShell@@YA_NPEAUtagWND@@@Z.c)
 *     _lambda_74fc1e22101fb496760f58e758191252_::_lambda_invoker_cdecl_ @ 0x14029D3C0 (_lambda_74fc1e22101fb496760f58e758191252_--_lambda_invoker_cdecl_.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1402C8A60 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetBridgeWindowChild @ 0x1402C8AE0 (xxxSetBridgeWindowChild.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402D87C4 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z @ 0x1402DAA3C (-ClearOverrideMargins@CWindowMarginProp@WindowMargins@@SAXPEAUtagWND@@@Z.c)
 *     ?SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1402DAB3C (-SetOverrideMargins@CWindowMarginProp@WindowMargins@@SAJPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     ?MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402E805C (-MarkWindowAsArranged@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402F4BF4 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1402F5658 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1402F857C (xxxEndScroll.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x14004F06C (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     DirtyVisRgnTrackers @ 0x14004F51C (DirtyVisRgnTrackers.c)
 */

LONG_PTR __fastcall SetOrClrWF(int a1, struct tagWND *a2, unsigned __int16 a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  _DWORD *v8; // rax
  unsigned __int64 v9; // rdx
  LONG_PTR result; // rax
  char v11; // r8
  _DWORD *v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  int v16; // ebx
  int v17; // r15d
  int v18; // esi
  __int64 v19; // rbp
  void *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+20h] [rbp-68h] BYREF
  __int16 v25; // [rsp+24h] [rbp-64h]
  __int128 v26; // [rsp+26h] [rbp-62h]
  __int128 v27; // [rsp+36h] [rbp-52h]
  __int16 v28; // [rsp+46h] [rbp-42h]
  int v29; // [rsp+48h] [rbp-40h]
  __int64 v30; // [rsp+4Ch] [rbp-3Ch]
  int v31; // [rsp+54h] [rbp-34h]
  unsigned int v32; // [rsp+58h] [rbp-30h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( a4 )
  {
    v8 = (_DWORD *)*((_QWORD *)a2 + 5);
    v5 = v8[7];
    v6 = v8[6];
    v7 = v8[58];
  }
  v9 = *((_QWORD *)a2 + 5) + ((unsigned __int64)a3 >> 8);
  result = *(unsigned __int8 *)(v9 + 16);
  if ( a1 )
    v11 = result | a3;
  else
    v11 = result & ~(_BYTE)a3;
  *(_BYTE *)(v9 + 16) = v11;
  if ( a4 )
  {
    result = IsWindowDesktopComposed(a2);
    if ( (_DWORD)result )
    {
      v12 = (_DWORD *)*((_QWORD *)a2 + 5);
      v13 = v12[7];
      v14 = v12[6];
      v15 = v12[58];
      v16 = v6 ^ v14;
      result = v7 ^ v15;
      v17 = v5 ^ v13;
      if ( v5 == v13 )
      {
        if ( v16 )
          goto LABEL_18;
        if ( !(_DWORD)result )
          return result;
      }
      if ( (v17 & 0xB9CF0000) != 0 )
      {
        v18 = -16;
        goto LABEL_14;
      }
LABEL_18:
      if ( (v16 & 0x4E27A9) != 0 )
      {
        v18 = -20;
        v13 = v14;
      }
      else
      {
        if ( (result & 0x372C0) == 0 )
        {
LABEL_16:
          if ( (v17 & 0x1C40000) != 0 || (v16 & 0x200A0381) != 0 )
            return WindowMargins::CheckForChanges(a2, 1LL);
          return result;
        }
        v18 = -268435456;
        v13 = v15;
      }
LABEL_14:
      DirtyVisRgnTrackers(a2);
      v19 = *(_QWORD *)a2;
      v20 = (void *)ReferenceDwmApiPort();
      result = W32GetSessionState(v22, v21, v23);
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 96) + 4648LL));
      if ( v20 )
      {
        v28 = 0;
        v24 = 3932180;
        v29 = 1073741846;
        v25 = 0x8000;
        v30 = v19;
        v26 = 0LL;
        v31 = v18;
        v27 = 0LL;
        v32 = v13;
        LpcRequestPort(v20, &v24);
        result = ObfDereferenceObject(v20);
      }
      goto LABEL_16;
    }
  }
  return result;
}
