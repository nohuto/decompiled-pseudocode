/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180077190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return NtCurrentTeb() == (struct _TEB *)LdrpTopLevelDllBeingLoadedTeb;
}
