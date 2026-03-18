/*
 * XREFs of SmKmStoreFileOpenVolume @ 0x14065BB3C
 * Callers:
 *     SmKmEtwAppendProductName @ 0x1402084C8 (SmKmEtwAppendProductName.c)
 *     SmcCacheStart @ 0x140658E6C (SmcCacheStart.c)
 *     SmKmStoreFileCreate @ 0x14065AEBC (SmKmStoreFileCreate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwCreateFile @ 0x1401510C0 (ZwCreateFile.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 */

__int64 __fastcall SmKmStoreFileOpenVolume(__int64 a1, _QWORD *a2, PDEVICE_OBJECT *a3)
{
  BOOLEAN v6; // si
  int v7; // edi
  NTSTATUS v8; // eax
  PVOID v9; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v17[528]; // [rsp+C0h] [rbp-40h] BYREF

  FileHandle = 0LL;
  v6 = IoSetThreadHardErrorMode(0);
  v7 = ObQueryNameStringMode(*(char **)(a1 + 8), (__int64)v17, 0x208u, &v14, 0);
  if ( v7 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v7 = ZwCreateFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x20u, 0LL, 0);
    if ( v7 >= 0 )
    {
      v8 = ObReferenceObjectByHandle(FileHandle, 3u, 0LL, 0, &Object, 0LL);
      v9 = Object;
      v7 = v8;
      if ( v8 >= 0 )
      {
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        *a2 = v9;
        v9 = 0LL;
        *a3 = RelatedDeviceObject;
      }
      if ( v9 )
        ObfDereferenceObject(v9);
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)v7;
}
