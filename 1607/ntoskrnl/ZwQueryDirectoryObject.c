/*
 * XREFs of ZwQueryDirectoryObject @ 0x14015C810
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x140404424 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpFindArcName @ 0x1406B0998 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1406D65A4 (SiGetEfiSystemDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG BufferLength,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
