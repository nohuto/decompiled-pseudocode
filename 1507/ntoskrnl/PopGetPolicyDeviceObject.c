/*
 * XREFs of PopGetPolicyDeviceObject @ 0x1405C355C
 * Callers:
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateFile @ 0x14017FA90 (ZwCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

PDEVICE_OBJECT __fastcall PopGetPolicyDeviceObject(UNICODE_STRING *a1, _QWORD *a2)
{
  PDEVICE_OBJECT v2; // rdi
  NTSTATUS v4; // eax
  PVOID v5; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+C8h] [rbp+67h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+77h] BYREF

  v2 = 0LL;
  ObjectAttributes.ObjectName = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateFile(&FileHandle, 0x1F01FFu, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 3u, 1u, 0, 0LL, 0) >= 0 )
  {
    v4 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v5 = Object;
    if ( v4 >= 0 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      v2 = RelatedDeviceObject;
      if ( RelatedDeviceObject )
      {
        ObfReferenceObject(RelatedDeviceObject);
        *a2 = v5;
        v5 = 0LL;
      }
      if ( v5 )
        ObfDereferenceObject(v5);
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return v2;
}
