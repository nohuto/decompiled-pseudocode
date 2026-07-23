/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x18001A954
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFindCharInUnicodeString @ 0x18001A5E0 (RtlFindCharInUnicodeString.c)
 *     RtlFindActivationContextSectionString @ 0x18001AD70 (RtlFindActivationContextSectionString.c)
 *     RtlReleaseActivationContext @ 0x18003B780 (RtlReleaseActivationContext.c)
 *     RtlFreeAnsiString @ 0x1800427D0 (RtlFreeAnsiString.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800687F0 (RtlGetAssemblyStorageRoot.c)
 *     RtlpEnsureBufferSize @ 0x1800767A0 (RtlpEnsureBufferSize.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DA778 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlAssert @ 0x1800E4D90 (RtlAssert.c)
 */

__int64 __fastcall sxsisol_SearchActCtxForDllName(
        _UNICODE_STRING *a1,
        char a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  _UNICODE_STRING v8; // xmm0
  _ACTIVATION_CONTEXT *hActCtx; // r12
  NTSTATUS ActivationContextSectionString; // eax
  int v11; // ebx
  wchar_t *v12; // rcx
  _BYTE *lpData; // r15
  ULONG ulSectionTotalLength; // esi
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rcx
  bool v19; // zf
  int v20; // ecx
  int AssemblyStorageRoot; // eax
  unsigned int v22; // r8d
  char *v23; // rbx
  __int64 v24; // r12
  const void **v25; // rdx
  unsigned __int64 v26; // r8
  _QWORD *v27; // rsi
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  _WORD *v31; // rcx
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  wchar_t *Buffer; // r13
  unsigned __int16 Length; // bx
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int16 v39; // bx
  unsigned int v40; // edx
  int v41; // r9d
  __int64 v42; // rax
  int v43; // r13d
  char *v44; // r12
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int16 v48; // ax
  unsigned int v49; // edx
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  NTSTATUS CharInUnicodeString; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  _ACTIVATION_CONTEXT *v58; // [rsp+30h] [rbp-D0h]
  USHORT NonInclusivePrefixLength[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v60; // [rsp+3Ch] [rbp-C4h] BYREF
  _WORD *v61; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v63; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  tagACTCTX_SECTION_KEYED_DATA v65; // [rsp+70h] [rbp-90h] BYREF
  int v66; // [rsp+E0h] [rbp-20h] BYREF
  void *Src; // [rsp+E8h] [rbp-18h]
  wchar_t *v68; // [rsp+F0h] [rbp-10h]
  wchar_t *v69; // [rsp+F8h] [rbp-8h]
  __int64 v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  __int16 v72; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&UnicodeString.Length = a4;
  v65.cbSize = 112;
  memset(&v65.ulDataFormatVersion, 0, 0x6CuLL);
  v8 = *a1;
  v66 = 0x20000;
  v61 = 0LL;
  v68 = (wchar_t *)&v72;
  v72 = 0;
  v69 = (wchar_t *)&v72;
  v70 = 2LL;
  v71 = 2LL;
  Src = &v72;
  hActCtx = 0LL;
  StringToFind = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v65);
  v11 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v11 = -1072365560;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v11 = 0;
    goto LABEL_4;
  }
  hActCtx = (_ACTIVATION_CONTEXT *)v65.hActCtx;
  v58 = (_ACTIVATION_CONTEXT *)v65.hActCtx;
  if ( v65.ulLength < 0x14
    || v65.ulDataFormatVersion != 1
    || (lpData = v65.lpData,
        ulSectionTotalLength = v65.ulSectionTotalLength,
        v16 = *((unsigned int *)v65.lpData + 4),
        (unsigned int)v16 > v65.ulSectionTotalLength)
    || (v17 = *((_DWORD *)v65.lpData + 3), v17 > 0x1FFFFFFF)
    || (v18 = 0xFFFFFFFF - 8LL * v17, v16 > v18)
    || (unsigned int)v16 + 8 * v17 > v65.ulSectionTotalLength )
  {
LABEL_58:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*((_BYTE *)v65.lpData + 4) & 2) == 0 )
    goto LABEL_26;
  v19 = (*((_BYTE *)v65.lpData + 4) & 4) == 0;
  v20 = 0;
  v60 = 0;
  if ( !v19 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
    goto LABEL_58;
  }
  if ( (v65.ulFlags & 1) != 0 )
  {
    if ( (v65.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Bu,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v20 = 1;
  }
  if ( (v65.ulFlags & 2) != 0 )
    v20 |= 2u;
  AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                          v20,
                          v65.hActCtx,
                          v65.ulAssemblyRosterIndex,
                          (unsigned int)&v61,
                          (__int64)ReturnedData,
                          (__int64)&v60);
  v11 = AssemblyStorageRoot;
  if ( AssemblyStorageRoot >= 0 )
  {
LABEL_26:
    v22 = 0;
    v23 = (char *)v65.lpSectionBase + *((unsigned int *)lpData + 4);
    *a3 = 0LL;
    v24 = *((unsigned int *)lpData + 3);
    v63 = v24;
    if ( v24 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        v40 = *(_DWORD *)&v23[8 * v18 + 4];
        if ( v40 > ulSectionTotalLength )
          break;
        v41 = *(_DWORD *)&v23[8 * v18];
        if ( v40 > -1 - v41 || v41 + v40 > ulSectionTotalLength )
          break;
        ++v22;
        *a3 += (unsigned __int16)v41;
        v18 = v22;
        if ( v22 == v24 )
          goto LABEL_27;
      }
      v11 = -1072365565;
      goto LABEL_53;
    }
LABEL_27:
    v25 = (const void **)v61;
    if ( v61 )
      *a3 += (unsigned __int16)*v61;
    v26 = *(unsigned __int16 *)a3 + 2LL;
    if ( v26 > 0xFFFE )
      goto LABEL_70;
    v27 = a5 + 8;
    if ( a5 == (unsigned __int16 *)-16LL || v26 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
        goto LABEL_71;
      v25 = (const void **)v61;
    }
    *((_QWORD *)a5 + 1) = *v27;
    a5[1] = a5[16];
    if ( !v25 )
      goto LABEL_39;
    *a5 = 0;
    v28 = *(unsigned __int16 *)v25 + 2LL;
    if ( v28 > 0xFFFE )
      goto LABEL_70;
    if ( a5 != (unsigned __int16 *)-16LL && v28 <= *((_QWORD *)a5 + 4) )
    {
LABEL_38:
      v29 = *v27;
      v30 = *a5;
      *((_QWORD *)a5 + 1) = *v27;
      memmove((void *)(v29 + 2 * (v30 >> 1)), v25[1], *(unsigned __int16 *)v25);
      v31 = v61;
      a5[1] = *a5 + *v61 + 2;
      v32 = (unsigned __int16)(*a5 + *v31);
      v33 = *((_QWORD *)a5 + 1);
      *a5 = v32;
      v18 = v32 >> 1;
      *(_WORD *)(v33 + 2 * v18) = 0;
LABEL_39:
      v60 = 0;
      if ( v24 )
      {
        v42 = 0LL;
        while ( 1 )
        {
          v43 = *(unsigned __int16 *)&v23[8 * v42];
          v44 = (char *)v65.lpSectionBase + *(unsigned int *)&v23[8 * v42 + 4];
          v45 = v43 + *a5 + 2LL;
          if ( v45 > 0xFFFE )
            break;
          if ( (a5 == (unsigned __int16 *)-16LL || v45 > *((_QWORD *)a5 + 4))
            && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
          {
            goto LABEL_81;
          }
          v46 = *v27;
          v47 = (unsigned __int64)*a5 >> 1;
          *((_QWORD *)a5 + 1) = *v27;
          memmove((void *)(v46 + 2 * v47), v44, (unsigned __int16)v43);
          v48 = *a5 + v43 + 2;
          v49 = v60 + 1;
          *a5 += v43;
          v50 = *a5;
          a5[1] = v48;
          v51 = *((_QWORD *)a5 + 1);
          v18 = v50 >> 1;
          v60 = v49;
          *(_WORD *)(v51 + 2 * v18) = 0;
          v42 = v49;
          if ( v49 == v63 )
            goto LABEL_40;
        }
      }
      else
      {
LABEL_40:
        if ( (lpData[4] & 1) != 0 )
        {
LABEL_49:
          if ( (lpData[4] & 4) == 0 )
          {
LABEL_50:
            if ( *(_QWORD *)&UnicodeString.Length )
              **(_DWORD **)&UnicodeString.Length |= 2u;
            v11 = 0;
            goto LABEL_53;
          }
          v11 = sxsisol_ExpandEnvironmentStrings_UEx(v18, a5, &v66);
          if ( v11 < 0 )
          {
LABEL_53:
            hActCtx = v58;
            goto LABEL_4;
          }
          v53 = (unsigned __int16)v66;
          *a5 = 0;
          if ( (unsigned __int64)(v53 + 2) <= 0xFFFE )
          {
            if ( a5 != (unsigned __int16 *)-16LL && (unsigned __int64)(v53 + 2) <= *((_QWORD *)a5 + 4) )
              goto LABEL_94;
            if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
            {
              LOWORD(v53) = v66;
LABEL_94:
              v54 = *v27;
              v55 = (unsigned __int64)*a5 >> 1;
              *((_QWORD *)a5 + 1) = *v27;
              memmove((void *)(v54 + 2 * v55), Src, (unsigned __int16)v53);
              v56 = (unsigned __int16)(*a5 + v66);
              *a5 = v56;
              a5[1] = v56 + 2;
              *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v56 >> 1)) = 0;
              goto LABEL_50;
            }
            goto LABEL_71;
          }
LABEL_70:
          v11 = -1073741562;
          goto LABEL_53;
        }
        if ( (lpData[4] & 8) != 0 )
        {
          CharInUnicodeString = RtlFindCharInUnicodeString(
                                  1u,
                                  &StringToFind,
                                  &RtlDosPathSeperatorsString,
                                  NonInclusivePrefixLength);
          v11 = CharInUnicodeString;
          if ( CharInUnicodeString < 0 )
          {
            if ( CharInUnicodeString == -1073741275 )
              RtlAssert(
                "Internal error check failed",
                "minkernel\\ntdll\\sxsisol.cpp",
                0x477u,
                (PSTR)"Status != STATUS_NOT_FOUND");
            goto LABEL_53;
          }
          Length = -2 - NonInclusivePrefixLength[0] + StringToFind.Length;
          Buffer = &StringToFind.Buffer[((unsigned __int64)NonInclusivePrefixLength[0] >> 1) + 1];
        }
        else
        {
          Buffer = StringToFind.Buffer;
          Length = StringToFind.Length;
        }
        *a3 += Length;
        if ( *a3 < 0xFFFFuLL )
        {
          v36 = *a5 + Length + 2LL;
          if ( v36 <= 0xFFFE )
          {
            if ( (a5 == (unsigned __int16 *)-16LL || v36 > *((_QWORD *)a5 + 4))
              && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
            {
LABEL_81:
              v11 = -1073741801;
              goto LABEL_53;
            }
            v37 = *v27;
            v38 = (unsigned __int64)*a5 >> 1;
            *((_QWORD *)a5 + 1) = *v27;
            memmove((void *)(v37 + 2 * v38), Buffer, Length);
            v39 = *a5 + Length;
            *a5 = v39;
            v18 = (unsigned __int64)v39 >> 1;
            a5[1] = v39 + 2;
            *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v18) = 0;
            goto LABEL_49;
          }
        }
      }
      v11 = -1073741562;
      goto LABEL_53;
    }
    if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
    {
      v25 = (const void **)v61;
      goto LABEL_38;
    }
LABEL_71:
    v11 = -1073741801;
    goto LABEL_53;
  }
  if ( AssemblyStorageRoot == -1073741536 && v60 < 0 )
    v11 = v60;
LABEL_4:
  v12 = v69;
  if ( v68 )
  {
    if ( v68 != v69 )
    {
      UnicodeString.Buffer = v68;
      RtlFreeAnsiString(&UnicodeString);
      v12 = v69;
    }
    v70 = v71;
    v68 = v12;
  }
  Src = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v66) = v71;
  LOWORD(v66) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v11;
}
