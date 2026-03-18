/*
 * XREFs of PoUnregisterSystemState @ 0x1401ECAC0
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x140455180 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
