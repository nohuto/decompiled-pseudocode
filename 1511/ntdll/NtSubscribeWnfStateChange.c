/*
 * XREFs of NtSubscribeWnfStateChange @ 0x1800A84D0
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x180004870 (RtlpRemoveUserSubFromNameSub.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180053924 (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     <none>
 */

__int64 NtSubscribeWnfStateChange()
{
  __int64 result; // rax

  result = 417LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
