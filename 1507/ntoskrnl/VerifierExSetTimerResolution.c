/*
 * XREFs of VerifierExSetTimerResolution @ 0x140741C24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall VerifierExSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution)
{
  return pXdvExSetTimerResolution(DesiredTime, SetResolution);
}
