/*
 * XREFs of NtCreateUserProcess @ 0x1800A6810
 * Callers:
 *     RtlpCreateUserProcess @ 0x180088688 (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateUserProcess()
{
  __int64 result; // rax

  result = 187LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
