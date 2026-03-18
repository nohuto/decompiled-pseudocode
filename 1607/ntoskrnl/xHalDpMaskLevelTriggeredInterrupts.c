/*
 * XREFs of xHalDpMaskLevelTriggeredInterrupts @ 0x1403D6AF0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PnprEndMirroring @ 0x1403DB9D0 (PnprEndMirroring.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceProcessorDpc @ 0x1403DC538 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x1403DC8B8 (PnprQuiesceProcessors.c)
 *     PnprWakeProcessors @ 0x1403DCEB4 (PnprWakeProcessors.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall xHalDpMaskLevelTriggeredInterrupts(PVOID BaseAddress, SIZE_T NumberOfBytes, PVOID PageAddress)
{
  return -1073741637;
}
