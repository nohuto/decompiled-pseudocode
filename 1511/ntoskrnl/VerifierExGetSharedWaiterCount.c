/*
 * XREFs of VerifierExGetSharedWaiterCount @ 0x1406C0388
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
