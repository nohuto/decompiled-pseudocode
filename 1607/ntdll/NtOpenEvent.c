/*
 * XREFs of NtOpenEvent @ 0x1800A6C20
 * Callers:
 *     WaitForWerSvc @ 0x180008B14 (WaitForWerSvc.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenEvent()
{
  __int64 result; // rax

  result = 64LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
