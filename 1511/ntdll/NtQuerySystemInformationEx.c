/*
 * XREFs of NtQuerySystemInformationEx @ 0x1800A79F0
 * Callers:
 *     TppPoolUpdateNodeRelation @ 0x1800060D4 (TppPoolUpdateNodeRelation.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemInformationEx()
{
  __int64 result; // rax

  result = 330LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
