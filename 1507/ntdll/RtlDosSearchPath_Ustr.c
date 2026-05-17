/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x18005FCB0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800248B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180026DE4 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlDoesFileExists_UstrEx @ 0x1800272A0 (RtlDoesFileExists_UstrEx.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x18005FBC8 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlGetFullPathName_UstrEx @ 0x180060240 (RtlGetFullPathName_UstrEx.c)
 *     RtlUnicodeStringCat @ 0x1800604DC (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v10; // bl
  unsigned __int64 v12; // rsi
  int v13; // eax
  unsigned __int16 *v14; // r11
  unsigned __int64 v15; // rdx
  unsigned __int16 *StringRoutine; // rax
  int FullPathName_Ustr; // ebx
  _WORD *v19; // rax
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // rdx
  _WORD *v22; // rcx
  unsigned __int64 v23; // r8
  _WORD *v24; // rcx
  unsigned __int16 v25; // ax
  _WORD *v26; // rdx
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  _WORD *v29; // rsi
  _WORD *v30; // r15
  int v31; // edx
  _WORD *j; // rdi
  __int64 v33; // rbx
  bool v34; // zf
  unsigned __int16 v35; // bx
  unsigned __int16 v36; // r12
  unsigned __int64 v37; // rdx
  int v38; // r9d
  UNICODE_STRING *p_UnicodeString; // rcx
  int v40; // r8d
  int v41; // eax
  unsigned __int64 v42; // rdx
  _WORD *v43; // rcx
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  _QWORD *v47; // [rsp+68h] [rbp-98h]
  __int64 v48; // [rsp+70h] [rbp-90h]
  _QWORD *v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v51; // [rsp+88h] [rbp-78h]
  __int64 v52; // [rsp+90h] [rbp-70h]
  _QWORD *v53; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v54; // [rsp+A0h] [rbp-60h]
  _BYTE v55[528]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = a2;
  v10 = a1;
  v48 = a5;
  v12 = 0LL;
  v47 = a9;
  UnicodeString.Buffer = (unsigned __int16 *)v55;
  v51 = a4;
  v52 = a6;
  v53 = a7;
  v49 = a8;
  LOWORD(i) = 0;
  *(_DWORD *)&UnicodeString.Length = 34078720;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
    *a9 = 0LL;
  if ( a8 )
    *a8 = 0LL;
  if ( a6 )
  {
    *(_DWORD *)a6 = 0;
    *(_QWORD *)(a6 + 8) = 0LL;
  }
  if ( (a1 & 0xFFFFFFF8) != 0 || !a2 || !a3 || a5 && a6 && !a7 )
  {
    FullPathName_Ustr = -1073741811;
    goto LABEL_26;
  }
  v13 = RtlDetermineDosPathNameType_Ustr(a3);
  v45 = v13;
  if ( (v10 & 2) != 0 )
  {
    if ( v13 != 5 )
      goto LABEL_17;
    if ( *a3 < 4u || (v19 = (_WORD *)*((_QWORD *)a3 + 1), *v19 != 46) )
    {
LABEL_32:
      if ( (v10 & 1) != 0 )
      {
        v50 = 0LL;
        v41 = RtlDosApplyFileIsolationRedirection_Ustr(1, a3, a4, v48, a6, (__int64)&v50, 0LL, v49, v47);
        FullPathName_Ustr = v41;
        if ( v41 >= 0 )
        {
          if ( a7 )
            *a7 = v50;
LABEL_81:
          FullPathName_Ustr = 0;
          goto LABEL_26;
        }
        if ( v41 != -1072365560 )
          goto LABEL_26;
        v14 = v54;
      }
      if ( a4 )
      {
        v20 = *a4;
        if ( *a3 )
        {
          v21 = *((_QWORD *)a3 + 1);
          v22 = (_WORD *)(v21 + 2 * ((unsigned __int64)*a3 >> 1));
          do
          {
            if ( (unsigned __int64)v22 <= v21 )
              break;
            if ( *--v22 == 92 )
              break;
            if ( *v22 == 46 )
            {
              v51 = 0LL;
              v20 = 0;
              break;
            }
          }
          while ( *v22 != 47 );
        }
      }
      else
      {
        v20 = i;
      }
      if ( *v14 )
      {
        v23 = *((_QWORD *)v14 + 1);
        v24 = (_WORD *)(v23 + 2 * ((unsigned __int64)*v14 >> 1));
LABEL_50:
        v26 = v24;
        while ( (unsigned __int64)v24 > v23 )
        {
          if ( *--v24 == 59 )
          {
            v25 = v26 - v24 - 1;
            if ( (unsigned __int16)(v26 - v24) != 1 && *(v26 - 1) != 92 && *(v26 - 1) != 47 )
              v25 = v26 - v24;
            if ( v25 > v12 )
              v12 = v25;
            goto LABEL_50;
          }
        }
        v27 = v26 - v24;
        if ( (_WORD)v27 && *(v26 - 1) != 92 && *(v26 - 1) != 47 )
          LOWORD(v27) = v27 + 1;
        if ( (unsigned __int16)v27 > v12 )
          v12 = (unsigned __int16)v27;
        v12 *= 2LL;
      }
      v28 = v20 + v12 + *a3 + 2LL;
      if ( v28 <= 0xFFFE )
      {
        v29 = (_WORD *)*((_QWORD *)v14 + 1);
        v30 = &v29[(unsigned __int64)*v14 >> 1];
        if ( v29 < v30 )
        {
          v31 = v20;
          for ( i = v20; ; v31 = i )
          {
            for ( j = v29; j != v30; ++j )
            {
              if ( *j == 59 )
                break;
            }
            v33 = j - v29;
            v34 = 2 * (_WORD)v33 == 0;
            v35 = 2 * v33;
            v36 = v35;
            if ( !v34 && *(j - 1) != 92 && *(j - 1) != 47 )
              v35 += 2;
            v37 = v31 + *a3 + v35;
            if ( UnicodeString.MaximumLength < v37 + 2 )
            {
              if ( (_BYTE *)UnicodeString.Buffer != v55 || v37 > 0xFFFC )
                break;
              UnicodeString.MaximumLength = v28;
              UnicodeString.Buffer = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v28);
              if ( !UnicodeString.Buffer )
                return (unsigned int)-1073741801;
            }
            UnicodeString.Length = 0;
            RtlUnicodeStringCbCopyStringN(&UnicodeString, (int)v29, v36);
            if ( v35 && v36 != v35 )
            {
              UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
              UnicodeString.Length += 2;
            }
            RtlUnicodeStringCat(&UnicodeString, a3);
            if ( v51 )
              RtlUnicodeStringCat(&UnicodeString, v51);
            if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
              break;
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
            if ( RtlDoesFileExists_UstrEx((__int128 *)&UnicodeString, 0) )
            {
              v38 = (int)v53;
              p_UnicodeString = &UnicodeString;
              v40 = v52;
              goto LABEL_80;
            }
            v29 = j + 1;
            if ( j == v30 )
              v29 = j;
            if ( v29 >= v30 )
              goto LABEL_25;
          }
          FullPathName_Ustr = -1073741595;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      goto LABEL_111;
    }
    if ( v19[1] != 92 && v19[1] != 47 )
    {
      if ( v19[1] != 46 || *a3 < 6u || v19[2] != 92 && v19[2] != 47 )
        goto LABEL_32;
      v45 = 0;
      goto LABEL_17;
    }
    v13 = 0;
    v45 = 0;
  }
  if ( v13 == 5 )
    goto LABEL_32;
LABEL_17:
  if ( RtlDoesFileExists_UstrEx((__int128 *)a3, 1) )
  {
    LODWORD(p_UnicodeString) = (_DWORD)a3;
LABEL_83:
    v38 = (int)a7;
    v40 = a6;
LABEL_80:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                          (_DWORD)p_UnicodeString,
                          v48,
                          v40,
                          v38,
                          (__int64)v49,
                          0LL,
                          (__int64)&v45,
                          (__int64)v47);
    if ( FullPathName_Ustr < 0 )
      goto LABEL_26;
    goto LABEL_81;
  }
  if ( a4 && *a4 )
  {
    if ( (v10 & 4) == 0 )
    {
      if ( *a3 )
      {
        v42 = *((_QWORD *)a3 + 1);
        v43 = (_WORD *)(v42 + 2 * ((unsigned __int64)*a3 >> 1));
        while ( (unsigned __int64)v43 > v42 )
        {
          if ( *--v43 == 92 || *v43 == 47 )
            break;
          if ( *v43 == 46 )
            goto LABEL_25;
        }
      }
    }
    v15 = *a4 + *a3 + 2LL;
    if ( v15 <= 0xFFFE )
    {
      if ( v15 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = *a4 + *a3 + 2;
        StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v15);
        UnicodeString.Buffer = StringRoutine;
        if ( !StringRoutine )
          return (unsigned int)-1073741801;
      }
      else
      {
        StringRoutine = UnicodeString.Buffer;
      }
      memmove(StringRoutine, *((const void **)a3 + 1), *a3);
      memmove(&UnicodeString.Buffer[(unsigned __int64)*a3 >> 1], *((const void **)a4 + 1), *a4);
      UnicodeString.Buffer[(unsigned __int64)(*a3 + *a4) >> 1] = 0;
      UnicodeString.Length = *a3 + *a4;
      if ( !RtlDoesFileExists_UstrEx((__int128 *)&UnicodeString, 1) )
        goto LABEL_25;
      p_UnicodeString = &UnicodeString;
      goto LABEL_83;
    }
LABEL_111:
    FullPathName_Ustr = -1073741562;
    goto LABEL_26;
  }
LABEL_25:
  FullPathName_Ustr = -1073741809;
LABEL_26:
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v55 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)FullPathName_Ustr;
}
