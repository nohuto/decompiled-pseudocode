/*
 * XREFs of RtlpNameprepAsciiWorker @ 0x180069B44
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180069350 (RtlCanonicalizeDomainName.c)
 *     RtlIdnToAscii @ 0x180069B20 (RtlIdnToAscii.c)
 *     RtlIdnToNameprepUnicode @ 0x1800E7350 (RtlIdnToNameprepUnicode.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x18001C914 (RtlStringCchLengthW.c)
 *     punycode_encode @ 0x18006900C (punycode_encode.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x180069DCC (RtlpValidateAsciiStd3AndLength.c)
 *     RtlNormalizeString @ 0x18006AB00 (RtlNormalizeString.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1800959E0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     FindEmailAt @ 0x1800E72E8 (FindEmailAt.c)
 */

__int64 __fastcall RtlpNameprepAsciiWorker(int a1, wchar_t *a2, __int64 a3, void *a4, int *a5, char a6)
{
  __int16 v6; // r11
  void *v7; // r15
  int v8; // ebx
  char v10; // r13
  int v11; // r14d
  char v12; // al
  bool v13; // cl
  char v14; // r13
  char v15; // di
  __int64 v16; // r8
  wchar_t *v17; // rdx
  __int64 result; // rax
  int v19; // eax
  int v20; // edi
  int v21; // ecx
  wchar_t *v22; // r9
  int v23; // eax
  unsigned int v24; // ecx
  bool v25; // zf
  wchar_t v26; // dx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  wchar_t v30; // cx
  int EmailAt; // eax
  int v32; // eax
  bool v33; // zf
  bool v34; // cc
  unsigned __int64 v35; // rax
  char v36; // [rsp+30h] [rbp-D0h]
  char v37; // [rsp+31h] [rbp-CFh]
  char v38; // [rsp+32h] [rbp-CEh]
  int v39; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v40; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t Src[512]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v42[520]; // [rsp+440h] [rbp+340h] BYREF

  v6 = 0;
  v7 = a4;
  v8 = a3;
  v10 = a1;
  if ( !a2 )
    return 3221225485LL;
  if ( (int)a3 < -1 )
    return 3221225485LL;
  if ( !a5 )
    return 3221225485LL;
  v11 = *a5;
  if ( *a5 < 0 || v11 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  v12 = a1 & 1;
  v13 = (a1 & 4) != 0;
  v38 = v12;
  v14 = (v10 & 2) != 0;
  v37 = v13;
  v36 = 0;
  v15 = 0;
  if ( (_DWORD)a3 == -1 )
  {
    if ( (int)RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &v40) >= 0 )
    {
      v13 = v37;
      v8 = v40 + 1;
      goto LABEL_11;
    }
    return 3221225485LL;
  }
LABEL_11:
  if ( v8 > 0 && a2[v8 - 1] == v6 )
  {
    v15 = 1;
    --v8;
    v36 = 1;
  }
  LOBYTE(a3) = v13;
  LOBYTE(a4) = v14;
  if ( !(unsigned __int8)RtlpValidateAsciiStd3AndLength(a2, (unsigned int)v8, a3, a4) )
  {
    v19 = 0;
    v20 = 0;
    v21 = 511;
    v22 = Src;
    if ( !v37 )
      goto LABEL_26;
    EmailAt = FindEmailAt(a2, (unsigned int)v8, v16, Src);
    LODWORD(v40) = EmailAt;
    if ( !EmailAt )
      goto LABEL_51;
    v39 = 511;
    v32 = RtlNormalizeString(1, (_DWORD)a2, EmailAt, (unsigned int)Src, (__int64)&v39);
    v20 = v39;
    v24 = v32;
    v33 = v32 == 0;
    if ( v32 >= 0 )
    {
      if ( v39 )
      {
        v19 = v40;
        v22 = &Src[v39];
        v21 = 511 - v39;
LABEL_26:
        if ( v19 >= v8 )
        {
LABEL_30:
          if ( v20 > 0 )
          {
            v26 = Src[v20 - 1];
            if ( v26 == 46 )
            {
              v30 = a2[v8 - 1];
              if ( v30 != 46 && v30 != 12290 && v30 != 0xFF0E && v30 != 0xFF61 )
                goto LABEL_51;
            }
            if ( !v26 )
              goto LABEL_51;
          }
          v39 = 515;
          result = punycode_encode(Src, v20, v42, &v39, v37, v14);
          v8 = v39;
          if ( !v39 )
          {
LABEL_34:
            *a5 = 0;
            return result;
          }
          if ( !a6 )
          {
            if ( v36 )
            {
              if ( (unsigned __int64)v20 > 0x1FF )
                goto LABEL_51;
              v35 = v20++;
              if ( v35 >= 511 )
                _report_rangecheckfailure(v28, v27, v29, 0LL);
              Src[v35] = 0;
            }
            if ( v7 && v11 )
            {
              if ( v20 > v11 )
              {
LABEL_83:
                result = 3221225507LL;
                goto LABEL_34;
              }
              memmove(v7, Src, 2LL * v20);
            }
            *a5 = v20;
            return 0LL;
          }
          if ( !v36 )
            goto LABEL_68;
          if ( (unsigned __int64)v39 < 0x203 )
          {
            v8 = v39 + 1;
            if ( (unsigned __int64)(2LL * v39) >= 0x406 )
              _report_rangecheckfailure(v28, v27, v29, 0LL);
            v42[v39] = 0;
LABEL_68:
            if ( !v7 || !v11 )
              goto LABEL_23;
            if ( v8 <= v11 )
            {
              v17 = v42;
              goto LABEL_22;
            }
            goto LABEL_83;
          }
LABEL_51:
          result = 3221227286LL;
          goto LABEL_34;
        }
        v39 = v21;
        v23 = RtlNormalizeString(v38 != 0 ? 13 : 269, (int)a2 + 2 * v19, v8 - v19, (_DWORD)v22, (__int64)&v39);
        v24 = v23;
        v25 = v23 == 0;
        if ( v23 >= 0 )
        {
          if ( v39 )
          {
            v20 += v39;
            goto LABEL_30;
          }
          v25 = v23 == 0;
        }
        if ( !v25 && v23 != -1073740009 && v23 != -1073741789 )
        {
          v34 = v39 <= 0;
          goto LABEL_57;
        }
        goto LABEL_39;
      }
      v33 = v32 == 0;
    }
    if ( !v33 && v32 != -1073741789 && v32 != -1073740009 )
    {
      v34 = v39 <= 0;
LABEL_57:
      if ( v34 )
        goto LABEL_40;
    }
LABEL_39:
    v24 = -1073740010;
LABEL_40:
    result = v24;
    goto LABEL_34;
  }
  if ( v8 )
  {
    if ( v15 )
      ++v8;
    if ( !v7 || !v11 )
      goto LABEL_23;
    if ( v8 <= v11 )
    {
      v17 = a2;
LABEL_22:
      memmove(v7, v17, 2LL * v8);
LABEL_23:
      *a5 = v8;
      return 0LL;
    }
    goto LABEL_83;
  }
  return 3221227286LL;
}
