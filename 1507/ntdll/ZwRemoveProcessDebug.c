/*
 * XREFs of ZwRemoveProcessDebug @ 0x180094E70
 * Callers:
 *     DbgUiStopDebugging @ 0x1800BC350 (DbgUiStopDebugging.c)
 * Callees:
 *     <none>
 */

__int64 ZwRemoveProcessDebug()
{
  __int64 result; // rax

  result = 343LL;
  __asm { syscall; Low latency system call }
  return result;
}
