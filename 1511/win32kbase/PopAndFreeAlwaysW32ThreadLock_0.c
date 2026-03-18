/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D88
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1C004B650 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004C340 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserSystemParametersInfo @ 0x1C005EBE0 (NtUserSystemParametersInfo.c)
 *     xxxResetDisplayDevice @ 0x1C0069940 (xxxResetDisplayDevice.c)
 *     FreeProfileUserName @ 0x1C007A8C0 (FreeProfileUserName.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AFDD0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1C00B14D0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PopAndFreeAlwaysW32ThreadLock_0()
{
  return PopAndFreeAlwaysW32ThreadLock();
}
