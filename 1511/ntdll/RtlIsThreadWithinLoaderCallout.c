/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180082500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return LdrpLoaderLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
