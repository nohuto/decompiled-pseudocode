/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x140263AD0
 * Callers:
 *     VerifierExGetExclusiveWaiterCount @ 0x140741B74 (VerifierExGetExclusiveWaiterCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  return Resource->NumberOfExclusiveWaiters;
}
