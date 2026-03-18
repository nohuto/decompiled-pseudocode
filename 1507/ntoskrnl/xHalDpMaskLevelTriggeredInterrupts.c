/*
 * XREFs of xHalDpMaskLevelTriggeredInterrupts @ 0x1403FB1C0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PnprEndMirroring @ 0x1403FFEA0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceProcessorDpc @ 0x140400A08 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x140400DAC (PnprQuiesceProcessors.c)
 *     PnprWakeProcessors @ 0x14040146C (PnprWakeProcessors.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall xHalDpMaskLevelTriggeredInterrupts(PVOID BaseAddress, SIZE_T NumberOfBytes, PVOID PageAddress)
{
  return -1073741637;
}
