/*
 * XREFs of RIMGetDeviceObjectPointer @ 0x1C000F23C
 * Callers:
 *     RIMGetDeviceParent @ 0x1C0008CB4 (RIMGetDeviceParent.c)
 *     RIMUpdateMonitorQuirk @ 0x1C0009A78 (RIMUpdateMonitorQuirk.c)
 *     RIMCreateHidDesc @ 0x1C000F564 (RIMCreateHidDesc.c)
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C007B340 (RIMSetDeviceIdleTimeout.c)
 *     RIMConfigurePointerDevice @ 0x1C007BDB4 (RIMConfigurePointerDevice.c)
 *     RIMDoOnPowerNotification @ 0x1C0086068 (RIMDoOnPowerNotification.c)
 *     rimConfigurationChange @ 0x1C00C439C (rimConfigurationChange.c)
 *     RIMSendPTPLatencyMgtDeviceRequest @ 0x1C00D28AC (RIMSendPTPLatencyMgtDeviceRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall RIMGetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        ULONG ShareAccess,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  NTSTATUS v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  void *FileHandle; // [rsp+30h] [rbp-49h] BYREF
  PVOID Object; // [rsp+38h] [rbp-41h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _DWORD v14[2]; // [rsp+80h] [rbp+7h] BYREF
  __int16 v15; // [rsp+88h] [rbp+Fh]

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  v14[0] = 12;
  v14[1] = 2;
  v15 = 257;
  ObjectAttributes.SecurityQualityOfService = v14;
  v7 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, ShareAccess, 0x40u);
  if ( v7 >= 0 )
  {
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 < 0 )
    {
      ZwClose(FileHandle);
    }
    else
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *a5 = Object;
      *a6 = IoGetRelatedDeviceObject(v8);
      *a4 = FileHandle;
    }
  }
  return (unsigned int)v7;
}
