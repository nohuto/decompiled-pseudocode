/*
 * XREFs of VerifierKeSetSystemGroupAffinityThread @ 0x1406C0A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall VerifierKeSetSystemGroupAffinityThread(PGROUP_AFFINITY Affinity, PGROUP_AFFINITY PreviousAffinity)
{
  pXdvKeSetSystemGroupAffinityThread(Affinity, PreviousAffinity);
}
