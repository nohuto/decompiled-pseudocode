/*
 * XREFs of ZwQueryWnfStateData @ 0x1800A8E10
 * Callers:
 *     RtlQueryWnfStateData @ 0x180080DE0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180086F70 (RtlQueryWnfStateDataWithExplicitScope.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 336LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
