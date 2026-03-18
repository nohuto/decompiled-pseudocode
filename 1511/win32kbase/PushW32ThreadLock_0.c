/*
 * XREFs of PushW32ThreadLock_0 @ 0x1C0001C90
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C000BDB0 (xxxUserPowerCalloutWorker.c)
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1C004B650 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004C340 (NtUserDisplayConfigGetDeviceInfo.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C0052BB0 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     NtUserSystemParametersInfo @ 0x1C005EBE0 (NtUserSystemParametersInfo.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     NtUserSetSysColors @ 0x1C007A510 (NtUserSetSysColors.c)
 *     CreateProfileUserName @ 0x1C007A8E0 (CreateProfileUserName.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AFDD0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1C00B14D0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PushW32ThreadLock_0()
{
  return PushW32ThreadLock();
}
