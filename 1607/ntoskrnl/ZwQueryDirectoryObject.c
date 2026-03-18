/*
 * XREFs of ZwQueryDirectoryObject @ 0x14015C2A0
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x140405564 (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ExpFindArcName @ 0x1406B0860 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x1406D646C (SiGetEfiSystemDevice.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(DirectoryHandle, Buffer, *(_QWORD *)&BufferLength);
}
