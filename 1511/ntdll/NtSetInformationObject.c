/*
 * XREFs of NtSetInformationObject @ 0x1800A5C30
 * Callers:
 *     TppCritSetThread @ 0x18000A380 (TppCritSetThread.c)
 *     sub_1800C550A @ 0x1800C550A (sub_1800C550A.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationObject()
{
  __int64 result; // rax

  result = 92LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
