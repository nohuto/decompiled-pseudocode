/*
 * XREFs of NtDuplicateToken @ 0x1800A5900
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     RtlpTpInitializeData @ 0x180008AF0 (RtlpTpInitializeData.c)
 *     TppCritSetThread @ 0x18000A380 (TppCritSetThread.c)
 *     RtlCheckTokenCapability @ 0x18005E0B0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlImpersonateSelfEx @ 0x180078BF0 (RtlImpersonateSelfEx.c)
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
