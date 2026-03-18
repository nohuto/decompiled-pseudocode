/*
 * XREFs of DxEngLockShareSem @ 0x1C00B5FC0
 * Callers:
 *     ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00B5E70 (-W32kAcquireDynamicModeChangeLockShared@@YAXXZ.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C000B5B0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall DxEngLockShareSem(__int64 a1, __int64 a2, __int64 a3)
{
  PERESOURCE v3; // rdx

  v3 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    v3 = ghsemDynamicModeChange;
  }
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (__int64)v3, a3);
  return 1LL;
}
