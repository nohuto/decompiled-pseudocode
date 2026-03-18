/*
 * XREFs of EnterPowerCrit @ 0x1C00B2ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterPowerCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
}
