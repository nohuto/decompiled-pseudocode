/*
 * XREFs of SepParseElamCertResources @ 0x14054FC08
 * Callers:
 *     SeRegisterElamCertResources @ 0x14054FB7C (SeRegisterElamCertResources.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 */

NTSTATUS __fastcall SepParseElamCertResources(_WORD *a1, __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r13
  const wchar_t *v4; // rbx
  NTSTATUS result; // eax
  __int64 v6; // r11
  const wchar_t *v7; // r8
  const wchar_t *v8; // rdi
  unsigned int v9; // r12d
  bool v10; // dl
  _BYTE *v11; // rcx
  int v12; // eax
  char v13; // al
  int v14; // eax
  size_t v15; // r15
  unsigned int v16; // esi
  wchar_t *v17; // r14
  wchar_t *v18; // r8
  unsigned int v19; // r9d
  __int64 v20; // r11
  unsigned __int64 v21; // rdx
  wchar_t v22; // ax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r15
  const wchar_t *v29; // r8
  __int64 v30; // rax
  int v31; // [rsp+28h] [rbp-D8h]
  int v32; // [rsp+40h] [rbp-C0h]
  unsigned int v33; // [rsp+44h] [rbp-BCh]
  size_t pcchLength; // [rsp+48h] [rbp-B8h] BYREF
  size_t v35; // [rsp+50h] [rbp-B0h] BYREF
  const wchar_t *v36; // [rsp+58h] [rbp-A8h]
  _WORD v37[24]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[448]; // [rsp+90h] [rbp-70h] BYREF

  v2 = 0;
  if ( (unsigned __int64)(a2 - 2) > 0xFFFD )
    return -1073741811;
  v3 = (unsigned __int64)a1 + a2;
  v33 = (unsigned __int16)*a1;
  v4 = a1 + 1;
  v32 = 0;
  if ( *a1 )
  {
    while ( (unsigned __int64)(v4 + 1) <= v3 )
    {
      result = RtlStringCchLengthW(v4, (v3 - (unsigned __int64)v4) >> 1, &pcchLength);
      if ( result < 0 )
        return result;
      v7 = &v4[pcchLength + 1];
      v8 = v7 + 1;
      v36 = v7;
      if ( (unsigned __int64)(v7 + 1) >= v3 )
        break;
      v9 = 0;
      v10 = 1;
      if ( *v4 )
      {
        while ( v9 < 0x40 )
        {
          if ( v10 )
          {
            if ( v9 >= 0x40uLL )
              _report_rangecheckfailure();
            v11 = &v38[v9];
            *v11 = 0;
          }
          else
          {
            v11 = &v38[v9];
            *v11 *= 16;
          }
          v12 = *v4;
          if ( v12 == 32 )
          {
            if ( !v10 )
              return -1073741811;
          }
          else
          {
            if ( *v4 <= 0x2Fu )
              return -1073741811;
            if ( *v4 > 0x39u )
            {
              if ( *v4 <= 0x40u )
                return -1073741811;
              if ( *v4 > 0x46u )
              {
                if ( (unsigned int)(v12 - 97) > 5 )
                  return -1073741811;
                v13 = *(_BYTE *)v4 - 87;
              }
              else
              {
                v13 = *(_BYTE *)v4 - 55;
              }
            }
            else
            {
              v13 = *(_BYTE *)v4 - 48;
            }
            *v11 += v13;
          }
          if ( !v10 )
            ++v9;
          if ( *v4 != 32 )
            v10 = !v10;
          v4 = (const wchar_t *)((char *)v4 + v6);
          if ( !*v4 )
          {
            if ( !v10 )
              return -1073741811;
            goto LABEL_21;
          }
        }
        return -1073741811;
      }
LABEL_21:
      v14 = *v7;
      if ( v14 != 32772 && v14 - 32780 > (unsigned int)v6 )
        return -1073741811;
      result = RtlStringCchLengthW(v8, (v3 - (unsigned __int64)v8) >> 1, &v35);
      if ( result < 0 )
        return result;
      v15 = v35;
      v16 = 0;
      v17 = (wchar_t *)&v8[v35];
      v4 = v17 + 1;
      if ( v35 )
      {
        v18 = wcschr(v8, 0x3Bu);
        if ( v18 || (v18 = v17) != 0LL )
        {
          while ( 1 )
          {
            v19 = 0;
            v20 = 0LL;
            v21 = (unsigned __int64)((char *)v18 - (char *)v8 + 1) >> 1;
            if ( v8 > v18 )
              v21 = 0LL;
            if ( v21 )
            {
              do
              {
                v22 = *v8;
                ++v20;
                ++v8;
                v23 = ((unsigned __int64)v16 << 6) + v19++;
                *(_WORD *)&v38[2 * v23 + 64] = v22;
              }
              while ( v20 != v21 );
            }
            v24 = v19;
            v25 = 2 * v19;
            *(_WORD *)&v38[128 * (unsigned __int64)v16 + 64 + 2 * v24] = 0;
            v26 = 2LL * v16;
            v37[4 * v26] = v25;
            v37[4 * v26 + 1] = v25 + 2;
            *(_QWORD *)&v37[4 * v26 + 4] = &v38[128 * (unsigned __int64)v16 + 64];
            if ( !*v18 )
              break;
            v29 = v18 + 1;
            if ( !*v29 )
              break;
            v8 = v29;
            v18 = wcschr(v29, 0x3Bu);
            if ( !v18 )
            {
              v30 = -1LL;
              do
                ++v30;
              while ( v8[v30] );
              v18 = (wchar_t *)&v8[v30];
            }
            if ( ++v16 >= 3 || !v18 )
              goto LABEL_32;
          }
          ++v16;
        }
      }
LABEL_32:
      v27 = v15 != 0 ? v16 : 0;
      v28 = -(__int64)v15;
      if ( !qword_140301170 )
        return -1073741637;
      v31 = v27;
      LOBYTE(v27) = 7;
      v2 = qword_140301170(v27, v38, v9, *v36, (unsigned __int64)v37 & -(__int64)(v28 != 0), v31, 0LL);
      if ( v2 >= 0 && ++v32 < v33 )
        continue;
      return v2;
    }
    return -1073741811;
  }
  return v2;
}
