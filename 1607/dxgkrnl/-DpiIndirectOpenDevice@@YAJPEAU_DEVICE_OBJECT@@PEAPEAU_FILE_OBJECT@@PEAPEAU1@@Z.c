/*
 * XREFs of ?DpiIndirectOpenDevice@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_FILE_OBJECT@@PEAPEAU1@@Z @ 0x1C019AC00
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C019B1A0 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiIndirectOpenDevice(
        struct _DEVICE_OBJECT *a1,
        struct _FILE_OBJECT **a2,
        struct _DEVICE_OBJECT **a3)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _UNICODE_STRING *p_Name; // rbx
  PDEVICE_OBJECT v7; // rsi
  NTSTATUS v8; // eax
  NTSTATUS DeviceObjectPointer; // edi
  struct _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  ULONG ReturnLength; // [rsp+58h] [rbp+20h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a1);
  p_Name = 0LL;
  ReturnLength = 0;
  v7 = DeviceAttachmentBaseRef;
  v8 = ObQueryNameString(DeviceAttachmentBaseRef, 0LL, 0, &ReturnLength);
  DeviceObjectPointer = v8;
  if ( v8 >= 0 )
  {
    DeviceObjectPointer = -1073741275;
    goto LABEL_9;
  }
  if ( v8 == -1073741820 )
  {
    PoolWithTag = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x74727044u);
    p_Name = &PoolWithTag->Name;
    if ( !PoolWithTag )
    {
      DeviceObjectPointer = -1073741801;
      goto LABEL_9;
    }
    DeviceObjectPointer = ObQueryNameString(v7, PoolWithTag, ReturnLength, &ReturnLength);
  }
  if ( DeviceObjectPointer >= 0 )
    DeviceObjectPointer = IoGetDeviceObjectPointer(p_Name, 0x80000000, a2, a3);
LABEL_9:
  ObfDereferenceObject(v7);
  if ( p_Name )
    ExFreePoolWithTag(p_Name, 0);
  return (unsigned int)DeviceObjectPointer;
}
