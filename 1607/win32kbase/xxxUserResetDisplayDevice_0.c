/*
 * XREFs of xxxUserResetDisplayDevice_0 @ 0x1C0001DD8
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C001611C (UpdateGraphicsDeviceList.c)
 *     xxxUserSetDisplayConfig @ 0x1C005D2A0 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 xxxUserResetDisplayDevice_0()
{
  return xxxUserResetDisplayDevice();
}
