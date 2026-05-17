/*
 * XREFs of ZwAlpcQueryInformationMessage @ 0x180094160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwAlpcQueryInformationMessage()
{
  __int64 result; // rax

  result = 134LL;
  __asm { syscall; Low latency system call }
  return result;
}
