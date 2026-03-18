/*
 * XREFs of IoGetDeviceObjectPointer @ 0x1405083E8
 * Callers:
 *     NtApphelpCacheControl @ 0x1404B93AC (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToDosName @ 0x14050814C (IoVolumeDeviceToDosName.c)
 *     sub_14051D780 @ 0x14051D780 (sub_14051D780.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14051DCA4 (ExpHwidSendSynchronousIrpToDevice.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D194 (IoVolumeDeviceNameToGuidPath.c)
 *     IopOpenSystemVariableDevice @ 0x140628DBC (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BD0C (PopRegisterCoolingExtensionProtection.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x1407985F0 (IopCreateArcNamesDisk.c)
 *     IopAssignBootDriveLetter @ 0x140798A1C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002E0E0 (IoGetRelatedDeviceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A2E0 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall IoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _FILE_OBJECT *v11; // rcx
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
  v8 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v8 >= 0 )
  {
    v8 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v8 >= 0 )
    {
      v11 = (struct _FILE_OBJECT *)Object;
      *FileObject = (PFILE_OBJECT)Object;
      *DeviceObject = IoGetRelatedDeviceObject(v11);
    }
    ZwClose(FileHandle);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v9, v10);
  return v8;
}
