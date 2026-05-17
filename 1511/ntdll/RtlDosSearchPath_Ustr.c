/*
 * XREFs of RtlDosSearchPath_Ustr @ 0x1800185F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800155C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180017C70 (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpAllocateStringRoutine @ 0x180018174 (NtdllpAllocateStringRoutine.c)
 *     RtlDoesFileExists_UstrEx @ 0x180018498 (RtlDoesFileExists_UstrEx.c)
 *     RtlGetFullPathName_UstrEx @ 0x180018C40 (RtlGetFullPathName_UstrEx.c)
 *     RtlFreeAnsiString @ 0x18001C980 (RtlFreeAnsiString.c)
 *     RtlUnicodeStringCbCopyStringN @ 0x18006EE90 (RtlUnicodeStringCbCopyStringN.c)
 *     RtlUnicodeStringCat @ 0x18006EF78 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlDosSearchPath_Ustr(
        int a1,
        unsigned __int16 *a2,
        __m128i *a3,
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
  _WORD *v15; // rax
  UNICODE_STRING *p_UnicodeString; // rcx
  unsigned __int64 v17; // rdx
  _WORD *v18; // rcx
  unsigned __int64 v19; // rdx
  int FullPathName_Ustr; // ebx
  unsigned __int16 *Buffer; // rax
  int v22; // r9d
  int v23; // r8d
  int v24; // eax
  unsigned __int16 v25; // r9
  unsigned __int64 v26; // rdx
  _WORD *v27; // rcx
  unsigned __int64 v28; // r8
  _WORD *v29; // rcx
  unsigned __int16 v30; // ax
  _WORD *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // r13
  _WORD *v34; // rsi
  _WORD *v35; // r15
  int v36; // edx
  _WORD *j; // rdi
  __int64 v38; // rbx
  bool v39; // zf
  unsigned __int16 v40; // bx
  unsigned __int16 v41; // r12
  unsigned __int64 v42; // rdx
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
    goto LABEL_113;
  }
  v13 = RtlDetermineDosPathNameType_Ustr((unsigned __int16 *)a3);
  v45 = v13;
  if ( (v10 & 2) != 0 )
  {
    if ( v13 != 5 )
      goto LABEL_28;
    if ( a3->m128i_i16[0] < 4u )
      goto LABEL_51;
    v15 = (_WORD *)a3->m128i_i64[1];
    if ( *v15 != 46 )
      goto LABEL_51;
    if ( v15[1] != 92 && v15[1] != 47 )
    {
      if ( v15[1] == 46 && a3->m128i_i16[0] >= 6u && (v15[2] == 92 || v15[2] == 47) )
      {
        v45 = 0;
        goto LABEL_28;
      }
      goto LABEL_51;
    }
    v13 = 0;
    v45 = 0;
  }
  if ( v13 != 5 )
  {
LABEL_28:
    if ( RtlDoesFileExists_UstrEx(a3, 1) )
    {
      LODWORD(p_UnicodeString) = (_DWORD)a3;
LABEL_47:
      v22 = (int)a7;
      v23 = a6;
      goto LABEL_48;
    }
    if ( a4 && *a4 )
    {
      if ( (v10 & 4) == 0 )
      {
        if ( a3->m128i_i16[0] )
        {
          v17 = a3->m128i_u64[1];
          v18 = (_WORD *)(v17 + 2 * ((unsigned __int64)a3->m128i_u16[0] >> 1));
          while ( (unsigned __int64)v18 > v17 )
          {
            if ( *--v18 == 92 || *v18 == 47 )
              break;
            if ( *v18 == 46 )
              goto LABEL_50;
          }
        }
      }
      v19 = *a4 + a3->m128i_u16[0] + 2LL;
      if ( v19 > 0xFFFE )
      {
LABEL_40:
        FullPathName_Ustr = -1073741562;
        goto LABEL_113;
      }
      if ( v19 <= UnicodeString.MaximumLength )
      {
        Buffer = UnicodeString.Buffer;
      }
      else
      {
        UnicodeString.MaximumLength = *a4 + a3->m128i_i16[0] + 2;
        Buffer = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v19);
        UnicodeString.Buffer = Buffer;
        if ( !Buffer )
          return (unsigned int)-1073741801;
      }
      memmove(Buffer, (const void *)a3->m128i_i64[1], a3->m128i_u16[0]);
      memmove(&UnicodeString.Buffer[(unsigned __int64)a3->m128i_u16[0] >> 1], *((const void **)a4 + 1), *a4);
      UnicodeString.Buffer[(unsigned __int64)(a3->m128i_u16[0] + *a4) >> 1] = 0;
      UnicodeString.Length = a3->m128i_i16[0] + *a4;
      if ( RtlDoesFileExists_UstrEx((__m128i *)&UnicodeString, 1) )
      {
        p_UnicodeString = &UnicodeString;
        goto LABEL_47;
      }
    }
LABEL_50:
    FullPathName_Ustr = -1073741809;
    goto LABEL_113;
  }
LABEL_51:
  if ( (v10 & 1) != 0 )
  {
    v50 = 0LL;
    v24 = RtlDosApplyFileIsolationRedirection_Ustr(1u, a3, a4, v48, a6, (__int64)&v50, 0LL, v49, v47);
    FullPathName_Ustr = v24;
    if ( v24 >= 0 )
    {
      if ( a7 )
        *a7 = v50;
      goto LABEL_49;
    }
    if ( v24 != -1072365560 )
      goto LABEL_113;
    v14 = v54;
  }
  if ( a4 )
  {
    v25 = *a4;
    if ( a3->m128i_i16[0] )
    {
      v26 = a3->m128i_u64[1];
      v27 = (_WORD *)(v26 + 2 * ((unsigned __int64)a3->m128i_u16[0] >> 1));
      while ( (unsigned __int64)v27 > v26 )
      {
        if ( *--v27 == 92 || *v27 == 47 )
          break;
        if ( *v27 == 46 )
        {
          v51 = 0LL;
          v25 = 0;
          break;
        }
      }
    }
  }
  else
  {
    v25 = i;
  }
  if ( *v14 )
  {
    v28 = *((_QWORD *)v14 + 1);
    v29 = (_WORD *)(v28 + 2 * ((unsigned __int64)*v14 >> 1));
LABEL_76:
    v31 = v29;
    while ( (unsigned __int64)v29 > v28 )
    {
      if ( *--v29 == 59 )
      {
        v30 = v31 - v29 - 1;
        if ( (unsigned __int16)(v31 - v29) != 1 && *(v31 - 1) != 92 && *(v31 - 1) != 47 )
          v30 = v31 - v29;
        if ( v30 > v12 )
          v12 = v30;
        goto LABEL_76;
      }
    }
    v32 = v31 - v29;
    if ( (_WORD)v32 && *(v31 - 1) != 92 && *(v31 - 1) != 47 )
      LOWORD(v32) = v32 + 1;
    if ( (unsigned __int16)v32 > v12 )
      v12 = (unsigned __int16)v32;
    v12 *= 2LL;
  }
  v33 = v25 + v12 + a3->m128i_u16[0] + 2LL;
  if ( v33 > 0xFFFE )
    goto LABEL_40;
  v34 = (_WORD *)*((_QWORD *)v14 + 1);
  v35 = &v34[(unsigned __int64)*v14 >> 1];
  if ( v34 >= v35 )
    goto LABEL_50;
  v36 = v25;
  for ( i = v25; ; v36 = i )
  {
    for ( j = v34; j != v35; ++j )
    {
      if ( *j == 59 )
        break;
    }
    v38 = j - v34;
    v39 = 2 * (_WORD)v38 == 0;
    v40 = 2 * v38;
    v41 = v40;
    if ( !v39 && *(j - 1) != 92 && *(j - 1) != 47 )
      v40 += 2;
    v42 = v36 + a3->m128i_u16[0] + v40;
    if ( UnicodeString.MaximumLength < v42 + 2 )
    {
      if ( (_BYTE *)UnicodeString.Buffer != v55 || v42 > 0xFFFC )
        goto LABEL_110;
      UnicodeString.MaximumLength = v33;
      UnicodeString.Buffer = (unsigned __int16 *)NtdllpAllocateStringRoutine((unsigned __int16)v33);
      if ( !UnicodeString.Buffer )
        return (unsigned int)-1073741801;
    }
    UnicodeString.Length = 0;
    RtlUnicodeStringCbCopyStringN(&UnicodeString, v34, v41);
    if ( v40 && v41 != v40 )
    {
      UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 92;
      UnicodeString.Length += 2;
    }
    RtlUnicodeStringCat(&UnicodeString, a3);
    if ( v51 )
      RtlUnicodeStringCat(&UnicodeString, v51);
    if ( (unsigned __int64)UnicodeString.Length + 2 > UnicodeString.MaximumLength )
    {
LABEL_110:
      FullPathName_Ustr = -1073741595;
      goto LABEL_113;
    }
    UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
    if ( RtlDoesFileExists_UstrEx((__m128i *)&UnicodeString, 0) )
      break;
    v34 = j + 1;
    if ( j == v35 )
      v34 = j;
    if ( v34 >= v35 )
      goto LABEL_50;
  }
  v22 = (int)v53;
  p_UnicodeString = &UnicodeString;
  v23 = v52;
LABEL_48:
  FullPathName_Ustr = RtlGetFullPathName_UstrEx(
                        (_DWORD)p_UnicodeString,
                        v48,
                        v23,
                        v22,
                        (__int64)v49,
                        0LL,
                        (__int64)&v45,
                        (__int64)v47);
  if ( FullPathName_Ustr >= 0 )
LABEL_49:
    FullPathName_Ustr = 0;
LABEL_113:
  if ( UnicodeString.Buffer && (_BYTE *)UnicodeString.Buffer != v55 )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)FullPathName_Ustr;
}
