/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C00BF2E0
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockVisRgnWithDmcLockAcquiredEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, a3);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v3);
  return GreReleaseSemaphoreInternal(ghsemGreLock);
}
