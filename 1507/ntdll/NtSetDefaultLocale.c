/*
 * XREFs of NtSetDefaultLocale @ 0x180095020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetDefaultLocale()
{
  __int64 result; // rax

  result = 370LL;
  __asm { syscall; Low latency system call }
  return result;
}
