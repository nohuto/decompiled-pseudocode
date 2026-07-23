/*
 * XREFs of punycode_decode @ 0x180056848
 * Callers:
 *     RtlIdnToUnicode @ 0x180056680 (RtlIdnToUnicode.c)
 * Callees:
 *     adapt @ 0x1800020C8 (adapt.c)
 *     InsertChar @ 0x180002740 (InsertChar.c)
 *     FindLabelEnd @ 0x180056DB0 (FindLabelEnd.c)
 *     ValidateStd3Range @ 0x180056DE0 (ValidateStd3Range.c)
 *     _wcsnicmp @ 0x180098470 (_wcsnicmp.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *String1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  int v8; // edi
  wchar_t *v10; // r9
  unsigned __int16 *v11; // rbx
  unsigned __int16 *v12; // r8
  unsigned __int16 *v13; // r15
  wchar_t *v14; // r14
  unsigned __int16 *v15; // r13
  wchar_t *v16; // rbp
  char v17; // r12
  unsigned __int64 LabelEnd; // rax
  unsigned __int64 v19; // r9
  signed __int64 v20; // r10
  wchar_t *v21; // r11
  wchar_t *v22; // rsi
  const wchar_t *v23; // rdx
  wchar_t *v25; // r9
  __int64 v26; // r10
  unsigned __int16 v27; // r11
  unsigned __int16 v28; // ax
  int v29; // eax
  int v30; // r13d
  int v31; // r15d
  wchar_t *v32; // rdx
  int v33; // r10d
  int v34; // r11d
  int v35; // r9d
  int v36; // r8d
  int v37; // r10d
  int v38; // ecx
  int v39; // eax
  __int64 v40; // r11
  __int64 v41; // r11
  __int64 v42; // rax
  __int64 v43; // r15
  unsigned __int16 *v44; // r11
  int v45; // ecx
  __int64 v46; // r11
  __int16 v47; // r10
  int v48; // [rsp+20h] [rbp-78h]
  int v49; // [rsp+24h] [rbp-74h]
  unsigned __int16 *v50; // [rsp+28h] [rbp-70h]
  unsigned __int64 v51; // [rsp+30h] [rbp-68h]
  wchar_t *v52; // [rsp+38h] [rbp-60h]
  wchar_t *v53; // [rsp+40h] [rbp-58h]
  unsigned __int16 *v54; // [rsp+48h] [rbp-50h]
  int v56; // [rsp+A8h] [rbp+10h]
  unsigned __int16 *v57; // [rsp+B0h] [rbp+18h] BYREF
  _DWORD *v58; // [rsp+B8h] [rbp+20h]

  v58 = a4;
  v57 = a3;
  v8 = 0;
  v10 = String1;
  v11 = a3;
  v12 = (unsigned __int16 *)*a4;
  *a7 = 1;
  *a4 = 0;
  if ( a2 <= 0 )
    return 3221227286LL;
  v13 = &v11[(_QWORD)v12];
  v14 = String1;
  v53 = String1 - 1;
  v15 = v11;
  v50 = v11;
  v54 = v11;
  v16 = &String1[a2];
  v51 = (unsigned __int64)v13;
  *a8 = v11 - 1;
  if ( String1 >= v16 )
    return 3221227286LL;
  v17 = a5;
  while ( 1 )
  {
    LOBYTE(v12) = v17;
    LabelEnd = FindLabelEnd(v14, v16, v12, v10);
    v22 = (wchar_t *)LabelEnd;
    if ( (wchar_t *)LabelEnd == v14 )
      break;
    if ( !v17
      && (a6 && (*v14 == 45 || LabelEnd > v19 && *(_WORD *)(LabelEnd - 2) == 45)
       || (__int64)((LabelEnd - (_QWORD)v14) & 0xFFFFFFFFFFFFFFFEuLL) > v20) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v16 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_13;
    v23 = L"xl--";
    if ( !v17 )
      v23 = L"xn--";
    if ( wcsnicmp(v14, v23, 4uLL) )
    {
      LOWORD(v20) = 126;
LABEL_13:
      if ( (__int64)(((char *)v13 - (char *)v11) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v22 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      v12 = v14;
      if ( v14 < v22 )
      {
        while ( (v17 || (!a6 || (unsigned __int8)ValidateStd3Range(*v12)) && *v12 >= 0x20u && *v12 != 127)
             && (unsigned __int16)(*v12 - 1) <= (unsigned __int16)v20 )
        {
          *v11 = *v12++;
          v57 = ++v11;
          if ( v12 >= v22 )
            goto LABEL_21;
        }
        return 3221227286LL;
      }
      goto LABEL_21;
    }
    v14 += 4;
    *a7 = 0;
    v12 = v22 - 1;
    if ( v22 - 1 < v14 )
    {
LABEL_89:
      v12 = 0LL;
    }
    else
    {
      while ( *v12 != 45 )
      {
        if ( --v12 < v14 )
          goto LABEL_89;
      }
    }
    if ( v12 == v22 - 1 )
      return 3221227286LL;
    if ( v12 && v12 > v14 )
    {
      v25 = v14;
      v26 = v12 - v14;
      if ( v14 != v12 )
      {
        v27 = 126;
        do
        {
          if ( v11 >= v13 )
            break;
          if ( !v17 && (a6 && !(unsigned __int8)ValidateStd3Range(*v25) || *v25 < 0x20u || *v25 == 127)
            || (unsigned __int16)(*v25 - 1) > v27 )
          {
            return 3221227286LL;
          }
          v28 = v17 || (unsigned __int16)(*v25 - 65) > 0x19u ? *v25 : *v25 + 32;
          *v11 = v28;
          ++v25;
          v57 = ++v11;
        }
        while ( v25 != v12 );
        if ( v25 != v12 )
          return 3221227286LL;
      }
    }
    else
    {
      LODWORD(v26) = 0;
    }
    v29 = v26 + 1;
    if ( (int)v26 <= 0 )
      v29 = 0;
    v30 = 128;
    v31 = 0;
    v56 = 0;
    v32 = &v14[v29];
    v33 = 72;
    v48 = 72;
    if ( v32 < v22 )
    {
LABEL_59:
      v34 = v31;
      v49 = v31;
      v35 = 1;
      v36 = 36;
      v37 = -v33;
      while ( v32 < v22 )
      {
        if ( (unsigned __int16)(*v32 - 48) <= 9u )
        {
          v38 = *v32 - 22;
        }
        else if ( (unsigned __int16)(*v32 - 97) > 0x19u )
        {
          v38 = (unsigned __int16)(*v32 - 65) > 0x19u ? -1 : *v32 - 65;
        }
        else
        {
          v38 = *v32 - 97;
        }
        v52 = v32 + 1;
        if ( v38 < 0 || v38 > (0x7FFFFFF - v31) / v35 )
          break;
        v31 += v35 * v38;
        if ( v36 > v48 )
        {
          v39 = 26;
          if ( v36 < v48 + 26 )
            v39 = v37 + v36;
        }
        else
        {
          v39 = 1;
        }
        if ( v38 < v39 )
        {
          v48 = adapt(v31 - v49, (unsigned int)(v11 - v50) - v56 + 1, v34 == 0);
          v41 = v40 - v56;
          v42 = v31 / (v41 + 1);
          v43 = v31 % (v41 + 1);
          if ( v42 > 0x7FFFFFF - v30 )
            return 3221227286LL;
          v30 += v42;
          if ( (unsigned int)(v30 - 128) > 0x10FF7F || (unsigned int)(v30 - 55296) <= 0x7FF )
            return 3221227286LL;
          if ( v56 > 0 )
          {
            v44 = v50;
            v45 = v43;
            if ( (int)v43 > 0 )
            {
              while ( v44 < v11 )
              {
                if ( (unsigned __int16)(*v44 + 10240) <= 0x7FFu )
                  ++v44;
                --v45;
                ++v44;
                if ( v45 <= 0 )
                  goto LABEL_78;
              }
              return 3221227286LL;
            }
          }
          else
          {
            v44 = &v50[(int)v43];
          }
LABEL_78:
          if ( v30 >= 0x10000 )
          {
            if ( (unsigned __int64)v11 >= v51 - 2 || v44 > v11 )
              return 3221227286LL;
            InsertChar((v30 - 0x10000) / 1024 - 10240, v44, &v57);
            InsertChar(v47 - 9216, (unsigned __int16 *)(v46 + 2), &v57);
            v33 = v48;
            ++v56;
          }
          else
          {
            if ( (unsigned __int64)v11 >= v51 || v44 > v11 )
              return 3221227286LL;
            InsertChar(v30, v44, &v57);
          }
          v32 = v52;
          v31 = v43 + 1;
          v11 = v57;
          if ( v52 < v22 )
            goto LABEL_59;
          goto LABEL_83;
        }
        if ( v35 > 0x7FFFFFF / (36 - v39) )
          return 3221227286LL;
        ++v32;
        v35 *= 36 - v39;
        v36 += 36;
      }
      return 3221227286LL;
    }
LABEL_83:
    v15 = v50;
    v13 = (unsigned __int16 *)v51;
LABEL_21:
    if ( !v17 && ((__int64)(((char *)v22 - (char *)v14) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v11 == v15) )
      return 3221227286LL;
    if ( v22 != v16 )
    {
      if ( v11 >= v13 )
        return 3221227286LL;
      *v11++ = *v22;
      v57 = v11;
    }
    if ( v17 )
    {
      v53 = v22;
      v17 = 0;
      v21 = v22;
      *a8 = &v11[-(v22 != v16)];
      if ( v22 == v16 - 1 )
        return 3221227286LL;
    }
    else
    {
      v21 = v53;
    }
    v50 = v11;
    v14 = v22 + 1;
    v15 = v11;
    if ( v22 >= v16 )
      goto LABEL_33;
    v10 = String1;
  }
  if ( v17 || (wchar_t *)LabelEnd != v16 )
    return 3221227286LL;
LABEL_33:
  if ( v11 != v54 )
  {
    LOBYTE(v8) = *(v16 - 1) == 46;
    if ( v16 - v21 <= v8 + 255 )
    {
      *v58 = v11 - v54;
      return 0LL;
    }
  }
  return 3221227286LL;
}
