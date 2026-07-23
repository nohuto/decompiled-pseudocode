/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x1800185F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     RtlDoesFileExists_UstrEx @ 0x180018498 (RtlDoesFileExists_UstrEx.c)
 *     RtlGetFullPathName_UstrEx @ 0x180018C40 (RtlGetFullPathName_UstrEx.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x18006EE90 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x18006EF78 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
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
  unsigned __int16 *p_Length; // r11
  unsigned __int16 *Buffer; // rax
  _UNICODE_STRING *p_FileNamea; // rcx
  unsigned __int16 *v17; // rdx
  unsigned __int16 *v18; // rcx
  unsigned __int64 v19; // rdx
  int FullPathName_Ustr; // ebx
  unsigned __int16 *StringRoutine; // rax
  PUNICODE_STRING *v22; // r9
  _UNICODE_STRING *v23; // r8
  NTSTATUS v24; // eax
  unsigned __int16 Length; // r9
  unsigned __int16 *v26; // rdx
  unsigned __int16 *v27; // rcx
  unsigned __int64 v28; // r8
  _WORD *v29; // rcx
  unsigned __int16 v30; // ax
  _WORD *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  _WORD *v34; // rsi
  _WORD *v35; // r15
  int v36; // edx
  _WORD *j; // rdi
  __int64 v38; // rbx
  bool v39; // zf
  unsigned __int16 v40; // bx
  unsigned __int16 v41; // r12
  unsigned __int64 v42; // rdx
  _UNICODE_STRING FileNamea; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  PSIZE_T RequiredLength; // [rsp+68h] [rbp-98h]
  PUNICODE_STRING v48; // [rsp+70h] [rbp-90h]
  PSIZE_T FileNameSize; // [rsp+78h] [rbp-88h]
  PUNICODE_STRING NewName; // [rsp+80h] [rbp-80h] BYREF
  PUNICODE_STRING v51; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING v52; // [rsp+90h] [rbp-70h]
  PCUNICODE_STRING *v53; // [rsp+98h] [rbp-68h]
  PUNICODE_STRING v54; // [rsp+A0h] [rbp-60h]
  _BYTE v55[528]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = Path;
  v10 = Flags;
  v48 = StaticString;
  v12 = 0LL;
  RequiredLength = BytesRequired;
  FileNamea.Buffer = (unsigned __int16 *)v55;
  v51 = DefaultExtension;
  v52 = DynamicString;
  v53 = FullFileNameOut;
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
    goto LABEL_113;
  }
  v13 = (unsigned int)RtlDetermineDosPathNameType_Ustr(&FileName->Length);
  InputPathType = v13;
  if ( (v10 & 2) != 0 )
  {
    if ( v13 != RtlPathTypeRelative )
      goto LABEL_28;
    if ( FileName->Length < 4u )
      goto LABEL_51;
    Buffer = FileName->Buffer;
    if ( *Buffer != 46 )
      goto LABEL_51;
    if ( Buffer[1] != 92 && Buffer[1] != 47 )
    {
      if ( Buffer[1] == 46 && FileName->Length >= 6u && (Buffer[2] == 92 || Buffer[2] == 47) )
      {
        InputPathType = RtlPathTypeUnknown;
        goto LABEL_28;
      }
      goto LABEL_51;
    }
    v13 = RtlPathTypeUnknown;
    InputPathType = RtlPathTypeUnknown;
  }
  if ( v13 != RtlPathTypeRelative )
  {
LABEL_28:
    if ( RtlDoesFileExists_UstrEx(FileName, 1) )
    {
      p_FileNamea = FileName;
LABEL_47:
      v22 = (PUNICODE_STRING *)FullFileNameOut;
      v23 = DynamicString;
      goto LABEL_48;
    }
    if ( DefaultExtension && DefaultExtension->Length )
    {
      if ( (v10 & 4) == 0 )
      {
        if ( FileName->Length )
        {
          v17 = FileName->Buffer;
          v18 = &v17[(unsigned __int64)FileName->Length >> 1];
          while ( v18 > v17 )
          {
            if ( *--v18 == 92 || *v18 == 47 )
              break;
            if ( *v18 == 46 )
              goto LABEL_50;
          }
        }
      }
      v19 = DefaultExtension->Length + FileName->Length + 2LL;
      if ( v19 > 0xFFFE )
      {
LABEL_40:
        FullPathName_Ustr = -1073741562;
        goto LABEL_113;
      }
      if ( v19 <= FileNamea.MaximumLength )
      {
        StringRoutine = FileNamea.Buffer;
      }
      else
      {
        FileNamea.MaximumLength = DefaultExtension->Length + FileName->Length + 2;
        StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v19);
        FileNamea.Buffer = StringRoutine;
        if ( !StringRoutine )
          return -1073741801;
      }
      memmove(StringRoutine, FileName->Buffer, FileName->Length);
      memmove(
        &FileNamea.Buffer[(unsigned __int64)FileName->Length >> 1],
        DefaultExtension->Buffer,
        DefaultExtension->Length);
      FileNamea.Buffer[(unsigned __int64)(FileName->Length + DefaultExtension->Length) >> 1] = 0;
      FileNamea.Length = FileName->Length + DefaultExtension->Length;
      if ( RtlDoesFileExists_UstrEx(&FileNamea, 1) )
      {
        p_FileNamea = &FileNamea;
        goto LABEL_47;
      }
    }
LABEL_50:
    FullPathName_Ustr = -1073741809;
    goto LABEL_113;
  }
LABEL_51:
  if ( (v10 & 1) != 0 )
  {
    NewName = 0LL;
    v24 = RtlDosApplyFileIsolationRedirection_Ustr(
            1u,
            FileName,
            DefaultExtension,
            v48,
            DynamicString,
            &NewName,
            0LL,
            FileNameSize,
            RequiredLength);
    FullPathName_Ustr = v24;
    if ( v24 >= 0 )
    {
      if ( FullFileNameOut )
        *FullFileNameOut = NewName;
      goto LABEL_49;
    }
    if ( v24 != -1072365560 )
      goto LABEL_113;
    p_Length = &v54->Length;
  }
  if ( DefaultExtension )
  {
    Length = DefaultExtension->Length;
    if ( FileName->Length )
    {
      v26 = FileName->Buffer;
      v27 = &v26[(unsigned __int64)FileName->Length >> 1];
      while ( v27 > v26 )
      {
        if ( *--v27 == 92 || *v27 == 47 )
          break;
        if ( *v27 == 46 )
        {
          v51 = 0LL;
          Length = 0;
          break;
        }
      }
    }
  }
  else
  {
    Length = i;
  }
  if ( *p_Length )
  {
    v28 = *((_QWORD *)p_Length + 1);
    v29 = (_WORD *)(v28 + 2 * ((unsigned __int64)*p_Length >> 1));
LABEL_76:
    v31 = v29;
    while ( (unsigned __int64)v29 > v28 )
    {
      if ( *--v29 == 59 )
      {
        v30 = v31 - v29 - 1;
        if ( (unsigned __int16)(v31 - v29) != 1 && *(v31 - 1) != 92 && *(v31 - 1) != 47 )
          v30 = v31 - v29;
        if ( v30 > v12 )
          v12 = v30;
        goto LABEL_76;
      }
    }
    v32 = v31 - v29;
    if ( (_WORD)v32 && *(v31 - 1) != 92 && *(v31 - 1) != 47 )
      LOWORD(v32) = v32 + 1;
    if ( (unsigned __int16)v32 > v12 )
      v12 = (unsigned __int16)v32;
    v12 *= 2LL;
  }
  v33 = Length + v12 + FileName->Length + 2LL;
  if ( v33 > 0xFFFE )
    goto LABEL_40;
  v34 = (_WORD *)*((_QWORD *)p_Length + 1);
  v35 = &v34[(unsigned __int64)*p_Length >> 1];
  if ( v34 >= v35 )
    goto LABEL_50;
  v36 = Length;
  for ( i = Length; ; v36 = i )
  {
    for ( j = v34; j != v35; ++j )
    {
      if ( *j == 59 )
        break;
    }
    v38 = j - v34;
    v39 = 2 * (_WORD)v38 == 0;
    v40 = 2 * v38;
    v41 = v40;
    if ( !v39 && *(j - 1) != 92 && *(j - 1) != 47 )
      v40 += 2;
    v42 = v36 + FileName->Length + v40;
    if ( FileNamea.MaximumLength < v42 + 2 )
    {
      if ( (_BYTE *)FileNamea.Buffer != v55 || v42 > 0xFFFC )
        goto LABEL_110;
      FileNamea.MaximumLength = v33;
      FileNamea.Buffer = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v33);
      if ( !FileNamea.Buffer )
        return -1073741801;
    }
    FileNamea.Length = 0;
    RtlUnicodeStringCbCopyStringN(&FileNamea, v34, v41);
    if ( v40 && v41 != v40 )
    {
      FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 92;
      FileNamea.Length += 2;
    }
    RtlUnicodeStringCat(&FileNamea, FileName);
    if ( v51 )
      RtlUnicodeStringCat(&FileNamea, v51);
    if ( (unsigned __int64)FileNamea.Length + 2 > FileNamea.MaximumLength )
    {
LABEL_110:
      FullPathName_Ustr = -1073741595;
      goto LABEL_113;
    }
    FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 0;
    if ( RtlDoesFileExists_UstrEx(&FileNamea, 0) )
      break;
    v34 = j + 1;
    if ( j == v35 )
      v34 = j;
    if ( v34 >= v35 )
      goto LABEL_50;
  }
  v22 = (PUNICODE_STRING *)v53;
  p_FileNamea = &FileNamea;
  v23 = v52;
LABEL_48:
  FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                        p_FileNamea,
                        v48,
                        v23,
                        v22,
                        FileNameSize,
                        0LL,
                        &InputPathType,
                        RequiredLength);
  if ( FullPathName_Ustr >= 0 )
LABEL_49:
    FullPathName_Ustr = 0;
LABEL_113:
  if ( FileNamea.Buffer && (_BYTE *)FileNamea.Buffer != v55 )
    RtlFreeAnsiString(&FileNamea);
  return FullPathName_Ustr;
}
