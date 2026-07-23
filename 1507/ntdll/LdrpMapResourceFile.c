/*
 * XREFs of LdrpMapResourceFile @ 0x180054440
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001C5F0 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180025B00 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, _UNICODE_STRING *a2, char a3, HANDLE *a4, PVOID *a5, ULONG_PTR *a6)
{
  PVOID *v9; // r15
  PIMAGE_NT_HEADERS v10; // rax
  ULONG v11; // edi
  NTSTATUS v12; // ebx
  unsigned __int16 *Buffer; // rsi
  HANDLE ContainingDirectory; // rax
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // ecx
  ULONG_PTR *v17; // rcx
  _UNICODE_STRING v19; // xmm0
  HANDLE SectionHandle; // [rsp+60h] [rbp-69h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-61h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-59h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp-51h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+80h] [rbp-49h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+90h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+120h] [rbp+57h] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = a5;
      if ( a5 )
      {
        v10 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
        if ( !v10 )
        {
          v12 = -1073741701;
          goto LABEL_25;
        }
        v11 = v10->OptionalHeader.MajorSubsystemVersion < 6u ? 8 : 2;
        if ( a3 )
        {
          v19 = *a2;
          Buffer = 0LL;
          RelativeName.ContainingDirectory = 0LL;
          ObjectAttributes.Length = 48;
          NtFileName = v19;
        }
        else
        {
          v12 = RtlDosPathNameToRelativeNtPathName_U_WithStatus(a2->Buffer, &NtFileName, 0LL, &RelativeName);
          if ( v12 < 0 )
            goto LABEL_25;
          Buffer = NtFileName.Buffer;
          if ( RelativeName.RelativeName.Length )
          {
            ContainingDirectory = RelativeName.ContainingDirectory;
            NtFileName = RelativeName.RelativeName;
          }
          else
          {
            ContainingDirectory = 0LL;
            RelativeName.ContainingDirectory = 0LL;
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = ContainingDirectory;
          if ( Buffer )
          {
LABEL_10:
            ObjectAttributes.Attributes = 64;
            ObjectAttributes.ObjectName = &NtFileName;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v12 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
            if ( Buffer )
            {
              RtlReleaseRelativeName(&RelativeName);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
            }
            if ( v12 >= 0 )
            {
              v12 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, v11, 0x8000000u, FileHandle);
              if ( v12 >= 0 )
              {
                SectionOffset.QuadPart = 0LL;
                v12 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        0LL,
                        &SectionOffset,
                        &ViewSize,
                        ViewShare,
                        0,
                        v11);
                if ( SectionHandle )
                {
                  NtClose(SectionHandle);
                  SectionHandle = 0LL;
                }
                if ( v12 >= 0 )
                {
                  v15 = RtlImageNtHeader(BaseAddress);
                  v16 = v12;
                  if ( !v15 )
                    v16 = -1073741701;
                  v12 = v16;
                  if ( v16 >= 0 )
                  {
                    v17 = a6;
                    *v9 = BaseAddress;
                    if ( v17 )
                      *v17 = ViewSize;
                    if ( a4 )
                    {
                      *a4 = FileHandle;
                    }
                    else if ( FileHandle )
                    {
                      NtClose(FileHandle);
                    }
                    return (unsigned int)v12;
                  }
                }
              }
            }
LABEL_25:
            if ( FileHandle )
            {
              NtClose(FileHandle);
              FileHandle = 0LL;
            }
            if ( BaseAddress )
              NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            return (unsigned int)v12;
          }
        }
        ObjectAttributes.RootDirectory = 0LL;
        goto LABEL_10;
      }
    }
  }
  return 3221225485LL;
}
