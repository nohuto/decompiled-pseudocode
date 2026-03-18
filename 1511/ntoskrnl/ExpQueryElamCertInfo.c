/*
 * XREFs of ExpQueryElamCertInfo @ 0x14066B1D0
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x140150B20 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140150B60 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x140150F60 (ZwCreateSection.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeRegisterElamCertResources @ 0x140521C08 (SeRegisterElamCertResources.c)
 *     IoConvertFileHandleToKernelHandle @ 0x1405F9BCC (IoConvertFileHandleToKernelHandle.c)
 *     SeValidateFileAsImageType @ 0x14064D3B8 (SeValidateFileAsImageType.c)
 */

__int64 __fastcall ExpQueryElamCertInfo(void *a1)
{
  void *v1; // r15
  int v2; // esi
  HANDLE FileHandle; // r12
  PVOID v4; // r14
  LARGE_INTEGER v5; // rbx
  PVOID PoolWithQuotaTag; // rax
  __int64 v7; // rdx
  HANDLE Handle; // [rsp+58h] [rbp-90h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-78h] BYREF
  ULONG_PTR ViewSize; // [rsp+80h] [rbp-68h] BYREF
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
    v2 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, Object, 0LL);
    v4 = Object[0];
    v16 = Object[0];
    if ( v2 >= 0 )
    {
      if ( *((_BYTE *)Object[0] + 78) || *((_BYTE *)Object[0] + 75) )
      {
        v2 = -1073741757;
      }
      else
      {
        v2 = FsRtlGetFileSize((PFILE_OBJECT)Object[0], &FileSize);
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
            v5 = FileSize;
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
            if ( v2 >= 0 )
            {
              v2 = SeValidateFileAsImageType();
              if ( v2 >= 0 )
              {
                PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v5.QuadPart, 0x4D414C45u);
                v1 = PoolWithQuotaTag;
                Object[1] = PoolWithQuotaTag;
                if ( PoolWithQuotaTag )
                {
                  memmove(PoolWithQuotaTag, BaseAddress, v5.QuadPart);
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
