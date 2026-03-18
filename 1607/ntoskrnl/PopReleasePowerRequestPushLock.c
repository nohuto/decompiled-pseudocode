/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x140520694
 * Callers:
 *     PopPowerRequestCleanUp @ 0x1400FB1B4 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x1400FB954 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PoClearPowerRequestInternal @ 0x1400FB9D0 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400FBB0C (PoSetPowerRequestInternal.c)
 * Callees:
 *     <none>
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock(&PopPowerRequestLock);
}
