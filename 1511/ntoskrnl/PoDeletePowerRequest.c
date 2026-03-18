/*
 * XREFs of PoDeletePowerRequest @ 0x140455180
 * Callers:
 *     PoUnregisterSystemState @ 0x1401ECAC0 (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x140098AE4 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
