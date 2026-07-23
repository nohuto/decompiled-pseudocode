/*
 * XREFs of ZwQueryDirectoryObject @ 0x140181550
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x1404D0148 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpFindArcName @ 0x1406F1454 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140711860 (SiGetEfiSystemDevice.c)
 *     VfZwQueryDirectoryObject @ 0x140757000 (VfZwQueryDirectoryObject.c)
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
