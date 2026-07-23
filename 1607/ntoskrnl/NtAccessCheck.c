/*
 * XREFs of NtAccessCheck @ 0x14009DA84
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
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
           ClientToken,
           DesiredAccess,
           0LL,
           0,
           (__int128 *)GenericMapping,
           PrivilegeSet,
           ReturnLength,
           GrantedAccess,
           AccessStatus,
           0);
}
