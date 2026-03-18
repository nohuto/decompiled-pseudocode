/*
 * XREFs of GreUnlockVisRgnWithDmcLockAcquiredEx @ 0x1C00BDB70
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

__int64 __fastcall GreUnlockVisRgnWithDmcLockAcquiredEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8

  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDCVisRgn", (__int64)ghsemDCVisRgn, a3);
  GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemGreLock", (__int64)ghsemGreLock, v3);
  return GreReleaseSemaphoreInternal(ghsemGreLock);
}
