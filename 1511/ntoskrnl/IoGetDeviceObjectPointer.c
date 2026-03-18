/*
 * XREFs of IoGetDeviceObjectPointer @ 0x1404D8270
 * Callers:
 *     sub_140495970 @ 0x140495970 (sub_140495970.c)
 *     sub_1404964E4 @ 0x1404964E4 (sub_1404964E4.c)
 *     NtApphelpCacheControl @ 0x14049C958 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x1404D7FD4 (IoVolumeDeviceToDosName.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1404E7ED0 (IoVolumeDeviceNameToGuidPath.c)
 *     IopOpenSystemVariableDevice @ 0x1405FED88 (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140633814 (PopRegisterCoolingExtensionProtection.c)
 *     VerifierIoGetDeviceObjectPointer @ 0x1406C0774 (VerifierIoGetDeviceObjectPointer.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140750D8C (IopCreateArcNamesDisk.c)
 *     IopAssignBootDriveLetter @ 0x1407538E4 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140782D38 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140786C50 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x14078750C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407876E4 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+10h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = ObjectName;
  ObjectAttributes.Attributes = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x200;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 >= 0 )
  {
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 >= 0 )
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v8);
    }
    ZwClose(FileHandle);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v7;
}
