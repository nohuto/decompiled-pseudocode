/*
 * XREFs of EnterPowerCrit @ 0x1C0070770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterPowerCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
}
