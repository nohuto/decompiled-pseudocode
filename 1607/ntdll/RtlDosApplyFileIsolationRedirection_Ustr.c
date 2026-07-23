/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5E0
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x180015A24 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     RtlDosSearchPath_Ustr @ 0x180042800 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x18007C1EC (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_RespectDotLocal @ 0x1800033F8 (sxsisol_RespectDotLocal.c)
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     RtlFindCharInUnicodeString @ 0x18001A5E0 (RtlFindCharInUnicodeString.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001A954 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x18001BACC (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180076690 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180084AB8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlAssert @ 0x1800E4D90 (RtlAssert.c)
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
  char v11; // r12
  char v12; // r15
  NTSTATUS CharInUnicodeString; // eax
  NTSTATUS appended; // ebx
  ULONG v15; // r15d
  char v16; // al
  PULONG v17; // r14
  unsigned __int64 MaximumLength; // rcx
  _UNICODE_STRING *Buffer; // rax
  __int128 v21; // xmm1
  USHORT NonInclusivePrefixLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG v23; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD StringToSearch[3]; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING v25; // [rsp+58h] [rbp-B0h] BYREF
  PULONG v26; // [rsp+68h] [rbp-A0h]
  _UNICODE_STRING v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  _UNICODE_STRING StaticStringa; // [rsp+88h] [rbp-80h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v31[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t *v33; // [rsp+D8h] [rbp-30h]
  wchar_t *v34; // [rsp+E0h] [rbp-28h]
  __int64 v35; // [rsp+E8h] [rbp-20h]
  __int64 v36; // [rsp+F0h] [rbp-18h]
  _UNICODE_STRING v37[6]; // [rsp+108h] [rbp+0h] BYREF
  _WORD v38[16]; // [rsp+168h] [rbp+60h] BYREF
  char v39; // [rsp+188h] [rbp+80h] BYREF

  HIDWORD(StringToSearch[0]) = Flags;
  *(_QWORD *)&v27.Length = Extension;
  v26 = NewFlags;
  *(_DWORD *)&v25.Length = 0;
  v25.Buffer = 0LL;
  *(_DWORD *)&StaticStringa.Length = 0x800000;
  StaticStringa.Buffer = (wchar_t *)&v39;
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
  v38[0] = 0;
  v35 = 32LL;
  v33 = v38;
  v34 = v38;
  *((_QWORD *)&v32 + 1) = v38;
  v36 = 32LL;
  LODWORD(v32) = 0x200000;
  if ( StaticString )
  {
    MaximumLength = StaticString->MaximumLength;
    Buffer = (_UNICODE_STRING *)StaticString->Buffer;
    if ( MaximumLength < 2 )
    {
      Buffer = &v37[3];
      MaximumLength = 2LL;
    }
    *(_QWORD *)&v37[1].Length = Buffer;
    *(_QWORD *)&v37[2].Length = MaximumLength;
    v37[1].Buffer = &Buffer->Length;
    v37[2].Buffer = (wchar_t *)MaximumLength;
    v37[0].Buffer = &Buffer->Length;
    if ( Buffer )
      Buffer->Length = 0;
    v37[0].Length = 0;
    v37[0].MaximumLength = MaximumLength;
  }
  else
  {
    *(_QWORD *)&v37[2].Length = 2LL;
    *(_QWORD *)&v37[1].Length = &v37[3];
    v37[1].Buffer = &v37[3].Length;
    v37[0].Buffer = &v37[3].Length;
    v37[2].Buffer = (wchar_t *)2;
    v37[3].Length = 0;
    *(_DWORD *)&v37[0].Length = 0x20000;
  }
  v37[4].Buffer = (wchar_t *)NewName;
  v37[3].Buffer = &StaticString->Length;
  *(_QWORD *)&v37[4].Length = DynamicString;
  LOBYTE(v37[5].Length) = 1;
  if ( (Flags & 0xFFFFFFFE) != 0 || !OriginalName )
    goto LABEL_79;
  if ( !StaticString )
  {
    if ( DynamicString || !FileNameSize )
      goto LABEL_15;
LABEL_79:
    appended = -1073741811;
    goto LABEL_35;
  }
  if ( DynamicString && !NewName )
    goto LABEL_79;
LABEL_15:
  v11 = 0;
  *(_UNICODE_STRING *)&StringToSearch[1] = *OriginalName;
  if ( !Extension || !Extension->Length )
    goto LABEL_22;
  v12 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(
                          1u,
                          (PUNICODE_STRING)&StringToSearch[1],
                          (PUNICODE_STRING)&CharSet,
                          (PUSHORT)StringToSearch);
  appended = CharInUnicodeString;
  if ( CharInUnicodeString >= 0 )
  {
    v12 = 1;
LABEL_19:
    appended = 0;
    goto LABEL_20;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_19;
LABEL_20:
  if ( appended < 0 )
    goto LABEL_36;
  if ( v12 )
    goto LABEL_22;
  LOWORD(v32) = 0;
  v21 = *(_OWORD *)*(_QWORD *)&v27.Length;
  v31[0] = *(_OWORD *)&StringToSearch[1];
  v31[1] = v21;
  appended = RtlMultiAppendUnicodeStringBuffer(&v32, 2LL, v31);
  if ( appended >= 0 )
  {
    v11 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended >= 0 )
  {
    if ( v11 )
      *(_OWORD *)&StringToSearch[1] = v32;
    appended = sxsisol_CanonicalizeFullPathFileName((PUNICODE_STRING)&StringToSearch[1], &StaticStringa, &v25);
    if ( appended >= 0 )
    {
      if ( (StringToSearch[0] & 0x100000000LL) == 0
        || !NtCurrentPeb()->ProcessParameters
        || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
        || (appended = sxsisol_RespectDotLocal((_UNICODE_STRING *)&StringToSearch[1], &v37[0].Length, &v23),
            appended >= 0) )
      {
        v15 = v23;
        if ( (v23 & 1) != 0 )
        {
          v17 = v26;
        }
        else
        {
          if ( StaticString || (v16 = 1, DynamicString) )
            v16 = 0;
          v17 = v26;
          appended = sxsisol_SearchActCtxForDllName(
                       (_UNICODE_STRING *)&StringToSearch[1],
                       v16,
                       &v28,
                       (__int64)v26,
                       &v37[0].Length);
          if ( appended < 0 )
            goto LABEL_35;
        }
        if ( !DynamicString && StaticString && v37[0].Buffer != StaticString->Buffer )
        {
          appended = -1073741789;
          goto LABEL_35;
        }
        if ( FileNameSize )
        {
          appended = RtlFindCharInUnicodeString(1u, v37, &RtlDosPathSeperatorsString, NonInclusivePrefixLength);
          if ( appended < 0 )
            goto LABEL_35;
          *FileNameSize = ((unsigned __int64)NonInclusivePrefixLength[0] >> 1) + 1;
        }
        appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v37);
        if ( appended >= 0 )
        {
          if ( v17 )
            *v17 = v15;
          appended = 0;
        }
      }
    }
LABEL_35:
    if ( appended >= 0 )
      goto LABEL_43;
  }
LABEL_36:
  if ( LOBYTE(v37[5].Length) )
  {
    if ( *(_QWORD *)&v37[1].Length && *(wchar_t **)&v37[1].Length != v37[1].Buffer )
    {
      v27.Buffer = *(wchar_t **)&v37[1].Length;
      RtlFreeAnsiString(&v27);
    }
    if ( v37[1].Buffer )
      *v37[1].Buffer = 0;
  }
  memset(v37, 0, 0x58uLL);
LABEL_43:
  if ( v25.Buffer )
  {
    NtdllpFreeStringRoutine(v25.Buffer);
    *(_QWORD *)&v25.Length = 0LL;
    v25.Buffer = 0LL;
  }
  if ( v33 )
  {
    if ( v33 != v34 )
    {
      UnicodeString.Buffer = v33;
      RtlFreeAnsiString(&UnicodeString);
    }
    v33 = v34;
    v35 = v36;
  }
  *((_QWORD *)&v32 + 1) = v34;
  if ( v34 )
    *v34 = 0;
  WORD1(v32) = v36;
  LOWORD(v32) = 0;
  if ( appended == -1072365567 )
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      0x1B2u,
      (PSTR)"Status != STATUS_SXS_SECTION_NOT_FOUND");
  return appended;
}
