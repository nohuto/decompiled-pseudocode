/*
 * XREFs of HvlIsCoreSharingPossible @ 0x1401BAB14
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D90FC (KeOptimizeSpecCtrlSettings.c)
 *     VslConnectSwInterrupt @ 0x14079873C (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

bool HvlIsCoreSharingPossible()
{
  return (HvlpFlags & 2) == 0 || (HvlpRootFlags & 0x200) != 0 || HvlpSchedulerType != 1 && HvlpSchedulerType != 3;
}
