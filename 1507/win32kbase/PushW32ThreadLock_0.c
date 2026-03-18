/*
 * XREFs of PushW32ThreadLock_0 @ 0x1C0001C70
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C0008450 (NtUserSystemParametersInfo.c)
 *     xxxUserPowerCalloutWorker @ 0x1C00095A0 (xxxUserPowerCalloutWorker.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     NtUserSetSysColors @ 0x1C0017420 (NtUserSetSysColors.c)
 *     CreateProfileUserName @ 0x1C00178A0 (CreateProfileUserName.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@H@Z @ 0x1C001AE98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     NtUserQueryDisplayConfig @ 0x1C001E110 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00 (NtUserDisplayConfigGetDeviceInfo.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AB8D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1C00AD300 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PushW32ThreadLock_0()
{
  return PushW32ThreadLock();
}
