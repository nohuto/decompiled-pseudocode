/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot @ 0x1406C9510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot(PERESOURCE Resource)
{
  return pXdvExEnterCriticalRegionAndAcquireResourceExclusive(Resource);
}
