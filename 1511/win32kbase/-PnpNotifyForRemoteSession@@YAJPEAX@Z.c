/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A9454
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 * Callees:
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0002248 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C0002250 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C0002258 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0002260 (xxxRestoreCsrssThreadDesktop_0.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C001E650 (DrvUpdateGraphicsDeviceList.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00BC93C (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C00BD5C0 (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00BE368 (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1)
{
  __int64 result; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v2; // [rsp+20h] [rbp-48h]

  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    {
      LODWORD(v2) = 2191;
      xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v2, 2u, 0, grpdeskRitInput, 0, 0LL);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
        xxxRestoreCsrssThreadDesktop_0();
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (result = xxxSetCsrssThreadDesktop_0(), (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1, 0);
    LODWORD(v2) = 128;
    xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v2, 1u, 0, grpdeskRitInput, 0, 0LL);
    goto LABEL_6;
  }
  return result;
}
