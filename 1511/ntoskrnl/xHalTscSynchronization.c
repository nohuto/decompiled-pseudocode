/*
 * XREFs of xHalTscSynchronization @ 0x1401AE028
 * Callers:
 *     PnprWakeProcessors @ 0x1403B0D90 (PnprWakeProcessors.c)
 *     KiInitializeDynamicProcessorDpc @ 0x1403B10E8 (KiInitializeDynamicProcessorDpc.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

char xHalTscSynchronization()
{
  return KeAdjustInterruptTime(0LL, 1);
}
