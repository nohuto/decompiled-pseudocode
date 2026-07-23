/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1405036FC
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400F8F40 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400F96D4 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400F9750 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400F988C (PoSetPowerRequestInternal.c)
 * Callees:
 *     <none>
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock(&PopPowerRequestLock);
}
