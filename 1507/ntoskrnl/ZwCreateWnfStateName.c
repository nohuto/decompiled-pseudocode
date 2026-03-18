/*
 * XREFs of ZwCreateWnfStateName @ 0x140180790
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x1404EB758 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
