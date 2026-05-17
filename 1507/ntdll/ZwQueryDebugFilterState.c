/*
 * XREFs of ZwQueryDebugFilterState @ 0x180094BA0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x180010048 (vDbgPrintExWithPrefixInternal.c)
 *     DbgQueryDebugFilterState @ 0x1800CAD00 (DbgQueryDebugFilterState.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryDebugFilterState()
{
  __int64 result; // rax

  result = 298LL;
  __asm { syscall; Low latency system call }
  return result;
}
