/*
 * XREFs of VerifierExGetExclusiveWaiterCount @ 0x1406C0380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall VerifierExGetExclusiveWaiterCount(PERESOURCE Resource)
{
  return pXdvExGetExclusiveWaiterCount(Resource);
}
