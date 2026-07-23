/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x14022D7E4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  return Resource->NumberOfExclusiveWaiters;
}
