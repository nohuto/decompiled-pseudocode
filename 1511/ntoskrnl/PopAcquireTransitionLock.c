/*
 * XREFs of PopAcquireTransitionLock @ 0x1404F6A8C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

NTSTATUS PopAcquireTransitionLock()
{
  return KeWaitForSingleObject(&PopTransitionLock, WrExecutive, 0, 0, 0LL);
}
