/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180086C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_18014C578 == NtCurrentTeb()->ClientId.UniqueThread;
}
