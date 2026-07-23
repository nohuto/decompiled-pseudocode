/*
 * XREFs of ExpQueryElamCertInfo @ 0x1406ABB78
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x14015A6F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14015A730 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SeRegisterElamCertResources @ 0x14054FB7C (SeRegisterElamCertResources.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1406235F8 (IoConvertFileHandleToKernelHandle.c)
 *     SeValidateFileAsImageType @ 0x14068CAA8 (SeValidateFileAsImageType.c)
 */

__int64 __fastcall ExpQueryElamCertInfo(void *a1)
{
  void *v1; // r15
  int v2; // esi
  HANDLE FileHandle; // r12
  PVOID v4; // r14
  SIZE_T QuadPart; // rbx
  PVOID PoolWithQuotaTag; // rax
  __int64 v7; // rdx
  HANDLE Handle; // [rsp+58h] [rbp-90h] BYREF
  PVOID Object; // [rsp+60h] [rbp-88h] BYREF
  LARGE_INTEGER FileSize; // [rsp+68h] [rbp-80h] BYREF
  ULONG_PTR ViewSize[3]; // [rsp+70h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp+10h] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+18h] BYREF
  PVOID v16; // [rsp+108h] [rbp+20h]

  v16 = 0LL;
  SectionHandle = 0LL;
  v1 = 0LL;
  BaseAddress = 0LL;
  v2 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1u, 0, &Handle);
  if ( v2 >= 0 )
  {
    FileHandle = Handle;
    v2 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v4 = Object;
    v16 = Object;
    if ( v2 >= 0 )
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
            QuadPart = FileSize.QuadPart;
            ViewSize[0] = FileSize.QuadPart;
            v2 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v2 >= 0 )
            {
              v2 = SeValidateFileAsImageType();
              if ( v2 >= 0 )
              {
                PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, QuadPart, 0x4D414C45u);
                v1 = PoolWithQuotaTag;
                ViewSize[2] = (ULONG_PTR)PoolWithQuotaTag;
                if ( PoolWithQuotaTag )
                {
                  memmove(PoolWithQuotaTag, BaseAddress, QuadPart);
                  v2 = SeValidateFileAsImageType();
                  if ( v2 >= 0 )
                  {
                    v2 = SeRegisterElamCertResources((ULONGLONG)v1, v7, 1);
                    if ( v2 >= 0 )
                      v2 = 0;
                  }
                }
                else
                {
                  v2 = -1073741670;
                }
              }
            }
            else
            {
              BaseAddress = 0LL;
            }
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
      v4 = 0LL;
    }
  }
  else
  {
    FileHandle = 0LL;
    v4 = v16;
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x4D414C45u);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v2;
}
