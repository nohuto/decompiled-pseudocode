/*
 * XREFs of VerifierMmLockPagableDataSection @ 0x140742308
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
