/*
 * XREFs of ViDeadlockDetectionUnlock @ 0x1406CD3D8
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14020BF7C (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14020C0D4 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x1406CBE0C (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x1406CBE74 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1406CC308 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x1406CD358 (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x1406CD3F4 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1406CE024 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     <none>
 */

void __fastcall ViDeadlockDetectionUnlock(int a1)
{
  if ( a1 )
  {
    ViDeadlockDatabaseOwner = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ViDeadlockDatabaseLock);
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ViDeadlockDatabaseLock);
  }
}
