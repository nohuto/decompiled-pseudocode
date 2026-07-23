/*
 * XREFs of PopAcquireTransitionLock @ 0x140534EB8
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

NTSTATUS PopAcquireTransitionLock()
{
  return KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
}
