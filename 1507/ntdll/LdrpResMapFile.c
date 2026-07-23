/*
 * XREFs of LdrpResMapFile @ 0x1800CC53C
 * Callers:
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x18001C000 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseRelativeName @ 0x1800546C0 (RtlReleaseRelativeName.c)
 *     LdrRemoveLoadAsDataTable @ 0x18006B740 (LdrRemoveLoadAsDataTable.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     ZwCreateFile @ 0x180093E50 (ZwCreateFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800CBC78 (LdrpTraceLoadMUIDll.c)
 *     LdrpResFileSize @ 0x1800CC450 (LdrpResFileSize.c)
 */

NTSTATUS __fastcall LdrpResMapFile(WCHAR *DosFileName, PVOID *BaseModule, PSIZE_T Size, int a4)
{
  NTSTATUS v8; // ebx
  unsigned __int16 *Buffer; // r15
  unsigned __int64 ContainingDirectory; // rdx
  NTSTATUS result; // eax
  HANDLE SectionHandle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-88h] BYREF
  int v16; // [rsp+80h] [rbp-80h] BYREF
  const wchar_t *v17; // [rsp+88h] [rbp-78h]
  int v18; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING NtFileName; // [rsp+A8h] [rbp-58h] BYREF
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+B8h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+8h] BYREF
  HANDLE FileHandle; // [rsp+150h] [rbp+50h] BYREF

  v17 = L"LdrpResMapFile Enter";
  v16 = 2752552;
  v19 = L"LdrpResMapFile Exit";
  v18 = 2621478;
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v16, MEMORY[0x7FFE0384]);
  if ( !DosFileName || !BaseModule || !Size )
    goto LABEL_30;
  *BaseModule = 0LL;
  if ( LdrRemoveLoadAsDataTable(DosFileName, BaseModule, Size, a4 | 0x200000) < 0 )
  {
    if ( (a4 & 0x400) != 0 )
    {
      if ( !RtlDosPathNameToRelativeNtPathName_U(DosFileName, &NtFileName, 0LL, &RelativeName) )
      {
        v8 = -1073020927;
        goto LABEL_31;
      }
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
      v8 = ZwCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 5u, 1u, 0, 0LL, 0);
      if ( Buffer )
      {
        RtlReleaseRelativeName(&RelativeName);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
      }
      if ( v8 < 0 )
        goto LABEL_31;
      DosFileName = (WCHAR *)FileHandle;
LABEL_20:
      if ( (a4 & 0x20000) != 0 )
      {
        result = LdrpResFileSize((char *)DosFileName, &v20);
        if ( result < 0 )
          return result;
        if ( (unsigned int)v20 > *Size )
        {
          v8 = -1073741793;
          goto LABEL_31;
        }
        DosFileName = (WCHAR *)FileHandle;
      }
      v8 = NtCreateSection(&SectionHandle, 0xF0005u, 0LL, 0LL, 2u, 0x8000000u, DosFileName);
      if ( (~(_WORD)a4 & 0x800) != 0 )
        NtClose(FileHandle);
      if ( v8 >= 0 )
      {
        SectionOffset.QuadPart = 0LL;
        ViewSize = 0LL;
        BaseAddress = 0LL;
        v8 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               &SectionOffset,
               &ViewSize,
               ViewShare,
               0,
               2u);
        NtClose(SectionHandle);
        if ( v8 >= 0 )
        {
          *BaseModule = (PVOID)((unsigned __int64)BaseAddress | 1);
          *Size = ViewSize;
        }
      }
      goto LABEL_31;
    }
    if ( (a4 & 0x800) != 0 )
    {
      FileHandle = DosFileName;
      goto LABEL_20;
    }
LABEL_30:
    v8 = -1073741811;
    goto LABEL_31;
  }
  v8 = -1073741302;
LABEL_31:
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v18, MEMORY[0x7FFE0384]);
  return v8;
}
