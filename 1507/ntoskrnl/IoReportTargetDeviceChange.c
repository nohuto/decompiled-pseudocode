/*
 * XREFs of IoReportTargetDeviceChange @ 0x14055F648
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x14040F42C (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     VerifierIoReportTargetDeviceChange @ 0x140742028 (VerifierIoReportTargetDeviceChange.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     PnpSetCustomTargetEvent @ 0x140461C58 (PnpSetCustomTargetEvent.c)
 */

NTSTATUS __stdcall IoReportTargetDeviceChange(PDEVICE_OBJECT PhysicalDeviceObject, PVOID NotificationStructure)
{
  _DWORD *DeviceNode; // rcx
  GUID *v5; // rdi
  unsigned __int16 v6; // ax
  int v7; // ecx
  NTSTATUS result; // eax
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v11; // rcx
  unsigned __int16 *v12; // rdi
  _WORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF
  NTSTATUS v17; // [rsp+70h] [rbp+8h] BYREF

  if ( !PhysicalDeviceObject )
    goto LABEL_29;
  DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)PhysicalDeviceObject, PhysicalDeviceObject->Size);
    DriverObject = PhysicalDeviceObject->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
      p_DriverName = &PhysicalDeviceObject->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock(
          (int)PhysicalDeviceObject->DriverObject->DriverName.Buffer,
          PhysicalDeviceObject->DriverObject->DriverName.Length);
      }
    }
    v11 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode;
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      IoAddTriageDumpDataBlock((int)v11, 712);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((int)v12, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), *v12);
      }
      v13 = (char *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 56;
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((int)v13, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 28));
      }
      v14 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
      if ( v14 && *(_WORD *)(v14 + 56) )
      {
        IoAddTriageDumpDataBlock(v14 + 56, 2);
        v15 = *((_QWORD *)PhysicalDeviceObject->DeviceObjectExtension->DeviceNode + 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 64), *(unsigned __int16 *)(v15 + 56));
      }
    }
LABEL_29:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)PhysicalDeviceObject, 0LL, 0LL);
  }
  v5 = (GUID *)((char *)NotificationStructure + 4);
  if ( (char *)NotificationStructure + 4 == (char *)&GUID_TARGET_DEVICE_QUERY_REMOVE )
    return -1073741808;
  if ( RtlCompareMemory(v5, &GUID_TARGET_DEVICE_QUERY_REMOVE, 0x10uLL) == 16 )
    return -1073741808;
  if ( v5 == &GUID_TARGET_DEVICE_REMOVE_CANCELLED )
    return -1073741808;
  if ( RtlCompareMemory(v5, &GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0x10uLL) == 16 )
    return -1073741808;
  if ( v5 == &GUID_TARGET_DEVICE_REMOVE_COMPLETE )
    return -1073741808;
  if ( RtlCompareMemory(v5, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0x10uLL) == 16 )
    return -1073741808;
  v6 = *((_WORD *)NotificationStructure + 1);
  if ( v6 < 0x24u )
    return -1073741808;
  v7 = *((_DWORD *)NotificationStructure + 8);
  if ( v7 != -1 && v7 > v6 - 36 )
    return -1073741808;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = PnpSetCustomTargetEvent(
             PhysicalDeviceObject,
             (__int64)&Event,
             &v17,
             0LL,
             0LL,
             (unsigned __int16 *)NotificationStructure);
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return v17;
  }
  return result;
}
