/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18007F190
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800BCBC0 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     RtlImageRvaToVa @ 0x180071AC0 (RtlImageRvaToVa.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationFile @ 0x180093A10 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800948E0 (NtMakeTemporaryObject.c)
 *     LdrpGenericExceptionFilter @ 0x1800C0F28 (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800DBA48 (LdrVerifyMappedImageMatchesChecksum.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksumEx(HANDLE ImageFileHandle, PLDR_VERIFY_IMAGE_INFO VerifyInfo)
{
  LDR_SECTION_INFO *p_SectionInfo; // r14
  ULONG AllocationAttributes; // eax
  __int64 v6; // r13
  NTSTATUS result; // eax
  int v8; // esi
  _DWORD *v9; // r13
  ULONG v10; // r8d
  char *v11; // rax
  _RTL_DYNAMIC_HASH_TABLE *ImportCallbackRoutine; // rbx
  POBJECT_ATTRIBUTES ObjA; // rax
  char v14; // [rsp+58h] [rbp-A0h]
  PVOID BaseAddress; // [rsp+60h] [rbp-98h] BYREF
  HANDLE SectionHandle[2]; // [rsp+68h] [rbp-90h] BYREF
  int v17; // [rsp+78h] [rbp-80h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp-78h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp-70h] BYREF
  ULONG Size[2]; // [rsp+90h] [rbp-68h] BYREF
  _DWORD *v21; // [rsp+98h] [rbp-60h]
  _IO_STATUS_BLOCK LastRvaSection; // [rsp+A0h] [rbp-58h] BYREF
  _BYTE FileInformation[8]; // [rsp+B0h] [rbp-48h] BYREF
  ULONG FileLength; // [rsp+B8h] [rbp-40h]

  OutHeaders = (PIMAGE_NT_HEADERS)VerifyInfo;
  if ( VerifyInfo->Size != 64 || (VerifyInfo->Flags & 0xFFFFFFF8) != 0 )
    return -1073741584;
  p_SectionInfo = &VerifyInfo->SectionInfo;
  if ( (VerifyInfo->Flags & 2) == 0 )
    p_SectionInfo = (LDR_SECTION_INFO *)&unk_180102BD8;
  SectionHandle[1] = p_SectionInfo;
  AllocationAttributes = p_SectionInfo->AllocationAttributes;
  v6 = HIBYTE(AllocationAttributes) & 1;
  v17 = HIBYTE(AllocationAttributes) & 1;
  v14 = (unsigned __int8)ImageFileHandle & 1;
  result = NtCreateSection(
             SectionHandle,
             p_SectionInfo->DesiredAccess,
             p_SectionInfo->ObjA,
             0LL,
             p_SectionInfo->SectionPageProtection,
             AllocationAttributes,
             ImageFileHandle);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v8 = ZwMapViewOfSection(
           SectionHandle[0],
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           0x10u);
    if ( v8 >= 0 )
    {
      if ( v14 )
        goto LABEL_39;
      v8 = NtQueryInformationFile(ImageFileHandle, &LastRvaSection, FileInformation, 0x18u, FileStandardInformation);
      if ( v8 >= 0 )
      {
        if ( !LdrVerifyMappedImageMatchesChecksum(BaseAddress, ViewSize, FileLength) )
          v8 = -1073741279;
        if ( v8 >= 0 )
        {
LABEL_39:
          if ( (VerifyInfo->Flags & 5) != 0 )
          {
            v8 = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
            if ( v8 >= 0 )
            {
              if ( (VerifyInfo->Flags & 4) != 0 )
                VerifyInfo->ImageCharacteristics = OutHeaders->FileHeader.Characteristics;
              if ( (VerifyInfo->Flags & 1) != 0 )
              {
                if ( VerifyInfo->CallbackInfo.ImportCallbackRoutine )
                {
                  v9 = RtlImageDirectoryEntryToData(BaseAddress, v6, 1u, Size);
                  v21 = v9;
                  if ( v9 )
                  {
                    LastRvaSection.Pointer = 0LL;
                    while ( 1 )
                    {
                      v10 = v9[3];
                      if ( !v10 )
                        break;
                      if ( (_BYTE)v17 )
                        v11 = (char *)BaseAddress + v10;
                      else
                        v11 = (char *)RtlImageRvaToVa(
                                        OutHeaders,
                                        BaseAddress,
                                        v10,
                                        (PIMAGE_SECTION_HEADER *)&LastRvaSection);
                      *(_QWORD *)Size = v11;
                      ImportCallbackRoutine = (_RTL_DYNAMIC_HASH_TABLE *)VerifyInfo->CallbackInfo.ImportCallbackRoutine;
                      ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(
                        ImportCallbackRoutine,
                        _guard_check_icall_fptr);
                      ((void (__fastcall *)(PVOID, _QWORD))ImportCallbackRoutine)(
                        VerifyInfo->CallbackInfo.ImportCallbackParameter,
                        *(_QWORD *)Size);
                      v9 += 5;
                      v21 = v9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    }
    if ( v8 < 0 || p_SectionInfo == (LDR_SECTION_INFO *)&unk_180102BD8 )
    {
      ObjA = p_SectionInfo->ObjA;
      if ( ObjA && (ObjA->Attributes & 0x10) != 0 )
        NtMakeTemporaryObject(SectionHandle[0]);
      NtClose(SectionHandle[0]);
    }
    else
    {
      p_SectionInfo->SectionHandle = SectionHandle[0];
    }
    return v8;
  }
  return result;
}
