/*
 * XREFs of ExGetSharedWaiterCount @ 0x14022D7E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall ExGetSharedWaiterCount(PERESOURCE Resource)
{
  return Resource->NumberOfSharedWaiters;
}
