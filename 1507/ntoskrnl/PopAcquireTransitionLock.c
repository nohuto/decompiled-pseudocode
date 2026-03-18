/*
 * XREFs of PopAcquireTransitionLock @ 0x1405649F8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS PopAcquireTransitionLock()
{
  return KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
}
