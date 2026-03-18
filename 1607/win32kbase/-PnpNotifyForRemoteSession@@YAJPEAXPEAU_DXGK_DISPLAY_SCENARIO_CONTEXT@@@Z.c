/*
 * XREFs of ?PnpNotifyForRemoteSession@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B1F74
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     IsxxxSetCsrssThreadDesktopSupported_0 @ 0x1C0001DA8 (IsxxxSetCsrssThreadDesktopSupported_0.c)
 *     xxxSetCsrssThreadDesktop_0 @ 0x1C0001DB0 (xxxSetCsrssThreadDesktop_0.c)
 *     IsxxxRestoreCsrssThreadDesktopSupported_0 @ 0x1C0001DB8 (IsxxxRestoreCsrssThreadDesktopSupported_0.c)
 *     xxxRestoreCsrssThreadDesktop_0 @ 0x1C0001DC0 (xxxRestoreCsrssThreadDesktop_0.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00163D0 (DrvUpdateGraphicsDeviceList.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     DrvCleanupRemoteGraphicsDevices @ 0x1C00C8610 (DrvCleanupRemoteGraphicsDevices.c)
 *     DrvNeedToSwitchAdapterForRemoteSession @ 0x1C00C9290 (DrvNeedToSwitchAdapterForRemoteSession.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C00CA068 (DrvUpdateRemoteGraphicsDeviceList.c)
 */

__int64 __fastcall PnpNotifyForRemoteSession(void *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v4; // [rsp+20h] [rbp-58h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v5; // [rsp+28h] [rbp-50h]

  if ( !(unsigned int)DrvNeedToSwitchAdapterForRemoteSession(a1) )
    return 0LL;
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu )
  {
LABEL_6:
    DrvCleanupRemoteGraphicsDevices();
    DrvUpdateRemoteGraphicsDeviceList();
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = 2191;
      xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v4, v5, 0, grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
      if ( (int)IsxxxRestoreCsrssThreadDesktopSupported_0() >= 0 )
        xxxRestoreCsrssThreadDesktop_0();
    }
    return 0LL;
  }
  if ( (int)IsxxxSetCsrssThreadDesktopSupported_0() < 0 || (result = xxxSetCsrssThreadDesktop_0(), (int)result >= 0) )
  {
    DrvUpdateGraphicsDeviceList(1, 0);
    LODWORD(v5) = 1;
    LODWORD(v4) = 128;
    xxxUserSetDisplayConfig(0, 0LL, 0, 0LL, v4, v5, 0, grpdeskRitInput, 0, 0LL, 0LL, (__int64)a2);
    goto LABEL_6;
  }
  return result;
}
