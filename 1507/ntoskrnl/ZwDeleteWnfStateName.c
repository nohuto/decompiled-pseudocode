/*
 * XREFs of ZwDeleteWnfStateName @ 0x140180930
 * Callers:
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140417154 (PiUEventFreeClientRegistrationContext.c)
 *     PopFreeRegistration @ 0x140568E5C (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
