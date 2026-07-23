/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x1800222A0
 * Callers:
 *     LdrpResolveDllName @ 0x18000FA84 (LdrpResolveDllName.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011818 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180011890 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044724 (RtlDoesFileExists_UstrEx.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079458 (RtlpCreateNewDirectoryReference.c)
 *     LdrAddDllDirectory @ 0x180090680 (LdrAddDllDirectory.c)
 *     LdrpCheckAppDirType @ 0x1800D1F34 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpWin32NtNameToNtPathName @ 0x1800102C0 (RtlpWin32NtNameToNtPathName.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D820 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5E8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlPrefixUnicodeString @ 0x18006C6C0 (RtlPrefixUnicodeString.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007935C (RtlpReferenceCurrentDirectory.c)
 *     RtlAreLongPathsEnabled @ 0x180082FE0 (RtlAreLongPathsEnabled.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        char a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        _UNICODE_STRING *a5,
        _UNICODE_STRING **a6,
        _QWORD *a7,
        __int64 a8)
{
  _UNICODE_STRING *v9; // r15
  bool v10; // cc
  wchar_t *Buffer; // rax
  wchar_t v12; // dx
  unsigned int v14; // edi
  wchar_t *v15; // r12
  unsigned int v16; // esi
  unsigned int FullPathName_Ustr; // ebx
  wchar_t *Heap; // rax
  int v19; // eax
  __int64 v20; // r11
  const _UNICODE_STRING *v21; // r13
  int v22; // eax
  unsigned int v23; // esi
  PVOID v24; // rax
  unsigned __int16 Length; // si
  wchar_t *v26; // rdx
  int v27; // ecx
  int MaximumLength; // eax
  __int64 v29; // r8
  __int16 v30; // ax
  unsigned __int16 v31; // si
  int v32; // ecx
  int v33; // eax
  _QWORD *v34; // rcx
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rsi
  _WORD *v38; // rcx
  __int16 v39; // bx
  char v40; // [rsp+30h] [rbp-D0h] BYREF
  char v41; // [rsp+31h] [rbp-CFh]
  __int64 v42; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING String2; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v46; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING **v47; // [rsp+70h] [rbp-90h]
  wchar_t BaseAddress[264]; // [rsp+80h] [rbp-80h] BYREF

  v9 = a4;
  v10 = a3->Length <= 8u;
  v41 = a2;
  *(_QWORD *)&v44.Length = a5;
  v47 = a6;
  v46 = a7;
  if ( !v10 )
  {
    Buffer = a3->Buffer;
    if ( *Buffer == 92 )
    {
      v12 = Buffer[1];
      if ( (v12 == 92 || v12 == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a3, a4, a5, a6, a7, a8);
    }
  }
  v14 = 0;
  if ( a7 )
    *a7 = 0LL;
  v15 = BaseAddress;
  v16 = 520;
  if ( !a1 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(&a3->Length, 0x208u, BaseAddress, a7, &v40, (__int64)&v45);
    if ( FullPathName_Ustr )
    {
      while ( !v40 )
      {
        if ( FullPathName_Ustr <= v16 )
        {
          String2.Length = FullPathName_Ustr;
          String2.MaximumLength = v16;
          String2.Buffer = v15;
          v19 = RtlDetermineDosPathNameType_Ustr(&String2.Length);
          v20 = *(_QWORD *)&v44.Length;
          goto LABEL_21;
        }
        if ( !RtlAreLongPathsEnabled() )
          goto LABEL_27;
        Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, FullPathName_Ustr);
        v15 = Heap;
        if ( !Heap )
          return 3221225495LL;
        v16 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(&a3->Length, FullPathName_Ustr, Heap, v46, &v40, (__int64)&v45);
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v14 = -1073741773;
    goto LABEL_61;
  }
  String2 = *a3;
  v19 = RtlDetermineDosPathNameType_Ustr(&String2.Length);
  LOWORD(FullPathName_Ustr) = String2.Length;
  v45 = v19;
LABEL_21:
  if ( v19 == 1 )
  {
    v21 = &RtlpDosDevicesUncPrefix;
    v22 = 2;
  }
  else
  {
    v21 = &RtlpDosDevicesPrefix;
    if ( v19 == 6 )
      v22 = 4;
    else
      v22 = 0;
  }
  LODWORD(v42) = v22;
  v23 = (unsigned __int16)FullPathName_Ustr + v21->Length + 2 * (1 - v22);
  if ( v23 <= 0xFFFE )
  {
    if ( v9 )
    {
      if ( v23 <= v9->MaximumLength )
        goto LABEL_36;
      if ( !v20 )
      {
        v14 = -1073741562;
        goto LABEL_61;
      }
    }
    else if ( !v20 )
    {
      v14 = -1073741811;
      goto LABEL_61;
    }
    v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
    v9 = *(_UNICODE_STRING **)&v44.Length;
    *(_QWORD *)(*(_QWORD *)&v44.Length + 8LL) = v24;
    if ( !v24 )
    {
      v14 = -1073741801;
      goto LABEL_61;
    }
    LOWORD(FullPathName_Ustr) = String2.Length;
    v9->Length = 0;
    v9->MaximumLength = v23;
LABEL_36:
    Length = v21->Length;
    if ( v21->Length )
    {
      if ( v9->Length + Length <= v9->MaximumLength )
      {
        v26 = v21->Buffer;
        *(_QWORD *)&v44.Length = &v9->Buffer[(unsigned __int64)v9->Length >> 1];
        memmove(*(void **)&v44.Length, v26, Length);
        v27 = (unsigned __int16)(Length + v9->Length);
        MaximumLength = v9->MaximumLength;
        v9->Length = v27;
        if ( v27 + 1 < MaximumLength )
          *(_WORD *)(*(_QWORD *)&v44.Length + 2 * ((unsigned __int64)Length >> 1)) = 0;
      }
    }
    v29 = 2LL * (unsigned int)v42;
    v44 = String2;
    v30 = v42;
    v42 = v29;
    v30 *= 2;
    v31 = FullPathName_Ustr - v30;
    if ( (_WORD)FullPathName_Ustr != v30 && v9->Length + v31 <= v9->MaximumLength )
    {
      *(_QWORD *)&v44.Length = &v9->Buffer[(unsigned __int64)v9->Length >> 1];
      memmove(*(void **)&v44.Length, (char *)String2.Buffer + v29, v31);
      v29 = v42;
      v32 = (unsigned __int16)(v31 + v9->Length);
      v33 = v9->MaximumLength;
      v9->Length = v32;
      if ( v32 + 1 < v33 )
        *(_WORD *)(*(_QWORD *)&v44.Length + 2 * ((unsigned __int64)v31 >> 1)) = 0;
    }
    if ( v47 )
      *v47 = v9;
    v9->Buffer[(unsigned __int64)v9->Length >> 1] = 0;
    v34 = v46;
    if ( v46 && *v46 )
      *v46 += (char *)v9->Buffer + v21->Length - v29 - (_QWORD)v15;
    if ( a8 )
    {
      v35 = v45 == 5;
      *(_DWORD *)a8 = 0;
      *(_QWORD *)(a8 + 8) = 0LL;
      *(_QWORD *)(a8 + 16) = 0LL;
      *(_QWORD *)(a8 + 24) = 0LL;
      if ( v35 )
      {
        LOBYTE(v34) = 1;
        v36 = RtlpReferenceCurrentDirectory(v34);
        v37 = v36;
        if ( v36 )
        {
          if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v36 + 24), &String2, 1u) )
            goto LABEL_58;
          v38 = (wchar_t *)((char *)v9->Buffer + v21->Length + *(unsigned __int16 *)(v37 + 24) - v42);
          *(_QWORD *)(a8 + 8) = v38;
          v39 = FullPathName_Ustr - *(_WORD *)(v37 + 24);
          *(_WORD *)a8 = v39;
          if ( *v38 == 92 )
          {
            *(_WORD *)a8 = v39 - 2;
            *(_QWORD *)(a8 + 8) = v38 + 1;
          }
          *(_WORD *)(a8 + 2) = *(_WORD *)a8;
          if ( v41 )
          {
            *(_QWORD *)(a8 + 24) = v37;
            *(_QWORD *)(a8 + 16) = *(_QWORD *)(v37 + 8);
          }
          else
          {
LABEL_58:
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v37, 0xFFFFFFFF) == 1 )
            {
              NtClose(*(HANDLE *)(v37 + 8));
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v37);
            }
          }
        }
        else
        {
          RtlLeaveCriticalSection(&FastPebLock);
        }
      }
    }
    goto LABEL_61;
  }
LABEL_27:
  v14 = -1073741562;
LABEL_61:
  if ( v15 != BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  return v14;
}
