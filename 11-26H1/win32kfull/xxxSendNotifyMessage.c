/*
 * XREFs of xxxSendNotifyMessage @ 0x140044970
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140004EE4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxDWP_UpdateUIState @ 0x140041D68 (xxxDWP_UpdateUIState.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140044890 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     xxxSendMenuSelect @ 0x14012018C (xxxSendMenuSelect.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x14013D4C4 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     xxxSetDeskWallpaper @ 0x14013D534 (xxxSetDeskWallpaper.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x14015B5D0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401AF5E0 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1401B2498 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSetModernAppWindow @ 0x1401C9464 (xxxSetModernAppWindow.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1402060B0 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     xxxMetricsRecalc @ 0x14023D32C (xxxMetricsRecalc.c)
 *     xxxBroadcastPaletteChanged @ 0x14028AEA0 (xxxBroadcastPaletteChanged.c)
 *     _NotifyOverlayWindow @ 0x1402AD3C0 (_NotifyOverlayWindow.c)
 *     NtUserNavigateFocus @ 0x1402B88D0 (NtUserNavigateFocus.c)
 * Callees:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140004B14 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z @ 0x1402915C8 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  ULONG_PTR *v5; // r10
  __int64 v9; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+60h] [rbp-20h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h]

  v5 = (ULONG_PTR *)a4;
  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
  v13 = -1LL;
  v11 = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  *(_OWORD *)BugCheckParameter3 = 0LL;
  if ( a2 != 26 && a2 != 27 )
  {
    if ( a2 != 42 )
      return xxxSendMessageCallback(a1, a2, 0LL, 0LL, 0, a5, 0);
    goto LABEL_8;
  }
  if ( !a4 )
  {
LABEL_8:
    xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1u, 0LL, a5, 0);
    if ( v13 != -1 )
      PopAndFreeW32ThreadLock(BugCheckParameter2);
    return 1LL;
  }
  if ( (unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)BugCheckParameter3, a4) )
  {
    PtiCurrent(v9);
    Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
      (ULONG_PTR)BugCheckParameter2,
      BugCheckParameter3[1]);
    v5 = BugCheckParameter3;
    goto LABEL_8;
  }
  if ( v13 != -1 )
    PopAndFreeW32ThreadLock(BugCheckParameter2);
  return 0LL;
}
