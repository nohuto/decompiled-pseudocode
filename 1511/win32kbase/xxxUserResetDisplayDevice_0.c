/*
 * XREFs of xxxUserResetDisplayDevice_0 @ 0x1C0002278
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0021358 (UpdateGraphicsDeviceList.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C006D7B0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 xxxUserResetDisplayDevice_0()
{
  return xxxUserResetDisplayDevice();
}
