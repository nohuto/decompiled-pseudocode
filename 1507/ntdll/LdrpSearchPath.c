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
        const UNICODE_STRING *a1,
        unsigned __int16 **a2,
        char a3,
        unsigned __int16 **a4,
        _WORD *a5,
        __int64 a6,
        _UNICODE_STRING *a7,
        bool *a8,
        __int64 a9)
{
  _UNICODE_STRING *v10; // r13
  const UNICODE_STRING *v13; // rbx
  _UNICODE_STRING *v14; // r12
  int v15; // ebx
  unsigned int v16; // r8d
  unsigned __int16 *v17; // rdx
  unsigned __int16 *i; // rcx
  int v19; // r9d
  unsigned __int16 v20; // ax
  unsigned __int16 *Buffer; // rdx
  unsigned __int16 *v22; // rsi
  unsigned __int16 *v23; // rdi
  unsigned __int16 *v24; // rax
  bool v25; // r15
  unsigned __int16 v26; // cx
  int v27; // eax
  _QWORD *v28; // r12
  _QWORD *v29; // r15
  unsigned __int16 v30; // r13
  unsigned __int16 v31; // ax
  _UNICODE_STRING *Heap; // rax
  ULONG v33; // r8d
  int Length; // eax
  const EVENT_DESCRIPTOR *v35; // rdx
  unsigned __int16 **v36; // r15
  _UNICODE_STRING *v40; // [rsp+50h] [rbp-79h]
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-71h] BYREF
  __int64 v42; // [rsp+68h] [rbp-61h]
  __int64 v43; // [rsp+70h] [rbp-59h]
  unsigned __int16 **v44; // [rsp+78h] [rbp-51h]
  unsigned __int16 *v45; // [rsp+80h] [rbp-49h]
  bool *v46; // [rsp+88h] [rbp-41h]
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int16 *v48; // [rsp+A0h] [rbp-29h]
  int v49; // [rsp+A8h] [rbp-21h]
  int v50; // [rsp+ACh] [rbp-1Dh]
  unsigned __int16 *v51; // [rsp+B0h] [rbp-19h]
  int v52; // [rsp+B8h] [rbp-11h]
  int v53; // [rsp+BCh] [rbp-Dh]

  v10 = a7;
  v13 = a1;
  v42 = a6;
  v14 = 0LL;
  v46 = a8;
  v43 = a9;
  v44 = a4;
  v40 = 0LL;
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1185,
      (unsigned int)"LdrpSearchPath",
      3,
      (__int64)"DLL name: %wZ\n",
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
  v15 = LdrpAllocateUnicodeString(&Destination, v16 + v13->Length + 2);
  if ( v15 < 0 )
    goto LABEL_85;
  Buffer = Destination.Buffer;
  v45 = Destination.Buffer;
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
        v24 = Buffer;
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
        if ( v24 != Buffer )
        {
          if ( *(v24 - 1) != 92 && *(v24 - 1) != 47 )
          {
            *v24 = 92;
            LOWORD(v24) = (_WORD)v24 + 2;
          }
          Destination.Length = (_WORD)v24 - (_WORD)Buffer;
          RtlAppendUnicodeStringToString(&Destination, a1);
          v27 = LdrpResolveDllName(&Destination, a5, v42, v10, 0LL, 0);
          v15 = v27;
          if ( v25 )
          {
            if ( v27 < 0 )
              goto LABEL_61;
            v28 = (_QWORD *)RtlpLookupSafeCurDirList();
            if ( !v28 || (v29 = (_QWORD *)*v28, (_QWORD *)*v28 == v28) )
            {
LABEL_56:
              Heap = (_UNICODE_STRING *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v10->Length + 18LL);
              v40 = Heap;
              v14 = Heap;
              if ( Heap )
              {
                Heap->Length = 0;
                Heap->MaximumLength = v10->Length;
                Heap->Buffer = &Heap[1].Length;
                RtlCopyUnicodeString(Heap, v10);
                v14->Buffer[(unsigned __int64)v10->Length >> 1] = 0;
              }
              v15 = -1073741515;
            }
            else
            {
              v30 = v10->Length >> 1;
              while ( 1 )
              {
                v31 = *((_WORD *)v29 + 8) >> 1;
                if ( v30 > v31 && !RtlCompareUnicodeStrings(a7->Buffer, v31, (PCWCH)v29[3], v31, 1u) )
                  break;
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
          Buffer = v45;
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
    if ( v15 < 0 || RtlCompareUnicodeString(v10, v14, 1u) )
    {
      UserData.Reserved = 0;
      v50 = 0;
      UserData.Ptr = *(_QWORD *)(LdrpImageEntry + 80);
      UserData.Size = *(unsigned __int16 *)(LdrpImageEntry + 72) + 2;
      v48 = v14->Buffer;
      v49 = v14->Length + 2;
      if ( v15 < 0 )
      {
        v33 = 2;
      }
      else
      {
        v33 = 3;
        v51 = v10->Buffer;
        Length = v10->Length;
        v53 = 0;
        v52 = Length + 2;
      }
      v35 = (const EVENT_DESCRIPTOR *)&CurDirDllLoadFailureWarning;
      if ( v15 < 0 )
        v35 = &CurDirDllLoadFailureError;
      EtwEventWriteNoRegistration(&UserLoaderGuid, v35, v33, &UserData);
    }
    RtlFreeHeap(LdrpHeap, 0, v14);
  }
  LdrpFreeUnicodeString(&Destination);
  if ( v15 >= 0 )
  {
    v36 = v44;
    if ( v44 )
    {
      *v44 = v22;
      v36[1] = v23;
    }
    if ( v46 )
      *v46 = v22 == a2[2];
  }
  if ( v43 && (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
    LdrpSaveLocationsSearched(a2, v23);
LABEL_85:
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1504,
      (unsigned int)"LdrpSearchPath",
      4,
      (__int64)"Status: 0x%08lx\n",
      v15);
  return (unsigned int)v15;
}
