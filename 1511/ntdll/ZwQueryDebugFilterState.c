/*
 * XREFs of ZwQueryDebugFilterState @ 0x1800A7650
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x180049998 (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x1800D37B0 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDebugFilterState()
{
  __int64 result; // rax

  result = 301LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
