/*
 * XREFs of LdrpSearchPath @ 0x18003F450
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x1800187EC (LdrpFindLoadedDllInternal.c)
 *     LdrpMapDllSearchPath @ 0x180042A04 (LdrpMapDllSearchPath.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x18001FCD0 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeString @ 0x1800357E0 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18003FBC4 (LdrpAllocateUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180040100 (RtlAppendUnicodeStringToString.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180042DE0 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpComputeLazyDllPath @ 0x180042FC0 (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x180077C30 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpSaveLocationsSearched @ 0x1800C1070 (LdrpSaveLocationsSearched.c)
 *     RtlpLookupSafeCurDirList @ 0x1800C941C (RtlpLookupSafeCurDirList.c)
 */

__int64 __fastcall LdrpSearchPath(
        unsigned __int16 *a1,
        __int16 **a2,
        char a3,
        __int16 **a4,
        _WORD *a5,
        __int64 a6,
        unsigned __int16 *a7,
        bool *a8,
        __int64 a9)
{
  unsigned __int16 *v10; // r13
  unsigned __int16 *v13; // rbx
  unsigned __int16 *v14; // r12
  int v15; // ebx
  unsigned int v16; // r8d
  __int16 *v17; // rdx
  __int16 *i; // rcx
  int v19; // r9d
  __int16 v20; // ax
  _WORD *v21; // rdx
  __int16 *v22; // rsi
  __int16 *v23; // rdi
  _WORD *v24; // rax
  bool v25; // r15
  __int16 v26; // cx
  int v27; // eax
  _QWORD *v28; // r12
  _QWORD *v29; // r15
  unsigned __int16 v30; // r13
  unsigned __int16 v31; // ax
  __int64 Heap; // rax
  __int64 v33; // r8
  int v34; // eax
  void *v35; // rdx
  __int16 **v36; // r15
  unsigned __int16 *v40; // [rsp+50h] [rbp-79h]
  __int16 v41; // [rsp+58h] [rbp-71h] BYREF
  _WORD *v42; // [rsp+60h] [rbp-69h]
  __int64 v43; // [rsp+68h] [rbp-61h]
  __int64 v44; // [rsp+70h] [rbp-59h]
  __int16 **v45; // [rsp+78h] [rbp-51h]
  _WORD *v46; // [rsp+80h] [rbp-49h]
  bool *v47; // [rsp+88h] [rbp-41h]
  __int64 v48; // [rsp+90h] [rbp-39h] BYREF
  int v49; // [rsp+98h] [rbp-31h]
  int v50; // [rsp+9Ch] [rbp-2Dh]
  __int64 v51; // [rsp+A0h] [rbp-29h]
  int v52; // [rsp+A8h] [rbp-21h]
  int v53; // [rsp+ACh] [rbp-1Dh]
  __int64 v54; // [rsp+B0h] [rbp-19h]
  int v55; // [rsp+B8h] [rbp-11h]
  int v56; // [rsp+BCh] [rbp-Dh]

  v10 = a7;
  v13 = a1;
  v43 = a6;
  v14 = 0LL;
  v47 = a8;
  v44 = a9;
  v45 = a4;
  v40 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1185,
      (unsigned int)"LdrpSearchPath",
      3,
      "DLL name: %wZ\n",
      a1);
  if ( !*a2 )
  {
    v15 = LdrpComputeLazyDllPath(a2);
    if ( v15 < 0 )
      goto LABEL_85;
    v13 = a1;
  }
  v16 = 0;
  if ( !a4 || (v17 = *a4) == 0LL )
  {
    v17 = a2[2];
    if ( v17 )
      goto LABEL_23;
    goto LABEL_22;
  }
  for ( i = a4[1]; ; i = v17 )
  {
    while ( 1 )
    {
      v20 = *i;
      if ( !*i )
        break;
      v19 = (int)i;
      while ( v20 && v20 != 59 )
        v20 = *++i;
      if ( (int)i - v19 > v16 )
        v16 = (_DWORD)i - v19;
      if ( *i == 59 )
        ++i;
    }
    if ( v17 != a2[2] || a3 )
      break;
LABEL_22:
    v17 = *a2;
LABEL_23:
    ;
  }
  v15 = LdrpAllocateUnicodeString(&v41, v16 + *v13 + 2);
  if ( v15 < 0 )
    goto LABEL_85;
  v21 = v42;
  v46 = v42;
  if ( a4 && (v22 = *a4) != 0LL )
  {
    v23 = a4[1];
  }
  else
  {
    v22 = a2[2];
    if ( !v22 )
      v22 = *a2;
    v23 = v22;
  }
  while ( 1 )
  {
    while ( *v23 )
    {
      if ( *v23 == 59 )
      {
        ++v23;
      }
      else
      {
        v24 = v21;
        v25 = v23 == a2[1];
        while ( 1 )
        {
          v26 = *v23;
          if ( !*v23 )
            break;
          if ( v26 == 59 )
          {
            ++v23;
            break;
          }
          *v24++ = v26;
          ++v23;
        }
        if ( v24 != v21 )
        {
          if ( *(v24 - 1) != 92 && *(v24 - 1) != 47 )
          {
            *v24 = 92;
            LOWORD(v24) = (_WORD)v24 + 2;
          }
          v41 = (_WORD)v24 - (_WORD)v21;
          RtlAppendUnicodeStringToString(&v41, a1);
          v27 = LdrpResolveDllName((unsigned int)&v41, (_DWORD)a5, v43, (_DWORD)v10, 0LL, 0);
          v15 = v27;
          if ( v25 )
          {
            if ( v27 < 0 )
              goto LABEL_61;
            v28 = (_QWORD *)RtlpLookupSafeCurDirList();
            if ( !v28 || (v29 = (_QWORD *)*v28, (_QWORD *)*v28 == v28) )
            {
LABEL_56:
              Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, *v10 + 18LL);
              v40 = (unsigned __int16 *)Heap;
              v14 = (unsigned __int16 *)Heap;
              if ( Heap )
              {
                *(_WORD *)Heap = 0;
                *(_WORD *)(Heap + 2) = *v10;
                *(_QWORD *)(Heap + 8) = Heap + 16;
                RtlCopyUnicodeString((unsigned __int16 *)Heap, v10);
                *(_WORD *)(*((_QWORD *)v14 + 1) + 2 * ((unsigned __int64)*v10 >> 1)) = 0;
              }
              v15 = -1073741515;
            }
            else
            {
              v30 = *v10 >> 1;
              while ( 1 )
              {
                v31 = *((_WORD *)v29 + 8) >> 1;
                if ( v30 > v31
                  && !(unsigned int)RtlCompareUnicodeStrings(*((unsigned __int16 **)a7 + 1), v31, v29[3], v31, 1) )
                {
                  break;
                }
                v29 = (_QWORD *)*v29;
                if ( v29 == v28 )
                {
                  v10 = a7;
                  goto LABEL_56;
                }
              }
              v14 = v40;
              v10 = a7;
            }
          }
          if ( v15 >= 0 )
            goto LABEL_67;
LABEL_61:
          if ( v15 != -1073741515 && v15 != -1073741790 && v15 != -1073741757 && v15 != -1073741715 )
            goto LABEL_67;
          v21 = v46;
          *a5 = 0;
        }
      }
    }
    if ( v22 != a2[2] || a3 )
      break;
    v22 = *a2;
    v23 = *a2;
  }
  v15 = -1073741515;
LABEL_67:
  if ( v14 )
  {
    if ( v15 < 0 || (unsigned int)RtlCompareUnicodeString(v10, v14, 1) )
    {
      v50 = 0;
      v53 = 0;
      v48 = *(_QWORD *)(LdrpImageEntry + 80);
      v49 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v51 = *((_QWORD *)v14 + 1);
      v52 = *v14 + 2;
      if ( v15 < 0 )
      {
        v33 = 2LL;
      }
      else
      {
        v33 = 3LL;
        v54 = *((_QWORD *)v10 + 1);
        v34 = *v10;
        v56 = 0;
        v55 = v34 + 2;
      }
      v35 = &CurDirDllLoadFailureWarning;
      if ( v15 < 0 )
        v35 = &CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration(&UserLoaderGuid, v35, v33, &v48);
    }
    RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v14);
  }
  LdrpFreeUnicodeString(&v41);
  if ( v15 >= 0 )
  {
    v36 = v45;
    if ( v45 )
    {
      *v45 = v22;
      v36[1] = v23;
    }
    if ( v47 )
      *v47 = v22 == a2[2];
  }
  if ( v44 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
    LdrpSaveLocationsSearched(a2, v23);
LABEL_85:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1504,
      (unsigned int)"LdrpSearchPath",
      4,
      "Status: 0x%08lx\n",
      v15);
  return (unsigned int)v15;
}
