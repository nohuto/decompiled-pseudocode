/*
 * XREFs of punycode_encode @ 0x14068A300
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x1406896F0 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x1400C14E8 (RtlStringCchCopyNExW.c)
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     FindLabelEnd @ 0x140214D74 (FindLabelEnd.c)
 *     GetUTF32 @ 0x140214DA8 (GetUTF32.c)
 *     ValidateStd3Range @ 0x140214DF0 (ValidateStd3Range.c)
 *     adapt @ 0x140214E28 (adapt.c)
 */

__int64 __fastcall punycode_encode(wchar_t *Str1, int a2, wchar_t *a3, int *a4, char a5, char a6)
{
  wchar_t *v6; // rbx
  wchar_t *v7; // rbp
  wchar_t *v8; // r12
  wchar_t *v9; // r11
  wchar_t *v10; // r15
  wchar_t *v11; // r14
  __int64 result; // rax
  char v13; // si
  wchar_t *LabelEnd; // rax
  __int16 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int16 *v17; // rdi
  const wchar_t *v18; // r8
  int v19; // r15d
  unsigned __int16 *i; // r8
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // ax
  __int64 v23; // r13
  wchar_t *v24; // rdx
  wchar_t *j; // rcx
  const wchar_t *v26; // rdx
  int v27; // edx
  int v28; // r12d
  int k; // r10d
  int v30; // r11d
  unsigned __int16 *v31; // r9
  int UTF32; // eax
  __int64 v33; // r9
  int v34; // r12d
  unsigned __int16 *v35; // rcx
  bool m; // cf
  int v37; // eax
  bool v38; // zf
  int v39; // eax
  int v40; // r10d
  int v41; // r8d
  int v42; // r9d
  int v43; // edx
  __int16 v44; // ax
  wchar_t v45; // ax
  wchar_t v46; // r8
  int v47; // eax
  int v48; // [rsp+40h] [rbp-88h]
  unsigned __int64 v49; // [rsp+48h] [rbp-80h]
  wchar_t *v50; // [rsp+50h] [rbp-78h]
  wchar_t *v51; // [rsp+58h] [rbp-70h]
  int v52; // [rsp+60h] [rbp-68h]
  int v53; // [rsp+64h] [rbp-64h]
  unsigned __int16 *v54; // [rsp+68h] [rbp-60h]
  wchar_t *v55; // [rsp+70h] [rbp-58h]
  int v57; // [rsp+D8h] [rbp+10h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+E0h] [rbp+18h] BYREF
  int *v59; // [rsp+E8h] [rbp+20h]

  v59 = a4;
  ppszDestEnd = a3;
  v6 = a3;
  v50 = a3;
  v51 = a3;
  v7 = Str1;
  v8 = &Str1[a2];
  v55 = v8;
  v9 = a3;
  v10 = a3;
  v11 = &a3[*a4];
  v49 = (unsigned __int64)v11;
  if ( a2 <= 0 )
  {
    *a4 = 0;
    return 3221227286LL;
  }
  v13 = a5;
  if ( Str1 < v8 )
  {
    while ( 1 )
    {
      LabelEnd = FindLabelEnd(v7, (unsigned __int64)v8, v13);
      v17 = LabelEnd;
      if ( LabelEnd == v7 )
        break;
      if ( v13 )
      {
        v18 = L"xl--";
      }
      else
      {
        if ( a6 && (*v7 == v15 || (unsigned __int64)LabelEnd > v16 && *(LabelEnd - 1) == v15) )
          goto LABEL_97;
        v18 = L"xn--";
      }
      if ( RtlStringCchCopyNExW(v6, v11 - v6, v18, 4uLL, &ppszDestEnd, 0LL, 0) < 0 )
      {
LABEL_90:
        result = 3221225507LL;
        goto LABEL_98;
      }
      v6 = ppszDestEnd;
      v19 = 0;
      for ( i = v7; i < v17; ++i )
      {
        v21 = *i;
        if ( *i >= 0x80u )
        {
          if ( (unsigned __int16)(v21 + 10240) <= 0x3FFu )
            ++i;
        }
        else
        {
          if ( !v13 && (a6 && !ValidateStd3Range(v21) || v21 < 0x20u || v21 == 127) || !v21 )
            goto LABEL_97;
          if ( v6 >= v11 )
            goto LABEL_90;
          if ( v13 || (unsigned __int16)(v21 - 65) > 0x19u )
            v22 = v21;
          else
            v22 = v21 + 32;
          *v6++ = v22;
          ppszDestEnd = v6;
          ++v19;
        }
      }
      v52 = v19;
      v23 = v17 - v7;
      if ( v19 == v23 )
      {
        v24 = v51;
        v6 -= 4;
        for ( j = v51; j < v6; ++j )
          *j = j[4];
        ppszDestEnd = v6;
      }
      else
      {
        if ( (__int64)(((char *)v8 - (char *)v7) & 0xFFFFFFFFFFFFFFFEuLL) >= 8 )
        {
          v26 = L"xl--";
          if ( !v13 )
            v26 = L"xn--";
          if ( !wcsnicmp(v7, v26, 4uLL) )
            goto LABEL_97;
        }
        v27 = 0;
        v57 = 0;
        if ( v19 > 0 )
        {
          if ( (unsigned __int64)v6 >= v49 )
          {
LABEL_86:
            result = 3221225507LL;
            goto LABEL_98;
          }
          *v6++ = 45;
          ppszDestEnd = v6;
        }
        v28 = 0;
        v48 = 72;
        for ( k = 128; v19 < v23; k = v30 + 1 )
        {
          v30 = 0x7FFFFFF;
          v31 = v7;
          if ( v7 < v17 )
          {
            do
            {
              UTF32 = GetUTF32(v31);
              if ( UTF32 >= k && UTF32 < v30 )
                v30 = UTF32;
              v31 = (unsigned __int16 *)(v33 + 2LL * ((UTF32 >= 0x10000) + 1));
            }
            while ( v31 < v17 );
            v27 = v57;
          }
          v34 = (v30 - k) * (v19 - v27 + 1) + v28;
          v35 = v7;
          for ( m = v7 < v17; ; m = v35 < v17 )
          {
            v54 = v35;
            if ( !m )
              break;
            v37 = GetUTF32(v35);
            v53 = v37;
            v38 = v37 == v30;
            if ( v37 < v30 )
            {
              ++v34;
              v38 = v37 == v30;
            }
            if ( v38 )
            {
              v39 = v48;
              v40 = 36;
              v41 = v34;
              while ( 1 )
              {
                if ( v40 > v39 )
                {
                  v42 = 26;
                  if ( v40 < v39 + 26 )
                    v42 = v40 - v48;
                }
                else
                {
                  v42 = 1;
                }
                if ( v41 < v42 )
                  break;
                if ( (unsigned __int64)v6 >= v49 )
                  goto LABEL_86;
                v43 = (v41 - v42) % (36 - v42);
                v41 = (v41 - v42) / (36 - v42);
                v44 = v43 + v42;
                if ( v43 + v42 <= 25 )
                  v45 = v44 + 97;
                else
                  v45 = v44 + 22;
                *v6++ = v45;
                v39 = v48;
                v40 += 36;
              }
              if ( (unsigned __int64)v6 >= v49 )
                goto LABEL_86;
              if ( v41 <= 25 )
                v46 = v41 + 97;
              else
                v46 = v41 + 22;
              *v6++ = v46;
              ppszDestEnd = v6;
              v47 = adapt(v34, v19 - v57 + 1, v19 == v52);
              v27 = v57;
              v34 = 0;
              ++v19;
              v48 = v47;
              if ( v30 >= 0x10000 )
              {
                ++v19;
                v27 = ++v57;
              }
            }
            else
            {
              v27 = v57;
            }
            v35 = &v54[(v53 >= 0x10000) + 1];
          }
          v28 = v34 + 1;
        }
        v24 = v51;
        v8 = v55;
      }
      if ( !v13 && (__int64)(((char *)v6 - (char *)v24) & 0xFFFFFFFFFFFFFFFEuLL) > 126 )
        goto LABEL_97;
      v11 = (wchar_t *)v49;
      if ( v17 == v8 )
        goto LABEL_82;
      if ( (unsigned __int64)v6 >= v49 )
        goto LABEL_90;
      *v6++ = *v17;
      ppszDestEnd = v6;
      if ( v13 && *v17 == 64 )
      {
        v9 = v6;
        v50 = v6;
        v13 = 0;
      }
      else
      {
LABEL_82:
        v9 = v50;
      }
      v51 = v6;
      v7 = v17 + 1;
      if ( v17 >= v8 )
      {
        a4 = v59;
        v10 = a3;
        goto LABEL_88;
      }
    }
    if ( v13 || LabelEnd != v8 )
    {
      *v59 = 0;
      return 3221227286LL;
    }
    a4 = v59;
    v10 = a3;
LABEL_95:
    if ( v6 - v9 > 255 - (*(v6 - 1) != 46) )
      goto LABEL_97;
    goto LABEL_96;
  }
LABEL_88:
  if ( !v13 )
    goto LABEL_95;
LABEL_96:
  if ( *(v6 - 1) != 64 )
  {
    *a4 = v6 - v10;
    return 0LL;
  }
LABEL_97:
  result = 3221227286LL;
LABEL_98:
  *v59 = 0;
  return result;
}
