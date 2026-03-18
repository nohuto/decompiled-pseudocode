/*
 * XREFs of xHalTscSynchronization @ 0x1401E48A0
 * Callers:
 *     PnprWakeProcessors @ 0x14040146C (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140401918 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
