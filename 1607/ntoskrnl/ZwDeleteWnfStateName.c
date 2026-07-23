/*
 * XREFs of ZwDeleteWnfStateName @ 0x14015BB90
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140489DA4 (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PopFreeRegistration @ 0x140533F70 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
