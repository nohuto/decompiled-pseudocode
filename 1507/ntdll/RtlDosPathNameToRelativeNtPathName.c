/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x180025B80
 * Callers:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001F9EC (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180025B00 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800272A0 (RtlDoesFileExists_UstrEx.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrAddDllDirectory @ 0x180059AB0 (LdrAddDllDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x18006FDF8 (RtlpCreateNewDirectoryReference.c)
 *     LdrpCheckAppDirType @ 0x1800BDC24 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x180026020 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlpReferenceCurrentDirectory @ 0x180039024 (RtlpReferenceCurrentDirectory.c)
 *     RtlpWin32NtNameToNtPathName @ 0x18003FD34 (RtlpWin32NtNameToNtPathName.c)
 *     RtlPrefixUnicodeString @ 0x180062550 (RtlPrefixUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        char a2,
        _UNICODE_STRING *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        _QWORD *a6,
        unsigned __int64 *a7,
        __int64 a8)
{
  bool v8; // cc
  unsigned __int16 *v9; // rbx
  unsigned __int16 *Buffer; // r8
  unsigned int FullPathName_Ustr; // eax
  unsigned __int16 Length; // bp
  int v14; // eax
  unsigned int v15; // r11d
  __int64 v16; // r12
  const _UNICODE_STRING *v17; // r15
  unsigned int v18; // edi
  PVOID Heap; // rax
  unsigned __int16 v20; // di
  unsigned __int16 *v21; // rdx
  int v22; // ecx
  int v23; // eax
  __int16 v24; // ax
  unsigned __int64 v25; // r12
  unsigned __int16 v26; // di
  int v27; // ecx
  int v28; // eax
  unsigned __int64 v29; // rcx
  bool v30; // zf
  unsigned __int16 v32; // dx
  __int64 v33; // rax
  __int64 v34; // rdi
  _WORD *v35; // rcx
  __int16 v36; // bp
  char v38[15]; // [rsp+31h] [rbp-297h] BYREF
  _UNICODE_STRING String2; // [rsp+40h] [rbp-288h] BYREF
  _UNICODE_STRING v40; // [rsp+50h] [rbp-278h]
  int v41; // [rsp+60h] [rbp-268h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-260h]
  _BYTE v43[528]; // [rsp+70h] [rbp-258h] BYREF

  v8 = a3->Length <= 8u;
  v9 = a4;
  v42 = a6;
  if ( !v8 )
  {
    Buffer = a3->Buffer;
    if ( *Buffer == 92 )
    {
      v32 = Buffer[1];
      if ( (v32 == 92 || v32 == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a3, a4, a5);
    }
  }
  if ( a7 )
    *a7 = 0LL;
  if ( a1 )
  {
    String2 = *a3;
    v14 = RtlDetermineDosPathNameType_Ustr(&String2);
    Length = String2.Length;
    v41 = v14;
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
    v14 = RtlDetermineDosPathNameType_Ustr(&String2);
    v15 = 0;
  }
  if ( v14 == 2 )
    goto LABEL_11;
  if ( v14 != 1 )
  {
    if ( v14 == 6 )
    {
      v16 = 4LL;
      goto LABEL_12;
    }
LABEL_11:
    v16 = v15;
LABEL_12:
    v17 = &RtlpDosDevicesPrefix;
    goto LABEL_13;
  }
  v17 = &RtlpDosDevicesUncPrefix;
  v16 = 2LL;
LABEL_13:
  v18 = Length + v17->Length + 2 * (1 - v16);
  if ( v18 > 0xFFFE )
    return 3221225734LL;
  if ( v9 )
  {
    if ( v18 <= v9[1] )
      goto LABEL_18;
    if ( a5 )
      goto LABEL_16;
    return 3221225734LL;
  }
  if ( !a5 )
    return 3221225485LL;
LABEL_16:
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  *((_QWORD *)a5 + 1) = Heap;
  if ( Heap )
  {
    Length = String2.Length;
    *a5 = 0;
    v9 = a5;
    a5[1] = v18;
LABEL_18:
    v20 = v17->Length;
    if ( v17->Length )
    {
      if ( *v9 + v20 <= v9[1] )
      {
        v21 = v17->Buffer;
        *(_QWORD *)&v40.Length = *((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1);
        memmove(*(void **)&v40.Length, v21, v20);
        v22 = (unsigned __int16)(v20 + *v9);
        v23 = v9[1];
        *v9 = v22;
        if ( v22 + 1 < v23 )
          *(_WORD *)(*(_QWORD *)&v40.Length + 2 * ((unsigned __int64)v20 >> 1)) = 0;
      }
    }
    v24 = v16;
    v25 = 2 * v16;
    v40 = String2;
    v24 *= 2;
    v26 = Length - v24;
    if ( Length != v24 && *v9 + v26 <= v9[1] )
    {
      *(_QWORD *)&v40.Length = *((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1);
      memmove(*(void **)&v40.Length, &String2.Buffer[v25 / 2], v26);
      v27 = (unsigned __int16)(v26 + *v9);
      v28 = v9[1];
      *v9 = v27;
      if ( v27 + 1 < v28 )
        *(_WORD *)(*(_QWORD *)&v40.Length + 2 * ((unsigned __int64)v26 >> 1)) = 0;
    }
    if ( v42 )
      *v42 = v9;
    v29 = (unsigned __int64)*v9 >> 1;
    *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * v29) = 0;
    if ( a7 )
    {
      v29 = *a7;
      if ( *a7 )
        *a7 = *((_QWORD *)v9 + 1) + v29 + v17->Length - v25 - (_QWORD)v43;
    }
    if ( !a8 )
      return 0LL;
    v30 = v41 == 5;
    *(_DWORD *)a8 = 0;
    *(_QWORD *)(a8 + 8) = 0LL;
    *(_QWORD *)(a8 + 16) = 0LL;
    *(_QWORD *)(a8 + 24) = 0LL;
    if ( !v30 )
      return 0LL;
    LOBYTE(v29) = 1;
    v33 = RtlpReferenceCurrentDirectory(v29);
    v34 = v33;
    if ( !v33 )
    {
      RtlLeaveCriticalSection(&FastPebLock);
      return 0LL;
    }
    if ( RtlPrefixUnicodeString((PUNICODE_STRING)(v33 + 24), &String2, 1u) )
    {
      v35 = (_WORD *)(*((_QWORD *)v9 + 1) + *(unsigned __int16 *)(v34 + 24) + v17->Length - v25);
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
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v34, 0xFFFFFFFF) != 1 )
        return 0LL;
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v34, 0xFFFFFFFF) != 1 )
    {
      return 0LL;
    }
    NtClose(*(HANDLE *)(v34 + 8));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v34);
    return 0LL;
  }
  return 3221225495LL;
}
