/*
 * XREFs of LdrpSearchPath @ 0x18000EBF0
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5C8 (LdrpMapDllSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123F8 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180008A70 (EtwEventWriteNoRegistration.c)
 *     LdrpComputeLazyDllPath @ 0x18000D37C (LdrpComputeLazyDllPath.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18000DD04 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x18000E8FC (LdrpFreeUnicodeString.c)
 *     LdrpResolveDllName @ 0x18000FA94 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18000FD28 (LdrpAllocateUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180010440 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180015220 (RtlCopyUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1800195B0 (RtlCompareUnicodeStrings.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA2C0 (RtlpLookupSafeCurDirList.c)
 */

__int64 __fastcall LdrpSearchPath(
        unsigned __int16 *a1,
        __int64 a2,
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
  __int16 *v18; // rcx
  __int16 v19; // ax
  int v20; // r9d
  _WORD *v21; // rdx
  __int16 *v22; // r14
  __int16 *v23; // rdi
  _WORD *v24; // rax
  bool v25; // si
  __int16 v26; // cx
  int v27; // eax
  __int16 **v28; // rsi
  _DWORD *v29; // rsi
  unsigned int v30; // r10d
  _QWORD *v32; // rax
  _QWORD *v33; // r12
  _QWORD *v34; // rsi
  unsigned __int16 v35; // r13
  unsigned __int16 v36; // ax
  __int64 Heap; // rax
  int v38; // r8d
  int v39; // eax
  __int128 *v40; // rdx
  _DWORD *v41; // rdx
  unsigned int v42; // r9d
  _QWORD *v43; // r8
  unsigned __int16 *v46; // [rsp+48h] [rbp-81h]
  __int16 v47; // [rsp+58h] [rbp-71h] BYREF
  _WORD *v48; // [rsp+60h] [rbp-69h]
  __int64 v49; // [rsp+68h] [rbp-61h]
  _WORD *v50; // [rsp+70h] [rbp-59h]
  __int16 **v51; // [rsp+78h] [rbp-51h]
  bool *v52; // [rsp+80h] [rbp-49h]
  __int64 v53; // [rsp+88h] [rbp-41h]
  __int64 v54; // [rsp+90h] [rbp-39h] BYREF
  int v55; // [rsp+98h] [rbp-31h]
  int v56; // [rsp+9Ch] [rbp-2Dh]
  __int64 v57; // [rsp+A0h] [rbp-29h]
  int v58; // [rsp+A8h] [rbp-21h]
  int v59; // [rsp+ACh] [rbp-1Dh]
  __int64 v60; // [rsp+B0h] [rbp-19h]
  int v61; // [rsp+B8h] [rbp-11h]
  int v62; // [rsp+BCh] [rbp-Dh]

  v10 = a7;
  v13 = a1;
  v49 = a6;
  v14 = 0LL;
  v52 = a8;
  v53 = a9;
  v51 = a4;
  v46 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1180,
      (unsigned int)"LdrpSearchPath",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  if ( !*(_QWORD *)a2 )
  {
    v15 = LdrpComputeLazyDllPath(a2);
    if ( v15 < 0 )
      goto LABEL_50;
    v13 = a1;
  }
  v16 = 0;
  if ( a4 )
  {
    v17 = *a4;
    if ( *a4 )
    {
      v18 = a4[1];
      goto LABEL_15;
    }
  }
  v17 = *(__int16 **)(a2 + 16);
  if ( v17 )
    goto LABEL_10;
  do
  {
    v17 = *(__int16 **)a2;
LABEL_10:
    v18 = v17;
LABEL_15:
    while ( 1 )
    {
      v19 = *v18;
      if ( !*v18 )
        break;
      v20 = (int)v18;
      while ( v19 && v19 != 59 )
        v19 = *++v18;
      if ( (int)v18 - v20 > v16 )
        v16 = (_DWORD)v18 - v20;
      if ( *v18 == 59 )
        ++v18;
    }
  }
  while ( v17 == *(__int16 **)(a2 + 16) && !a3 );
  v15 = LdrpAllocateUnicodeString(&v47, *v13 + v16 + 2);
  if ( v15 < 0 )
    goto LABEL_50;
  v21 = v48;
  v50 = v48;
  if ( a4 && (v22 = *a4) != 0LL )
  {
    v23 = a4[1];
  }
  else
  {
    v22 = *(__int16 **)(a2 + 16);
    if ( !v22 )
      v22 = *(__int16 **)a2;
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
        v25 = v23 == *(__int16 **)(a2 + 8);
        while ( 1 )
        {
          v26 = *v23;
          if ( !*v23 )
            break;
          if ( v26 == 59 )
            goto LABEL_33;
          *v24++ = v26;
          ++v23;
        }
        if ( *v23 == 59 )
LABEL_33:
          ++v23;
        if ( v24 != v21 )
        {
          if ( *(v24 - 1) != 92 && *(v24 - 1) != 47 )
          {
            *v24 = 92;
            LOWORD(v24) = (_WORD)v24 + 2;
          }
          v47 = (_WORD)v24 - (_WORD)v21;
          RtlAppendUnicodeStringToString(&v47, a1, 92LL);
          v27 = LdrpResolveDllName((unsigned int)&v47, (_DWORD)a5, v49, (_DWORD)v10, 0LL, 0);
          v15 = v27;
          if ( v25 )
          {
            if ( v27 < 0 )
              goto LABEL_54;
            v32 = (_QWORD *)RtlpLookupSafeCurDirList();
            v33 = v32;
            if ( v32 )
            {
              v34 = (_QWORD *)*v32;
              if ( (_QWORD *)*v32 != v32 )
              {
                v35 = *v10 >> 1;
                do
                {
                  v36 = *((_WORD *)v34 + 8) >> 1;
                  if ( v35 > v36 && !(unsigned int)RtlCompareUnicodeStrings(*((_QWORD *)a7 + 1), v36, v34[3], v36, 1) )
                  {
                    v14 = v46;
                    v10 = a7;
                    goto LABEL_39;
                  }
                  v34 = (_QWORD *)*v34;
                }
                while ( v34 != v33 );
                v10 = a7;
              }
            }
            Heap = RtlAllocateHeap(LdrpHeap, (unsigned int)(NtdllBaseTag + 0x40000), *v10 + 18LL);
            v46 = (unsigned __int16 *)Heap;
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
LABEL_39:
          if ( v15 >= 0 )
            goto LABEL_42;
LABEL_54:
          if ( v15 != -1073741515 && v15 != -1073741790 && v15 != -1073741757 && v15 != -1073741715 )
            goto LABEL_42;
          v21 = v50;
          *a5 = 0;
        }
      }
    }
    if ( v22 != *(__int16 **)(a2 + 16) || a3 )
      break;
    v22 = *(__int16 **)a2;
    v23 = *(__int16 **)a2;
  }
  v15 = -1073741515;
LABEL_42:
  if ( v14 )
  {
    if ( v15 < 0
      || (unsigned int)RtlCompareUnicodeStrings(
                         *((_QWORD *)v10 + 1),
                         (unsigned __int64)*v10 >> 1,
                         *((_QWORD *)v14 + 1),
                         (unsigned __int64)*v14 >> 1,
                         1) )
    {
      v56 = 0;
      v59 = 0;
      v54 = *(_QWORD *)(LdrpImageEntry + 80);
      v55 = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v57 = *((_QWORD *)v14 + 1);
      v58 = *v14 + 2;
      if ( v15 < 0 )
      {
        v38 = 2;
      }
      else
      {
        v38 = 3;
        v60 = *((_QWORD *)v10 + 1);
        v39 = *v10;
        v62 = 0;
        v61 = v39 + 2;
      }
      v40 = (__int128 *)&CurDirDllLoadFailureWarning;
      if ( v15 < 0 )
        v40 = (__int128 *)&CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration((__int64)&UserLoaderGuid, v40, v38, (__int64)&v54);
    }
    RtlFreeHeap(LdrpHeap, 0LL, v14);
  }
  LdrpFreeUnicodeString((__int64)&v47);
  if ( v15 >= 0 )
  {
    v28 = v51;
    if ( v51 )
    {
      *v51 = v22;
      v28[1] = v23;
    }
    if ( v52 )
      *v52 = v22 == *(__int16 **)(a2 + 16);
  }
  v29 = (_DWORD *)v53;
  if ( v53 && LdrpIsSecurityEtwLoggingEnabled() )
  {
    v41 = (_DWORD *)(a2 + 40);
    v42 = v30;
    if ( *(_WORD *)(a2 + 112) )
    {
      v43 = (_QWORD *)(a2 + 64);
      do
      {
        if ( (unsigned __int64)v23 <= *v43 )
          break;
        ++v42;
        v30 |= 16 << *v41;
        ++v43;
        ++v41;
      }
      while ( v42 < *(unsigned __int16 *)(a2 + 112) );
    }
    *v29 = v30;
  }
LABEL_50:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1499,
      (unsigned int)"LdrpSearchPath",
      4,
      (__int64)"Status: 0x%08lx\n",
      v15);
  return (unsigned int)v15;
}
