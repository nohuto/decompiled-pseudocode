/*
 * XREFs of PsIsDiskCountersEnabled @ 0x14013CB70
 * Callers:
 *     ExpPcwHostCallback @ 0x140553BC0 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
