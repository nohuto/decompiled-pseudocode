/*
 * XREFs of NtQueryDefaultLocale @ 0x180093A50
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryDefaultLocale()
{
  __int64 result; // rax

  result = 21LL;
  __asm { syscall; Low latency system call }
  return result;
}
