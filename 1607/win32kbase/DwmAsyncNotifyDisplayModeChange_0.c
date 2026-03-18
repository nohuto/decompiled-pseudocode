/*
 * XREFs of DwmAsyncNotifyDisplayModeChange_0 @ 0x1C0001D20
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 *     PowerOnMonitor @ 0x1C00700B0 (PowerOnMonitor.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00C3BB0 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 DwmAsyncNotifyDisplayModeChange_0()
{
  return DwmAsyncNotifyDisplayModeChange();
}
