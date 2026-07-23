/*
 * XREFs of punycode_decode @ 0x140689C58
 * Callers:
 *     RtlIdnToUnicode @ 0x1406893D8 (RtlIdnToUnicode.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x140214D74 (FindLabelEnd.c)
 *     InsertChar @ 0x140214DD0 (InsertChar.c)
 *     ValidateStd3Range @ 0x140214DF0 (ValidateStd3Range.c)
 *     adapt @ 0x140214E28 (adapt.c)
 */

__int64 __fastcall punycode_decode(
        wchar_t *Str1,
        int a2,
        unsigned __int16 *a3,
        int *a4,
        char a5,
        char a6,
        _BYTE *a7,
        _QWORD *a8)
{
  int v8; // edi
  unsigned __int16 *v9; // rbx
  __int64 v10; // r8
  unsigned __int16 *v11; // r15
  wchar_t *v12; // r14
  unsigned __int16 *v13; // r13
  wchar_t *v14; // rbp
  char v15; // r12
  wchar_t *LabelEnd; // rax
  unsigned __int64 v17; // r9
  signed __int64 v18; // r10
  wchar_t *v19; // r11
  unsigned __int16 *v20; // rsi
  const wchar_t *v21; // rdx
  unsigned __int16 *v22; // r8
  unsigned __int16 *v23; // r9
  __int64 v24; // r10
  unsigned __int16 v25; // r11
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // ax
  int v29; // eax
  int v30; // r13d
  int v31; // r15d
  wchar_t *v32; // rdx
  int v33; // r10d
  int v34; // r11d
  int v35; // r9d
  int v36; // r8d
  int v37; // r10d
  wchar_t v38; // cx
  int v39; // ecx
  int v40; // eax
  __int64 v41; // r11
  __int64 v42; // r11
  __int64 v43; // rax
  __int64 v44; // r15
  unsigned __int16 *v45; // r11
  int v46; // ecx
  __int64 v47; // r11
  __int16 v48; // r10
  unsigned __int16 *v49; // r8
  int v50; // [rsp+20h] [rbp-88h]
  unsigned __int16 *v51; // [rsp+28h] [rbp-80h]
  unsigned __int64 v52; // [rsp+38h] [rbp-70h]
  int v53; // [rsp+44h] [rbp-64h]
  unsigned __int16 *v54; // [rsp+48h] [rbp-60h]
  wchar_t *v55; // [rsp+50h] [rbp-58h]
  unsigned __int16 *v56; // [rsp+58h] [rbp-50h]
  int v57; // [rsp+B8h] [rbp+10h]
  unsigned __int16 *v58; // [rsp+C0h] [rbp+18h] BYREF
  _DWORD *v59; // [rsp+C8h] [rbp+20h]

  v59 = a4;
  v58 = a3;
  v8 = 0;
  v9 = a3;
  v10 = *a4;
  *a7 = 1;
  *a4 = 0;
  if ( a2 <= 0 )
    return 3221227286LL;
  v11 = &v9[v10];
  v12 = Str1;
  v55 = Str1 - 1;
  v13 = v9;
  v51 = v9;
  v56 = v9;
  v14 = &Str1[a2];
  v52 = (unsigned __int64)v11;
  *a8 = v9 - 1;
  if ( Str1 >= v14 )
    return 3221227286LL;
  v15 = a5;
  while ( 1 )
  {
    LabelEnd = FindLabelEnd(v12, (unsigned __int64)v14, v15);
    v20 = LabelEnd;
    if ( LabelEnd == v12 )
      break;
    if ( !v15
      && (a6 && (*v12 == 45 || (unsigned __int64)LabelEnd > v17 && *(LabelEnd - 1) == 45)
       || (__int64)(((char *)LabelEnd - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > v18) )
    {
      return 3221227286LL;
    }
    if ( (__int64)(((char *)v14 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) < 8 )
      goto LABEL_90;
    v21 = L"xl--";
    if ( !v15 )
      v21 = L"xn--";
    if ( wcsnicmp(v12, v21, 4uLL) )
    {
      LOWORD(v18) = 126;
LABEL_90:
      if ( (__int64)(((char *)v11 - (char *)v9) & 0xFFFFFFFFFFFFFFFEuLL) < (__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) )
        return 3221227286LL;
      v49 = v12;
      if ( v12 < v20 )
      {
        while ( (v15 || (!a6 || ValidateStd3Range(*v49)) && *v49 >= 0x20u && *v49 != 127)
             && (unsigned __int16)(*v49 - 1) <= (unsigned __int16)v18 )
        {
          *v9 = *v49++;
          v58 = ++v9;
          if ( v49 >= v20 )
            goto LABEL_80;
        }
        return 3221227286LL;
      }
      goto LABEL_80;
    }
    v12 += 4;
    *a7 = 0;
    v22 = v20 - 1;
    if ( v20 - 1 < v12 )
    {
LABEL_18:
      v22 = 0LL;
    }
    else
    {
      while ( *v22 != 45 )
      {
        if ( --v22 < v12 )
          goto LABEL_18;
      }
    }
    if ( v22 == v20 - 1 )
      return 3221227286LL;
    if ( v22 && v22 > v12 )
    {
      v23 = v12;
      v24 = v22 - v12;
      if ( v12 != v22 )
      {
        v25 = 126;
        do
        {
          if ( v9 >= v11 )
            break;
          if ( !v15 && (a6 && !ValidateStd3Range(*v23) || *v23 < 0x20u || *v23 == 127) )
            return 3221227286LL;
          v26 = *v23;
          if ( (unsigned __int16)(*v23 - 1) > v25 )
            return 3221227286LL;
          v27 = v15 || (unsigned __int16)(v26 - 65) > 0x19u ? *v23 : v26 + 32;
          *v9 = v27;
          ++v23;
          v58 = ++v9;
        }
        while ( v23 != v22 );
        if ( v23 != v22 )
          return 3221227286LL;
      }
    }
    else
    {
      LODWORD(v24) = 0;
    }
    v29 = v24 + 1;
    if ( (int)v24 <= 0 )
      v29 = 0;
    v30 = 128;
    v31 = 0;
    v57 = 0;
    v32 = &v12[v29];
    v33 = 72;
    v50 = 72;
    if ( v32 < v20 )
    {
LABEL_42:
      v34 = v31;
      v53 = v31;
      v35 = 1;
      v36 = 36;
      v37 = -v33;
      while ( v32 < v20 )
      {
        v38 = *v32;
        if ( (unsigned __int16)(*v32 - 48) > 9u )
        {
          if ( (unsigned __int16)(v38 - 97) > 0x19u )
            v39 = (unsigned __int16)(v38 - 65) > 0x19u ? -1 : v38 - 65;
          else
            v39 = v38 - 97;
        }
        else
        {
          v39 = v38 - 22;
        }
        v54 = v32 + 1;
        if ( v39 < 0 || v39 > (0x7FFFFFF - v31) / v35 )
          break;
        v31 += v35 * v39;
        if ( v36 > v50 )
        {
          v40 = 26;
          if ( v36 < v50 + 26 )
            v40 = v37 + v36;
        }
        else
        {
          v40 = 1;
        }
        if ( v39 < v40 )
        {
          v50 = adapt(v31 - v53, (unsigned int)(v9 - v51) - v57 + 1, v34 == 0);
          v42 = v41 - v57;
          v43 = v31 / (v42 + 1);
          v44 = v31 % (v42 + 1);
          if ( v43 > 0x7FFFFFF - v30 )
            return 3221227286LL;
          v30 += v43;
          if ( (unsigned int)(v30 - 128) > 0x10FF7F || (unsigned int)(v30 - 55296) <= 0x7FF )
            return 3221227286LL;
          if ( v57 <= 0 )
          {
            v45 = &v51[(int)v44];
          }
          else
          {
            v45 = v51;
            v46 = v44;
            if ( (int)v44 > 0 )
            {
              while ( v45 < v9 )
              {
                if ( (unsigned __int16)(*v45 + 10240) <= 0x7FFu )
                  ++v45;
                --v46;
                ++v45;
                if ( v46 <= 0 )
                  goto LABEL_71;
              }
              return 3221227286LL;
            }
          }
LABEL_71:
          if ( v30 >= 0x10000 )
          {
            if ( (unsigned __int64)v9 >= v52 - 2 || v45 > v9 )
              return 3221227286LL;
            InsertChar((v30 - 0x10000) / 1024 - 10240, v45, &v58);
            InsertChar(v48 - 9216, (unsigned __int16 *)(v47 + 2), &v58);
            v33 = v50;
            ++v57;
          }
          else
          {
            if ( (unsigned __int64)v9 >= v52 || v45 > v9 )
              return 3221227286LL;
            InsertChar(v30, v45, &v58);
          }
          v32 = v54;
          v31 = v44 + 1;
          v9 = v58;
          if ( v54 < v20 )
            goto LABEL_42;
          goto LABEL_79;
        }
        if ( v35 > 0x7FFFFFF / (36 - v40) )
          return 3221227286LL;
        ++v32;
        v35 *= 36 - v40;
        v36 += 36;
      }
      return 3221227286LL;
    }
LABEL_79:
    v13 = v51;
    v11 = (unsigned __int16 *)v52;
LABEL_80:
    if ( !v15 && ((__int64)(((char *)v20 - (char *)v12) & 0xFFFFFFFFFFFFFFFEuLL) > 126 || v9 == v13) )
      return 3221227286LL;
    if ( v20 != v14 )
    {
      if ( v9 >= v11 )
        return 3221227286LL;
      *v9++ = *v20;
      v58 = v9;
    }
    if ( v15 )
    {
      v55 = v20;
      v15 = 0;
      v19 = v20;
      *a8 = &v9[-(v20 != v14)];
      if ( v20 == v14 - 1 )
        return 3221227286LL;
    }
    else
    {
      v19 = v55;
    }
    v51 = v9;
    v12 = v20 + 1;
    v13 = v9;
    if ( v20 >= v14 )
      goto LABEL_105;
  }
  if ( v15 || LabelEnd != v14 )
    return 3221227286LL;
LABEL_105:
  if ( v9 != v56 )
  {
    LOBYTE(v8) = *(v14 - 1) == 46;
    if ( v14 - v19 <= v8 + 255 )
    {
      *v59 = v9 - v56;
      return 0LL;
    }
  }
  return 3221227286LL;
}
