/*
 * XREFs of PopReleaseTransitionLock @ 0x1404F5984
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x14039DEDC (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

LONG PopReleaseTransitionLock()
{
  return KeSetEvent(&PopTransitionLock, 0, 0);
}
