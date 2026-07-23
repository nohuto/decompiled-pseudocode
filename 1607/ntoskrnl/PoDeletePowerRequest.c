/*
 * XREFs of PoDeletePowerRequest @ 0x1405013E4
 * Callers:
 *     PoUnregisterSystemState @ 0x140205730 (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x1400F8F40 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
