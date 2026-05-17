/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x180093D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwQueryDefaultUILanguage()
{
  __int64 result; // rax

  result = 68LL;
  __asm { syscall; Low latency system call }
  return result;
}
