/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x14022D9B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  return Resource->NumberOfExclusiveWaiters;
}
