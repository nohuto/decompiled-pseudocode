/*
 * XREFs of ZwAlpcQueryInformation @ 0x180094150
 * Callers:
 *     TpWaitForAlpcCompletion @ 0x18007A5B0 (TpWaitForAlpcCompletion.c)
 * Callees:
 *     <none>
 */

__int64 ZwAlpcQueryInformation()
{
  __int64 result; // rax

  result = 133LL;
  __asm { syscall; Low latency system call }
  return result;
}
