/*
 * XREFs of ExGetExclusiveWaiterCount @ 0x140213DA8
 * Callers:
 *     VerifierExGetExclusiveWaiterCount @ 0x1406C0380 (VerifierExGetExclusiveWaiterCount.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall ExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  return Resource->NumberOfExclusiveWaiters;
}
