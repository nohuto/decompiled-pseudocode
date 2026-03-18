/*
 * XREFs of PsIsDiskCountersEnabled @ 0x14013446C
 * Callers:
 *     ExpPcwHostCallback @ 0x140527CF0 (ExpPcwHostCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 PsIsDiskCountersEnabled()
{
  return PsDisableDiskCounters == 0;
}
