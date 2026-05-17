/*
 * XREFs of ZwCreateFile @ 0x1800A6EC0
 * Callers:
 *     LdrpMapResourceFile @ 0x18000E970 (LdrpMapResourceFile.c)
 *     EtwpCreateFile @ 0x180054F48 (EtwpCreateFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18006A95C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180086C84 (RtlpQueryDiskSpacePolicy.c)
 *     RtlpGetVolumeHandle @ 0x18008B8C0 (RtlpGetVolumeHandle.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008C150 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E5150 (RtlCreateBootStatusDataFile.c)
 *     _ResCreateFile @ 0x180103B80 (_ResCreateFile.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
