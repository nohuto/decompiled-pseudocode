/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180082500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_1801421F0 == NtCurrentTeb()->ClientId.UniqueThread;
}
