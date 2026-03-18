/*
 * XREFs of PoUnregisterSystemState @ 0x140205904
 * Callers:
 *     <none>
 * Callees:
 *     PoDeletePowerRequest @ 0x14051E37C (PoDeletePowerRequest.c)
 */

void __stdcall PoUnregisterSystemState(PVOID StateHandle)
{
  if ( StateHandle )
    PoDeletePowerRequest(StateHandle);
}
