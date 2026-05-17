/*
 * XREFs of NtQueryDirectoryFile @ 0x1800A5760
 * Callers:
 *     LdrpCnvrtShortToLongFileName @ 0x1800D3D74 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800DE020 (RtlpMUIEnumerateFolder.c)
 *     _ResFindFirstFileExW @ 0x1800F997C (_ResFindFirstFileExW.c)
 *     _ResFindNextFileW @ 0x1800F9D78 (_ResFindNextFileW.c)
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
