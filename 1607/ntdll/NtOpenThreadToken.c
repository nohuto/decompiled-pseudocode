/*
 * XREFs of NtOpenThreadToken @ 0x1800A68A0
 * Callers:
 *     RtlpTpRevertCapture @ 0x180064D78 (RtlpTpRevertCapture.c)
 *     RtlAdjustPrivilege @ 0x18007B990 (RtlAdjustPrivilege.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 *     BaseGetNamedObjectDirectory @ 0x180102F14 (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenThreadToken()
{
  __int64 result; // rax

  result = 36LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
