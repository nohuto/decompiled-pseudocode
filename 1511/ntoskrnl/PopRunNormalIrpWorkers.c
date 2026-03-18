/*
 * XREFs of PopRunNormalIrpWorkers @ 0x140118348
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14039DEDC (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

void PopRunNormalIrpWorkers()
{
  ExAcquireFastMutex(&PopIrpWorkerMutex);
  PopCreateIrpWorkerAllowed = 1;
  KeReleaseGuardedMutex(&PopIrpWorkerMutex);
}
