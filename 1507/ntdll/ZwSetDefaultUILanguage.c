/*
 * XREFs of ZwSetDefaultUILanguage @ 0x180095030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetDefaultUILanguage()
{
  __int64 result; // rax

  result = 371LL;
  __asm { syscall; Low latency system call }
  return result;
}
