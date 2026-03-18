/*
 * XREFs of ZwCreateWnfStateName @ 0x140151DE0
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1403BFF58 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1404C3F44 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
