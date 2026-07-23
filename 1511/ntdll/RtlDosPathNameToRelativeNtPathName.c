/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x180016A90
 * Callers:
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180015320 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180018194 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDoesFileExists_UstrEx @ 0x180018498 (RtlDoesFileExists_UstrEx.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078040 (RtlpCreateNewDirectoryReference.c)
 *     LdrAddDllDirectory @ 0x18008D820 (LdrAddDllDirectory.c)
 *     LdrpCheckAppDirType @ 0x1800CA8C4 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpWin32NtNameToNtPathName @ 0x18000E1A4 (RtlpWin32NtNameToNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180016F00 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlPrefixUnicodeString @ 0x18006ED20 (RtlPrefixUnicodeString.c)
 *     RtlpReferenceCurrentDirectory @ 0x180077EEC (RtlpReferenceCurrentDirectory.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        char a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        _UNICODE_STRING *a5,
        _UNICODE_STRING **a6,
        unsigned __int64 *a7,
        __int64 a8)
{
  _UNICODE_STRING *v9; // rsi
  bool v11; // cc
  unsigned __int16 *Buffer; // rax
  unsigned __int16 v13; // cx
  unsigned int FullPathName_Ustr; // eax
  unsigned __int16 Length; // bp
  int v17; // eax
  unsigned int v18; // r11d
  const _UNICODE_STRING *v19; // r14
  unsigned int v20; // r13d
  unsigned int v21; // r15d
  unsigned __int16 *Heap; // rax
  unsigned __int16 v23; // bx
  unsigned __int16 *v24; // rdx
  int v25; // ecx
  int MaximumLength; // eax
  unsigned __int64 v27; // r15
  unsigned __int16 v28; // bx
  int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rbx
  _WORD *v35; // rcx
  __int16 v36; // bp
  char v38[15]; // [rsp+31h] [rbp-297h] BYREF
  _UNICODE_STRING String2; // [rsp+40h] [rbp-288h] BYREF
  _UNICODE_STRING v40; // [rsp+50h] [rbp-278h]
  int v41; // [rsp+60h] [rbp-268h] BYREF
  _UNICODE_STRING **v42; // [rsp+68h] [rbp-260h]
  _BYTE v43[528]; // [rsp+70h] [rbp-258h] BYREF

  v9 = a4;
  v11 = a3->Length <= 8u;
  v42 = a6;
  if ( !v11 )
  {
    Buffer = a3->Buffer;
    if ( *Buffer == 92 )
    {
      v13 = Buffer[1];
      if ( (v13 == 92 || v13 == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a3, a4, a5, a6, a7, a8);
    }
  }
  if ( a7 )
    *a7 = 0LL;
  if ( a1 )
  {
    String2 = *a3;
    v17 = RtlDetermineDosPathNameType_Ustr(&String2);
    Length = String2.Length;
    v41 = v17;
  }
  else
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a3, 520LL, v43, a7, v38, &v41);
    Length = FullPathName_Ustr;
    if ( !FullPathName_Ustr || v38[0] )
      return 3221225523LL;
    if ( FullPathName_Ustr > 0x208 )
      return 3221225734LL;
    String2.Length = FullPathName_Ustr;
    String2.MaximumLength = 520;
    String2.Buffer = (unsigned __int16 *)v43;
    v17 = RtlDetermineDosPathNameType_Ustr(&String2);
    v18 = 0;
  }
  if ( v17 == 1 )
  {
    v19 = &RtlpDosDevicesUncPrefix;
    v20 = 2;
  }
  else
  {
    v19 = &RtlpDosDevicesPrefix;
    if ( v17 == 6 )
      v20 = 4;
    else
      v20 = v18;
  }
  v21 = Length + v19->Length + 2 * (1 - v20);
  if ( v21 > 0xFFFE )
    return 3221225734LL;
  if ( !v9 )
  {
    if ( !a5 )
      return 3221225485LL;
    goto LABEL_29;
  }
  if ( v21 > v9->MaximumLength )
  {
    if ( !a5 )
      return 3221225734LL;
LABEL_29:
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
    a5->Buffer = Heap;
    if ( !Heap )
      return 3221225495LL;
    Length = String2.Length;
    a5->Length = 0;
    v9 = a5;
    a5->MaximumLength = v21;
  }
  v23 = v19->Length;
  if ( v19->Length )
  {
    if ( v9->Length + v23 <= v9->MaximumLength )
    {
      v24 = v19->Buffer;
      *(_QWORD *)&v40.Length = &v9->Buffer[(unsigned __int64)v9->Length >> 1];
      memmove(*(void **)&v40.Length, v24, v23);
      v25 = (unsigned __int16)(v23 + v9->Length);
      MaximumLength = v9->MaximumLength;
      v9->Length = v25;
      if ( v25 + 1 < MaximumLength )
        *(_WORD *)(*(_QWORD *)&v40.Length + 2 * ((unsigned __int64)v23 >> 1)) = 0;
    }
  }
  v27 = 2LL * v20;
  v40 = String2;
  v28 = Length - 2 * v20;
  if ( Length != 2 * (_WORD)v20 && v9->Length + v28 <= v9->MaximumLength )
  {
    *(_QWORD *)&v40.Length = &v9->Buffer[(unsigned __int64)v9->Length >> 1];
    memmove(*(void **)&v40.Length, &String2.Buffer[v27 / 2], v28);
    v29 = (unsigned __int16)(v28 + v9->Length);
    v30 = v9->MaximumLength;
    v9->Length = v29;
    if ( v29 + 1 < v30 )
      *(_WORD *)(*(_QWORD *)&v40.Length + 2 * ((unsigned __int64)v28 >> 1)) = 0;
  }
  if ( v42 )
    *v42 = v9;
  v31 = (unsigned __int64)v9->Length >> 1;
  v9->Buffer[v31] = 0;
  if ( a7 )
  {
    v31 = *a7;
    if ( *a7 )
      *a7 = (unsigned __int64)v9->Buffer + v19->Length - v27 - (_QWORD)v43 + v31;
  }
  if ( a8 )
  {
    v32 = v41 == 5;
    *(_DWORD *)a8 = 0;
    *(_QWORD *)(a8 + 8) = 0LL;
    *(_QWORD *)(a8 + 16) = 0LL;
    *(_QWORD *)(a8 + 24) = 0LL;
    if ( v32 )
    {
      LOBYTE(v31) = 1;
      v33 = RtlpReferenceCurrentDirectory(v31);
      v34 = v33;
      if ( !v33 )
      {
        RtlLeaveCriticalSection(&FastPebLock);
        return 0LL;
      }
      if ( RtlPrefixUnicodeString((PUNICODE_STRING)(v33 + 24), &String2, 1u) )
      {
        v35 = (unsigned __int16 *)((char *)v9->Buffer + *(unsigned __int16 *)(v34 + 24) + v19->Length - v27);
        *(_QWORD *)(a8 + 8) = v35;
        v36 = Length - *(_WORD *)(v34 + 24);
        *(_WORD *)a8 = v36;
        if ( *v35 == 92 )
        {
          *(_WORD *)a8 = v36 - 2;
          *(_QWORD *)(a8 + 8) = v35 + 1;
        }
        *(_WORD *)(a8 + 2) = *(_WORD *)a8;
        if ( a2 )
        {
          *(_QWORD *)(a8 + 24) = v34;
          *(_QWORD *)(a8 + 16) = *(_QWORD *)(v34 + 8);
          return 0LL;
        }
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v34, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v34 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v34);
      }
    }
  }
  return 0LL;
}
