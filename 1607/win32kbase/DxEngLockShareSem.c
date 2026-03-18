/*
 * XREFs of DxEngLockShareSem @ 0x1C00C3B40
 * Callers:
 *     ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00C3AB0 (-W32kAcquireDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 DxEngLockShareSem()
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange");
  return 1LL;
}
