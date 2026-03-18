/*
 * XREFs of NtAccessCheck @ 0x14011985C
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 */

NTSTATUS __stdcall NtAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG ReturnLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (int)SecurityDescriptor,
           0LL,
           (__int64)ClientToken,
           DesiredAccess,
           0LL,
           0,
           (__int64)GenericMapping,
           PrivilegeSet,
           (ULONG64)ReturnLength,
           GrantedAccess,
           AccessStatus,
           0);
}
