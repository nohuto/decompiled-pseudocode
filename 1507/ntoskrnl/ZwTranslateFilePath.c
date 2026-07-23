/*
 * XREFs of ZwTranslateFilePath @ 0x1401824D0
 * Callers:
 *     ExpSetBootEntry @ 0x1406F235C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406F2BC8 (ExpSetDriverEntry.c)
 *     BiTranslateFilePath @ 0x140710C48 (BiTranslateFilePath.c)
 *     SiGetEspFromFirmware @ 0x140711B48 (SiGetEspFromFirmware.c)
 *     VfZwTranslateFilePath @ 0x14075840C (VfZwTranslateFilePath.c)
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
