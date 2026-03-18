/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot @ 0x1406C9560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot(PERESOURCE Resource)
{
  return pXdvExEnterCriticalRegionAndAcquireResourceShared(Resource);
}
