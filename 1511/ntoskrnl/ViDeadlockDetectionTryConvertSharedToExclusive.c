/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14020BF50
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14020BF7C (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14020C0D4 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockBeforeCallDriver @ 0x1406CBE74 (VfDeadlockBeforeCallDriver.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x1400D9E90 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL ViDeadlockDetectionTryConvertSharedToExclusive()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&ViDeadlockDatabaseLock);
  if ( result )
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return result;
}
