/*
 * XREFs of NtQueryDefaultLocale @ 0x180093A50
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrResFallbackLangList @ 0x18001BC14 (LdrResFallbackLangList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  NTSTATUS result; // eax

  result = 21;
  __asm { syscall; Low latency system call }
  return result;
}
