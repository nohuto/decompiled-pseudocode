/*
 * XREFs of ZwDuplicateToken @ 0x14017F830
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400083BC (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1405486E8 (RtlImpersonateSelfEx.c)
 *     VfZwDuplicateToken @ 0x140755DD4 (VfZwDuplicateToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle);
}
