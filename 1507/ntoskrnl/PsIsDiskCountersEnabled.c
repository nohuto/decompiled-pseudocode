/*
 * XREFs of PsIsDiskCountersEnabled @ 0x14015EE24
 * Callers:
 *     ExpPcwHostCallback @ 0x140594C04 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
