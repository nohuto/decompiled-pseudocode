/*
 * XREFs of NtDuplicateToken @ 0x1800A6C60
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDE0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011030 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     RtlpTpInitializeData @ 0x180064CF4 (RtlpTpInitializeData.c)
 *     RtlImpersonateSelfEx @ 0x18007D5B0 (RtlImpersonateSelfEx.c)
 *     TppCritSetThread @ 0x1800810C0 (TppCritSetThread.c)
 *     RtlCheckSandboxedToken @ 0x1800D4640 (RtlCheckSandboxedToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE Type,
        PHANDLE NewTokenHandle)
{
  NTSTATUS result; // eax

  result = 66;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
