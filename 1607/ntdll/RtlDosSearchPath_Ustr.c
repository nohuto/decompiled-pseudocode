/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x180042810
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180018BE8 (NtdllpAllocateStringRoutine.c)
 *     RtlGetFullPathName_UstrEx @ 0x180019130 (RtlGetFullPathName_UstrEx.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001E5F8 (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     RtlDoesFileExists_UstrEx @ 0x180044734 (RtlDoesFileExists_UstrEx.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x18006C844 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x18006C92C (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        UNICODE_STRING *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 *a8,
        _QWORD *a9)
{
  char v10; // bl
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int16 *v15; // r11
  unsigned __int64 v16; // rdx
  wchar_t *StringRoutine; // rax
  __int64 v18; // rdx
  int FullPathName_Ustr; // ebx
  wchar_t *v21; // rax
  unsigned __int16 v22; // r9
  unsigned __int64 Buffer; // rdx
  _WORD *v24; // rcx
  unsigned __int64 v25; // r8
  _WORD *v26; // rcx
  unsigned __int16 v27; // ax
  _WORD *v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // r13
  _WORD *v31; // rsi
  _WORD *v32; // r15
  int v33; // edx
  _WORD *j; // rdi
  __int64 v35; // rbx
  bool v36; // zf
  unsigned __int16 v37; // bx
  unsigned __int16 v38; // r12
  unsigned __int64 v39; // rdx
  _QWORD *v40; // r9
  UNICODE_STRING *p_UnicodeString; // rcx
  __int64 v42; // r8
  int v43; // eax
  unsigned __int64 v44; // rdx
  _WORD *v45; // rcx
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+60h] [rbp-A0h] BYREF
  int i; // [rsp+64h] [rbp-9Ch]
  _QWORD *v49; // [rsp+68h] [rbp-98h]
  __int64 *v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v53; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v54; // [rsp+90h] [rbp-70h]
  _QWORD *v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h]
  _BYTE v57[528]; // [rsp+B0h] [rbp-50h] BYREF

  v54 = a2;
  v10 = a1;
  v51 = a5;
  v12 = 0LL;
  v49 = a9;
  UnicodeString.Buffer = (wchar_t *)v57;
  v53 = a4;
  v56 = a6;
  v55 = a7;
  v50 = a8;
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
  v13 = RtlDetermineDosPathNameType_Ustr(&a3->Length);
  v47 = v13;
  if ( (v10 & 2) != 0 )
  {
    if ( v13 != 5 )
      goto LABEL_17;
    if ( a3->Length < 4u || (v21 = a3->Buffer, *v21 != 46) )
    {
LABEL_32:
      if ( (v10 & 1) != 0 )
      {
        v52 = 0LL;
        v43 = RtlDosApplyFileIsolationRedirection_Ustr(1, a3, a4, v51, a6, (__int64)&v52, 0LL, v50, v49);
        FullPathName_Ustr = v43;
        if ( v43 >= 0 )
        {
          if ( a7 )
            *a7 = v52;
LABEL_81:
          FullPathName_Ustr = 0;
          goto LABEL_26;
        }
        if ( v43 != -1072365560 )
          goto LABEL_26;
        v15 = v54;
      }
      if ( a4 )
      {
        v22 = *a4;
        if ( a3->Length )
        {
          Buffer = (unsigned __int64)a3->Buffer;
          v24 = (_WORD *)(Buffer + 2 * ((unsigned __int64)a3->Length >> 1));
          do
          {
            if ( (unsigned __int64)v24 <= Buffer )
              break;
            if ( *--v24 == 92 )
              break;
            if ( *v24 == 46 )
            {
              v53 = 0LL;
              v22 = 0;
              break;
            }
          }
          while ( *v24 != 47 );
        }
      }
      else
      {
        v22 = i;
      }
      if ( *v15 )
      {
        v25 = *((_QWORD *)v15 + 1);
        v26 = (_WORD *)(v25 + 2 * ((unsigned __int64)*v15 >> 1));
LABEL_50:
        v28 = v26;
        while ( (unsigned __int64)v26 > v25 )
        {
          if ( *--v26 == 59 )
          {
            v27 = v28 - v26 - 1;
            if ( (unsigned __int16)(v28 - v26) != 1 && *(v28 - 1) != 92 && *(v28 - 1) != 47 )
              v27 = v28 - v26;
            if ( v27 > v12 )
              v12 = v27;
            goto LABEL_50;
          }
        }
        v29 = v28 - v26;
        if ( (_WORD)v29 && *(v28 - 1) != 92 && *(v28 - 1) != 47 )
          LOWORD(v29) = v29 + 1;
        if ( (unsigned __int16)v29 > v12 )
          v12 = (unsigned __int16)v29;
        v12 *= 2LL;
      }
      v30 = v22 + v12 + a3->Length + 2LL;
      if ( v30 <= 0xFFFE )
      {
        v31 = (_WORD *)*((_QWORD *)v15 + 1);
        v32 = &v31[(unsigned __int64)*v15 >> 1];
        if ( v31 < v32 )
        {
          v33 = v22;
          for ( i = v22; ; v33 = i )
          {
            for ( j = v31; j != v32; ++j )
            {
              if ( *j == 59 )
                break;
            }
            v35 = j - v31;
            v36 = 2 * (_WORD)v35 == 0;
            v37 = 2 * v35;
            v38 = v37;
            if ( !v36 && *(j - 1) != 92 && *(j - 1) != 47 )
              v37 += 2;
            v39 = v33 + a3->Length + v37;
            if ( UnicodeString.MaximumLength < v39 + 2 )
            {
              if ( (_BYTE *)UnicodeString.Buffer != v57 || v39 > 0xFFFC )
                break;
              UnicodeString.MaximumLength = v30;
              UnicodeString.Buffer = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v30);
              if ( !UnicodeString.Buffer )
                return (unsigned int)-1073741801;
            }
            UnicodeString.Length = 0;
            RtlUnicodeStringCbCopyStringN(&UnicodeString, v31, v38);
            if ( v37 && v38 != v37 )
            {
              UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
              UnicodeString.Length += 2;
            }
            RtlUnicodeStringCat(&UnicodeString, a3);
            if ( v53 )
              RtlUnicodeStringCat(&UnicodeString, v53);
            if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
              break;
            UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
            if ( (unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, 0LL) )
            {
              v40 = v55;
              p_UnicodeString = &UnicodeString;
              v42 = v56;
              goto LABEL_80;
            }
            v31 = j + 1;
            if ( j == v32 )
              v31 = j;
            if ( v31 >= v32 )
              goto LABEL_25;
          }
          FullPathName_Ustr = -1073741595;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
      goto LABEL_111;
    }
    if ( v21[1] != 92 && v21[1] != 47 )
    {
      if ( v21[1] != 46 || a3->Length < 6u || v21[2] != 92 && v21[2] != 47 )
        goto LABEL_32;
      v47 = 0;
      goto LABEL_17;
    }
    v13 = 0;
    v47 = 0;
  }
  if ( v13 == 5 )
    goto LABEL_32;
LABEL_17:
  LOBYTE(v14) = 1;
  if ( (unsigned __int8)RtlDoesFileExists_UstrEx(a3, v14) )
  {
    p_UnicodeString = a3;
LABEL_83:
    v40 = a7;
    v42 = a6;
LABEL_80:
    FullPathName_Ustr = RtlGetFullPathName_UstrEx((__int64)p_UnicodeString, v51, v42, v40, v50, 0LL, &v47, v49);
    if ( FullPathName_Ustr < 0 )
      goto LABEL_26;
    goto LABEL_81;
  }
  if ( a4 && *a4 )
  {
    if ( (v10 & 4) == 0 )
    {
      if ( a3->Length )
      {
        v44 = (unsigned __int64)a3->Buffer;
        v45 = (_WORD *)(v44 + 2 * ((unsigned __int64)a3->Length >> 1));
        while ( (unsigned __int64)v45 > v44 )
        {
          if ( *--v45 == 92 || *v45 == 47 )
            break;
          if ( *v45 == 46 )
            goto LABEL_25;
        }
      }
    }
    v16 = *a4 + a3->Length + 2LL;
    if ( v16 <= 0xFFFE )
    {
      if ( v16 > UnicodeString.MaximumLength )
      {
        UnicodeString.MaximumLength = *a4 + a3->Length + 2;
        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine((unsigned __int16)v16);
        UnicodeString.Buffer = StringRoutine;
        if ( !StringRoutine )
          return (unsigned int)-1073741801;
      }
      else
      {
        StringRoutine = UnicodeString.Buffer;
      }
      memmove(StringRoutine, a3->Buffer, a3->Length);
      memmove(&UnicodeString.Buffer[(unsigned __int64)a3->Length >> 1], *((const void **)a4 + 1), *a4);
      LOBYTE(v18) = 1;
      UnicodeString.Buffer[(unsigned __int64)(a3->Length + *a4) >> 1] = 0;
      UnicodeString.Length = a3->Length + *a4;
      if ( !(unsigned __int8)RtlDoesFileExists_UstrEx(&UnicodeString, v18) )
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
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v57 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)FullPathName_Ustr;
}
