/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x14020C210
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

__int64 ViRaiseIrqlToDpcLevel()
{
  __int64 result; // rax

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result < 2u )
    __writecr8(2uLL);
  return result;
}
