/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x1800222B0
 * Callers:
 *     LdrpResolveDllName @ 0x18000FA94 (LdrpResolveDllName.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180011828 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x1800118A0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044734 (RtlDoesFileExists_UstrEx.c)
 *     RtlpCreateNewDirectoryReference @ 0x180079468 (RtlpCreateNewDirectoryReference.c)
 *     LdrAddDllDirectory @ 0x180090690 (LdrAddDllDirectory.c)
 *     LdrpCheckAppDirType @ 0x1800D1E74 (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpWin32NtNameToNtPathName @ 0x1800102D0 (RtlpWin32NtNameToNtPathName.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlGetFullPathName_Ustr @ 0x18001D830 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5F8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlPrefixUnicodeString @ 0x18006C6D0 (RtlPrefixUnicodeString.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007936C (RtlpReferenceCurrentDirectory.c)
 *     RtlAreLongPathsEnabled @ 0x180082FF0 (RtlAreLongPathsEnabled.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        char a2,
        __m128i *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 **a6,
        _QWORD *a7,
        __int64 a8)
{
  unsigned __int16 *v9; // r15
  bool v10; // cc
  _WORD *v11; // rax
  __int16 v12; // dx
  unsigned int v14; // edi
  _WORD *v15; // r12
  unsigned int v16; // esi
  unsigned int FullPathName_Ustr; // ebx
  _WORD *Heap; // rax
  int v19; // eax
  __int64 v20; // r11
  const wchar_t *v21; // r13
  int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rax
  wchar_t v25; // si
  const void *v26; // rdx
  int v27; // ecx
  int v28; // eax
  __int64 v29; // r8
  __int16 v30; // ax
  unsigned __int16 v31; // si
  int v32; // ecx
  int v33; // eax
  _QWORD *v34; // rcx
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rsi
  _WORD *v39; // rcx
  __int16 v40; // bx
  char v41; // [rsp+30h] [rbp-D0h] BYREF
  char v42; // [rsp+31h] [rbp-CFh]
  __int64 v43; // [rsp+38h] [rbp-C8h]
  __m128i v44; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v47; // [rsp+68h] [rbp-98h]
  unsigned __int16 **v48; // [rsp+70h] [rbp-90h]
  _WORD v49[264]; // [rsp+80h] [rbp-80h] BYREF

  v9 = a4;
  v10 = a3->m128i_i16[0] <= 8u;
  v42 = a2;
  v45.m128i_i64[0] = (__int64)a5;
  v48 = a6;
  v47 = a7;
  if ( !v10 )
  {
    v11 = (_WORD *)a3->m128i_i64[1];
    if ( *v11 == 92 )
    {
      v12 = v11[1];
      if ( (v12 == 92 || v12 == 63) && v11[2] == 63 && v11[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a3, a4, a5, a6, a7, a8);
    }
  }
  v14 = 0;
  if ( a7 )
    *a7 = 0LL;
  v15 = v49;
  v16 = 520;
  if ( !a1 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr((unsigned __int16 *)a3, 0x208u, v49, a7, &v41, (__int64)&v46);
    if ( FullPathName_Ustr )
    {
      while ( !v41 )
      {
        if ( FullPathName_Ustr <= v16 )
        {
          v44.m128i_i16[0] = FullPathName_Ustr;
          v44.m128i_i16[1] = v16;
          v44.m128i_i64[1] = (__int64)v15;
          v19 = RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)&v44);
          v20 = v45.m128i_i64[0];
          goto LABEL_21;
        }
        if ( !(unsigned __int8)RtlAreLongPathsEnabled() )
          goto LABEL_27;
        Heap = (_WORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, FullPathName_Ustr);
        v15 = Heap;
        if ( !Heap )
          return 3221225495LL;
        v16 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(
                              (unsigned __int16 *)a3,
                              FullPathName_Ustr,
                              Heap,
                              v47,
                              &v41,
                              (__int64)&v46);
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v14 = -1073741773;
    goto LABEL_61;
  }
  v44 = *a3;
  v19 = RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)&v44);
  LOWORD(FullPathName_Ustr) = v44.m128i_i16[0];
  v46 = v19;
LABEL_21:
  if ( v19 == 1 )
  {
    v21 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
    v22 = 2;
  }
  else
  {
    v21 = L"\b\n";
    if ( v19 == 6 )
      v22 = 4;
    else
      v22 = 0;
  }
  LODWORD(v43) = v22;
  v23 = (unsigned __int16)FullPathName_Ustr + *v21 + 2 * (1 - v22);
  if ( v23 <= 0xFFFE )
  {
    if ( v9 )
    {
      if ( v23 <= v9[1] )
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
    v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v23);
    v9 = (unsigned __int16 *)v45.m128i_i64[0];
    *(_QWORD *)(v45.m128i_i64[0] + 8) = v24;
    if ( !v24 )
    {
      v14 = -1073741801;
      goto LABEL_61;
    }
    LOWORD(FullPathName_Ustr) = v44.m128i_i16[0];
    *v9 = 0;
    v9[1] = v23;
LABEL_36:
    v25 = *v21;
    if ( *v21 )
    {
      if ( *v9 + v25 <= v9[1] )
      {
        v26 = (const void *)*((_QWORD *)v21 + 1);
        v45.m128i_i64[0] = *((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1);
        memmove((void *)v45.m128i_i64[0], v26, v25);
        v27 = (unsigned __int16)(v25 + *v9);
        v28 = v9[1];
        *v9 = v27;
        if ( v27 + 1 < v28 )
          *(_WORD *)(v45.m128i_i64[0] + 2 * ((unsigned __int64)v25 >> 1)) = 0;
      }
    }
    v29 = 2LL * (unsigned int)v43;
    v45 = v44;
    v30 = v43;
    v43 = v29;
    v30 *= 2;
    v31 = FullPathName_Ustr - v30;
    if ( (_WORD)FullPathName_Ustr != v30 && *v9 + v31 <= v9[1] )
    {
      v45.m128i_i64[0] = *((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1);
      memmove((void *)v45.m128i_i64[0], (const void *)(v29 + v44.m128i_i64[1]), v31);
      v29 = v43;
      v32 = (unsigned __int16)(v31 + *v9);
      v33 = v9[1];
      *v9 = v32;
      if ( v32 + 1 < v33 )
        *(_WORD *)(v45.m128i_i64[0] + 2 * ((unsigned __int64)v31 >> 1)) = 0;
    }
    if ( v48 )
      *v48 = v9;
    *(_WORD *)(*((_QWORD *)v9 + 1) + 2 * ((unsigned __int64)*v9 >> 1)) = 0;
    v34 = v47;
    if ( v47 && *v47 )
      *v47 += *((_QWORD *)v9 + 1) + *v21 - v29 - (_QWORD)v15;
    if ( a8 )
    {
      v35 = v46 == 5;
      *(_DWORD *)a8 = 0;
      *(_QWORD *)(a8 + 8) = 0LL;
      *(_QWORD *)(a8 + 16) = 0LL;
      *(_QWORD *)(a8 + 24) = 0LL;
      if ( v35 )
      {
        LOBYTE(v34) = 1;
        v36 = RtlpReferenceCurrentDirectory(v34);
        v38 = v36;
        if ( v36 )
        {
          LOBYTE(v37) = 1;
          if ( !(unsigned __int8)RtlPrefixUnicodeString(v36 + 24, &v44, v37) )
            goto LABEL_58;
          v39 = (_WORD *)(*((_QWORD *)v9 + 1) + *v21 + *(unsigned __int16 *)(v38 + 24) - v43);
          *(_QWORD *)(a8 + 8) = v39;
          v40 = FullPathName_Ustr - *(_WORD *)(v38 + 24);
          *(_WORD *)a8 = v40;
          if ( *v39 == 92 )
          {
            *(_WORD *)a8 = v40 - 2;
            *(_QWORD *)(a8 + 8) = v39 + 1;
          }
          *(_WORD *)(a8 + 2) = *(_WORD *)a8;
          if ( v42 )
          {
            *(_QWORD *)(a8 + 24) = v38;
            *(_QWORD *)(a8 + 16) = *(_QWORD *)(v38 + 8);
          }
          else
          {
LABEL_58:
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF) == 1 )
            {
              NtClose(*(HANDLE *)(v38 + 8));
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v38);
            }
          }
        }
        else
        {
          RtlLeaveCriticalSection((__int64)&FastPebLock);
        }
      }
    }
    goto LABEL_61;
  }
LABEL_27:
  v14 = -1073741562;
LABEL_61:
  if ( v15 != v49 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v15);
  return v14;
}
