/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180077190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return NtCurrentTeb() == (struct _TEB *)LdrpTopLevelDllBeingLoadedTeb;
}
