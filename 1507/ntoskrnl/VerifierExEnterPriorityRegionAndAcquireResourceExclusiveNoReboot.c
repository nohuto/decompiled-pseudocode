/*
 * XREFs of VerifierExEnterPriorityRegionAndAcquireResourceExclusiveNoReboot @ 0x14074C1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __fastcall VerifierExEnterPriorityRegionAndAcquireResourceExclusiveNoReboot(struct _ERESOURCE *a1)
{
  return pXdvExEnterPriorityRegionAndAcquireResourceExclusive(a1);
}
