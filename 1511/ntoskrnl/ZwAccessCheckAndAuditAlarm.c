/*
 * XREFs of ZwAccessCheckAndAuditAlarm @ 0x140150B40
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1406D0F98 (VfZwAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAccessCheckAndAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        BOOLEAN ObjectCreation,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus,
        PBOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
