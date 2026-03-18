/*
 * XREFs of VerifierMmLockPagableDataSection @ 0x1406C0AC8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall VerifierMmLockPagableDataSection(PVOID AddressWithinSection)
{
  return pXdvMmLockPagableDataSection(AddressWithinSection);
}
