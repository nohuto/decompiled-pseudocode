/*
 * XREFs of NtQueryDefaultLocale @ 0x1800A66C0
 * Callers:
 *     LdrResFallbackLangList @ 0x18000FD94 (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x1800303A8 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryDefaultLocale()
{
  __int64 result; // rax

  result = 21LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
