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

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
