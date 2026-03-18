/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAX@Z @ 0x1C00A49C4
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 * Callees:
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C00021E8 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C00021F0 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C00021F8 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0002200 (xxxRestoreCsrssThreadDesktop_0.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     xxxUserSetDisplayConfig @ 0x1C006DFB0 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00BB10C (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C00BBD58 (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00BCB2C (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1)
{
  __int64 result; // rax

  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    {
      xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x88Fu, 2u, 0, grpdeskRitInput, 0, 0LL);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
        xxxRestoreCsrssThreadDesktop_0();
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (result = xxxSetCsrssThreadDesktop_0(), (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1LL, 0LL);
    xxxUserSetDisplayConfig(0, 0LL, 0LL, 0LL, 0x80u, 1u, 0, grpdeskRitInput, 0, 0LL);
    goto LABEL_6;
  }
  return result;
}
