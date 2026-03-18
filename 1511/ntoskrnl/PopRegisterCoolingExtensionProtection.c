/*
 * XREFs of PopRegisterCoolingExtensionProtection @ 0x140633814
 * Callers:
 *     PopAssociateThermalRequest @ 0x14054C3E0 (PopAssociateThermalRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x140098860 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 *     IoGetDeviceObjectPointer @ 0x1404D8270 (IoGetDeviceObjectPointer.c)
 *     IoRegisterPlugPlayNotification @ 0x1404E90BC (IoRegisterPlugPlayNotification.c)
 */

__int64 __fastcall PopRegisterCoolingExtensionProtection(PDEVICE_OBJECT *Context)
{
  PVOID *NotificationEntry; // r15
  NTSTATUS DeviceProperty; // ebx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rdi
  PVOID PoolWithTag; // rbp
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+8h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+18h] BYREF

  FileObject = 0LL;
  NotificationEntry = (PVOID *)(Context + 7);
  if ( Context[7] )
  {
    return 0;
  }
  else
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context[6]);
    if ( IoGetDeviceProperty(DeviceAttachmentBaseRef, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x6C6F4350u);
      if ( PoolWithTag )
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRef,
                           DevicePropertyPhysicalDeviceObjectName,
                           BufferLength,
                           PoolWithTag,
                           &BufferLength);
        if ( DeviceProperty >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
          DeviceProperty = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
          if ( DeviceProperty >= 0 )
            DeviceProperty = IoRegisterPlugPlayNotification(
                               EventCategoryTargetDeviceChange,
                               0,
                               FileObject,
                               DeviceObject->DriverObject,
                               (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopCoolingExtensionPnpNotification,
                               Context,
                               NotificationEntry);
          if ( FileObject )
            ObfDereferenceObject(FileObject);
        }
        ExFreePoolWithTag(PoolWithTag, 0x6C6F4350u);
      }
      else
      {
        DeviceProperty = -1073741670;
      }
    }
    else
    {
      DeviceProperty = -1073741823;
    }
    if ( DeviceAttachmentBaseRef )
      ObfDereferenceObject(DeviceAttachmentBaseRef);
  }
  return (unsigned int)DeviceProperty;
}
