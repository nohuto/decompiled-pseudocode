/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0
 * Callers:
 *     LdrpApplyFileNameRedirection @ 0x18002108C (LdrpApplyFileNameRedirection.c)
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     RtlDosSearchPath_Ustr @ 0x18005FCB0 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x18006E354 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_SearchActCtxForDllName @ 0x180024D44 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_CanonicalizeFullPathFileName @ 0x1800259F8 (sxsisol_CanonicalizeFullPathFileName.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure @ 0x180026EA4 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure.c)
 *     RtlFindCharInUnicodeString @ 0x180027030 (RtlFindCharInUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180068860 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180072510 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     sxsisol_RespectDotLocal @ 0x1800C99DC (sxsisol_RespectDotLocal.c)
 *     RtlAssert @ 0x1800D3780 (RtlAssert.c)
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
  __int16 *v20; // rax
  __int128 v21; // xmm1
  _WORD v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  _QWORD v24[3]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h]
  _DWORD *v27; // [rsp+68h] [rbp-A0h]
  _QWORD v28[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v31[2]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 *v33; // [rsp+C8h] [rbp-40h]
  unsigned __int16 *v34; // [rsp+D0h] [rbp-38h]
  __int64 v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+F8h] [rbp-10h] BYREF
  __int16 *v38; // [rsp+100h] [rbp-8h]
  __int16 *v39; // [rsp+108h] [rbp+0h]
  __int16 *v40; // [rsp+110h] [rbp+8h]
  __int64 v41; // [rsp+118h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+18h]
  __int16 v43; // [rsp+128h] [rbp+20h] BYREF
  __int64 v44; // [rsp+130h] [rbp+28h]
  __int64 v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  char v47; // [rsp+148h] [rbp+40h]
  _WORD v48[16]; // [rsp+158h] [rbp+50h] BYREF
  char v49; // [rsp+178h] [rbp+70h] BYREF

  HIDWORD(v24[0]) = a1;
  *(_QWORD *)&UnicodeString.Length = a3;
  v27 = a7;
  LODWORD(v25) = 0;
  v26 = 0LL;
  LODWORD(v28[0]) = 0x800000;
  v28[1] = &v49;
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
  v48[0] = 0;
  v35 = 32LL;
  v33 = v48;
  v34 = v48;
  *((_QWORD *)&v32 + 1) = v48;
  v36 = 32LL;
  LODWORD(v32) = 0x200000;
  if ( a4 )
  {
    v19 = *(unsigned __int16 *)(a4 + 2);
    v20 = *(__int16 **)(a4 + 8);
    if ( v19 < 2 )
    {
      v20 = &v43;
      v19 = 2LL;
    }
    v39 = v20;
    v41 = v19;
    v40 = v20;
    v42 = v19;
    v38 = v20;
    if ( v20 )
      *v20 = 0;
    LOWORD(v37) = 0;
    HIWORD(v37) = v19;
  }
  else
  {
    v41 = 2LL;
    v39 = &v43;
    v40 = &v43;
    v38 = &v43;
    v42 = 2LL;
    v43 = 0;
    v37 = 0x20000;
  }
  v46 = a6;
  v44 = a4;
  v45 = a5;
  v47 = 1;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    goto LABEL_70;
  if ( !a4 )
  {
    if ( a5 || !a8 )
      goto LABEL_15;
LABEL_70:
    appended = -1073741811;
    goto LABEL_35;
  }
  if ( a5 && !a6 )
    goto LABEL_70;
LABEL_15:
  v11 = 0;
  *(_OWORD *)&v24[1] = *a2;
  if ( !a3 || !*a3 )
    goto LABEL_22;
  v12 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v24[1], &unk_1801018B8, v24);
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
  v21 = *(_OWORD *)*(_QWORD *)&UnicodeString.Length;
  v31[0] = *(_OWORD *)&v24[1];
  v31[1] = v21;
  appended = RtlMultiAppendUnicodeStringBuffer(&v32, 2LL, v31);
  if ( appended >= 0 )
  {
    v11 = 1;
LABEL_22:
    appended = 0;
  }
  if ( appended < 0 )
    goto LABEL_36;
  if ( v11 )
    *(_OWORD *)&v24[1] = v32;
  appended = sxsisol_CanonicalizeFullPathFileName(&v24[1], v28, &v25);
  if ( appended < 0 )
    goto LABEL_35;
  if ( (v24[0] & 0x100000000LL) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        appended = sxsisol_RespectDotLocal(&v24[1], &v37, &v23);
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
    LOBYTE(a2) = v16;
    appended = sxsisol_SearchActCtxForDllName(
                 (unsigned int)&v24[1],
                 (_DWORD)a2,
                 (unsigned int)&v29,
                 (_DWORD)v27,
                 (__int64)&v37);
    if ( appended < 0 )
      goto LABEL_35;
  }
  if ( !a5 && a4 && v38 != *(__int16 **)(a4 + 8) )
  {
    appended = -1073741789;
    goto LABEL_35;
  }
  if ( a8 )
  {
    appended = RtlFindCharInUnicodeString(1LL, &v37, &RtlDosPathSeperatorsString, v22);
    if ( appended < 0 )
      goto LABEL_35;
    *a8 = ((unsigned __int64)v22[0] >> 1) + 1;
  }
  appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(&v37);
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
LABEL_36:
      sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Failure(&v37);
    if ( v26 )
    {
      NtdllpFreeStringRoutine(v26, a2, a3);
      v25 = 0LL;
      v26 = 0LL;
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
