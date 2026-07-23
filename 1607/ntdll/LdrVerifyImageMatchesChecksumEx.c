/*
 * XREFs of LdrVerifyImageMatchesChecksumEx @ 0x18008BE50
 * Callers:
 *     LdrVerifyImageMatchesChecksum @ 0x1800D0D60 (LdrVerifyImageMatchesChecksum.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlImageRvaToVa @ 0x1800823C0 (RtlImageRvaToVa.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationFile @ 0x1800A6640 (NtQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     NtMakeTemporaryObject @ 0x1800A8470 (NtMakeTemporaryObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2DE4 (LdrpGenericExceptionFilter.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800EB398 (LdrVerifyMappedImageMatchesChecksum.c)
 */

NTSTATUS __cdecl LdrVerifyImageMatchesChecksumEx(HANDLE ImageFileHandle, PLDR_VERIFY_IMAGE_INFO VerifyInfo)
{
  LDR_SECTION_INFO *p_SectionInfo; // rsi
  __int64 v5; // r13
  NTSTATUS result; // eax
  int v7; // edi
  _DWORD *v8; // r15
  ULONG v9; // r8d
  POBJECT_ATTRIBUTES ObjA; // rax
  char v11; // [rsp+50h] [rbp-98h]
  PVOID BaseAddress; // [rsp+58h] [rbp-90h] BYREF
  HANDLE SectionHandle[2]; // [rsp+60h] [rbp-88h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+70h] [rbp-78h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-70h] BYREF
  _IO_STATUS_BLOCK Size; // [rsp+80h] [rbp-68h] BYREF
  _DWORD *v17; // [rsp+90h] [rbp-58h]
  _BYTE FileInformation[8]; // [rsp+98h] [rbp-50h] BYREF
  ULONG FileLength; // [rsp+A0h] [rbp-48h]

  OutHeaders = (PIMAGE_NT_HEADERS)VerifyInfo;
  if ( VerifyInfo->Size != 64 || (VerifyInfo->Flags & 0xFFFFFFF8) != 0 )
    return -1073741584;
  p_SectionInfo = &VerifyInfo->SectionInfo;
  if ( (VerifyInfo->Flags & 2) == 0 )
    p_SectionInfo = (LDR_SECTION_INFO *)&unk_18010DF70;
  SectionHandle[1] = p_SectionInfo;
  v5 = HIBYTE(p_SectionInfo->AllocationAttributes) & 1;
  v11 = (unsigned __int8)ImageFileHandle & 1;
  result = NtCreateSection(
             SectionHandle,
             p_SectionInfo->DesiredAccess,
             p_SectionInfo->ObjA,
             0LL,
             p_SectionInfo->SectionPageProtection,
             p_SectionInfo->AllocationAttributes,
             ImageFileHandle);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v7 = ZwMapViewOfSection(
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
    if ( v7 >= 0 )
    {
      if ( v11 )
        goto LABEL_38;
      v7 = NtQueryInformationFile(ImageFileHandle, &Size, FileInformation, 0x18u, FileStandardInformation);
      if ( v7 >= 0 )
      {
        if ( !LdrVerifyMappedImageMatchesChecksum(BaseAddress, ViewSize, FileLength) )
          v7 = -1073741279;
        if ( v7 >= 0 )
        {
LABEL_38:
          if ( (VerifyInfo->Flags & 5) != 0 )
          {
            v7 = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
            if ( v7 >= 0 )
            {
              if ( (VerifyInfo->Flags & 4) != 0 )
                VerifyInfo->ImageCharacteristics = OutHeaders->FileHeader.Characteristics;
              if ( (VerifyInfo->Flags & 1) != 0 )
              {
                if ( VerifyInfo->CallbackInfo.ImportCallbackRoutine )
                {
                  v8 = RtlImageDirectoryEntryToData(BaseAddress, v5, 1u, (PULONG)&Size);
                  v17 = v8;
                  if ( v8 )
                  {
                    Size.Pointer = 0LL;
                    while ( 1 )
                    {
                      v9 = v8[3];
                      if ( !v9 )
                        break;
                      if ( !(_BYTE)v5 )
                        RtlImageRvaToVa(OutHeaders, BaseAddress, v9, (PIMAGE_SECTION_HEADER *)&Size);
                      _guard_dispatch_icall_fptr();
                      v8 += 5;
                      v17 = v8;
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
    if ( v7 < 0 || p_SectionInfo == (LDR_SECTION_INFO *)&unk_18010DF70 )
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
    return v7;
  }
  return result;
}
