/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock_0 @ 0x1C0001D68
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C0008450 (NtUserSystemParametersInfo.c)
 *     xxxResetDisplayDevice @ 0x1C000A690 (xxxResetDisplayDevice.c)
 *     FreeProfileUserName @ 0x1C0017880 (FreeProfileUserName.c)
 *     NtUserQueryDisplayConfig @ 0x1C001E110 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001EA00 (NtUserDisplayConfigGetDeviceInfo.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C00AB8D0 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserSetDisplayConfig @ 0x1C00AD300 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 PopAndFreeAlwaysW32ThreadLock_0()
{
  return PopAndFreeAlwaysW32ThreadLock();
}
