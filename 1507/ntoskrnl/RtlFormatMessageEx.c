/*
 * XREFs of RtlFormatMessageEx @ 0x1406CA708
 * Callers:
 *     RtlFormatMessage @ 0x1406CA6BC (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x1400CF88C (RtlStringCbCopyExW.c)
 *     RtlStringCchCopyW @ 0x14011BAF4 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  va_list *v10; // r10
  BOOLEAN v12; // r11
  PWSTR v13; // r8
  PWSTR v14; // rbx
  ULONG v15; // r9d
  signed int v16; // esi
  __int64 v17; // r13
  PWSTR v18; // r12
  WCHAR v19; // ax
  WCHAR v20; // cx
  PWSTR v21; // rdx
  int v22; // r14d
  WCHAR v23; // dx
  __int64 v24; // r14
  unsigned int v25; // r15d
  char v26; // r8
  wchar_t *i; // rcx
  unsigned int v28; // eax
  WCHAR v29; // dx
  int v30; // ecx
  NTSTATUS v31; // eax
  wchar_t *v32; // r9
  __int16 v33; // dx
  unsigned __int16 v34; // ax
  int v35; // r11d
  const wchar_t *v36; // r8
  unsigned __int16 v37; // ax
  unsigned int v38; // edx
  __int64 v39; // rcx
  va_list v40; // rax
  wchar_t *v41; // r9
  va_list v42; // r8
  va_list v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rax
  _WORD *v48; // rbx
  WCHAR v49; // ax
  bool v50; // zf
  PWSTR v51; // rdx
  PWSTR v52; // rcx
  __int16 v53; // ax
  __int64 v54; // rax
  _WORD *v55; // r12
  _WORD *v56; // rbx
  _WORD *v57; // rbx
  PULONG v59; // rcx
  __int64 v60; // [rsp+38h] [rbp-D0h]
  unsigned int v63; // [rsp+5Ch] [rbp-ACh]
  va_list *v64; // [rsp+60h] [rbp-A8h]
  unsigned int v66; // [rsp+6Ch] [rbp-9Ch]
  NTSTRSAFE_PWSTR v67; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  int v69; // [rsp+80h] [rbp-88h]
  int v70; // [rsp+84h] [rbp-84h]
  PWSTR v71; // [rsp+88h] [rbp-80h]
  __int64 v72; // [rsp+90h] [rbp-78h]
  PULONG v73; // [rsp+98h] [rbp-70h]
  PWSTR v74; // [rsp+A0h] [rbp-68h]
  _QWORD v75[200]; // [rsp+A8h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E8h] [rbp+5E0h] BYREF
  _WORD v77[30]; // [rsp+6EAh] [rbp+5E2h] BYREF
  wchar_t v78[9]; // [rsp+726h] [rbp+61Eh] BYREF

  v10 = Arguments;
  v12 = IgnoreInserts;
  v13 = Buffer;
  v73 = ReturnLength;
  v14 = Buffer;
  v15 = MaximumWidth;
  v64 = Arguments;
  v71 = Buffer;
  v63 = 0;
  v16 = Length >> 1;
  v70 = 37;
  v72 = 8LL;
  v69 = 32;
LABEL_2:
  LODWORD(v17) = 0;
LABEL_3:
  v18 = 0LL;
  while ( 1 )
  {
    v19 = *MessageFormat;
    if ( !*MessageFormat )
      break;
    ++MessageFormat;
    if ( v19 != (_WORD)v70 )
    {
      if ( v19 == 13 || v19 == 10 )
      {
        if ( v19 == 10 && *MessageFormat == 13 || v19 == 13 && *MessageFormat == 10 )
          ++MessageFormat;
        if ( !v15 )
        {
          v16 -= 2;
          if ( v16 < 0 )
            return -2147483643;
          *v14 = 13;
          v57 = v14 + 1;
          *v57 = 10;
          v14 = v57 + 1;
          goto LABEL_2;
        }
        v18 = v14;
        v19 = 32;
      }
      if ( --v16 < 0 )
        return -2147483643;
      v50 = v19 == (WCHAR)v69;
      *v14 = v19;
      if ( v50 )
        v18 = v14;
      ++v14;
      LODWORD(v17) = v17 + 1;
      goto LABEL_105;
    }
    v20 = *MessageFormat;
    v21 = v14;
    v74 = v14;
    if ( (unsigned __int16)(v20 - 49) <= (unsigned __int16)v72 )
    {
      ++MessageFormat;
      v22 = v20 - 48;
      v23 = *MessageFormat;
      if ( (unsigned __int16)(*MessageFormat - 48) <= 9u )
      {
        ++MessageFormat;
        v22 = v23 + 2 * (5 * v22 - 24);
        v23 = *MessageFormat;
        if ( (unsigned __int16)(*MessageFormat - 48) <= 9u )
        {
          ++MessageFormat;
          v22 = v23 + 2 * (5 * v22 - 24);
          v23 = *MessageFormat;
          if ( (unsigned __int16)(*MessageFormat - 48) <= 9u )
            return -1073741811;
        }
      }
      v24 = (unsigned int)(v22 - 1);
      v66 = 0;
      v25 = 0;
      if ( v23 == 33 )
      {
        v26 = 0;
        pszDest = 37;
        for ( i = v77; ; ++i )
        {
          ++MessageFormat;
          ppszDestEnd = i;
          v29 = *MessageFormat;
          if ( *MessageFormat == 33 )
            break;
          if ( !v29 )
            return -1073741811;
          if ( i >= v78 )
            return -1073741811;
          if ( v29 == 42 )
          {
            v28 = v25++;
            v66 = v25;
            if ( v28 > 1 )
              return -1073741811;
          }
          *i = v29;
        }
        ++MessageFormat;
        *i = 0;
      }
      else
      {
        RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
        i = ppszDestEnd;
        v26 = 1;
        v10 = v64;
        v12 = IgnoreInserts;
      }
      if ( v12 )
      {
        if ( v26 == 1 )
          goto LABEL_27;
        v30 = pszDest - aS_0[0];
        if ( pszDest == aS_0[0] )
        {
          v30 = v77[0] - aS_0[1];
          if ( v77[0] == aS_0[1] )
            v30 = v77[1] - aS_0[2];
        }
        if ( !v30 )
        {
LABEL_27:
          LODWORD(v60) = v24 + 1;
          v31 = RtlStringCchPrintfExW(v14, v16, &v67, 0LL, 0, L"%%%u", v60);
        }
        else
        {
          LODWORD(v60) = v24 + 1;
          v31 = RtlStringCchPrintfExW(v14, v16, &v67, 0LL, 0, L"%%%u!%s!", v60, v77);
        }
LABEL_61:
        if ( v31 < 0 )
          return -2147483643;
        v47 = v67 - v14;
        v16 -= v47;
        if ( v16 < 0 )
          return -2147483643;
        v21 = v74;
        v10 = v64;
        v13 = v71;
        v15 = MaximumWidth;
        v12 = IgnoreInserts;
        v14 += (int)v47;
        goto LABEL_89;
      }
      if ( !v10 || v25 + (unsigned int)v24 >= 0xC8 )
        return -1073741811;
      if ( ArgumentsAreAnsi )
      {
        v32 = i - 1;
        v33 = *(i - 1);
        if ( v33 == 99 )
        {
          v34 = *(i - 2) - 104;
          if ( v34 > 0xFu || (v35 = 32785, !_bittest(&v35, v34)) )
          {
            v36 = L"hc";
            goto LABEL_40;
          }
        }
        else
        {
          v35 = 32785;
        }
        if ( v33 != 115 || (v37 = *(i - 2) - 104, v37 <= 0xFu) && _bittest(&v35, v37) )
        {
          if ( v33 == 83 )
          {
            *v32 = 115;
          }
          else if ( v33 == 67 )
          {
            *v32 = 99;
          }
        }
        else
        {
          v36 = L"hs";
LABEL_40:
          RtlStringCchCopyW(i - 1, 3uLL, v36);
          v10 = v64;
        }
      }
      v38 = v63;
      if ( (unsigned int)v24 >= v63 )
      {
        do
        {
          v39 = v38;
          if ( ArgumentsAreAnArray )
          {
            v40 = *v10;
            ++v38;
            ++v10;
          }
          else
          {
            *v10 += 8;
            ++v38;
            v40 = (va_list)*((_QWORD *)*v10 - 1);
          }
          v75[v39] = v40;
        }
        while ( v38 <= (unsigned int)v24 );
        v25 = v66;
        v63 = v38;
        v64 = v10;
      }
      v41 = (wchar_t *)v75[v24];
      ppszDestEnd = v41;
      v42 = 0LL;
      v43 = 0LL;
      if ( v25 )
      {
        if ( ArgumentsAreAnArray )
        {
          v42 = *v10;
          v44 = v38++;
          v63 = v38;
          v75[v44] = *v10++;
          v64 = v10;
        }
        else
        {
          *v10 += 8;
          v42 = (va_list)*((_QWORD *)*v10 - 1);
        }
        if ( v25 > 1 )
        {
          if ( ArgumentsAreAnArray )
          {
            v43 = *v10;
            v45 = v38;
            v46 = v38 + 1;
            v64 = v10 + 1;
          }
          else
          {
            *v10 += 8;
            v43 = (va_list)*((_QWORD *)*v10 - 1);
            v45 = v38;
            v46 = v38 + 1;
          }
          v63 = v46;
          v75[v45] = v43;
        }
      }
      v31 = RtlStringCchPrintfExW(v14, v16, &v67, 0LL, 0, &pszDest, v41, v42, v43);
      goto LABEL_61;
    }
    switch ( v20 )
    {
      case 0x30u:
        goto LABEL_128;
      case 0u:
        return -1073741811;
      case 0x72u:
        if ( --v16 < 0 )
          return -2147483643;
        *v14++ = 13;
        ++MessageFormat;
LABEL_90:
        v18 = 0LL;
        LODWORD(v17) = 0;
        goto LABEL_105;
      case 0x6Eu:
        v16 -= 2;
        if ( v16 < 0 )
          return -2147483643;
        *v14 = 13;
        v48 = v14 + 1;
        *v48 = 10;
        v14 = v48 + 1;
        ++MessageFormat;
        goto LABEL_90;
      case 0x74u:
        if ( --v16 < 0 )
          return -2147483643;
        if ( (v17 & 7) != 0 )
          LODWORD(v17) = (v17 + 7) & 0xFFFFFFF8;
        else
          LODWORD(v17) = v17 + 8;
        v49 = 9;
LABEL_78:
        v18 = v14;
        goto LABEL_79;
      case 0x62u:
        if ( --v16 < 0 )
          return -2147483643;
        v49 = 32;
        goto LABEL_78;
    }
    if ( !v12 )
    {
      if ( --v16 < 0 )
        return -2147483643;
      *v14 = v20;
      goto LABEL_88;
    }
    v16 -= 2;
    if ( v16 < 0 )
      return -2147483643;
    *v14++ = 37;
    v49 = *MessageFormat;
LABEL_79:
    *v14 = v49;
LABEL_88:
    ++v14;
    ++MessageFormat;
LABEL_89:
    if ( !v21 )
      goto LABEL_90;
    LODWORD(v17) = v14 - v21 + v17;
LABEL_105:
    if ( v15 - 1 <= 0xFFFFFFFD && (unsigned int)v17 >= v15 )
    {
      if ( v18 )
      {
        v51 = v18;
        do
        {
          if ( *v51 != 32 && *v51 != 9 )
            break;
          ++v51;
        }
        while ( v51 != v14 );
        if ( v18 > v13 )
        {
          do
          {
            v52 = v18 - 1;
            v53 = *(v18 - 1);
            if ( v53 != 32 && v53 != 9 )
              break;
            --v18;
          }
          while ( v52 > v13 );
        }
        v54 = v51 - v18;
        if ( (_DWORD)v54 == 1 )
        {
          if ( --v16 >= 0 )
            goto LABEL_121;
          return -2147483643;
        }
        if ( (unsigned int)v54 > 2 )
          v16 = v54 + v16 - 2;
LABEL_121:
        v17 = v14 - v51;
        memmove(v18 + 2, v51, 2 * v17);
        v15 = MaximumWidth;
        *v18 = 13;
        v55 = v18 + 1;
        *v55 = 10;
        v14 = &v55[(unsigned int)v17 + 1];
      }
      else
      {
        v16 -= 2;
        if ( v16 < 0 )
          return -2147483643;
        *v14 = 13;
        LODWORD(v17) = 0;
        v56 = v14 + 1;
        *v56 = 10;
        v14 = v56 + 1;
      }
      v10 = v64;
      v13 = v71;
      v12 = IgnoreInserts;
      goto LABEL_3;
    }
  }
LABEL_128:
  if ( v16 < 1 )
    return -2147483643;
  v59 = v73;
  *v14 = 0;
  if ( v59 )
    *v59 = 2 * (((char *)v14 - (char *)v13 + 2) >> 1);
  return 0;
}
