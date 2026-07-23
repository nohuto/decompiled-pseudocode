/*
 * XREFs of LdrpMapResourceFile @ 0x14014A234
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F8494 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateSection @ 0x14015AB30 (ZwCreateSection.c)
 *     ZwCreateFile @ 0x14015AC90 (ZwCreateFile.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSystemSpace @ 0x140495FBC (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, UNICODE_STRING *a2, HANDLE *a3, _QWORD *a4, ULONG_PTR *a5)
{
  PVOID v8; // rdi
  PIMAGE_NT_HEADERS v9; // rax
  int v10; // esi
  ULONG v11; // esi
  NTSTATUS v12; // ebx
  PVOID v13; // rsi
  NTSTATUS v14; // eax
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // ecx
  ULONG_PTR *v17; // rcx
  HANDLE SectionHandle; // [rsp+60h] [rbp-41h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp-39h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+70h] [rbp-31h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-21h] BYREF
  PVOID Object; // [rsp+B0h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+100h] [rbp+5Fh] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  MappedBase = 0LL;
  v8 = 0LL;
  ViewSize = 0LL;
  if ( a1 && a2 && a4 )
  {
    v9 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( v9 )
    {
      v10 = v9->OptionalHeader.MajorSubsystemVersion < 6u ? 6 : 0;
      ObjectAttributes.Length = 48;
      v11 = v10 + 2;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwCreateFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
      if ( v12 >= 0 )
      {
        memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        MaximumSize.QuadPart = 0LL;
        v12 = ZwCreateSection(&SectionHandle, 0xF0005u, &ObjectAttributes, &MaximumSize, v11, 0x8000000u, FileHandle);
        if ( v12 >= 0 )
        {
          v12 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
          ZwClose(SectionHandle);
          v13 = Object;
          if ( v12 >= 0 )
          {
            v14 = MmMapViewInSystemSpace(Object, &MappedBase, &ViewSize);
            v8 = MappedBase;
            v12 = v14;
            if ( v14 >= 0 )
            {
              v15 = RtlImageNtHeader(MappedBase);
              v16 = v12;
              if ( !v15 )
                v16 = -1073741701;
              v12 = v16;
            }
          }
          if ( v13 )
            ObfDereferenceObjectWithTag(v13, 0x746C6644u);
          if ( v12 < 0 )
          {
            if ( v8 )
              MmUnmapViewInSystemSpace(v8);
          }
          else
          {
            v17 = a5;
            *a4 = v8;
            if ( v17 )
              *v17 = ViewSize;
            if ( a3 )
            {
              *a3 = FileHandle;
              return (unsigned int)v12;
            }
          }
        }
      }
    }
    else
    {
      v12 = -1073741701;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
    return (unsigned int)v12;
  }
  return 3221225485LL;
}
