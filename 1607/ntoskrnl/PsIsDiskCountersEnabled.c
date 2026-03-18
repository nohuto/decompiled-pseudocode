/*
 * XREFs of PsIsDiskCountersEnabled @ 0x14013C600
 * Callers:
 *     ExpPcwHostCallback @ 0x140553680 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
