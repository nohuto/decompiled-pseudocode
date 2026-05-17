/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1800A6D40
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x1800530C0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079468 (RtlpCreateNewDirectoryReference.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x180086DE0 (RtlpQueryDiskSpacePolicyByHandle.c)
 *     LdrpCheckAppDirType @ 0x1800D1E74 (LdrpCheckAppDirType.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVolumeInformationFile()
{
  __int64 result; // rax

  result = 73LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
