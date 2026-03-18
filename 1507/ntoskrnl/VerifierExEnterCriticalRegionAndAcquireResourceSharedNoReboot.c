/*
 * XREFs of VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot @ 0x14074C180
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
