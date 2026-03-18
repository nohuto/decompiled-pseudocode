/*
 * XREFs of PushW32ThreadLock_0 @ 0x1C0001D98
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1C0049810 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0049F30 (NtUserDisplayConfigGetDeviceInfo.c)
 *     CreateProfileUserName @ 0x1C0054DA0 (CreateProfileUserName.c)
 *     xxxResetDisplayDevice @ 0x1C005C4B0 (xxxResetDisplayDevice.c)
 *     NtUserSetSysColors @ 0x1C005CBB0 (NtUserSetSysColors.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0061D38 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserPowerCalloutWorker @ 0x1C006F920 (xxxUserPowerCalloutWorker.c)
 *     NtUserSystemParametersInfo @ 0x1C0072430 (NtUserSystemParametersInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00B9A80 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1C00BB200 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PushW32ThreadLock_0()
{
  return PushW32ThreadLock();
}
