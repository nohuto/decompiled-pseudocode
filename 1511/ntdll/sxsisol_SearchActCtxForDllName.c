/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x180015A2C
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 *     RtlFindActivationContextSectionString @ 0x180015E40 (RtlFindActivationContextSectionString.c)
 *     RtlFindCharInUnicodeString @ 0x180017EC0 (RtlFindCharInUnicodeString.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlGetAssemblyStorageRoot @ 0x180041BAC (RtlGetAssemblyStorageRoot.c)
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     RtlpEnsureBufferSize @ 0x180075450 (RtlpEnsureBufferSize.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800D22F4 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlAssert @ 0x1800DBA70 (RtlAssert.c)
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
  unsigned __int16 *v12; // rcx
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
  unsigned __int16 *Buffer; // r13
  unsigned __int16 Length; // bx
  unsigned __int64 v36; // r8
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int16 v39; // bx
  unsigned int v40; // edx
  int v41; // r9d
  __int64 v42; // rax
  int v43; // r12d
  char *v44; // r13
  unsigned __int64 v45; // r8
  __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int16 v48; // r12
  unsigned int v49; // edx
  __int64 v50; // rax
  NTSTATUS CharInUnicodeString; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  _ACTIVATION_CONTEXT *v57; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+38h] [rbp-C8h] BYREF
  USHORT NonInclusivePrefixLength; // [rsp+3Ch] [rbp-C4h] BYREF
  _WORD *v60; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  tagACTCTX_SECTION_KEYED_DATA v64; // [rsp+70h] [rbp-90h] BYREF
  int v65; // [rsp+E0h] [rbp-20h] BYREF
  void *Src; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v67; // [rsp+F0h] [rbp-10h]
  unsigned __int16 *v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int16 v71; // [rsp+110h] [rbp+10h] BYREF

  *(_QWORD *)&UnicodeString.Length = a4;
  v64.cbSize = 112;
  memset(&v64.ulDataFormatVersion, 0, 0x6CuLL);
  v8 = *a1;
  v65 = 0x20000;
  v60 = 0LL;
  v67 = (unsigned __int16 *)&v71;
  v71 = 0;
  v68 = (unsigned __int16 *)&v71;
  v69 = 2LL;
  v70 = 2LL;
  Src = &v71;
  hActCtx = 0LL;
  StringToFind = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v64);
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
  hActCtx = (_ACTIVATION_CONTEXT *)v64.hActCtx;
  v57 = (_ACTIVATION_CONTEXT *)v64.hActCtx;
  if ( v64.ulLength < 0x14
    || v64.ulDataFormatVersion != 1
    || (lpData = v64.lpData,
        ulSectionTotalLength = v64.ulSectionTotalLength,
        v16 = *((unsigned int *)v64.lpData + 4),
        (unsigned int)v16 > v64.ulSectionTotalLength)
    || (v17 = *((_DWORD *)v64.lpData + 3), v17 > 0x1FFFFFFF)
    || (v18 = 0xFFFFFFFF - 8LL * v17, v16 > v18)
    || (unsigned int)v16 + 8 * v17 > v64.ulSectionTotalLength )
  {
LABEL_58:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*((_BYTE *)v64.lpData + 4) & 2) == 0 )
    goto LABEL_26;
  v19 = (*((_BYTE *)v64.lpData + 4) & 4) == 0;
  v20 = 0;
  v58 = 0;
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
  if ( (v64.ulFlags & 1) != 0 )
  {
    if ( (v64.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Bu,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v20 = 1;
  }
  if ( (v64.ulFlags & 2) != 0 )
    v20 |= 2u;
  AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                          v20,
                          v64.hActCtx,
                          v64.ulAssemblyRosterIndex,
                          (unsigned int)&v60,
                          (__int64)ReturnedData,
                          (__int64)&v58);
  v11 = AssemblyStorageRoot;
  if ( AssemblyStorageRoot >= 0 )
  {
LABEL_26:
    v22 = 0;
    v23 = (char *)v64.lpSectionBase + *((unsigned int *)lpData + 4);
    *a3 = 0LL;
    v24 = *((unsigned int *)lpData + 3);
    v62 = v24;
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
    v25 = (const void **)v60;
    if ( v60 )
      *a3 += (unsigned __int16)*v60;
    v26 = *(unsigned __int16 *)a3 + 2LL;
    if ( v26 > 0xFFFE )
      goto LABEL_70;
    v27 = a5 + 8;
    if ( a5 == (unsigned __int16 *)-16LL || v26 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
        goto LABEL_71;
      v25 = (const void **)v60;
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
      v31 = v60;
      a5[1] = *a5 + *v60 + 2;
      v32 = (unsigned __int16)(*a5 + *v31);
      v33 = *((_QWORD *)a5 + 1);
      *a5 = v32;
      v18 = v32 >> 1;
      *(_WORD *)(v33 + 2 * v18) = 0;
LABEL_39:
      v58 = 0;
      if ( v24 )
      {
        v42 = 0LL;
        while ( 1 )
        {
          v43 = *(unsigned __int16 *)&v23[8 * v42];
          v44 = (char *)v64.lpSectionBase + *(unsigned int *)&v23[8 * v42 + 4];
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
          v48 = *a5 + v43;
          v49 = v58 + 1;
          *a5 = v48;
          a5[1] = v48 + 2;
          v50 = *((_QWORD *)a5 + 1);
          v18 = (unsigned __int64)v48 >> 1;
          v58 = v49;
          *(_WORD *)(v50 + 2 * v18) = 0;
          v42 = v49;
          if ( v49 == v62 )
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
          v11 = sxsisol_ExpandEnvironmentStrings_UEx(v18, a5, &v65);
          if ( v11 < 0 )
          {
LABEL_53:
            hActCtx = v57;
            goto LABEL_4;
          }
          v52 = (unsigned __int16)v65;
          *a5 = 0;
          if ( (unsigned __int64)(v52 + 2) <= 0xFFFE )
          {
            if ( a5 != (unsigned __int16 *)-16LL && (unsigned __int64)(v52 + 2) <= *((_QWORD *)a5 + 4) )
              goto LABEL_94;
            if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
            {
              LOWORD(v52) = v65;
LABEL_94:
              v53 = *v27;
              v54 = (unsigned __int64)*a5 >> 1;
              *((_QWORD *)a5 + 1) = *v27;
              memmove((void *)(v53 + 2 * v54), Src, (unsigned __int16)v52);
              v55 = (unsigned __int16)(*a5 + v65);
              *a5 = v55;
              a5[1] = v55 + 2;
              *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v55 >> 1)) = 0;
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
                                  &NonInclusivePrefixLength);
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
          Length = -2 - NonInclusivePrefixLength + StringToFind.Length;
          Buffer = &StringToFind.Buffer[((unsigned __int64)NonInclusivePrefixLength >> 1) + 1];
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
      v25 = (const void **)v60;
      goto LABEL_38;
    }
LABEL_71:
    v11 = -1073741801;
    goto LABEL_53;
  }
  if ( AssemblyStorageRoot == -1073741536 && v58 < 0 )
    v11 = v58;
LABEL_4:
  v12 = v68;
  if ( v67 )
  {
    if ( v67 != v68 )
    {
      UnicodeString.Buffer = v67;
      RtlFreeAnsiString(&UnicodeString);
      v12 = v68;
    }
    v69 = v70;
    v67 = v12;
  }
  Src = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v65) = v70;
  LOWORD(v65) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v11;
}
