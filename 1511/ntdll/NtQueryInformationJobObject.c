/*
 * XREFs of NtQueryInformationJobObject @ 0x1800A7730
 * Callers:
 *     RtlGetCurrentServiceSessionId @ 0x1800801B0 (RtlGetCurrentServiceSessionId.c)
 *     TppJobpRundownJob @ 0x18008156C (TppJobpRundownJob.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationJobObject()
{
  __int64 result; // rax

  result = 308LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
