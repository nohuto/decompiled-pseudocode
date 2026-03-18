/*
 * XREFs of VerifierExGetSharedWaiterCount @ 0x140741B7C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall VerifierExGetSharedWaiterCount(PERESOURCE Resource)
{
  return pXdvExGetSharedWaiterCount(Resource);
}
