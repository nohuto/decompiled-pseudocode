/*
 * XREFs of ZwDuplicateToken @ 0x14015AA30
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140086B9C (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x140210438 (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1404BF77C (RtlImpersonateSelfEx.c)
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
