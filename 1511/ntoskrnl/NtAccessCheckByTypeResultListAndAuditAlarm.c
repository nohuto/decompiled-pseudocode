/*
 * XREFs of NtAccessCheckByTypeResultListAndAuditAlarm @ 0x140651F14
 * Callers:
 *     <none>
 * Callees:
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 */

NTSTATUS __stdcall NtAccessCheckByTypeResultListAndAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        ACCESS_MASK DesiredAccess,
        AUDIT_EVENT_TYPE AuditType,
        ULONG Flags,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeListLength,
        PGENERIC_MAPPING GenericMapping,
        BOOLEAN ObjectCreation,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus,
        PBOOLEAN GenerateOnClose)
{
  return SepAccessCheckAndAuditAlarm(
           (__int64)SubsystemName,
           (__int64)HandleId,
           0LL,
           (__int64)ObjectTypeName,
           (__int64)ObjectName,
           (__int64)SecurityDescriptor,
           (unsigned __int8 *)PrincipalSelfSid,
           DesiredAccess,
           AuditType,
           Flags,
           (unsigned __int64)ObjectTypeList,
           ObjectTypeListLength,
           (__int64)GenericMapping,
           (int *)GrantedAccess,
           AccessStatus,
           GenerateOnClose,
           1);
}
