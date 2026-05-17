/*
 * XREFs of NtQueryDirectoryFile @ 0x1800A6AC0
 * Callers:
 *     LdrpCnvrtShortToLongFileName @ 0x1800DC01C (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800E7250 (RtlpMUIEnumerateFolder.c)
 *     _ResFindFirstFileExW @ 0x180104314 (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x180104724 (_ResFindNextFileW.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryDirectoryFile()
{
  __int64 result; // rax

  result = 53LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
