/*
 * XREFs of ZwCreateToken @ 0x1401806B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateToken(
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
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
