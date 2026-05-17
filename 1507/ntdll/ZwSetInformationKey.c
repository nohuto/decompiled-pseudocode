/*
 * XREFs of ZwSetInformationKey @ 0x1800950C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationKey()
{
  __int64 result; // rax

  result = 380LL;
  __asm { syscall; Low latency system call }
  return result;
}
