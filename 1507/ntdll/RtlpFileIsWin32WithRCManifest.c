/*
 * XREFs of RtlpFileIsWin32WithRCManifest @ 0x180056AF0
 * Callers:
 *     RtlGetFileMUIPath @ 0x180054700 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlImageNtHeader @ 0x180016830 (RtlImageNtHeader.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180017554 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 */

bool __fastcall RtlpFileIsWin32WithRCManifest(const WCHAR *a1)
{
  bool v1; // di
  char v2; // si
  unsigned __int16 *Buffer; // rbx
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS v5; // r14d
  NTSTATUS v6; // ebx
  unsigned __int64 v7; // rbx
  PVOID BaseAddress; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v12; // [rsp+78h] [rbp-88h] BYREF
  HANDLE SectionHandle; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+90h] [rbp-70h] BYREF
  ULONG *v16; // [rsp+A0h] [rbp-60h] BYREF
  int v17; // [rsp+A8h] [rbp-58h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v21[3]; // [rsp+110h] [rbp+10h] BYREF

  FileHandle = 0LL;
  BaseAddress = 0LL;
  v1 = 0;
  v12 = 0LL;
  v2 = 0;
  if ( RtlDosPathNameToRelativeNtPathName_U(a1, &NtFileName, 0LL, &RelativeName) )
  {
    Buffer = NtFileName.Buffer;
    if ( RelativeName.RelativeName.Length )
    {
      ContainingDirectory = (unsigned __int64)RelativeName.ContainingDirectory;
      NtFileName = RelativeName.RelativeName;
    }
    else
    {
      ContainingDirectory = 0LL;
      RelativeName.ContainingDirectory = 0LL;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.RootDirectory = (HANDLE)(ContainingDirectory & -(__int64)(Buffer != 0LL));
    ObjectAttributes.ObjectName = &NtFileName;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
    if ( Buffer )
    {
      RtlReleaseRelativeName(&RelativeName);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    }
    if ( v5 >= 0 )
    {
      v2 = 1;
      if ( NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, FileHandle) >= 0 )
      {
        SectionOffset.QuadPart = 0LL;
        ViewSize = 0LL;
        BaseAddress = 0LL;
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               &SectionOffset,
               &ViewSize,
               ViewShare,
               0,
               8u);
        NtClose(SectionHandle);
        if ( v6 >= 0 )
        {
          if ( RtlImageNtHeader(BaseAddress) )
          {
            v21[0] = L"MUI";
            v21[1] = 1LL;
            v7 = (unsigned __int64)BaseAddress | 1;
            v21[2] = 0LL;
            if ( (int)LdrpSearchResourceSection_U(
                        (void *)((unsigned __int64)BaseAddress | 1),
                        (__int64)v21,
                        3u,
                        0x30u,
                        (__int64)&v16) >= 0
              && (int)LdrpAccessResourceDataNoMultipleLanguage(v7, v16, (unsigned __int64 *)&v12, &v17) >= 0 )
            {
              v1 = *v12 == -20054323;
            }
          }
        }
      }
    }
  }
  if ( BaseAddress )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( v2 )
    NtClose(FileHandle);
  return v1;
}
