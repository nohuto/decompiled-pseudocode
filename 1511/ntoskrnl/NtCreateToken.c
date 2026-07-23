/*
 * XREFs of NtCreateToken @ 0x140653400
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTokenEx @ 0x1403C35AC (NtCreateTokenEx.c)
 */

NTSTATUS __stdcall NtCreateToken(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE TokenType,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER TokenUser,
        PTOKEN_GROUPS TokenGroups,
        PTOKEN_PRIVILEGES TokenPrivileges,
        PTOKEN_OWNER TokenOwner,
        PTOKEN_PRIMARY_GROUP TokenPrimaryGroup,
        PTOKEN_DEFAULT_DACL TokenDefaultDacl,
        PTOKEN_SOURCE TokenSource)
{
  return NtCreateTokenEx(
           TokenHandle,
           DesiredAccess,
           ObjectAttributes,
           TokenType,
           AuthenticationId,
           ExpirationTime,
           TokenUser,
           TokenGroups,
           TokenPrivileges,
           0LL,
           0LL,
           0LL,
           0LL,
           TokenOwner,
           TokenPrimaryGroup,
           TokenDefaultDacl,
           TokenSource);
}
