/*
 * XREFs of ExGetSharedWaiterCount @ 0x140213DAC
 * Callers:
 *     VerifierExGetSharedWaiterCount @ 0x1406C0388 (VerifierExGetSharedWaiterCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall ExGetSharedWaiterCount(PERESOURCE Resource)
{
  return Resource->NumberOfSharedWaiters;
}
