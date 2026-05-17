/*
 * XREFs of RtlFormatMessageEx @ 0x180010330
 * Callers:
 *     RtlFormatMessage @ 0x1800DFB70 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x180010298 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x1800108F0 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     RtlStringCchCopyW @ 0x1800D4E70 (RtlStringCchCopyW.c)
 */

__int64 __fastcall RtlFormatMessageEx(
        __int16 *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        _QWORD *a6,
        unsigned __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // r13d
  char v11; // r11
  _QWORD *v12; // r10
  unsigned int v13; // r9d
  int v15; // r12d
  unsigned __int64 v16; // rcx
  unsigned int v17; // r15d
  _WORD *v18; // rbx
  _WORD *v19; // rsi
  __int16 *v20; // r14
  __int16 v21; // ax
  unsigned __int16 v22; // cx
  _WORD *v23; // rdx
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // r15
  __int16 *v27; // rcx
  char v28; // r8
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int16 *v32; // r9
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  _DWORD *v37; // rdx
  __int16 v39; // dx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // eax
  int v44; // ecx
  __int16 *v45; // r9
  unsigned __int16 v46; // ax
  int v47; // r8d
  const wchar_t *v48; // r8
  unsigned __int16 v49; // ax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // r15d
  __int16 v53; // ax
  _WORD *v54; // rdx
  _WORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  _WORD *v58; // rsi
  __int64 v59; // [rsp+38h] [rbp-D0h]
  unsigned int v62; // [rsp+5Ch] [rbp-ACh]
  int v63; // [rsp+60h] [rbp-A8h]
  _QWORD *v64; // [rsp+68h] [rbp-A0h]
  __int16 *v66; // [rsp+80h] [rbp-88h] BYREF
  __int64 v67; // [rsp+88h] [rbp-80h] BYREF
  __int16 *v68; // [rsp+90h] [rbp-78h]
  __int16 *v69; // [rsp+98h] [rbp-70h]
  __int64 v70; // [rsp+A0h] [rbp-68h]
  _WORD *v71; // [rsp+A8h] [rbp-60h]
  _QWORD v72[200]; // [rsp+B8h] [rbp-50h]
  unsigned __int16 v73; // [rsp+6F8h] [rbp+5F0h] BYREF
  _WORD v74[30]; // [rsp+6FAh] [rbp+5F2h] BYREF
  __int16 v75[9]; // [rsp+736h] [rbp+62Eh] BYREF

  v10 = 0;
  v11 = a3;
  v12 = a6;
  v13 = a2;
  v15 = a8 >> 1;
  v69 = a1;
  v16 = a7;
  v70 = a9;
  v64 = a6;
  v62 = 0;
  if ( a10 && (*(_DWORD *)a10 & 1) != 0 )
  {
    v17 = *(_DWORD *)(a10 + 4);
    *(_DWORD *)a10 &= ~1u;
    v19 = 0LL;
    v63 = v17;
    v20 = &a1[*(_QWORD *)(a10 + 8)];
    v41 = *(_QWORD *)(a10 + 16);
    v68 = v20;
    v18 = (_WORD *)(a7 + 2 * v41);
    v42 = *(_QWORD *)(a10 + 24);
    if ( v42 != -1 )
      v19 = (_WORD *)(a7 + 2 * v42);
    v15 -= *(_DWORD *)(a10 + 16);
    if ( !a5 && a6 )
      *a6 = *(_QWORD *)(a10 + 32);
    if ( (*(_DWORD *)a10 & 2) != 0 )
    {
      *(_DWORD *)a10 &= ~2u;
      goto LABEL_137;
    }
  }
  else
  {
    v17 = 0;
    v18 = (_WORD *)a7;
    v63 = 0;
    v19 = 0LL;
    v68 = a1;
    v20 = a1;
    if ( !a5 && a6 && a10 )
      *(_QWORD *)(a10 + 32) = *a6;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = *v20;
      if ( !*v20 )
        goto LABEL_38;
      if ( v21 == 37 )
        break;
      ++v20;
      if ( v21 != 13 && v21 != 10 )
        goto LABEL_9;
      if ( v21 == 10 && *v20 == 13 || v21 == 13 && *v20 == 10 )
        ++v20;
      if ( v13 )
      {
        v19 = v18;
        v21 = 32;
LABEL_9:
        if ( --v15 < 0 )
          goto LABEL_59;
        *v18 = v21;
        if ( v21 == 32 )
          v19 = v18;
        ++v18;
        ++v17;
        goto LABEL_13;
      }
      v15 -= 2;
      if ( v15 < 0 )
        goto LABEL_59;
      v17 = 0;
      *(_DWORD *)v18 = 655373;
      v63 = 0;
      v68 = v20;
      v18 += 2;
      v19 = 0LL;
    }
    v22 = v20[1];
    v23 = v18;
    v71 = v18;
    if ( (unsigned __int16)(v22 - 49) > 8u )
      break;
    v20 += 2;
    v24 = v22 - 48;
    v25 = (unsigned __int16)*v20;
    if ( (unsigned __int16)(v25 - 48) <= 9u )
    {
      ++v20;
      v24 = (unsigned __int16)v25 + 2 * (5 * v24 - 24);
      v25 = (unsigned __int16)*v20;
      if ( (unsigned __int16)(v25 - 48) <= 9u )
      {
        ++v20;
        v24 = (unsigned __int16)v25 + 2 * (5 * v24 - 24);
        v25 = (unsigned __int16)*v20;
        if ( (unsigned __int16)(v25 - 48) <= 9u )
          return 3221225485LL;
      }
    }
    v26 = (unsigned int)(v24 - 1);
    if ( (_WORD)v25 == 33 )
    {
      v27 = v74;
      v28 = 0;
      v73 = 37;
      while ( 1 )
      {
        ++v20;
        v66 = v27;
        v39 = *v20;
        if ( *v20 == 33 )
          break;
        if ( !v39 )
          return 3221225485LL;
        if ( v27 >= v75 )
          return 3221225485LL;
        if ( v39 == 42 )
        {
          v43 = v10++;
          if ( v43 > 1 )
            return 3221225485LL;
        }
        *v27++ = v39;
      }
      ++v20;
      *v27 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&v73, v25, 9LL, &v66);
      v27 = v66;
      v28 = 1;
      v12 = v64;
      v11 = a3;
    }
    if ( !v11 )
    {
      if ( !v12 || (unsigned int)v26 + v10 >= 0xC8 )
        return 3221225485LL;
      if ( !a4 )
        goto LABEL_23;
      v45 = v27 - 1;
      if ( *(v27 - 1) == 99 )
      {
        v46 = *(v27 - 2) - 104;
        if ( v46 > 0xFu || (v47 = 32785, !_bittest(&v47, v46)) )
        {
          v48 = L"hc";
          goto LABEL_113;
        }
      }
      else
      {
        v47 = 32785;
      }
      if ( *v45 == 115 && ((v49 = *(v27 - 2) - 104, v49 > 0xFu) || !_bittest(&v47, v49)) )
      {
        v48 = L"hs";
LABEL_113:
        RtlStringCchCopyW(v27 - 1, 3LL, v48);
        v12 = v64;
      }
      else if ( *v45 == 83 )
      {
        *v45 = 115;
      }
      else if ( *v45 == 67 )
      {
        *v45 = 99;
      }
LABEL_23:
      v29 = v62;
      if ( (unsigned int)v26 >= v62 )
      {
        do
        {
          v30 = v29;
          if ( a5 )
          {
            v31 = *v12;
            ++v29;
            ++v12;
          }
          else
          {
            *v12 += 8LL;
            ++v29;
            v31 = *(_QWORD *)(*v12 - 8LL);
          }
          v72[v30] = v31;
        }
        while ( v29 <= (unsigned int)v26 );
        v62 = v29;
        v64 = v12;
      }
      v32 = (__int16 *)v72[v26];
      v33 = 0LL;
      v34 = 0LL;
      v66 = v32;
      if ( !v10 )
        goto LABEL_29;
      if ( a5 )
      {
        v33 = *v12;
        v50 = v29++;
        ++v12;
        v62 = v29;
        v64 = v12;
        v72[v50] = v33;
      }
      else
      {
        *v12 += 8LL;
        v33 = *(_QWORD *)(*v12 - 8LL);
      }
      if ( v10 > 1 )
      {
        v10 = 0;
        if ( a5 )
        {
          v34 = *v12;
          v51 = v29;
          v62 = v29 + 1;
          v64 = v12 + 1;
        }
        else
        {
          *v12 += 8LL;
          v34 = *(_QWORD *)(*v12 - 8LL);
          v51 = v29;
          v62 = v29 + 1;
        }
        v72[v51] = v34;
      }
      else
      {
LABEL_29:
        v10 = 0;
      }
      v35 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)&v73, v32, v33, v34);
      goto LABEL_31;
    }
    if ( v28 == 1 )
    {
      v10 = 0;
LABEL_67:
      LODWORD(v59) = v26 + 1;
      v35 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)L"%%%u", v59);
      goto LABEL_31;
    }
    v44 = v73 - aS_0[0];
    if ( v73 == aS_0[0] )
    {
      v44 = v74[0] - aS_0[1];
      if ( v74[0] == aS_0[1] )
        v44 = v74[1] - aS_0[2];
    }
    v10 = 0;
    if ( !v44 )
      goto LABEL_67;
    LODWORD(v59) = v26 + 1;
    v35 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)L"%%%u!%s!", v59, v74);
LABEL_31:
    if ( v35 < 0 )
      goto LABEL_59;
    v36 = (v67 - (__int64)v18) >> 1;
    v15 -= v36;
    if ( v15 < 0 )
      goto LABEL_59;
    v23 = v71;
    v12 = v64;
    v13 = a2;
    v11 = a3;
    v18 += (int)v36;
LABEL_34:
    if ( v23 )
    {
      v16 = a7;
      v17 = v18 - v23 + v63;
      goto LABEL_13;
    }
LABEL_83:
    v16 = a7;
    v19 = 0LL;
    v17 = 0;
LABEL_13:
    v63 = v17;
    v68 = v20;
    if ( v13 - 1 <= 0xFFFFFFFD && v17 >= v13 )
    {
LABEL_137:
      if ( v19 )
      {
        v54 = v19;
        do
        {
          if ( *v54 != 32 && *v54 != 9 )
            break;
          ++v54;
        }
        while ( v54 != v18 );
        if ( (unsigned __int64)v19 > a7 )
        {
          do
          {
            v55 = v19 - 1;
            if ( *(v19 - 1) != 32 && *v55 != 9 )
              break;
            --v19;
          }
          while ( (unsigned __int64)v55 > a7 );
        }
        v56 = v54 - v19;
        if ( (_DWORD)v56 == 1 )
        {
          if ( --v15 < 0 )
            goto LABEL_148;
        }
        else if ( (unsigned int)v56 > 2 )
        {
          v15 = v56 + v15 - 2;
        }
        v57 = v18 - v54;
        v17 = v57;
        v63 = v57;
        memmove(v19 + 2, v54, 2 * v57);
        v13 = a2;
        *v19 = 13;
        v58 = v19 + 1;
        *v58 = 10;
        v18 = &v58[(unsigned int)v57 + 1];
      }
      else
      {
        v15 -= 2;
        if ( v15 < 0 )
        {
LABEL_148:
          if ( a10 )
          {
            *(_DWORD *)a10 |= 2u;
            goto LABEL_59;
          }
          return 2147483653LL;
        }
        v17 = 0;
        *(_DWORD *)v18 = 655373;
        v63 = 0;
        v18 += 2;
      }
      v12 = v64;
      v19 = 0LL;
      v16 = a7;
      v11 = a3;
    }
  }
  if ( v22 != 48 )
  {
    switch ( v22 )
    {
      case 0u:
        return 3221225485LL;
      case 0x72u:
        if ( --v15 < 0 )
          goto LABEL_59;
        *v18++ = 13;
        v20 += 2;
        goto LABEL_83;
      case 0x6Eu:
        v15 -= 2;
        if ( v15 < 0 )
          goto LABEL_59;
        *(_DWORD *)v18 = 655373;
        v18 += 2;
        v20 += 2;
        goto LABEL_83;
      case 0x74u:
        if ( --v15 < 0 )
          goto LABEL_59;
        if ( (v17 & 7) != 0 )
          v52 = (v17 + 7) & 0xFFFFFFF8;
        else
          v52 = v17 + 8;
        v63 = v52;
        v53 = 9;
        break;
      case 0x62u:
        if ( --v15 < 0 )
          goto LABEL_59;
        v53 = 32;
        break;
      default:
        if ( v11 )
        {
          v15 -= 2;
          if ( v15 < 0 )
            goto LABEL_59;
          *v18 = 37;
          v18[1] = v20[1];
          v18 += 2;
          goto LABEL_92;
        }
        if ( --v15 < 0 )
          goto LABEL_59;
        *v18 = v22;
LABEL_91:
        ++v18;
LABEL_92:
        v20 += 2;
        goto LABEL_34;
    }
    v19 = v18;
    *v18 = v53;
    goto LABEL_91;
  }
  v16 = a7;
LABEL_38:
  if ( v15 < 1 )
  {
LABEL_59:
    if ( a10 )
    {
      *(_DWORD *)(a10 + 4) = v63;
      *(_QWORD *)(a10 + 8) = v68 - v69;
      *(_QWORD *)(a10 + 16) = (__int64)((__int64)v18 - a7) >> 1;
      if ( v19 )
        v40 = (__int64)((__int64)v19 - a7) >> 1;
      else
        v40 = -1LL;
      *(_DWORD *)a10 |= 1u;
      *(_QWORD *)(a10 + 24) = v40;
    }
    return 2147483653LL;
  }
  v37 = (_DWORD *)v70;
  *v18 = 0;
  if ( v37 )
    *v37 = 2 * ((__int64)((__int64)v18 - v16 + 2) >> 1);
  return 0LL;
}
