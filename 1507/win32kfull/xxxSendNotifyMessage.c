/*
 * XREFs of xxxSendNotifyMessage @ 0x1C004DCF0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0006F50 (xxxSetModernAppWindow.c)
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     ?xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C004D7F0 (-xxxWrapSendNotifyMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C004E3B8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C007B50C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     xxxDWP_UpdateUIState @ 0x1C00EF9E4 (xxxDWP_UpdateUIState.c)
 *     xxxFullScreenCleanup @ 0x1C00F1500 (xxxFullScreenCleanup.c)
 *     xxxMNLoop @ 0x1C010B494 (xxxMNLoop.c)
 *     xxxSendMenuSelect @ 0x1C010DA10 (xxxSendMenuSelect.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0123930 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01247E4 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSetDeskWallpaper @ 0x1C0152250 (xxxSetDeskWallpaper.c)
 *     ?xxxNotifyShellOfWallpaperChange@@YAHXZ @ 0x1C01523A4 (-xxxNotifyShellOfWallpaperChange@@YAHXZ.c)
 *     _NotifyOverlayWindow @ 0x1C01D5F70 (_NotifyOverlayWindow.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxBroadcastPaletteChanged @ 0x1C0215704 (xxxBroadcastPaletteChanged.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C004DF0C (xxxSendMessageCallback.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C004E0FC (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C00FBC68 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
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
  _BYTE v12[32]; // [rsp+60h] [rbp-28h] BYREF

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
    PushW32ThreadLock(v11, v12, Win32FreePool);
    v5 = (struct _LARGE_STRING *)v10;
    v9 = 1;
  }
LABEL_8:
  xxxSystemBroadcastMessage(a2, a3, (__int64)v5, 1u, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock(v12);
  return 1LL;
}
