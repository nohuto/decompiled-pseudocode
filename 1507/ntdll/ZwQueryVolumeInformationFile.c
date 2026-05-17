/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x180093D90
 * Callers:
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18000387C (RtlpQueryDiskSpacePolicyByHandle.c)
 *     EtwpFinalizeLogFileHeader @ 0x180009C70 (EtwpFinalizeLogFileHeader.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x18006FDF8 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800BDC24 (LdrpCheckAppDirType.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVolumeInformationFile()
{
  __int64 result; // rax

  result = 73LL;
  __asm { syscall; Low latency system call }
  return result;
}
