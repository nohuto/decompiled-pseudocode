/*
 * XREFs of ZwQueryWnfStateData @ 0x1800A7A30
 * Callers:
 *     RtlQueryWnfStateData @ 0x18007A910 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180082E70 (RtlQueryWnfStateDataWithExplicitScope.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 332LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
