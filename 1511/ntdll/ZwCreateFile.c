/*
 * XREFs of ZwCreateFile @ 0x1800A5B60
 * Callers:
 *     LdrpMapResourceFile @ 0x18003CD20 (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800430D0 (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpCreateFile @ 0x1800470F0 (EtwpCreateFile.c)
 *     RtlpQueryDiskSpacePolicy @ 0x180083740 (RtlpQueryDiskSpacePolicy.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087F00 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpGetVolumeHandle @ 0x180089364 (RtlpGetVolumeHandle.c)
 *     LdrpResMapFile @ 0x1800D4D7C (LdrpResMapFile.c)
 *     RtlCreateBootStatusDataFile @ 0x1800E2A00 (RtlCreateBootStatusDataFile.c)
 *     _ResCreateFile @ 0x1800F91EC (_ResCreateFile.c)
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
