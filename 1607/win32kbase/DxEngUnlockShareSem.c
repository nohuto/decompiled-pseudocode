/*
 * XREFs of DxEngUnlockShareSem @ 0x1C00C3B80
 * Callers:
 *     ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C00C3B30 (-W32kReleaseDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 DxEngUnlockShareSem()
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
  return 1LL;
}
