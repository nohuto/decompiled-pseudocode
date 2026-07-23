/*
 * XREFs of ZwTranslateFilePath @ 0x14015D7F0
 * Callers:
 *     ExpSetBootEntry @ 0x1406B17F4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1FAC (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x1406D5A34 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x1406D6900 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        ULONG OutputFilePathLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(InputFilePath);
}
