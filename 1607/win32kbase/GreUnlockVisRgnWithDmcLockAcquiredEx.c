/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C00CB000
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockVisRgnWithDmcLockAcquiredEx()
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn");
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock");
  return GreReleaseSemaphoreInternal(ghsemGreLock);
}
