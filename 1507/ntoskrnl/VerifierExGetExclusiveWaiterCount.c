/*
 * XREFs of VerifierExGetExclusiveWaiterCount @ 0x140741B74
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
