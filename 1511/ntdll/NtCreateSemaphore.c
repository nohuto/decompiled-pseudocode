/*
 * XREFs of NtCreateSemaphore @ 0x1800A66F0
 * Callers:
 *     RtlInitializeResource @ 0x180054E10 (RtlInitializeResource.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateSemaphore()
{
  __int64 result; // rax

  result = 178LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
