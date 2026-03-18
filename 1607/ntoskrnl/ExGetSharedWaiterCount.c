/*
 * XREFs of ExGetSharedWaiterCount @ 0x14022D9BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall ExGetSharedWaiterCount(PERESOURCE Resource)
{
  return Resource->NumberOfSharedWaiters;
}
