/*
 * XREFs of ZwDuplicateToken @ 0x14015A4C0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400852B0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     RtlImpersonateSelfEx @ 0x1404DC178 (RtlImpersonateSelfEx.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(ExistingTokenHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
