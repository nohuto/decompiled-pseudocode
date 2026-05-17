/*
 * XREFs of LdrpSearchPath @ 0x18000BF00
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000A018 (LdrpMapDllSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x18001138C (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x1800088D8 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x18000A308 (LdrpFreeUnicodeString.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18000E008 (LdrpAllocateUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x18000E310 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180019A70 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlCompareUnicodeString @ 0x18002EFD0 (RtlCompareUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18002F010 (RtlCompareUnicodeStrings.c)
 *     LdrpComputeLazyDllPath @ 0x18007B364 (LdrpComputeLazyDllPath.c)
 *     EtwEventWriteNoRegistration @ 0x180084090 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 *     LdrpSaveLocationsSearched @ 0x1800CB730 (LdrpSaveLocationsSearched.c)
 *     RtlpLookupSafeCurDirList @ 0x1800D1EFC (RtlpLookupSafeCurDirList.c)
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
  __int64 v28; // r8
  _QWORD *v29; // r12
  _QWORD *v30; // r15
  unsigned __int16 v31; // r13
  unsigned __int16 v32; // ax
  __int64 Heap; // rax
  __int64 v34; // r8
  int v35; // eax
  void *v36; // rdx
  __int16 **v37; // r15
  unsigned __int16 *v41; // [rsp+50h] [rbp-79h]
  __int16 v42; // [rsp+58h] [rbp-71h] BYREF
  _WORD *v43; // [rsp+60h] [rbp-69h]
  __int64 v44; // [rsp+68h] [rbp-61h]
  __int64 v45; // [rsp+70h] [rbp-59h]
  __int16 **v46; // [rsp+78h] [rbp-51h]
  _WORD *v47; // [rsp+80h] [rbp-49h]
  bool *v48; // [rsp+88h] [rbp-41h]
  __int64 v49; // [rsp+90h] [rbp-39h] BYREF
  int v50; // [rsp+98h] [rbp-31h]
  int v51; // [rsp+9Ch] [rbp-2Dh]
  __int64 v52; // [rsp+A0h] [rbp-29h]
  int v53; // [rsp+A8h] [rbp-21h]
  int v54; // [rsp+ACh] [rbp-1Dh]
  __int64 v55; // [rsp+B0h] [rbp-19h]
  int v56; // [rsp+B8h] [rbp-11h]
  int v57; // [rsp+BCh] [rbp-Dh]

  v10 = a7;
  v13 = a1;
  v44 = a6;
  v14 = 0LL;
  v48 = a8;
  v45 = a9;
  v46 = a4;
  v41 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1185,
      (unsigned int)"LdrpSearchPath",
      3,
      (__int64)"DLL name: %wZ\n");
  if ( !*a2 )
  {
    v15 = LdrpComputeLazyDllPath(a2);
    if ( v15 < 0 )
      goto LABEL_86;
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
  v15 = LdrpAllocateUnicodeString(&v42, v16 + *v13 + 2);
  if ( v15 >= 0 )
  {
    v21 = v43;
    v47 = v43;
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
    while ( 2 )
    {
      v28 = 92LL;
      do
      {
        while ( 1 )
        {
          while ( !*v23 )
          {
            if ( v22 != a2[2] || a3 )
            {
              v15 = -1073741515;
              goto LABEL_68;
            }
            v22 = *a2;
            v23 = *a2;
          }
          if ( *v23 != 59 )
            break;
          ++v23;
        }
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
      }
      while ( v24 == v21 );
      if ( *(v24 - 1) != 92 && *(v24 - 1) != 47 )
      {
        *v24 = 92;
        LOWORD(v24) = (_WORD)v24 + 2;
      }
      v42 = (_WORD)v24 - (_WORD)v21;
      RtlAppendUnicodeStringToString(&v42, a1);
      v27 = LdrpResolveDllName((unsigned int)&v42, (_DWORD)a5, v44, (_DWORD)v10, 0LL, 0);
      v15 = v27;
      if ( v25 )
      {
        if ( v27 < 0 )
        {
LABEL_61:
          if ( v15 == -1073741515 || v15 == -1073741790 || v15 == -1073741757 || v15 == -1073741715 )
          {
            v21 = v47;
            *a5 = 0;
            continue;
          }
LABEL_68:
          if ( v14 )
          {
            if ( v15 < 0 || (LOBYTE(v28) = 1, (unsigned int)RtlCompareUnicodeString(v10, v14, v28)) )
            {
              v51 = 0;
              v54 = 0;
              v49 = *(_QWORD *)(LdrpImageEntry + 80);
              v50 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
              v52 = *((_QWORD *)v14 + 1);
              v53 = *v14 + 2;
              if ( v15 < 0 )
              {
                v34 = 2LL;
              }
              else
              {
                v34 = 3LL;
                v55 = *((_QWORD *)v10 + 1);
                v35 = *v10;
                v57 = 0;
                v56 = v35 + 2;
              }
              v36 = &CurDirDllLoadFailureWarning;
              if ( v15 < 0 )
                v36 = &CurDirDllLoadFailureError;
              EtwEventWriteNoRegistration(&UserLoaderGuid, v36, v34, &v49);
            }
            RtlFreeHeap(LdrpHeap, 0LL, v14);
          }
          LdrpFreeUnicodeString((__int64)&v42);
          if ( v15 >= 0 )
          {
            v37 = v46;
            if ( v46 )
            {
              *v46 = v22;
              v37[1] = v23;
            }
            if ( v48 )
              *v48 = v22 == a2[2];
          }
          if ( v45 && LdrpIsSecurityEtwLoggingEnabled() )
            LdrpSaveLocationsSearched(a2, v23);
          goto LABEL_86;
        }
        v29 = (_QWORD *)RtlpLookupSafeCurDirList();
        if ( !v29 || (v30 = (_QWORD *)*v29, (_QWORD *)*v29 == v29) )
        {
LABEL_56:
          Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 0x40000), *v10 + 18LL);
          v41 = (unsigned __int16 *)Heap;
          v14 = (unsigned __int16 *)Heap;
          if ( Heap )
          {
            *(_WORD *)Heap = 0;
            *(_WORD *)(Heap + 2) = *v10;
            *(_QWORD *)(Heap + 8) = Heap + 16;
            RtlCopyUnicodeString(Heap, v10);
            *(_WORD *)(*((_QWORD *)v14 + 1) + 2 * ((unsigned __int64)*v10 >> 1)) = 0;
          }
          v15 = -1073741515;
        }
        else
        {
          v31 = *v10 >> 1;
          while ( 1 )
          {
            v32 = *((_WORD *)v30 + 8) >> 1;
            if ( v31 > v32 && !(unsigned int)RtlCompareUnicodeStrings(*((_QWORD *)a7 + 1), v32, v30[3], v32, 1) )
              break;
            v30 = (_QWORD *)*v30;
            if ( v30 == v29 )
            {
              v10 = a7;
              goto LABEL_56;
            }
          }
          v14 = v41;
          v10 = a7;
        }
      }
      break;
    }
    if ( v15 >= 0 )
      goto LABEL_68;
    goto LABEL_61;
  }
LABEL_86:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1504,
      (unsigned int)"LdrpSearchPath",
      4,
      (__int64)"Status: 0x%08lx\n");
  return (unsigned int)v15;
}
