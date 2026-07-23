/*
 * XREFs of PoUnregisterSystemState @ 0x140205730
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x1405013E4 (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
