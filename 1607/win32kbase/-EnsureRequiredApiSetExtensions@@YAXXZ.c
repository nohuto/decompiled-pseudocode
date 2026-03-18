/*
 * XREFs of ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C0051A34
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     IsPushW32ThreadLockSupported_0 @ 0x1C0002678 (IsPushW32ThreadLockSupported_0.c)
 *     IsPopW32ThreadLockSupported_0 @ 0x1C0002680 (IsPopW32ThreadLockSupported_0.c)
 *     IsPopAndFreeW32ThreadLockSupported_0 @ 0x1C0002688 (IsPopAndFreeW32ThreadLockSupported_0.c)
 *     IsPopAndFreeAlwaysW32ThreadLockSupported_0 @ 0x1C0002690 (IsPopAndFreeAlwaysW32ThreadLockSupported_0.c)
 *     IsCleanupW32ThreadLocksSupported_0 @ 0x1C0002698 (IsCleanupW32ThreadLocksSupported_0.c)
 *     IsxxxUnlockMenuStateSupported_0 @ 0x1C00026A0 (IsxxxUnlockMenuStateSupported_0.c)
 *     IsHasHidTableSupported_0 @ 0x1C00026A8 (IsHasHidTableSupported_0.c)
 *     IsDbgLockQCursorSupported_0 @ 0x1C00026B0 (IsDbgLockQCursorSupported_0.c)
 *     IsxxxSystemParametersInfoSupported_0 @ 0x1C00026B8 (IsxxxSystemParametersInfoSupported_0.c)
 */

void EnsureRequiredApiSetExtensions(void)
{
  if ( (int)IsPushW32ThreadLockSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PushW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopW32ThreadLockSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopAndFreeW32ThreadLockSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeW32ThreadLock", 0LL, 0LL);
  if ( (int)IsPopAndFreeAlwaysW32ThreadLockSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeAlwaysW32ThreadLock", 0LL, 0LL);
  if ( (int)IsCleanupW32ThreadLocksSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"CleanupW32ThreadLocks", 0LL, 0LL);
  if ( (int)IsxxxUnlockMenuStateSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxUnlockMenuState", 0LL, 0LL);
  if ( (int)IsHasHidTableSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"HasHidTable", 0LL, 0LL);
  if ( (int)IsDbgLockQCursorSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"DbgLockQCursor", 0LL, 0LL);
  if ( (int)IsxxxSystemParametersInfoSupported_0() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxSystemParametersInfo", 0LL, 0LL);
}
