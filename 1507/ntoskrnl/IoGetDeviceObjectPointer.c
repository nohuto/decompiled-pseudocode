/*
 * XREFs of IoGetDeviceObjectPointer @ 0x14040D788
 * Callers:
 *     sub_14040A8FC @ 0x14040A8FC (sub_14040A8FC.c)
 *     sub_14040C7E8 @ 0x14040C7E8 (sub_14040C7E8.c)
 *     IoVolumeDeviceToDosName @ 0x14040D36C (IoVolumeDeviceToDosName.c)
 *     NtApphelpCacheControl @ 0x14040D608 (NtApphelpCacheControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14056254C (IoVolumeDeviceToGuidPath.c)
 *     IopOpenSystemVariableDevice @ 0x1406798D0 (IopOpenSystemVariableDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406B2BE4 (PopRegisterCoolingExtensionProtection.c)
 *     VerifierIoGetDeviceObjectPointer @ 0x140741F68 (VerifierIoGetDeviceObjectPointer.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x1407B6124 (IopCreateArcNamesDisk.c)
 *     IopAssignBootDriveLetter @ 0x1407B6270 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
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
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  HANDLE FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = ObjectName;
  ObjectAttributes.Attributes = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x200;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = ZwOpenFile(&FileHandle, DesiredAccess, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
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
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
