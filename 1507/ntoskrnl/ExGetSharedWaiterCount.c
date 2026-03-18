/*
 * XREFs of ExGetSharedWaiterCount @ 0x140263AD4
 * Callers:
 *     VerifierExGetSharedWaiterCount @ 0x140741B7C (VerifierExGetSharedWaiterCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall ExGetSharedWaiterCount(PERESOURCE Resource)
{
  return Resource->NumberOfSharedWaiters;
}
