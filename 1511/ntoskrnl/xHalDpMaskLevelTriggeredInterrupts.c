/*
 * XREFs of xHalDpMaskLevelTriggeredInterrupts @ 0x1403AAAA4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PnprEndMirroring @ 0x1403AF8B4 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1403AF974 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceProcessorDpc @ 0x1403B041C (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x1403B079C (PnprQuiesceProcessors.c)
 *     PnprWakeProcessors @ 0x1403B0D90 (PnprWakeProcessors.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall xHalDpMaskLevelTriggeredInterrupts(PVOID BaseAddress, SIZE_T NumberOfBytes, PVOID PageAddress)
{
  return -1073741637;
}
