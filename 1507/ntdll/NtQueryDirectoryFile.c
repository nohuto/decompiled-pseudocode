/*
 * XREFs of NtQueryDirectoryFile @ 0x180093C50
 * Callers:
 *     LdrpCnvrtShortToLongFileName @ 0x1800CB40C (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800D61B0 (RtlpMUIEnumerateFolder.c)
 *     _ResFindFirstFileExW @ 0x1800FA064 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x1800FA460 (_ResFindNextFileW.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryDirectoryFile()
{
  __int64 result; // rax

  result = 53LL;
  __asm { syscall; Low latency system call }
  return result;
}
