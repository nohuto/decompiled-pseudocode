/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x180042800
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018BD8 (NtdllpAllocateStringRoutine.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019120 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5E8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044724 (RtlDoesFileExists_UstrEx.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x18006C834 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x18006C91C (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl RtlDosSearchPath_Ustr(
        ULONG Flags,
        PUNICODE_STRING Path,
        PUNICODE_STRING FileName,
        PUNICODE_STRING DefaultExtension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PCUNICODE_STRING *FullFileNameOut,
        SIZE_T *FilePartPrefixCch,
        SIZE_T *BytesRequired)
{
  char v10; // bl
  unsigned __int64 v12; // rsi
  RTL_PATH_TYPE v13; // eax
  __int64 v14; // rdx
  unsigned __int16 *p_Length; // r11
  unsigned __int64 v16; // rdx
  wchar_t *StringRoutine; // rax
  __int64 v18; // rdx
  int FullPathName_Ustr; // ebx
  wchar_t *v21; // rax
  unsigned __int16 Length; // r9
  wchar_t *Buffer; // rdx
  wchar_t *v24; // rcx
  unsigned __int64 v25; // r8
  _WORD *v26; // rcx
  unsigned __int16 v27; // ax
  _WORD *v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  _WORD *v31; // rsi
  _WORD *v32; // r15
  int v33; // edx
  _WORD *j; // rdi
  __int64 v35; // rbx
  bool v36; // zf
  unsigned __int16 v37; // bx
  unsigned __int16 v38; // r12
  unsigned __int64 v39; // rdx
  PUNICODE_STRING *v40; // r9
  _UNICODE_STRING *p_FileNamea; // rcx
  _UNICODE_STRING *v42; // r8
  NTSTATUS v43; // eax
  wchar_t *v44; // rdx
  wchar_t *v45; // rcx
  _UNICODE_STRING FileNamea; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  PSIZE_T RequiredLength; // [rsp+68h] [rbp-98h]
  PSIZE_T FileNameSize; // [rsp+70h] [rbp-90h]
  PUNICODE_STRING v51; // [rsp+78h] [rbp-88h]
  PUNICODE_STRING NewName; // [rsp+80h] [rbp-80h] BYREF
  PUNICODE_STRING v53; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING v54; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING *StringUsed; // [rsp+98h] [rbp-68h]
  PUNICODE_STRING v56; // [rsp+A0h] [rbp-60h]
  _BYTE v57[528]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = Path;
  v10 = Flags;
  v51 = StaticString;
  v12 = 0LL;
  RequiredLength = BytesRequired;
  FileNamea.Buffer = (wchar_t *)v57;
  v53 = DefaultExtension;
  v56 = DynamicString;
  StringUsed = (PUNICODE_STRING *)FullFileNameOut;
  FileNameSize = FilePartPrefixCch;
  LOWORD(i) = 0;
  *(_DWORD *)&FileNamea.Length = 34078720;
  if ( FullFileNameOut )
    *FullFileNameOut = 0LL;
  if ( BytesRequired )
    *BytesRequired = 0LL;
  if ( FilePartPrefixCch )
    *FilePartPrefixCch = 0LL;
  if ( DynamicString )
  {
    *(_DWORD *)&DynamicString->Length = 0;
    DynamicString->Buffer = 0LL;
  }
  if ( (Flags & 0xFFFFFFF8) != 0 || !Path || !FileName || StaticString && DynamicString && !FullFileNameOut )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_26;
  }
  v13 = (unsigned int)RtlDetermineDosPathNameType_Ustr(&FileName->Length);
  InputPathType = v13;
  if ( (v10 & 2) != 0 )
  {
    if ( v13 != RtlPathTypeRelative )
      goto LABEL_17;
    if ( FileName->Length < 4u || (v21 = FileName->Buffer, *v21 != 46) )
    {
LABEL_32:
      if ( (v10 & 1) != 0 )
      {
        NewName = 0LL;
        v43 = RtlDosApplyFileIsolationRedirection_Ustr(
                1u,
                FileName,
                DefaultExtension,
                v51,
                DynamicString,
                &NewName,
                0LL,
                FileNameSize,
                RequiredLength);
        FullPathName_Ustr = v43;
        if ( v43 >= 0 )
        {
          if ( FullFileNameOut )
            *FullFileNameOut = NewName;
LABEL_81:
          FullPathName_Ustr = 0;
          goto LABEL_26;
        }
        if ( v43 != -1072365560 )
          goto LABEL_26;
        p_Length = &v54->Length;
      }
      if ( DefaultExtension )
      {
        Length = DefaultExtension->Length;
        if ( FileName->Length )
        {
          Buffer = FileName->Buffer;
          v24 = &Buffer[(unsigned __int64)FileName->Length >> 1];
          do
          {
            if ( v24 <= Buffer )
              break;
            if ( *--v24 == 92 )
              break;
            if ( *v24 == 46 )
            {
              v53 = 0LL;
              Length = 0;
              break;
            }
          }
          while ( *v24 != 47 );
        }
      }
      else
      {
        Length = i;
      }
      if ( *p_Length )
      {
        v25 = *((_QWORD *)p_Length + 1);
        v26 = (_WORD *)(v25 + 2 * ((unsigned __int64)*p_Length >> 1));
LABEL_50:
        v28 = v26;
        while ( (unsigned __int64)v26 > v25 )
        {
          if ( *--v26 == 59 )
          {
            v27 = v28 - v26 - 1;
            if ( (unsigned __int16)(v28 - v26) != 1 && *(v28 - 1) != 92 && *(v28 - 1) != 47 )
              v27 = v28 - v26;
            if ( v27 > v12 )
              v12 = v27;
            goto LABEL_50;
          }
        }
        v29 = v28 - v26;
        if ( (_WORD)v29 && *(v28 - 1) != 92 && *(v28 - 1) != 47 )
          LOWORD(v29) = v29 + 1;
        if ( (unsigned __int16)v29 > v12 )
          v12 = (unsigned __int16)v29;
        v12 *= 2LL;
      }
      v30 = Length + v12 + FileName->Length + 2LL;
      if ( v30 <= 0xFFFE )
      {
        v31 = (_WORD *)*((_QWORD *)p_Length + 1);
        v32 = &v31[(unsigned __int64)*p_Length >> 1];
        if ( v31 < v32 )
        {
          v33 = Length;
          for ( i = Length; ; v33 = i )
          {
            for ( j = v31; j != v32; ++j )
            {
              if ( *j == 59 )
                break;
            }
            v35 = j - v31;
            v36 = 2 * (_WORD)v35 == 0;
            v37 = 2 * v35;
            v38 = v37;
            if ( !v36 && *(j - 1) != 92 && *(j - 1) != 47 )
              v37 += 2;
            v39 = v33 + FileName->Length + v37;
            if ( FileNamea.MaximumLength < v39 + 2 )
            {
              if ( (_BYTE *)FileNamea.Buffer != v57 || v39 > 0xFFFC )
                break;
              FileNamea.MaximumLength = v30;
              FileNamea.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v30);
              if ( !FileNamea.Buffer )
                return -1073741801;
            }
            FileNamea.Length = 0;
            RtlUnicodeStringCbCopyStringN(&FileNamea, v31, v38);
            if ( v37 && v38 != v37 )
            {
              FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 92;
              FileNamea.Length += 2;
            }
            RtlUnicodeStringCat(&FileNamea, FileName);
            if ( v53 )
              RtlUnicodeStringCat(&FileNamea, v53);
            if ( (unsigned __int64)FileNamea.Length + 2 > FileNamea.MaximumLength )
              break;
            FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 0;
            if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&FileNamea, 0LL) )
            {
              v40 = StringUsed;
              p_FileNamea = &FileNamea;
              v42 = v56;
              goto LABEL_80;
            }
            v31 = j + 1;
            if ( j == v32 )
              v31 = j;
            if ( v31 >= v32 )
              goto LABEL_25;
          }
          FullPathName_Ustr = -1073741595;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      goto LABEL_111;
    }
    if ( v21[1] != 92 && v21[1] != 47 )
    {
      if ( v21[1] != 46 || FileName->Length < 6u || v21[2] != 92 && v21[2] != 47 )
        goto LABEL_32;
      InputPathType = RtlPathTypeUnknown;
      goto LABEL_17;
    }
    v13 = RtlPathTypeUnknown;
    InputPathType = RtlPathTypeUnknown;
  }
  if ( v13 == RtlPathTypeRelative )
    goto LABEL_32;
LABEL_17:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)RtlDoesFileExists_UstrEx(FileName, v14) )
  {
    p_FileNamea = FileName;
LABEL_83:
    v40 = (PUNICODE_STRING *)FullFileNameOut;
    v42 = DynamicString;
LABEL_80:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          p_FileNamea,
                          v51,
                          v42,
                          v40,
                          FileNameSize,
                          0LL,
                          &InputPathType,
                          RequiredLength);
    if ( FullPathName_Ustr < 0 )
      goto LABEL_26;
    goto LABEL_81;
  }
  if ( DefaultExtension && DefaultExtension->Length )
  {
    if ( (v10 & 4) == 0 )
    {
      if ( FileName->Length )
      {
        v44 = FileName->Buffer;
        v45 = &v44[(unsigned __int64)FileName->Length >> 1];
        while ( v45 > v44 )
        {
          if ( *--v45 == 92 || *v45 == 47 )
            break;
          if ( *v45 == 46 )
            goto LABEL_25;
        }
      }
    }
    v16 = DefaultExtension->Length + FileName->Length + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > FileNamea.MaximumLength )
      {
        FileNamea.MaximumLength = DefaultExtension->Length + FileName->Length + 2;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v16);
        FileNamea.Buffer = StringRoutine;
        if ( !StringRoutine )
          return -1073741801;
      }
      else
      {
        StringRoutine = FileNamea.Buffer;
      }
      memmove(StringRoutine, FileName->Buffer, FileName->Length);
      memmove(
        &FileNamea.Buffer[(unsigned __int64)FileName->Length >> 1],
        DefaultExtension->Buffer,
        DefaultExtension->Length);
      LOBYTE(v18) = 1;
      FileNamea.Buffer[(unsigned __int64)(FileName->Length + DefaultExtension->Length) >> 1] = 0;
      FileNamea.Length = FileName->Length + DefaultExtension->Length;
      if ( !(unsigned __int8)RtlDoesFileExists_UstrEx(&FileNamea, v18) )
        goto LABEL_25;
      p_FileNamea = &FileNamea;
      goto LABEL_83;
    }
LABEL_111:
    FullPathName_Ustr = -1073741562;
    goto LABEL_26;
  }
LABEL_25:
  FullPathName_Ustr = -1073741809;
LABEL_26:
  if ( FileNamea.Buffer && (_BYTE *)FileNamea.Buffer != v57 )
    RtlFreeAnsiString(&FileNamea);
  return FullPathName_Ustr;
}
