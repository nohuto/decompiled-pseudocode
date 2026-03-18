/*
 * XREFs of PoUnregisterSystemState @ 0x14023AD7C
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x1404E6058 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
