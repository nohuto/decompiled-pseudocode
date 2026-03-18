/*
 * XREFs of PoDeletePowerRequest @ 0x14051E37C
 * Callers:
 *     PoUnregisterSystemState @ 0x140205904 (PoUnregisterSystemState.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 * Callees:
 *     PopPowerRequestCleanUp @ 0x1400FB1B4 (PopPowerRequestCleanUp.c)
 */

void __stdcall PoDeletePowerRequest(PVOID PowerRequest)
{
  PopPowerRequestCleanUp(PowerRequest);
  ObfDereferenceObject(PowerRequest);
}
