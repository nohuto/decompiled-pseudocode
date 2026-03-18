/*
 * XREFs of PopRunNormalIrpWorkers @ 0x140112944
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403C95C8 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 */

void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 1;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
