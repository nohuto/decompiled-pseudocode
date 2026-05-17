/*
 * XREFs of NtOpenThreadToken @ 0x1800A5540
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     RtlpTpRevertCapture @ 0x180008A70 (RtlpTpRevertCapture.c)
 *     RtlAdjustPrivilege @ 0x180078F20 (RtlAdjustPrivilege.c)
 *     BaseGetNamedObjectDirectory @ 0x1800F8580 (BaseGetNamedObjectDirectory.c)
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
