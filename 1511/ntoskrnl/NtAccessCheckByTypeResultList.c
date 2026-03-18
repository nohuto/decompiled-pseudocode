/*
 * XREFs of NtAccessCheckByTypeResultList @ 0x14020037C
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 */

NTSTATUS __stdcall NtAccessCheckByTypeResultList(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeLength,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (int)SecurityDescriptor,
           PrincipalSelfSid,
           (__int64)ClientToken,
           DesiredAccess,
           (__int64)ObjectTypeList,
           ObjectTypeLength,
           (__int128 *)GenericMapping,
           PrivilegeSet,
           (ULONG64)PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           1);
}
