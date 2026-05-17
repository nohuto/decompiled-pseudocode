/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5F0
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x180015A34 (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     RtlDosSearchPath_Ustr @ 0x180042810 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x18007C1FC (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_RespectDotLocal @ 0x1800033F8 (sxsisol_RespectDotLocal.c)
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     RtlFindCharInUnicodeString @ 0x18001A5F0 (RtlFindCharInUnicodeString.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001A964 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x18001BADC (sxsisol_CanonicalizeFullPathFileName.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x1800766A0 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180084AC8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlAssert @ 0x1800E4CD0 (RtlAssert.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        _OWORD *a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v11; // r12
  char v12; // r15
  int CharInUnicodeString; // eax
  int appended; // ebx
  int v15; // r15d
  char v16; // al
  _DWORD *v17; // r14
  unsigned __int64 v19; // rcx
  _WORD *v20; // rax
  __int128 v21; // xmm1
  _WORD v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD v24[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h]
  _DWORD *v27; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v28; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  int v30; // [rsp+88h] [rbp-80h] BYREF
  char *v31; // [rsp+90h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v33[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v34; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t *v35; // [rsp+D8h] [rbp-30h]
  wchar_t *v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  _QWORD v39[12]; // [rsp+108h] [rbp+0h] BYREF
  _WORD v40[16]; // [rsp+168h] [rbp+60h] BYREF
  char v41; // [rsp+188h] [rbp+80h] BYREF

  HIDWORD(v24[0]) = a1;
  *(_QWORD *)&v28.Length = a3;
  v27 = a7;
  LODWORD(v25) = 0;
  v26 = 0LL;
  v30 = 0x800000;
  v31 = &v41;
  v29 = 0LL;
  v22[0] = 0;
  v23 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
  {
    *(_DWORD *)a5 = 0;
    *(_QWORD *)(a5 + 8) = 0LL;
  }
  v40[0] = 0;
  v37 = 32LL;
  v35 = v40;
  v36 = v40;
  *((_QWORD *)&v34 + 1) = v40;
  v38 = 32LL;
  LODWORD(v34) = 0x200000;
  if ( a4 )
  {
    v19 = *(unsigned __int16 *)(a4 + 2);
    v20 = *(_WORD **)(a4 + 8);
    if ( v19 < 2 )
    {
      v20 = &v39[6];
      v19 = 2LL;
    }
    v39[2] = v20;
    v39[4] = v19;
    v39[3] = v20;
    v39[5] = v19;
    v39[1] = v20;
    if ( v20 )
      *v20 = 0;
    LOWORD(v39[0]) = 0;
    WORD1(v39[0]) = v19;
  }
  else
  {
    v39[4] = 2LL;
    v39[2] = &v39[6];
    v39[3] = &v39[6];
    v39[1] = &v39[6];
    v39[5] = 2LL;
    LOWORD(v39[6]) = 0;
    LODWORD(v39[0]) = 0x20000;
  }
  v39[9] = a6;
  v39[7] = a4;
  v39[8] = a5;
  LOBYTE(v39[10]) = 1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    goto LABEL_79;
  if ( !a4 )
  {
    if ( a5 || !a8 )
      goto LABEL_15;
LABEL_79:
    appended = -1073741811;
    goto LABEL_35;
  }
  if ( a5 && !a6 )
    goto LABEL_79;
LABEL_15:
  v11 = 0;
  *(_OWORD *)&v24[1] = *a2;
  if ( !a3 || !*a3 )
    goto LABEL_22;
  v12 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(1, (__int16 *)&v24[1], (__int64)&unk_180108250, v24);
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
  LOWORD(v34) = 0;
  v21 = *(_OWORD *)*(_QWORD *)&v28.Length;
  v33[0] = *(_OWORD *)&v24[1];
  v33[1] = v21;
  appended = RtlMultiAppendUnicodeStringBuffer(&v34, 2LL, v33);
  if ( appended >= 0 )
  {
    v11 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended < 0 )
    goto LABEL_36;
  if ( v11 )
    *(_OWORD *)&v24[1] = v34;
  appended = sxsisol_CanonicalizeFullPathFileName(&v24[1], &v30, &v25);
  if ( appended < 0 )
    goto LABEL_35;
  if ( (v24[0] & 0x100000000LL) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        appended = sxsisol_RespectDotLocal((__int64)&v24[1], (unsigned __int16 *)v39, &v23);
        if ( appended < 0 )
          goto LABEL_35;
      }
    }
  }
  v15 = v23;
  if ( (v23 & 1) != 0 )
  {
    v17 = v27;
  }
  else
  {
    if ( a4 || (v16 = 1, a5) )
      v16 = 0;
    v17 = v27;
    appended = sxsisol_SearchActCtxForDllName((__int128 *)&v24[1], v16, &v29, (__int64)v27, (unsigned __int16 *)v39);
    if ( appended < 0 )
      goto LABEL_35;
  }
  if ( !a5 && a4 && v39[1] != *(_QWORD *)(a4 + 8) )
  {
    appended = -1073741789;
    goto LABEL_35;
  }
  if ( a8 )
  {
    appended = RtlFindCharInUnicodeString(1, (__int16 *)v39, (__int64)&RtlDosPathSeperatorsString, v22);
    if ( appended < 0 )
      goto LABEL_35;
    *a8 = ((unsigned __int64)v22[0] >> 1) + 1;
  }
  appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v39);
  if ( appended >= 0 )
  {
    if ( v17 )
      *v17 = v15;
    appended = 0;
  }
  while ( 1 )
  {
LABEL_35:
    if ( appended < 0 )
    {
LABEL_36:
      if ( LOBYTE(v39[10]) )
      {
        if ( v39[2] && v39[2] != v39[3] )
        {
          v28.Buffer = (wchar_t *)v39[2];
          RtlFreeAnsiString(&v28);
        }
        if ( v39[3] )
          *(_WORD *)v39[3] = 0;
      }
      memset(v39, 0, 0x58uLL);
    }
    if ( v26 )
    {
      NtdllpFreeStringRoutine(v26);
      v25 = 0LL;
      v26 = 0LL;
    }
    if ( v35 )
    {
      if ( v35 != v36 )
      {
        UnicodeString.Buffer = v35;
        RtlFreeAnsiString(&UnicodeString);
      }
      v35 = v36;
      v37 = v38;
    }
    *((_QWORD *)&v34 + 1) = v36;
    if ( v36 )
      *v36 = 0;
    WORD1(v34) = v38;
    LOWORD(v34) = 0;
    if ( appended != -1072365567 )
      break;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      434LL,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    appended = -1073741595;
  }
  return (unsigned int)appended;
}
