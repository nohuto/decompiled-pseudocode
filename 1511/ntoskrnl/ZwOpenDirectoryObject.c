/*
 * XREFs of ZwOpenDirectoryObject @ 0x140151120
 * Callers:
 *     IopGetLegacyVetoListDrivers @ 0x14046F6CC (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObInitServerSilo @ 0x140526E34 (ObInitServerSilo.c)
 *     ObSetSiloRootDirectoryByPointer @ 0x140630B4C (ObSetSiloRootDirectoryByPointer.c)
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 *     ExpFindArcName @ 0x14066DB48 (ExpFindArcName.c)
 *     SiGetEfiSystemDevice @ 0x140691D48 (SiGetEfiSystemDevice.c)
 *     VfZwOpenDirectoryObject @ 0x1406D28E0 (VfZwOpenDirectoryObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DirectoryHandle);
}
