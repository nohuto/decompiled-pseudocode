/*
 * XREFs of VerifierExSetTimerResolution @ 0x1406C0430
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
