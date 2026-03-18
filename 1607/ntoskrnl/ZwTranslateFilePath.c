/*
 * XREFs of ZwTranslateFilePath @ 0x14015D280
 * Callers:
 *     ExpSetBootEntry @ 0x1406B16BC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1E74 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x1406D58FC (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1406D67C8 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        ULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath, *(_QWORD *)&OutputType, OutputFilePath);
}
