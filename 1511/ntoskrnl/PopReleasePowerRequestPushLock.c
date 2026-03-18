/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x140455D44
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140097640 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140097768 (PoSetPowerRequestInternal.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14009896C (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140098AE4 (PopPowerRequestCleanUp.c)
 * Callees:
 *     <none>
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((signed __int64 *)&PopPowerRequestLock);
}
