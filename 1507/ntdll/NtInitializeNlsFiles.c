/*
 * XREFs of NtInitializeNlsFiles @ 0x1800947F0
 * Callers:
 *     RtlGetLocaleFileMappingAddress @ 0x180048E90 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

__int64 NtInitializeNlsFiles()
{
  __int64 result; // rax

  result = 239LL;
  __asm { syscall; Low latency system call }
  return result;
}
