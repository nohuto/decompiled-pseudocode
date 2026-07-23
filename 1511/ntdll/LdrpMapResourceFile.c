/*
 * XREFs of LdrpMapResourceFile @ 0x18003CD20
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18003AB60 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180015320 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlImageNtHeader @ 0x180032600 (RtlImageNtHeader.c)
 *     RtlReleaseRelativeName @ 0x18003D350 (RtlReleaseRelativeName.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     ZwCreateFile @ 0x1800A5B60 (ZwCreateFile.c)
 */

__int64 __fastcall LdrpMapResourceFile(__int64 a1, _UNICODE_STRING *a2, char a3, HANDLE *a4, PVOID *a5, ULONG_PTR *a6)
{
  PVOID *v9; // r15
  PIMAGE_NT_HEADERS v10; // rax
  NTSTATUS v11; // ebx
  ULONG v13; // edi
  _UNICODE_STRING v14; // xmm0
  unsigned __int16 *Buffer; // rsi
  HANDLE ContainingDirectory; // rax
  PIMAGE_NT_HEADERS v17; // rax
  int v18; // ecx
  ULONG_PTR *v19; // rcx
  HANDLE SectionHandle; // [rsp+60h] [rbp-69h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-61h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-59h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp-51h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+80h] [rbp-49h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+90h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp+17h] BYREF
  HANDLE Handle; // [rsp+120h] [rbp+57h] BYREF

  Handle = 0LL;
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
          v11 = -1073741701;
          goto LABEL_6;
        }
        v13 = v10->OptionalHeader.MajorSubsystemVersion < 6u ? 8 : 2;
        if ( a3 )
        {
          v14 = *a2;
          Buffer = 0LL;
          RelativeName.ContainingDirectory = 0LL;
          ObjectAttributes.Length = 48;
          NtFileName = v14;
        }
        else
        {
          v11 = RtlDosPathNameToRelativeNtPathName_U_WithStatus(a2->Buffer, &NtFileName, 0LL, &RelativeName);
          if ( v11 < 0 )
            goto LABEL_6;
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
            goto LABEL_19;
        }
        ObjectAttributes.RootDirectory = 0LL;
LABEL_19:
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.ObjectName = &NtFileName;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = ZwCreateFile(&Handle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
        if ( Buffer )
        {
          RtlReleaseRelativeName(&RelativeName);
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
        }
        if ( v11 >= 0 )
        {
          v11 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, v13, 0x8000000u, Handle);
          if ( v11 >= 0 )
          {
            SectionOffset.QuadPart = 0LL;
            v11 = ZwMapViewOfSection(
                    SectionHandle,
                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                    &BaseAddress,
                    0LL,
                    0LL,
                    &SectionOffset,
                    &ViewSize,
                    ViewShare,
                    0,
                    v13);
            if ( SectionHandle )
            {
              NtClose(SectionHandle);
              SectionHandle = 0LL;
            }
            if ( v11 >= 0 )
            {
              v17 = RtlImageNtHeader(BaseAddress);
              v18 = v11;
              if ( !v17 )
                v18 = -1073741701;
              v11 = v18;
              if ( v18 >= 0 )
              {
                v19 = a6;
                *v9 = BaseAddress;
                if ( v19 )
                  *v19 = ViewSize;
                if ( a4 )
                {
                  *a4 = Handle;
                }
                else if ( Handle )
                {
                  NtClose(Handle);
                }
                return (unsigned int)v11;
              }
            }
          }
        }
LABEL_6:
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
        if ( BaseAddress )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        return (unsigned int)v11;
      }
    }
  }
  return 3221225485LL;
}
