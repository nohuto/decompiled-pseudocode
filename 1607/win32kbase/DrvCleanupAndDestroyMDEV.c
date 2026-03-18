/*
 * XREFs of DrvCleanupAndDestroyMDEV @ 0x1C006CE28
 * Callers:
 *     CleanupGDI @ 0x1C0055F7C (CleanupGDI.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     DrvDestroyMDEV @ 0x1C0069344 (DrvDestroyMDEV.c)
 *     MultiUserCleanupDCs @ 0x1C006CF54 (MultiUserCleanupDCs.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall DrvCleanupAndDestroyMDEV(__int64 a1)
{
  __int64 v2; // rdx

  MultiUserCleanupDCs();
  EngAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore(ghsemSprite);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  DrvDestroyMDEV(a1, v2);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemSprite);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock");
  GreReleaseSemaphoreInternal(ghsemGreLock);
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 12LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange");
  return GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDynamicModeChange);
}
