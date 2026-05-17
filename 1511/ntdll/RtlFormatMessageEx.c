/*
 * XREFs of RtlFormatMessageEx @ 0x18004A8C0
 * Callers:
 *     RtlFormatMessage @ 0x1800E52C0 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x18004A828 (RtlStringCbCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x18004AE80 (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     RtlStringCchCopyW @ 0x1800DCD90 (RtlStringCchCopyW.c)
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
  _DWORD *v22; // rdx
  unsigned __int16 v24; // cx
  _WORD *v25; // rdx
  int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // r15
  __int16 *v29; // rcx
  char v30; // r8
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int16 *v34; // r9
  __int64 v35; // r8
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
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
      goto LABEL_138;
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
        goto LABEL_17;
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
          goto LABEL_63;
        *v18 = v21;
        if ( v21 == 32 )
          v19 = v18;
        ++v18;
        ++v17;
        goto LABEL_13;
      }
      v15 -= 2;
      if ( v15 < 0 )
        goto LABEL_63;
      v17 = 0;
      *(_DWORD *)v18 = 655373;
      v63 = 0;
      v68 = v20;
      v18 += 2;
      v19 = 0LL;
    }
    v24 = v20[1];
    v25 = v18;
    v71 = v18;
    if ( (unsigned __int16)(v24 - 49) > 8u )
      break;
    v20 += 2;
    v26 = v24 - 48;
    v27 = (unsigned __int16)*v20;
    if ( (unsigned __int16)(v27 - 48) <= 9u )
    {
      ++v20;
      v26 = (unsigned __int16)v27 + 2 * (5 * v26 - 24);
      v27 = (unsigned __int16)*v20;
      if ( (unsigned __int16)(v27 - 48) <= 9u )
      {
        ++v20;
        v26 = (unsigned __int16)v27 + 2 * (5 * v26 - 24);
        v27 = (unsigned __int16)*v20;
        if ( (unsigned __int16)(v27 - 48) <= 9u )
          return 3221225485LL;
      }
    }
    v28 = (unsigned int)(v26 - 1);
    if ( (_WORD)v27 == 33 )
    {
      v29 = v74;
      v30 = 0;
      v73 = 37;
      while ( 1 )
      {
        ++v20;
        v66 = v29;
        v39 = *v20;
        if ( *v20 == 33 )
          break;
        if ( !v39 )
          return 3221225485LL;
        if ( v29 >= v75 )
          return 3221225485LL;
        if ( v39 == 42 )
        {
          v43 = v10++;
          if ( v43 > 1 )
            return 3221225485LL;
        }
        *v29++ = v39;
      }
      ++v20;
      *v29 = 0;
    }
    else
    {
      RtlStringCbCopyExW(&v73, v27, 9LL, &v66);
      v29 = v66;
      v30 = 1;
      v12 = v64;
      v11 = a3;
    }
    if ( !v11 )
    {
      if ( !v12 || (unsigned int)v28 + v10 >= 0xC8 )
        return 3221225485LL;
      if ( !a4 )
        goto LABEL_29;
      v45 = v29 - 1;
      if ( *(v29 - 1) == 99 )
      {
        v46 = *(v29 - 2) - 104;
        if ( v46 > 0xFu || (v47 = 32785, !_bittest(&v47, v46)) )
        {
          v48 = L"hc";
          goto LABEL_114;
        }
      }
      else
      {
        v47 = 32785;
      }
      if ( *v45 == 115 && ((v49 = *(v29 - 2) - 104, v49 > 0xFu) || !_bittest(&v47, v49)) )
      {
        v48 = L"hs";
LABEL_114:
        RtlStringCchCopyW(v29 - 1, 3LL, v48);
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
LABEL_29:
      v31 = v62;
      if ( (unsigned int)v28 >= v62 )
      {
        do
        {
          v32 = v31;
          if ( a5 )
          {
            v33 = *v12;
            ++v31;
            ++v12;
          }
          else
          {
            *v12 += 8LL;
            ++v31;
            v33 = *(_QWORD *)(*v12 - 8LL);
          }
          v72[v32] = v33;
        }
        while ( v31 <= (unsigned int)v28 );
        v62 = v31;
        v64 = v12;
      }
      v34 = (__int16 *)v72[v28];
      v35 = 0LL;
      v36 = 0LL;
      v66 = v34;
      if ( !v10 )
        goto LABEL_35;
      if ( a5 )
      {
        v35 = *v12;
        v50 = v31++;
        ++v12;
        v62 = v31;
        v64 = v12;
        v72[v50] = v35;
      }
      else
      {
        *v12 += 8LL;
        v35 = *(_QWORD *)(*v12 - 8LL);
      }
      if ( v10 > 1 )
      {
        v10 = 0;
        if ( a5 )
        {
          v36 = *v12;
          v51 = v31;
          v62 = v31 + 1;
          v64 = v12 + 1;
        }
        else
        {
          *v12 += 8LL;
          v36 = *(_QWORD *)(*v12 - 8LL);
          v51 = v31;
          v62 = v31 + 1;
        }
        v72[v51] = v36;
      }
      else
      {
LABEL_35:
        v10 = 0;
      }
      v37 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)&v73, v34, v35, v36);
      goto LABEL_37;
    }
    if ( v30 == 1 )
    {
      v10 = 0;
LABEL_62:
      LODWORD(v59) = v28 + 1;
      v37 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)L"%%%u", v59);
      goto LABEL_37;
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
      goto LABEL_62;
    LODWORD(v59) = v28 + 1;
    v37 = RtlStringCchPrintfExW((_DWORD)v18, v15, (unsigned int)&v67, 0, 0, (__int64)L"%%%u!%s!", v59, v74);
LABEL_37:
    if ( v37 < 0 )
      goto LABEL_63;
    v38 = (v67 - (__int64)v18) >> 1;
    v15 -= v38;
    if ( v15 < 0 )
      goto LABEL_63;
    v25 = v71;
    v12 = v64;
    v13 = a2;
    v11 = a3;
    v18 += (int)v38;
LABEL_40:
    if ( v25 )
    {
      v16 = a7;
      v17 = v18 - v25 + v63;
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
LABEL_138:
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
            goto LABEL_149;
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
LABEL_149:
          if ( a10 )
          {
            *(_DWORD *)a10 |= 2u;
            goto LABEL_63;
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
  if ( v24 != 48 )
  {
    switch ( v24 )
    {
      case 0u:
        return 3221225485LL;
      case 0x72u:
        if ( --v15 < 0 )
          goto LABEL_63;
        *v18++ = 13;
        v20 += 2;
        goto LABEL_83;
      case 0x6Eu:
        v15 -= 2;
        if ( v15 < 0 )
          goto LABEL_63;
        *(_DWORD *)v18 = 655373;
        v18 += 2;
        v20 += 2;
        goto LABEL_83;
      case 0x74u:
        if ( --v15 < 0 )
          goto LABEL_63;
        if ( (v17 & 7) != 0 )
          v52 = (v17 + 7) & 0xFFFFFFF8;
        else
          v52 = v17 + 8;
        v63 = v52;
        v53 = 9;
        break;
      case 0x62u:
        if ( --v15 < 0 )
          goto LABEL_63;
        v53 = 32;
        break;
      default:
        if ( v11 )
        {
          v15 -= 2;
          if ( v15 < 0 )
            goto LABEL_63;
          *v18 = 37;
          v18[1] = v20[1];
          v18 += 2;
          goto LABEL_92;
        }
        if ( --v15 < 0 )
          goto LABEL_63;
        *v18 = v24;
LABEL_91:
        ++v18;
LABEL_92:
        v20 += 2;
        goto LABEL_40;
    }
    v19 = v18;
    *v18 = v53;
    goto LABEL_91;
  }
  v16 = a7;
LABEL_17:
  if ( v15 < 1 )
  {
LABEL_63:
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
  v22 = (_DWORD *)v70;
  *v18 = 0;
  if ( v22 )
    *v22 = 2 * ((__int64)((__int64)v18 - v16 + 2) >> 1);
  return 0LL;
}
