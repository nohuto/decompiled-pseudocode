/*
 * XREFs of xxxSendNotifyMessage @ 0x1C0078B80
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0007700 (xxxSetModernAppWindow.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00792B0 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008E100 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C00F579C (xxxDWP_UpdateUIState.c)
 *     xxxFullScreenCleanup @ 0x1C00F6450 (xxxFullScreenCleanup.c)
 *     xxxSetDeskWallpaper @ 0x1C010D0A0 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C010D1F4 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     xxxMNLoop @ 0x1C0137990 (xxxMNLoop.c)
 *     xxxSendMenuSelect @ 0x1C0139480 (xxxSendMenuSelect.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014C8A4 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C014D784 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     _NotifyOverlayWindow @ 0x1C01D7A90 (_NotifyOverlayWindow.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxBroadcastPaletteChanged @ 0x1C02155B0 (xxxBroadcastPaletteChanged.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     xxxSendMessageCallback @ 0x1C0078D9C (xxxSendMessageCallback.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C008D658 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C01077AC (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxSendNotifyMessage(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5)
{
  struct _LARGE_STRING *v5; // r10
  char v9; // di
  _BYTE v10[8]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  _QWORD v12[4]; // [rsp+60h] [rbp-28h] BYREF

  v5 = a4;
  if ( a1 != (struct tagWND *)-1LL )
    return xxxSendMessageCallback(a1, a2, a3, 0LL, 0LL, 0, a5, 0);
  v9 = 0;
  if ( a2 < 0x1A )
    return xxxSendMessageCallback(a1, a2, a3, 0LL, 0LL, 0, a5, 0);
  if ( a2 > 0x1B )
  {
    if ( a2 == 42 )
      goto LABEL_8;
    return xxxSendMessageCallback(a1, a2, a3, 0LL, 0LL, 0, a5, 0);
  }
  if ( a4 )
  {
    if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)v10, a4) )
      return 0LL;
    PushW32ThreadLock(v11, v12, (__int64)Win32FreePool);
    v5 = (struct _LARGE_STRING *)v10;
    v9 = 1;
  }
LABEL_8:
  xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1u, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v12);
  return 1LL;
}
