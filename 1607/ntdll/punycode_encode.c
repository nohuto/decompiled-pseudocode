/*
 * XREFs of punycode_encode @ 0x180053550
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x180055E74 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x180001644 (RtlStringCopyWorkerW.c)
 *     adapt @ 0x1800020C8 (adapt.c)
 *     FindLabelEnd @ 0x180056DB0 (FindLabelEnd.c)
 *     ValidateStd3Range @ 0x180056DE0 (ValidateStd3Range.c)
 *     _wcsnicmp @ 0x180098470 (_wcsnicmp.c)
 *     GetUTF32 @ 0x1800F04FC (GetUTF32.c)
 */

__int64 __fastcall punycode_encode(wchar_t *String1, int a2, wchar_t *i, int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  wchar_t *v7; // r12
  wchar_t *v8; // r15
  wchar_t *v9; // r11
  wchar_t *v10; // rbp
  wchar_t *v11; // rsi
  char v12; // r14
  unsigned __int64 LabelEnd; // rax
  __int16 v14; // r9
  unsigned __int64 v15; // r10
  wchar_t *v16; // rdi
  const wchar_t *v17; // r9
  int v18; // edx
  __int64 v19; // rcx
  wchar_t *v20; // rax
  int v21; // ebp
  wchar_t v22; // cx
  wchar_t v23; // ax
  __int64 v24; // r13
  wchar_t *v25; // rdx
  wchar_t *j; // rcx
  __int64 result; // rax
  const wchar_t *v28; // rdx
  int v29; // r10d
  int v30; // r15d
  int k; // r9d
  int v32; // r11d
  int UTF32; // eax
  __int64 v34; // r8
  int v35; // r15d
  wchar_t *v36; // rcx
  bool m; // cf
  int v38; // eax
  bool v39; // zf
  int v40; // eax
  int v41; // r10d
  int v42; // r8d
  int v43; // esi
  int v44; // r9d
  int v45; // edx
  __int16 v46; // ax
  wchar_t v47; // ax
  wchar_t v48; // r8
  int v49; // eax
  int v50; // [rsp+30h] [rbp-88h]
  int v51; // [rsp+34h] [rbp-84h]
  unsigned __int64 v52; // [rsp+38h] [rbp-80h]
  wchar_t *v53; // [rsp+40h] [rbp-78h]
  wchar_t *v54; // [rsp+48h] [rbp-70h]
  wchar_t *v55; // [rsp+50h] [rbp-68h]
  wchar_t *v56; // [rsp+58h] [rbp-60h]
  wchar_t *v57; // [rsp+60h] [rbp-58h]
  int v58; // [rsp+C8h] [rbp+10h]
  __int64 v59; // [rsp+D0h] [rbp+18h] BYREF
  int *v60; // [rsp+D8h] [rbp+20h]

  v60 = a4;
  v6 = i;
  v53 = i;
  v54 = i;
  v57 = i;
  v7 = String1;
  v8 = &String1[a2];
  v56 = v8;
  v9 = i;
  v10 = i;
  v11 = &i[*a4];
  v52 = (unsigned __int64)v11;
  if ( a2 <= 0 )
  {
    *a4 = 0;
    return 3221227286LL;
  }
  v12 = a5;
  if ( String1 >= v8 )
  {
LABEL_106:
    if ( !v12 )
      goto LABEL_109;
    goto LABEL_110;
  }
  while ( 1 )
  {
    LOBYTE(i) = v12;
    LabelEnd = FindLabelEnd(v7, v8, i, 45LL);
    v16 = (wchar_t *)LabelEnd;
    if ( (wchar_t *)LabelEnd == v7 )
      break;
    if ( v12 )
    {
      v17 = L"xl--";
    }
    else
    {
      if ( a6 && (*v7 == v14 || LabelEnd > v15 && *(_WORD *)(LabelEnd - 2) == v14) )
        goto LABEL_38;
      v17 = L"xn--";
    }
    v18 = 0;
    v19 = v11 - v6;
    if ( (unsigned __int64)(v19 - 1) > 0x7FFFFFFE )
      v18 = -1073741811;
    if ( v18 < 0 )
    {
      if ( v19 )
        *v6 = 0;
    }
    else
    {
      v20 = v6;
      v18 = 0;
      if ( !v19 )
      {
        if ( *v17 )
        {
          if ( !v6 )
          {
LABEL_104:
            result = 3221225507LL;
            goto LABEL_39;
          }
          v18 = -2147483643;
        }
LABEL_12:
        v6 = v20;
        goto LABEL_13;
      }
      v59 = 0LL;
      v18 = RtlStringCopyWorkerW(v6, v11 - v6, &v59, (__int64)v17, 4LL);
      v20 = &v6[v59];
      if ( (int)(v18 + 0x80000000) < 0 || v18 == -2147483643 )
        goto LABEL_12;
    }
LABEL_13:
    if ( v18 < 0 )
      goto LABEL_104;
    v21 = 0;
    for ( i = v7; i < v16; ++i )
    {
      v22 = *i;
      if ( *i >= 0x80u )
      {
        if ( (unsigned __int16)(v22 + 10240) <= 0x3FFu )
          ++i;
      }
      else
      {
        if ( !v12 && (a6 && !(unsigned __int8)ValidateStd3Range() || v22 < 0x20u || v22 == 127) || !v22 )
          goto LABEL_38;
        if ( v6 >= v11 )
          goto LABEL_104;
        if ( v12 || (unsigned __int16)(v22 - 65) > 0x19u )
          v23 = v22;
        else
          v23 = v22 + 32;
        *v6++ = v23;
        ++v21;
      }
    }
    v50 = v21;
    v24 = v16 - v7;
    if ( v21 == v24 )
    {
      v25 = v54;
      v6 -= 4;
      for ( j = v54; j < v6; ++j )
        *j = j[4];
    }
    else
    {
      if ( (__int64)(((char *)v8 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
      {
        v28 = L"xl--";
        if ( !v12 )
          v28 = L"xn--";
        if ( !wcsnicmp(v7, v28, 4uLL) )
          goto LABEL_38;
      }
      v29 = 0;
      v58 = 0;
      if ( v21 > 0 )
      {
        if ( (unsigned __int64)v6 >= v52 )
        {
LABEL_103:
          result = 3221225507LL;
          goto LABEL_39;
        }
        *v6++ = 45;
      }
      v30 = 0;
      LODWORD(v59) = 72;
      for ( k = 128; v21 < v24; k = v32 + 1 )
      {
        v32 = 0x7FFFFFF;
        for ( i = v7; i < v16; i = (wchar_t *)(v34 + 2LL * ((UTF32 >= 0x10000) + 1)) )
        {
          UTF32 = GetUTF32(i);
          if ( UTF32 >= k && UTF32 < v32 )
            v32 = UTF32;
        }
        v35 = (v32 - k) * (v21 - v29 + 1) + v30;
        v36 = v7;
        for ( m = v7 < v16; ; m = v36 < v16 )
        {
          v55 = v36;
          if ( !m )
            break;
          v38 = GetUTF32(v36);
          v51 = v38;
          v39 = v38 == v32;
          if ( v38 < v32 )
          {
            ++v35;
            v39 = v38 == v32;
          }
          if ( v39 )
          {
            v40 = v59;
            v41 = 36;
            v42 = v35;
            v43 = -(int)v59;
            while ( 1 )
            {
              if ( v41 > v40 )
              {
                v44 = 26;
                if ( v41 < v40 + 26 )
                  v44 = v43 + v41;
              }
              else
              {
                v44 = 1;
              }
              if ( v42 < v44 )
                break;
              if ( (unsigned __int64)v6 >= v52 )
                goto LABEL_103;
              v45 = (v42 - v44) % (36 - v44);
              v42 = (v42 - v44) / (36 - v44);
              v46 = v45 + v44;
              if ( v45 + v44 <= 25 )
                v47 = v46 + 97;
              else
                v47 = v46 + 22;
              *v6++ = v47;
              v40 = v59;
              v41 += 36;
            }
            if ( (unsigned __int64)v6 >= v52 )
              goto LABEL_103;
            if ( v42 <= 25 )
              v48 = v42 + 97;
            else
              v48 = v42 + 22;
            *v6++ = v48;
            v49 = adapt(v35, v21 - v58 + 1, v21 == v50);
            v29 = v58;
            v35 = 0;
            ++v21;
            LODWORD(v59) = v49;
            if ( v32 >= 0x10000 )
            {
              ++v21;
              v29 = ++v58;
            }
          }
          v36 = &v55[(v51 >= 0x10000) + 1];
        }
        v30 = v35 + 1;
      }
      v25 = v54;
      v8 = v56;
    }
    if ( !v12 && (__int64)(((char *)v6 - (char *)v25) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
      goto LABEL_38;
    v11 = (wchar_t *)v52;
    if ( v16 == v8 )
      goto LABEL_35;
    if ( (unsigned __int64)v6 >= v52 )
      goto LABEL_104;
    *v6++ = *v16;
    if ( v12 && *v16 == 64 )
    {
      v9 = v6;
      v53 = v6;
      v12 = 0;
    }
    else
    {
LABEL_35:
      v9 = v53;
    }
    v54 = v6;
    v7 = v16 + 1;
    if ( v16 >= v8 )
    {
      a4 = v60;
      v10 = v57;
      goto LABEL_106;
    }
  }
  if ( v12 || (wchar_t *)LabelEnd != v8 )
  {
    *v60 = 0;
    return 3221227286LL;
  }
  a4 = v60;
  v10 = v57;
LABEL_109:
  if ( v6 - v9 <= 255 - (*(v6 - 1) != 46) )
  {
LABEL_110:
    if ( *(v6 - 1) != 64 )
    {
      *a4 = v6 - v10;
      return 0LL;
    }
  }
LABEL_38:
  result = 3221227286LL;
LABEL_39:
  *v60 = 0;
  return result;
}
