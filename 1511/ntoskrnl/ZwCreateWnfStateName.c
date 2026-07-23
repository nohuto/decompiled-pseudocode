/*
 * XREFs of ZwCreateWnfStateName @ 0x140151DE0
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1403BFF58 (PiUEventInitClientRegistrationContext.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     PopCreateNotificationName @ 0x1404C3F44 (PopCreateNotificationName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
