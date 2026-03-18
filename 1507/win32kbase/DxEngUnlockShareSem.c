/*
 * XREFs of DxEngUnlockShareSem @ 0x1C00B6000
 * Callers:
 *     ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C00B5FB0 (-W32kReleaseDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

__int64 __fastcall DxEngUnlockShareSem(__int64 a1, __int64 a2, __int64 a3)
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, a3);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return 1LL;
}
