/*
 * XREFs of xHalTscSynchronization @ 0x1401BA878
 * Callers:
 *     PnprWakeProcessors @ 0x1403DCEB4 (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403DD5DC (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
