/*
 * XREFs of PoDeletePowerRequest @ 0x1404E6058
 * Callers:
 *     PoUnregisterSystemState @ 0x14023AD7C (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x1400D0F98 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
