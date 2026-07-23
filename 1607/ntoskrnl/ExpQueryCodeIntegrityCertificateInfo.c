/*
 * XREFs of ExpQueryCodeIntegrityCertificateInfo @ 0x1406AB9A4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14015A6F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14015A730 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406235F8 (IoConvertFileHandleToKernelHandle.c)
 *     SeValidateFileAsImageType @ 0x14068CAA8 (SeValidateFileAsImageType.c)
 */

__int64 __fastcall ExpQueryCodeIntegrityCertificateInfo(void *a1)
{
  PVOID v1; // rsi
  int v2; // edi
  HANDLE FileHandle; // r14
  NTSTATUS v4; // eax
  PVOID Object; // [rsp+50h] [rbp-19h] BYREF
  LARGE_INTEGER FileSize; // [rsp+58h] [rbp-11h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-1h] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE SectionHandle; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  SectionHandle = 0LL;
  v1 = 0LL;
  BaseAddress = 0LL;
  v2 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1u, 0, &Handle);
  if ( v2 >= 0 )
  {
    FileHandle = Handle;
    v4 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v1 = Object;
    v2 = v4;
    if ( v4 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v2 = -1073741757;
      }
      else
      {
        v2 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v2 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v2 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v2 >= 0 )
          {
            ViewSize = FileSize.QuadPart;
            v2 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   &ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v2 < 0 )
            {
              BaseAddress = 0LL;
              goto LABEL_17;
            }
            v2 = SeValidateFileAsImageType();
            if ( v2 >= 0 )
              v2 = 0;
          }
          else
          {
            SectionHandle = 0LL;
          }
        }
      }
    }
    else
    {
      v1 = 0LL;
    }
  }
  else
  {
    FileHandle = 0LL;
  }
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_17:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v1 )
    ObfDereferenceObject(v1);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v2;
}
