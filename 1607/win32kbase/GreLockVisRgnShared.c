/*
 * XREFs of GreLockVisRgnShared @ 0x1C0076310
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C00740F0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 GreLockVisRgnShared()
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange");
  if ( ghsemGreLock )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemGreLock");
  if ( ghsemDCVisRgn )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn);
  return EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDCVisRgn");
}
