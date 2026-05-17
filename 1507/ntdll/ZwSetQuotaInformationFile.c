/*
 * XREFs of ZwSetQuotaInformationFile @ 0x1800951A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetQuotaInformationFile()
{
  __int64 result; // rax

  result = 394LL;
  __asm { syscall; Low latency system call }
  return result;
}
