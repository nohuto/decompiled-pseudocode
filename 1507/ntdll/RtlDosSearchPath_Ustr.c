/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x18005FCB0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800272A0 (RtlDoesFileExists_UstrEx.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x18005FBC8 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlGetFullPathName_UstrEx @ 0x180060240 (RtlGetFullPathName_UstrEx.c)
 *     RtlUnicodeStringCat @ 0x1800604DC (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
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
  unsigned __int64 v15; // rdx
  unsigned __int16 *StringRoutine; // rax
  int FullPathName_Ustr; // ebx
  unsigned __int16 *v19; // rax
  unsigned __int16 Length; // r9
  unsigned __int16 *Buffer; // rdx
  unsigned __int16 *v22; // rcx
  unsigned __int64 v23; // r8
  _WORD *v24; // rcx
  unsigned __int16 v25; // ax
  _WORD *v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  _WORD *v29; // rsi
  _WORD *v30; // r15
  int v31; // edx
  _WORD *j; // rdi
  __int64 v33; // rbx
  bool v34; // zf
  unsigned __int16 v35; // bx
  unsigned __int16 v36; // r12
  unsigned __int64 v37; // rdx
  PUNICODE_STRING *v38; // r9
  _UNICODE_STRING *p_FileNamea; // rcx
  _UNICODE_STRING *v40; // r8
  NTSTATUS v41; // eax
  unsigned __int16 *v42; // rdx
  unsigned __int16 *v43; // rcx
  _UNICODE_STRING FileNamea; // [rsp+50h] [rbp-B0h] BYREF
  RTL_PATH_TYPE InputPathType; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  PSIZE_T RequiredLength; // [rsp+68h] [rbp-98h]
  PUNICODE_STRING v48; // [rsp+70h] [rbp-90h]
  PSIZE_T FileNameSize; // [rsp+78h] [rbp-88h]
  PUNICODE_STRING NewName; // [rsp+80h] [rbp-80h] BYREF
  PUNICODE_STRING v51; // [rsp+88h] [rbp-78h]
  PUNICODE_STRING v52; // [rsp+90h] [rbp-70h]
  PUNICODE_STRING *StringUsed; // [rsp+98h] [rbp-68h]
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
    if ( FileName->Length < 4u || (v19 = FileName->Buffer, *v19 != 46) )
    {
LABEL_32:
      if ( (v10 & 1) != 0 )
      {
        NewName = 0LL;
        v41 = RtlDosApplyFileIsolationRedirection_Ustr(
                1u,
                FileName,
                DefaultExtension,
                v48,
                DynamicString,
                &NewName,
                0LL,
                FileNameSize,
                RequiredLength);
        FullPathName_Ustr = v41;
        if ( v41 >= 0 )
        {
          if ( FullFileNameOut )
            *FullFileNameOut = NewName;
LABEL_81:
          FullPathName_Ustr = 0;
          goto LABEL_26;
        }
        if ( v41 != -1072365560 )
          goto LABEL_26;
        p_Length = &v54->Length;
      }
      if ( DefaultExtension )
      {
        Length = DefaultExtension->Length;
        if ( FileName->Length )
        {
          Buffer = FileName->Buffer;
          v22 = &Buffer[(unsigned __int64)FileName->Length >> 1];
          do
          {
            if ( v22 <= Buffer )
              break;
            if ( *--v22 == 92 )
              break;
            if ( *v22 == 46 )
            {
              v51 = 0LL;
              Length = 0;
              break;
            }
          }
          while ( *v22 != 47 );
        }
      }
      else
      {
        Length = i;
      }
      if ( *p_Length )
      {
        v23 = *((_QWORD *)p_Length + 1);
        v24 = (_WORD *)(v23 + 2 * ((unsigned __int64)*p_Length >> 1));
LABEL_50:
        v26 = v24;
        while ( (unsigned __int64)v24 > v23 )
        {
          if ( *--v24 == 59 )
          {
            v25 = v26 - v24 - 1;
            if ( (unsigned __int16)(v26 - v24) != 1 && *(v26 - 1) != 92 && *(v26 - 1) != 47 )
              v25 = v26 - v24;
            if ( v25 > v12 )
              v12 = v25;
            goto LABEL_50;
          }
        }
        v27 = v26 - v24;
        if ( (_WORD)v27 && *(v26 - 1) != 92 && *(v26 - 1) != 47 )
          LOWORD(v27) = v27 + 1;
        if ( (unsigned __int16)v27 > v12 )
          v12 = (unsigned __int16)v27;
        v12 *= 2LL;
      }
      v28 = Length + v12 + FileName->Length + 2LL;
      if ( v28 <= 0xFFFE )
      {
        v29 = (_WORD *)*((_QWORD *)p_Length + 1);
        v30 = &v29[(unsigned __int64)*p_Length >> 1];
        if ( v29 < v30 )
        {
          v31 = Length;
          for ( i = Length; ; v31 = i )
          {
            for ( j = v29; j != v30; ++j )
            {
              if ( *j == 59 )
                break;
            }
            v33 = j - v29;
            v34 = 2 * (_WORD)v33 == 0;
            v35 = 2 * v33;
            v36 = v35;
            if ( !v34 && *(j - 1) != 92 && *(j - 1) != 47 )
              v35 += 2;
            v37 = v31 + FileName->Length + v35;
            if ( FileNamea.MaximumLength < v37 + 2 )
            {
              if ( (_BYTE *)FileNamea.Buffer != v55 || v37 > 0xFFFC )
                break;
              FileNamea.MaximumLength = v28;
              FileNamea.Buffer = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v28);
              if ( !FileNamea.Buffer )
                return -1073741801;
            }
            FileNamea.Length = 0;
            RtlUnicodeStringCbCopyStringN(&FileNamea, (int)v29, v36);
            if ( v35 && v36 != v35 )
            {
              FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 92;
              FileNamea.Length += 2;
            }
            RtlUnicodeStringCat(&FileNamea, FileName);
            if ( v51 )
              RtlUnicodeStringCat(&FileNamea, v51);
            if ( (unsigned __int64)FileNamea.Length + 2 > FileNamea.MaximumLength )
              break;
            FileNamea.Buffer[(unsigned __int64)FileNamea.Length >> 1] = 0;
            if ( RtlDoesFileExists_UstrEx(&FileNamea, 0) )
            {
              v38 = StringUsed;
              p_FileNamea = &FileNamea;
              v40 = v52;
              goto LABEL_80;
            }
            v29 = j + 1;
            if ( j == v30 )
              v29 = j;
            if ( v29 >= v30 )
              goto LABEL_25;
          }
          FullPathName_Ustr = -1073741595;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      goto LABEL_111;
    }
    if ( v19[1] != 92 && v19[1] != 47 )
    {
      if ( v19[1] != 46 || FileName->Length < 6u || v19[2] != 92 && v19[2] != 47 )
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
  if ( RtlDoesFileExists_UstrEx(FileName, 1) )
  {
    p_FileNamea = FileName;
LABEL_83:
    v38 = (PUNICODE_STRING *)FullFileNameOut;
    v40 = DynamicString;
LABEL_80:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          p_FileNamea,
                          v48,
                          v40,
                          v38,
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
        v42 = FileName->Buffer;
        v43 = &v42[(unsigned __int64)FileName->Length >> 1];
        while ( v43 > v42 )
        {
          if ( *--v43 == 92 || *v43 == 47 )
            break;
          if ( *v43 == 46 )
            goto LABEL_25;
        }
      }
    }
    v15 = DefaultExtension->Length + FileName->Length + 2LL;
    if ( v15 <= 0xFFFE )
    {
      if ( v15 > FileNamea.MaximumLength )
      {
        FileNamea.MaximumLength = DefaultExtension->Length + FileName->Length + 2;
        StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v15);
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
      FileNamea.Buffer[(unsigned __int64)(FileName->Length + DefaultExtension->Length) >> 1] = 0;
      FileNamea.Length = FileName->Length + DefaultExtension->Length;
      if ( !RtlDoesFileExists_UstrEx(&FileNamea, 1) )
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
  if ( FileNamea.Buffer && (_BYTE *)FileNamea.Buffer != v55 )
    RtlFreeAnsiString(&FileNamea);
  return FullPathName_Ustr;
}
