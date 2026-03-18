/*
 * XREFs of PopReleaseTransitionLock @ 0x140564A68
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     <none>
 */

LONG PopReleaseTransitionLock()
{
  return KeSetEvent(&PopTransitionLock, 0, 0);
}
