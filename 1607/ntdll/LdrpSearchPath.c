/*
 * XREFs of LdrpSearchPath @ 0x18000EBE0
 * Callers:
 *     LdrpMapDllSearchPath @ 0x18000E5B8 (LdrpMapDllSearchPath.c)
 *     LdrpFindLoadedDllInternal @ 0x1800123E8 (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180008A60 (EtwEventWriteNoRegistration.c)
 *     LdrpComputeLazyDllPath @ 0x18000D36C (LdrpComputeLazyDllPath.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18000DCF4 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x18000E8EC (LdrpFreeUnicodeString.c)
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     LdrpAllocateUnicodeString @ 0x18000FD18 (LdrpAllocateUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x180010430 (RtlAppendUnicodeStringToString.c)
 *     RtlCopyUnicodeString @ 0x180015210 (RtlCopyUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x1800195A0 (RtlCompareUnicodeStrings.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 *     RtlpLookupSafeCurDirList @ 0x1800DA380 (RtlpLookupSafeCurDirList.c)
 */

__int64 __fastcall LdrpSearchPath(
        const UNICODE_STRING *a1,
        __int64 a2,
        char a3,
        wchar_t **a4,
        _WORD *a5,
        __int64 a6,
        PCUNICODE_STRING SourceString,
        bool *a8,
        __int64 a9)
{
  PCUNICODE_STRING v10; // r13
  const UNICODE_STRING *v13; // rbx
  PCWCH *v14; // r12
  int v15; // ebx
  unsigned int v16; // r8d
  wchar_t *v17; // rdx
  wchar_t *v18; // rcx
  wchar_t v19; // ax
  int v20; // r9d
  wchar_t *Buffer; // rdx
  wchar_t *v22; // r14
  wchar_t *v23; // rdi
  wchar_t *v24; // rax
  bool v25; // si
  wchar_t v26; // cx
  int v27; // eax
  wchar_t **v28; // rsi
  _DWORD *v29; // rsi
  unsigned int v30; // r10d
  _QWORD *v32; // rax
  _QWORD *v33; // r12
  _QWORD *v34; // rsi
  unsigned __int16 v35; // r13
  unsigned __int16 v36; // ax
  _UNICODE_STRING *Heap; // rax
  ULONG v38; // r8d
  int Length; // eax
  const EVENT_DESCRIPTOR *v40; // rdx
  _DWORD *v41; // rdx
  unsigned int v42; // r9d
  _QWORD *v43; // r8
  _UNICODE_STRING *v46; // [rsp+48h] [rbp-81h]
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-71h] BYREF
  __int64 v48; // [rsp+68h] [rbp-61h]
  wchar_t *v49; // [rsp+70h] [rbp-59h]
  wchar_t **v50; // [rsp+78h] [rbp-51h]
  bool *v51; // [rsp+80h] [rbp-49h]
  __int64 v52; // [rsp+88h] [rbp-41h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  PCWCH v54; // [rsp+A0h] [rbp-29h]
  int v55; // [rsp+A8h] [rbp-21h]
  int v56; // [rsp+ACh] [rbp-1Dh]
  wchar_t *v57; // [rsp+B0h] [rbp-19h]
  int v58; // [rsp+B8h] [rbp-11h]
  int v59; // [rsp+BCh] [rbp-Dh]

  v10 = SourceString;
  v13 = a1;
  v48 = a6;
  v14 = 0LL;
  v51 = a8;
  v52 = a9;
  v50 = a4;
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
  v17 = *(wchar_t **)(a2 + 16);
  if ( v17 )
    goto LABEL_10;
  do
  {
    v17 = *(wchar_t **)a2;
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
  while ( v17 == *(wchar_t **)(a2 + 16) && !a3 );
  v15 = LdrpAllocateUnicodeString(&Destination, v13->Length + v16 + 2);
  if ( v15 < 0 )
    goto LABEL_50;
  Buffer = Destination.Buffer;
  v49 = Destination.Buffer;
  if ( a4 && (v22 = *a4) != 0LL )
  {
    v23 = a4[1];
  }
  else
  {
    v22 = *(wchar_t **)(a2 + 16);
    if ( !v22 )
      v22 = *(wchar_t **)a2;
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
        v24 = Buffer;
        v25 = v23 == *(wchar_t **)(a2 + 8);
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
        if ( v24 != Buffer )
        {
          if ( *(v24 - 1) != 92 && *(v24 - 1) != 47 )
          {
            *v24 = 92;
            LOWORD(v24) = (_WORD)v24 + 2;
          }
          Destination.Length = (_WORD)v24 - (_WORD)Buffer;
          RtlAppendUnicodeStringToString(&Destination, a1);
          v27 = LdrpResolveDllName(&Destination, a5, v48, v10, 0LL, 0);
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
                v35 = v10->Length >> 1;
                do
                {
                  v36 = *((_WORD *)v34 + 8) >> 1;
                  if ( v35 > v36 && !RtlCompareUnicodeStrings(SourceString->Buffer, v36, (PCWCH)v34[3], v36, 1u) )
                  {
                    v14 = (PCWCH *)v46;
                    v10 = SourceString;
                    goto LABEL_39;
                  }
                  v34 = (_QWORD *)*v34;
                }
                while ( v34 != v33 );
                v10 = SourceString;
              }
            }
            Heap = (_UNICODE_STRING *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v10->Length + 18LL);
            v46 = Heap;
            v14 = (PCWCH *)Heap;
            if ( Heap )
            {
              Heap->Length = 0;
              Heap->MaximumLength = v10->Length;
              Heap->Buffer = &Heap[1].Length;
              RtlCopyUnicodeString(Heap, v10);
              v14[1][(unsigned __int64)v10->Length >> 1] = 0;
            }
            v15 = -1073741515;
          }
LABEL_39:
          if ( v15 >= 0 )
            goto LABEL_42;
LABEL_54:
          if ( v15 != -1073741515 && v15 != -1073741790 && v15 != -1073741757 && v15 != -1073741715 )
            goto LABEL_42;
          Buffer = v49;
          *a5 = 0;
        }
      }
    }
    if ( v22 != *(wchar_t **)(a2 + 16) || a3 )
      break;
    v22 = *(wchar_t **)a2;
    v23 = *(wchar_t **)a2;
  }
  v15 = -1073741515;
LABEL_42:
  if ( v14 )
  {
    if ( v15 < 0
      || RtlCompareUnicodeStrings(
           v10->Buffer,
           (unsigned __int64)v10->Length >> 1,
           v14[1],
           (unsigned __int64)*(unsigned __int16 *)v14 >> 1,
           1u) )
    {
      UserData.Reserved = 0;
      v56 = 0;
      UserData.Ptr = *(_QWORD *)(LdrpImageEntry + 80);
      UserData.Size = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v54 = v14[1];
      v55 = *(unsigned __int16 *)v14 + 2;
      if ( v15 < 0 )
      {
        v38 = 2;
      }
      else
      {
        v38 = 3;
        v57 = v10->Buffer;
        Length = v10->Length;
        v59 = 0;
        v58 = Length + 2;
      }
      v40 = (const EVENT_DESCRIPTOR *)&CurDirDllLoadFailureWarning;
      if ( v15 < 0 )
        v40 = &CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration(&UserLoaderGuid, v40, v38, &UserData);
    }
    RtlFreeHeap(LdrpHeap, 0, v14);
  }
  LdrpFreeUnicodeString((__int64)&Destination);
  if ( v15 >= 0 )
  {
    v28 = v50;
    if ( v50 )
    {
      *v50 = v22;
      v28[1] = v23;
    }
    if ( v51 )
      *v51 = v22 == *(wchar_t **)(a2 + 16);
  }
  v29 = (_DWORD *)v52;
  if ( v52 && LdrpIsSecurityEtwLoggingEnabled() )
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
