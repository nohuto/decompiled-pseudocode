/*
 * XREFs of HvlIsCoreSharingPossible @ 0x1401BA9F8
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 *     VslConnectSwInterrupt @ 0x14079873C (VslConnectSwInterrupt.c)
 * Callees:
 *     <none>
 */

bool HvlIsCoreSharingPossible()
{
  return (HvlpFlags & 2) == 0 || (HvlpRootFlags & 0x200) != 0 || HvlpSchedulerType != 1 && HvlpSchedulerType != 3;
}
