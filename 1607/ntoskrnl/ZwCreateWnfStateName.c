/*
 * XREFs of ZwCreateWnfStateName @ 0x14015B480
 * Callers:
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048CE88 (PiUEventInitClientRegistrationContext.c)
 *     PopCreateNotificationName @ 0x140545198 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
