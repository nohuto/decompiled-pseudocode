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
        __m128i *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 **a6,
        unsigned __int64 *a7,
        __int64 a8)
{
  unsigned __int16 *v9; // rsi
  bool v11; // cc
  _WORD *v12; // rax
  __int16 v13; // cx
  unsigned int FullPathName_Ustr; // eax
  unsigned __int16 v16; // bp
  int v17; // eax
  unsigned int v18; // r11d
  const wchar_t *v19; // r14
  unsigned int v20; // r13d
  unsigned int v21; // r15d
  __int64 Heap; // rax
  wchar_t v23; // bx
  const void *v24; // rdx
  int v25; // ecx
  int v26; // eax
  __int64 v27; // r15
  unsigned __int16 v28; // bx
  int v29; // ecx
  int v30; // eax
  unsigned __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rbx
  _WORD *v36; // rcx
  __int16 v37; // bp
  char v39[15]; // [rsp+31h] [rbp-297h] BYREF
  __m128i v40; // [rsp+40h] [rbp-288h] BYREF
  __m128i v41; // [rsp+50h] [rbp-278h]
  int v42; // [rsp+60h] [rbp-268h] BYREF
  unsigned __int16 **v43; // [rsp+68h] [rbp-260h]
  _BYTE v44[528]; // [rsp+70h] [rbp-258h] BYREF

  v9 = a4;
  v11 = a3->m128i_i16[0] <= 8u;
  v43 = a6;
  if ( !v11 )
  {
    v12 = (_WORD *)a3->m128i_i64[1];
    if ( *v12 == 92 )
    {
      v13 = v12[1];
      if ( (v13 == 92 || v13 == 63) && v12[2] == 63 && v12[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a3, a4, a5, a6, a7, a8);
    }
  }
  if ( a7 )
    *a7 = 0LL;
  if ( a1 )
  {
    v40 = *a3;
    v17 = RtlDetermineDosPathNameType_Ustr(&v40);
    v16 = v40.m128i_i16[0];
    v42 = v17;
  }
  else
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a3, 520LL, v44, a7, v39, &v42);
    v16 = FullPathName_Ustr;
    if ( !FullPathName_Ustr || v39[0] )
      return 3221225523LL;
    if ( FullPathName_Ustr > 0x208 )
      return 3221225734LL;
    v40.m128i_i16[0] = FullPathName_Ustr;
    v40.m128i_i16[1] = 520;
    v40.m128i_i64[1] = (__int64)v44;
    v17 = RtlDetermineDosPathNameType_Ustr(&v40);
    v18 = 0;
  }
  if ( v17 == 1 )
  {
    v19 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
    v20 = 2;
  }
  else
  {
    v19 = L"\b\n";
    if ( v17 == 6 )
      v20 = 4;
    else
      v20 = v18;
  }
  v21 = v16 + *v19 + 2 * (1 - v20);
  if ( v21 > 0xFFFE )
    return 3221225734LL;
  if ( !v9 )
  {
    if ( !a5 )
      return 3221225485LL;
    goto LABEL_29;
  }
  if ( v21 > v9[1] )
  {
    if ( !a5 )
      return 3221225734LL;
LABEL_29:
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v21);
    *((_QWORD *)a5 + 1) = Heap;
    if ( !Heap )
      return 3221225495LL;
    v16 = v40.m128i_i16[0];
    *a5 = 0;
    v9 = a5;
    a5[1] = v21;
  }
  v23 = *v19;
  if ( *v19 )
  {
    if ( *v9 + v23 <= v9[1] )
    {
      v24 = (const void *)*((_QWORD *)v19 + 1);
      v41.m128i_i64[0] = *((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1);
      memmove((void *)v41.m128i_i64[0], v24, v23);
      v25 = (unsigned __int16)(v23 + *v9);
      v26 = v9[1];
      *v9 = v25;
      if ( v25 + 1 < v26 )
        *(_WORD *)(v41.m128i_i64[0] + 2 * ((unsigned __int64)v23 >> 1)) = 0;
    }
  }
  v27 = 2LL * v20;
  v41 = v40;
  v28 = v16 - 2 * v20;
  if ( v16 != 2 * (_WORD)v20 && *v9 + v28 <= v9[1] )
  {
    v41.m128i_i64[0] = *((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1);
    memmove((void *)v41.m128i_i64[0], (const void *)(v27 + v40.m128i_i64[1]), v28);
    v29 = (unsigned __int16)(v28 + *v9);
    v30 = v9[1];
    *v9 = v29;
    if ( v29 + 1 < v30 )
      *(_WORD *)(v41.m128i_i64[0] + 2 * ((unsigned __int64)v28 >> 1)) = 0;
  }
  if ( v43 )
    *v43 = v9;
  v31 = (unsigned __int64)*v9 >> 1;
  *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * v31) = 0;
  if ( a7 )
  {
    v31 = *a7;
    if ( *a7 )
      *a7 = v31 + *((_QWORD *)v9 + 1) + *v19 - v27 - (_QWORD)v44;
  }
  if ( a8 )
  {
    v32 = v42 == 5;
    *(_DWORD *)a8 = 0;
    *(_QWORD *)(a8 + 8) = 0LL;
    *(_QWORD *)(a8 + 16) = 0LL;
    *(_QWORD *)(a8 + 24) = 0LL;
    if ( v32 )
    {
      LOBYTE(v31) = 1;
      v33 = RtlpReferenceCurrentDirectory(v31);
      v35 = v33;
      if ( !v33 )
      {
        RtlLeaveCriticalSection(&FastPebLock);
        return 0LL;
      }
      LOBYTE(v34) = 1;
      if ( (unsigned __int8)RtlPrefixUnicodeString(v33 + 24, &v40, v34) )
      {
        v36 = (_WORD *)(*((_QWORD *)v9 + 1) + *(unsigned __int16 *)(v35 + 24) + *v19 - v27);
        *(_QWORD *)(a8 + 8) = v36;
        v37 = v16 - *(_WORD *)(v35 + 24);
        *(_WORD *)a8 = v37;
        if ( *v36 == 92 )
        {
          *(_WORD *)a8 = v37 - 2;
          *(_QWORD *)(a8 + 8) = v36 + 1;
        }
        *(_WORD *)(a8 + 2) = *(_WORD *)a8;
        if ( a2 )
        {
          *(_QWORD *)(a8 + 24) = v35;
          *(_QWORD *)(a8 + 16) = *(_QWORD *)(v35 + 8);
          return 0LL;
        }
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v35, 0xFFFFFFFF) == 1 )
      {
        NtClose(*(HANDLE *)(v35 + 8));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v35);
      }
    }
  }
  return 0LL;
}
