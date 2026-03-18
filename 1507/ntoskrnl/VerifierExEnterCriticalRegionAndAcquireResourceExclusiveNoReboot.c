/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot @ 0x14074C130
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
