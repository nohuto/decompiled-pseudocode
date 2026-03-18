/*
 * XREFs of ZwDeleteWnfStateName @ 0x140151F80
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1403C10AC (PiUEventFreeClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     PopFreeRegistration @ 0x1404F4A74 (PopFreeRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
