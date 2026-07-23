/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x180012354 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     RtlDosSearchPath_Ustr @ 0x1800185F0 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x18003CFD0 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_SearchActCtxForDllName @ 0x180015A2C (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x180016948 (sxsisol_CanonicalizeFullPathFileName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure @ 0x180017D30 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure.c)
 *     RtlFindCharInUnicodeString @ 0x180017EC0 (RtlFindCharInUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075340 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180080234 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     sxsisol_RespectDotLocal @ 0x1800D24BC (sxsisol_RespectDotLocal.c)
 *     RtlAssert @ 0x1800DBA70 (RtlAssert.c)
 */

NTSTATUS __cdecl RtlDosApplyFileIsolationRedirection_Ustr(
        ULONG Flags,
        PUNICODE_STRING OriginalName,
        PUNICODE_STRING Extension,
        PUNICODE_STRING StaticString,
        PUNICODE_STRING DynamicString,
        PUNICODE_STRING *NewName,
        PULONG NewFlags,
        PSIZE_T FileNameSize,
        PSIZE_T RequiredLength)
{
  __int64 v10; // r9
  unsigned __int64 MaximumLength; // rcx
  unsigned __int16 *Buffer; // rax
  int appended; // ebx
  char v14; // r12
  char v15; // r15
  NTSTATUS CharInUnicodeString; // eax
  __int128 v17; // xmm1
  ULONG v18; // r15d
  char v19; // al
  PULONG v20; // r14
  USHORT NonInclusivePrefixLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v23; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD StringToSearch[3]; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v25; // [rsp+58h] [rbp-B0h] BYREF
  PULONG v26; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING StaticStringa; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v30[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 *v32; // [rsp+C8h] [rbp-40h]
  unsigned __int16 *v33; // [rsp+D0h] [rbp-38h]
  __int64 v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  _UNICODE_STRING v36; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int16 *v37; // [rsp+108h] [rbp+0h]
  unsigned __int16 *v38; // [rsp+110h] [rbp+8h]
  __int64 v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  __int16 v41; // [rsp+128h] [rbp+20h] BYREF
  PUNICODE_STRING v42; // [rsp+130h] [rbp+28h]
  PUNICODE_STRING v43; // [rsp+138h] [rbp+30h]
  PUNICODE_STRING *v44; // [rsp+140h] [rbp+38h]
  char v45; // [rsp+148h] [rbp+40h]
  _WORD v46[16]; // [rsp+158h] [rbp+50h] BYREF
  char v47; // [rsp+178h] [rbp+70h] BYREF

  v10 = Flags;
  HIDWORD(StringToSearch[0]) = Flags;
  *(_QWORD *)&UnicodeString.Length = Extension;
  v26 = NewFlags;
  *(_DWORD *)&v25.Length = 0;
  v25.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (unsigned __int16 *)&v47;
  v28 = 0LL;
  NonInclusivePrefixLength[0] = 0;
  v23 = 0;
  if ( NewFlags )
    *NewFlags = 0;
  if ( FileNameSize )
    *FileNameSize = 0LL;
  if ( RequiredLength )
    *RequiredLength = 520LL;
  if ( DynamicString )
  {
    *(_DWORD *)&DynamicString->Length = 0;
    DynamicString->Buffer = 0LL;
  }
  v46[0] = 0;
  v34 = 32LL;
  v32 = v46;
  v33 = v46;
  *((_QWORD *)&v31 + 1) = v46;
  v35 = 32LL;
  LODWORD(v31) = 0x200000;
  if ( StaticString )
  {
    MaximumLength = StaticString->MaximumLength;
    Buffer = StaticString->Buffer;
    if ( MaximumLength < 2 )
    {
      Buffer = (unsigned __int16 *)&v41;
      MaximumLength = 2LL;
    }
    v37 = Buffer;
    v39 = MaximumLength;
    v38 = Buffer;
    v40 = MaximumLength;
    v36.Buffer = Buffer;
    if ( Buffer )
      *Buffer = 0;
    v36.Length = 0;
    v36.MaximumLength = MaximumLength;
  }
  else
  {
    v39 = 2LL;
    v37 = (unsigned __int16 *)&v41;
    v38 = (unsigned __int16 *)&v41;
    v36.Buffer = (unsigned __int16 *)&v41;
    v40 = 2LL;
    v41 = 0;
    *(_DWORD *)&v36.Length = 0x20000;
  }
  v44 = NewName;
  v42 = StaticString;
  v43 = DynamicString;
  v45 = 1;
  if ( (v10 & 0xFFFFFFFE) != 0 || !OriginalName )
    goto LABEL_17;
  if ( !StaticString )
  {
    if ( DynamicString || !FileNameSize )
      goto LABEL_25;
LABEL_17:
    appended = -1073741811;
    goto LABEL_63;
  }
  if ( DynamicString && !NewName )
    goto LABEL_17;
LABEL_25:
  v14 = 0;
  *(_UNICODE_STRING *)&StringToSearch[1] = *OriginalName;
  if ( !Extension || !Extension->Length )
    goto LABEL_36;
  v15 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(
                          1u,
                          (PUNICODE_STRING)&StringToSearch[1],
                          (PUNICODE_STRING)&CharSet,
                          (PUSHORT)StringToSearch);
  appended = CharInUnicodeString;
  if ( CharInUnicodeString >= 0 )
  {
    v15 = 1;
  }
  else if ( CharInUnicodeString != -1073741275 )
  {
    goto LABEL_32;
  }
  appended = 0;
LABEL_32:
  if ( appended < 0 )
    goto LABEL_64;
  if ( !v15 )
  {
    LOWORD(v31) = 0;
    v17 = *(_OWORD *)*(_QWORD *)&UnicodeString.Length;
    v30[0] = *(_OWORD *)&StringToSearch[1];
    v30[1] = v17;
    appended = RtlMultiAppendUnicodeStringBuffer(&v31, 2LL, v30);
    if ( appended < 0 )
      goto LABEL_37;
    v14 = 1;
  }
LABEL_36:
  appended = 0;
LABEL_37:
  if ( appended >= 0 )
  {
    if ( v14 )
      *(_OWORD *)&StringToSearch[1] = v31;
    appended = sxsisol_CanonicalizeFullPathFileName((PUNICODE_STRING)&StringToSearch[1], &StaticStringa, &v25);
    if ( appended >= 0 )
    {
      if ( (StringToSearch[0] & 0x100000000LL) == 0
        || !NtCurrentPeb()->ProcessParameters
        || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
        || (appended = sxsisol_RespectDotLocal(&StringToSearch[1], &v36, &v23), appended >= 0) )
      {
        v18 = v23;
        if ( (v23 & 1) != 0 )
        {
          v20 = v26;
        }
        else
        {
          if ( StaticString || (v19 = 1, DynamicString) )
            v19 = 0;
          v20 = v26;
          LOBYTE(OriginalName) = v19;
          appended = sxsisol_SearchActCtxForDllName(
                       (unsigned int)&StringToSearch[1],
                       (_DWORD)OriginalName,
                       (unsigned int)&v28,
                       (_DWORD)v26,
                       (__int64)&v36);
          if ( appended < 0 )
            goto LABEL_63;
        }
        if ( !DynamicString && StaticString && v36.Buffer != StaticString->Buffer )
        {
          appended = -1073741789;
          goto LABEL_63;
        }
        if ( FileNameSize )
        {
          appended = RtlFindCharInUnicodeString(1u, &v36, &RtlDosPathSeperatorsString, NonInclusivePrefixLength);
          if ( appended < 0 )
            goto LABEL_63;
          *FileNameSize = ((unsigned __int64)NonInclusivePrefixLength[0] >> 1) + 1;
        }
        appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v36);
        if ( appended >= 0 )
        {
          if ( v20 )
            *v20 = v18;
          appended = 0;
        }
      }
    }
LABEL_63:
    if ( appended >= 0 )
      goto LABEL_65;
  }
LABEL_64:
  sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure(&v36);
LABEL_65:
  if ( v25.Buffer )
  {
    NtdllpFreeStringRoutine(v25.Buffer, OriginalName, Extension, v10);
    *(_QWORD *)&v25.Length = 0LL;
    v25.Buffer = 0LL;
  }
  if ( v32 )
  {
    if ( v32 != v33 )
    {
      UnicodeString.Buffer = v32;
      RtlFreeAnsiString(&UnicodeString);
    }
    v32 = v33;
    v34 = v35;
  }
  *((_QWORD *)&v31 + 1) = v33;
  if ( v33 )
    *v33 = 0;
  WORD1(v31) = v35;
  LOWORD(v31) = 0;
  if ( appended == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return appended;
}
