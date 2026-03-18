/*
 * XREFs of RtlFormatMessageEx @ 0x140647624
 * Callers:
 *     RtlFormatMessage @ 0x1406475D8 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140002AB0 (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfExW @ 0x14008FB80 (RtlStringCchPrintfExW.c)
 *     RtlStringCbCopyExW @ 0x140099968 (RtlStringCbCopyExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        __int64 *a6,
        NTSTRSAFE_PWSTR a7,
        unsigned int a8,
        __int64 a9)
{
  __int64 *v9; // r10
  char v11; // r11
  NTSTRSAFE_PWSTR v12; // r8
  NTSTRSAFE_PWSTR v13; // rbx
  unsigned int v14; // r9d
  signed int v15; // esi
  __int64 v16; // r13
  NTSTRSAFE_PWSTR v17; // r12
  __int16 v18; // ax
  wchar_t v19; // cx
  NTSTRSAFE_PWSTR v20; // rdx
  int v21; // r14d
  unsigned __int16 v22; // dx
  __int64 v23; // r14
  unsigned int v24; // r15d
  char v25; // r8
  wchar_t *i; // rcx
  unsigned int v27; // eax
  wchar_t v28; // dx
  int v29; // ecx
  NTSTATUS v30; // eax
  wchar_t *v31; // r9
  __int16 v32; // dx
  unsigned __int16 v33; // ax
  int v34; // r11d
  const wchar_t *v35; // r8
  unsigned __int16 v36; // ax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rax
  wchar_t *v40; // r9
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rax
  _WORD *v47; // rbx
  __int16 v48; // ax
  bool v49; // zf
  NTSTRSAFE_PWSTR v50; // rdx
  NTSTRSAFE_PWSTR v51; // rcx
  __int16 v52; // ax
  __int64 v53; // rax
  _WORD *v54; // r12
  _WORD *v55; // rbx
  _WORD *v56; // rbx
  _DWORD *v58; // rcx
  __int64 v59; // [rsp+38h] [rbp-D0h]
  unsigned int v62; // [rsp+5Ch] [rbp-ACh]
  __int64 v63; // [rsp+60h] [rbp-A8h]
  unsigned int v65; // [rsp+6Ch] [rbp-9Ch]
  NTSTRSAFE_PWSTR v66; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  int v68; // [rsp+80h] [rbp-88h]
  int v69; // [rsp+84h] [rbp-84h]
  NTSTRSAFE_PWSTR v70; // [rsp+88h] [rbp-80h]
  __int64 v71; // [rsp+90h] [rbp-78h]
  __int64 v72; // [rsp+98h] [rbp-70h]
  NTSTRSAFE_PWSTR v73; // [rsp+A0h] [rbp-68h]
  _QWORD v74[200]; // [rsp+A8h] [rbp-60h]
  wchar_t pszDest; // [rsp+6E8h] [rbp+5E0h] BYREF
  _WORD v76[30]; // [rsp+6EAh] [rbp+5E2h] BYREF
  wchar_t v77[9]; // [rsp+726h] [rbp+61Eh] BYREF

  v9 = a6;
  v11 = a3;
  v12 = a7;
  v72 = a9;
  v13 = a7;
  v14 = a2;
  v63 = (__int64)a6;
  v70 = a7;
  v62 = 0;
  v15 = a8 >> 1;
  v69 = 37;
  v71 = 8LL;
  v68 = 32;
LABEL_2:
  LODWORD(v16) = 0;
LABEL_3:
  v17 = 0LL;
  while ( 1 )
  {
    v18 = *a1;
    if ( !*a1 )
      break;
    ++a1;
    if ( v18 != (_WORD)v69 )
    {
      if ( v18 == 13 || v18 == 10 )
      {
        if ( v18 == 10 && *a1 == 13 || v18 == 13 && *a1 == 10 )
          ++a1;
        if ( !v14 )
        {
          v15 -= 2;
          if ( v15 < 0 )
            return 2147483653LL;
          *v13 = 13;
          v56 = v13 + 1;
          *v56 = 10;
          v13 = v56 + 1;
          goto LABEL_2;
        }
        v17 = v13;
        v18 = 32;
      }
      if ( --v15 < 0 )
        return 2147483653LL;
      v49 = v18 == (__int16)v68;
      *v13 = v18;
      if ( v49 )
        v17 = v13;
      ++v13;
      LODWORD(v16) = v16 + 1;
      goto LABEL_105;
    }
    v19 = *a1;
    v20 = v13;
    v73 = v13;
    if ( (unsigned __int16)(v19 - 49) <= (unsigned __int16)v71 )
    {
      ++a1;
      v21 = v19 - 48;
      v22 = *a1;
      if ( (unsigned __int16)(*a1 - 48) <= 9u )
      {
        ++a1;
        v21 = v22 + 2 * (5 * v21 - 24);
        v22 = *a1;
        if ( (unsigned __int16)(*a1 - 48) <= 9u )
        {
          ++a1;
          v21 = v22 + 2 * (5 * v21 - 24);
          v22 = *a1;
          if ( (unsigned __int16)(*a1 - 48) <= 9u )
            return 3221225485LL;
        }
      }
      v23 = (unsigned int)(v21 - 1);
      v65 = 0;
      v24 = 0;
      if ( v22 == 33 )
      {
        v25 = 0;
        pszDest = 37;
        for ( i = v76; ; ++i )
        {
          ++a1;
          ppszDestEnd = i;
          v28 = *a1;
          if ( *a1 == 33 )
            break;
          if ( !v28 )
            return 3221225485LL;
          if ( i >= v77 )
            return 3221225485LL;
          if ( v28 == 42 )
          {
            v27 = v24++;
            v65 = v24;
            if ( v27 > 1 )
              return 3221225485LL;
          }
          *i = v28;
        }
        ++a1;
        *i = 0;
      }
      else
      {
        RtlStringCbCopyExW(&pszDest, 0x40uLL, L"%s", &ppszDestEnd, 0LL, 0);
        i = ppszDestEnd;
        v25 = 1;
        v9 = (__int64 *)v63;
        v11 = a3;
      }
      if ( v11 )
      {
        if ( v25 == 1 )
          goto LABEL_27;
        v29 = pszDest - aS_0[0];
        if ( pszDest == aS_0[0] )
        {
          v29 = v76[0] - aS_0[1];
          if ( v76[0] == aS_0[1] )
            v29 = v76[1] - aS_0[2];
        }
        if ( !v29 )
        {
LABEL_27:
          LODWORD(v59) = v23 + 1;
          v30 = RtlStringCchPrintfExW(v13, v15, &v66, 0LL, 0, L"%%%u", v59);
        }
        else
        {
          LODWORD(v59) = v23 + 1;
          v30 = RtlStringCchPrintfExW(v13, v15, &v66, 0LL, 0, L"%%%u!%s!", v59, v76);
        }
LABEL_61:
        if ( v30 < 0 )
          return 2147483653LL;
        v46 = v66 - v13;
        v15 -= v46;
        if ( v15 < 0 )
          return 2147483653LL;
        v20 = v73;
        v9 = (__int64 *)v63;
        v12 = v70;
        v14 = a2;
        v11 = a3;
        v13 += (int)v46;
        goto LABEL_89;
      }
      if ( !v9 || v24 + (unsigned int)v23 >= 0xC8 )
        return 3221225485LL;
      if ( a4 )
      {
        v31 = i - 1;
        v32 = *(i - 1);
        if ( v32 == 99 )
        {
          v33 = *(i - 2) - 104;
          if ( v33 > 0xFu || (v34 = 32785, !_bittest(&v34, v33)) )
          {
            v35 = L"hc";
            goto LABEL_40;
          }
        }
        else
        {
          v34 = 32785;
        }
        if ( v32 != 115 || (v36 = *(i - 2) - 104, v36 <= 0xFu) && _bittest(&v34, v36) )
        {
          if ( v32 == 83 )
          {
            *v31 = 115;
          }
          else if ( v32 == 67 )
          {
            *v31 = 99;
          }
        }
        else
        {
          v35 = L"hs";
LABEL_40:
          RtlStringCchCopyW(i - 1, 3uLL, v35);
          v9 = (__int64 *)v63;
        }
      }
      v37 = v62;
      if ( (unsigned int)v23 >= v62 )
      {
        do
        {
          v38 = v37;
          if ( a5 )
          {
            v39 = *v9;
            ++v37;
            ++v9;
          }
          else
          {
            *v9 += 8LL;
            ++v37;
            v39 = *(_QWORD *)(*v9 - 8);
          }
          v74[v38] = v39;
        }
        while ( v37 <= (unsigned int)v23 );
        v24 = v65;
        v62 = v37;
        v63 = (__int64)v9;
      }
      v40 = (wchar_t *)v74[v23];
      ppszDestEnd = v40;
      v41 = 0LL;
      v42 = 0LL;
      if ( v24 )
      {
        if ( a5 )
        {
          v41 = *v9;
          v43 = v37++;
          v62 = v37;
          v74[v43] = *v9++;
          v63 = (__int64)v9;
        }
        else
        {
          *v9 += 8LL;
          v41 = *(_QWORD *)(*v9 - 8);
        }
        if ( v24 > 1 )
        {
          if ( a5 )
          {
            v42 = *v9;
            v44 = v37;
            v45 = v37 + 1;
            v63 = (__int64)(v9 + 1);
          }
          else
          {
            *v9 += 8LL;
            v42 = *(_QWORD *)(*v9 - 8);
            v44 = v37;
            v45 = v37 + 1;
          }
          v62 = v45;
          v74[v44] = v42;
        }
      }
      v30 = RtlStringCchPrintfExW(v13, v15, &v66, 0LL, 0, &pszDest, v40, v41, v42);
      goto LABEL_61;
    }
    switch ( v19 )
    {
      case 0x30u:
        goto LABEL_128;
      case 0u:
        return 3221225485LL;
      case 0x72u:
        if ( --v15 < 0 )
          return 2147483653LL;
        *v13++ = 13;
        ++a1;
LABEL_90:
        v17 = 0LL;
        LODWORD(v16) = 0;
        goto LABEL_105;
      case 0x6Eu:
        v15 -= 2;
        if ( v15 < 0 )
          return 2147483653LL;
        *v13 = 13;
        v47 = v13 + 1;
        *v47 = 10;
        v13 = v47 + 1;
        ++a1;
        goto LABEL_90;
      case 0x74u:
        if ( --v15 < 0 )
          return 2147483653LL;
        if ( (v16 & 7) != 0 )
          LODWORD(v16) = (v16 + 7) & 0xFFFFFFF8;
        else
          LODWORD(v16) = v16 + 8;
        v48 = 9;
LABEL_78:
        v17 = v13;
        goto LABEL_79;
      case 0x62u:
        if ( --v15 < 0 )
          return 2147483653LL;
        v48 = 32;
        goto LABEL_78;
    }
    if ( !v11 )
    {
      if ( --v15 < 0 )
        return 2147483653LL;
      *v13 = v19;
      goto LABEL_88;
    }
    v15 -= 2;
    if ( v15 < 0 )
      return 2147483653LL;
    *v13++ = 37;
    v48 = *a1;
LABEL_79:
    *v13 = v48;
LABEL_88:
    ++v13;
    ++a1;
LABEL_89:
    if ( !v20 )
      goto LABEL_90;
    LODWORD(v16) = v13 - v20 + v16;
LABEL_105:
    if ( v14 - 1 <= 0xFFFFFFFD && (unsigned int)v16 >= v14 )
    {
      if ( v17 )
      {
        v50 = v17;
        do
        {
          if ( *v50 != 32 && *v50 != 9 )
            break;
          ++v50;
        }
        while ( v50 != v13 );
        if ( v17 > v12 )
        {
          do
          {
            v51 = v17 - 1;
            v52 = *(v17 - 1);
            if ( v52 != 32 && v52 != 9 )
              break;
            --v17;
          }
          while ( v51 > v12 );
        }
        v53 = v50 - v17;
        if ( (_DWORD)v53 == 1 )
        {
          if ( --v15 >= 0 )
            goto LABEL_121;
          return 2147483653LL;
        }
        if ( (unsigned int)v53 > 2 )
          v15 = v53 + v15 - 2;
LABEL_121:
        v16 = v13 - v50;
        memmove(v17 + 2, v50, 2 * v16);
        v14 = a2;
        *v17 = 13;
        v54 = v17 + 1;
        *v54 = 10;
        v13 = &v54[(unsigned int)v16 + 1];
      }
      else
      {
        v15 -= 2;
        if ( v15 < 0 )
          return 2147483653LL;
        *v13 = 13;
        LODWORD(v16) = 0;
        v55 = v13 + 1;
        *v55 = 10;
        v13 = v55 + 1;
      }
      v9 = (__int64 *)v63;
      v12 = v70;
      v11 = a3;
      goto LABEL_3;
    }
  }
LABEL_128:
  if ( v15 < 1 )
    return 2147483653LL;
  v58 = (_DWORD *)v72;
  *v13 = 0;
  if ( v58 )
    *v58 = 2 * (((char *)v13 - (char *)v12 + 2) >> 1);
  return 0LL;
}
