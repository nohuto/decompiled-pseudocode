/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180086C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return LdrpLoaderLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
