/*
 * XREFs of _output_s @ 0x1800A2874
 * Callers:
 *     _soutput_s @ 0x1800A3218 (_soutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _safecrt_wctomb_s @ 0x1800A3140 (_safecrt_wctomb_s.c)
 *     write_char_1 @ 0x1800A32F4 (write_char_1.c)
 *     write_multi_char_1 @ 0x1800A3344 (write_multi_char_1.c)
 *     write_string_1 @ 0x1800A339C (write_string_1.c)
 */

__int64 __fastcall output_s(__int64 a1, char *a2, int *a3)
{
  int v4; // edx
  int v5; // edi
  int v6; // r11d
  int v7; // r10d
  int v8; // r15d
  char v10; // r9
  __int64 v11; // r12
  unsigned int v12; // esi
  char *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // r8
  char *v19; // rax
  char *j; // r12
  int *v21; // r8
  int v22; // eax
  int v23; // eax
  _BYTE *i; // rax
  int *v25; // r8
  char *v26; // rbx
  int v27; // ecx
  char v28; // r15
  unsigned __int64 v29; // rdx
  char v30; // al
  int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // r15d
  __int64 v34; // rcx
  __int64 v35; // rsi
  unsigned __int16 *v36; // r14
  int v37; // esi
  __int64 v38; // r9
  __int64 v39; // rcx
  char v40; // al
  unsigned int v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+34h] [rbp-CCh]
  _BYTE v43[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+3Ch] [rbp-C4h] BYREF
  int v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h]
  int *v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h]
  unsigned int v53; // [rsp+70h] [rbp-90h] BYREF
  char *v54; // [rsp+78h] [rbp-88h]
  _BYTE v55[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v56; // [rsp+100h] [rbp+0h] BYREF
  char v57; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v58[8]; // [rsp+280h] [rbp+180h] BYREF

  v48 = a3;
  v4 = 0;
  v50 = a1;
  v51 = 0;
  v5 = 0;
  v47 = 0;
  v6 = 0;
  v42 = 0;
  v7 = 0;
  v45 = 0;
  v8 = 0;
  v52 = 0;
  v49 = 0;
  if ( !a1 || !a2 )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v10 = *a2;
  LODWORD(v11) = 0;
  v46 = 0;
  v12 = 0;
  v44 = 0;
  if ( !v10 )
    return (unsigned int)v46;
  v13 = v54;
  do
  {
    v54 = ++a2;
    if ( v46 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) <= 0x58u )
      v4 = _lookuptable_s[v10 - 32] & 0xF;
    v14 = (int)(v4 + v12 + 8 * v4);
    v4 = 0;
    v12 = _lookuptable_s[v14] >> 4;
    v41 = v12;
    if ( v12 == 8 )
      goto LABEL_178;
    v15 = v12;
    switch ( v12 )
    {
      case 0u:
        goto LABEL_175;
      case 1u:
        v52 = 0;
        v6 = 0;
        v47 = 0;
        v8 = 0;
        v45 = 0;
        v5 = 0;
        v7 = -1;
        v42 = -1;
        v49 = 0;
        goto LABEL_142;
      case 2u:
        switch ( v10 )
        {
          case ' ':
            v5 |= 2u;
            break;
          case '#':
            v5 |= 0x80u;
            break;
          case '+':
            v5 |= 1u;
            break;
          case '-':
            v5 |= 4u;
            break;
          case '0':
            v5 |= 8u;
            break;
        }
        goto LABEL_142;
      case 3u:
        if ( v10 == 42 )
        {
          v6 = *a3;
          a3 += 2;
          v48 = a3;
          v47 = v6;
          if ( v6 < 0 )
          {
            v5 |= 4u;
            v6 = -v6;
            v47 = v6;
          }
        }
        else
        {
          v6 = v10 + 2 * (5 * v6 - 24);
          v47 = v6;
        }
        goto LABEL_142;
      case 4u:
        v7 = 0;
        v42 = 0;
        goto LABEL_142;
      case 5u:
        if ( v10 == 42 )
        {
          v7 = *a3;
          a3 += 2;
          v48 = a3;
          v42 = v7;
          if ( v7 < 0 )
          {
            v7 = -1;
            v42 = -1;
          }
        }
        else
        {
          v7 = v10 + 2 * (5 * v7 - 24);
          v42 = v7;
        }
        goto LABEL_142;
    }
    v15 = v12 - 6;
    if ( v12 == 6 )
    {
      if ( v10 != 73 )
      {
        switch ( v10 )
        {
          case 'h':
            v5 |= 0x20u;
            break;
          case 'l':
            if ( *a2 == 108 )
            {
              ++a2;
              v5 |= 0x1000u;
            }
            else
            {
              v5 |= 0x10u;
            }
            break;
          case 'w':
            v5 |= 0x800u;
            break;
        }
        goto LABEL_142;
      }
      v40 = *a2;
      v5 |= 0x8000u;
      if ( *a2 == 54 && a2[1] == 52 )
      {
        a2 += 2;
        v5 |= 0x8000u;
        goto LABEL_142;
      }
      if ( v40 == 51 && a2[1] == 50 )
      {
        a2 += 2;
        v5 &= ~0x8000u;
        goto LABEL_142;
      }
      LOBYTE(v14) = v40 - 88;
      if ( (unsigned __int8)v14 <= 0x20u )
      {
        v15 = 0x120821001LL;
        if ( _bittest64(&v15, v14) )
          goto LABEL_142;
      }
      v12 = 0;
LABEL_175:
      v49 = 0;
      LOBYTE(v15) = v10;
      write_char_1(v15, v50, &v46);
LABEL_132:
      v6 = v47;
      v4 = 0;
      v7 = v42;
      a3 = v48;
      goto LABEL_142;
    }
    if ( v12 == 7 )
    {
      if ( v10 > 105 )
      {
        switch ( v10 )
        {
          case 'n':
            goto LABEL_178;
          case 'o':
            v17 = 8;
            if ( (v5 & 0x80u) != 0 )
              v5 |= 0x200u;
            goto LABEL_28;
          case 'p':
            v7 = 16;
            v5 |= 0x8000u;
            goto LABEL_74;
        }
        if ( v10 != 115 )
        {
          v16 = (unsigned int)(v10 - 117);
          if ( v10 != 117 )
          {
            if ( v10 != 120 )
              goto LABEL_106;
            v23 = 39;
            goto LABEL_75;
          }
LABEL_27:
          v17 = 10;
LABEL_28:
          if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
          {
            v48 = a3 + 2;
            v18 = *(_QWORD *)a3;
          }
          else
          {
            v25 = a3 + 2;
            v48 = v25;
            if ( (v5 & 0x20) != 0 )
            {
              if ( (v5 & 0x40) != 0 )
                v18 = *((__int16 *)v25 - 4);
              else
                v18 = *((unsigned __int16 *)v25 - 4);
            }
            else if ( (v5 & 0x40) != 0 )
            {
              v18 = *(v25 - 2);
            }
            else
            {
              v18 = (unsigned int)*(v25 - 2);
            }
          }
          if ( (v5 & 0x40) != 0 && v18 < 0 )
          {
            v18 = -v18;
            v5 |= 0x100u;
          }
          if ( (v5 & 0x9000) == 0 )
            v18 = (unsigned int)v18;
          if ( v7 >= 0 )
          {
            v5 &= ~8u;
            if ( v7 > 512 )
              v7 = 512;
          }
          else
          {
            v7 = 1;
          }
          v26 = &v57;
          v27 = v18 != 0 ? v8 : 0;
          v28 = v51;
          v45 = v27;
          while ( 1 )
          {
            v16 = (unsigned int)v7--;
            if ( (int)v16 <= 0 && !v18 )
              break;
            v29 = v18 % (unsigned __int64)v17;
            v18 /= (unsigned __int64)v17;
            v30 = v29 + 48;
            if ( (int)v29 + 48 > 57 )
              v30 += v28;
            *v26-- = v30;
            v4 = 0;
          }
          v8 = v45;
          v31 = (unsigned int)&v56 + 383 - (_DWORD)v26;
          v42 = v7;
          v13 = v26 + 1;
          v44 = v31;
          LODWORD(v11) = v31;
          if ( (v5 & 0x200) == 0 || v31 && *v13 == 48 )
            goto LABEL_106;
          --v13;
          LODWORD(v11) = v31 + 1;
          *v13 = 48;
          goto LABEL_105;
        }
      }
      else
      {
        if ( v10 == 105 )
          goto LABEL_26;
        v16 = (unsigned int)(v10 - 67);
        if ( v10 == 67 )
        {
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
          goto LABEL_50;
        }
        if ( v10 != 83 )
        {
          if ( v10 != 88 )
          {
            if ( v10 != 90 )
            {
              v16 = (unsigned int)(v10 - 99);
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_26:
                  v5 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_106:
                if ( v52 )
                {
                  a3 = v48;
                  goto LABEL_142;
                }
                if ( (v5 & 0x40) != 0 )
                {
                  if ( (v5 & 0x100) != 0 )
                  {
                    v43[0] = 45;
                    goto LABEL_114;
                  }
                  if ( (v5 & 1) != 0 )
                  {
                    v43[0] = 43;
                    goto LABEL_114;
                  }
                  if ( (v5 & 2) != 0 )
                  {
                    v43[0] = 32;
LABEL_114:
                    v45 = 1;
                  }
                }
                v32 = v45;
                v33 = v6 - v11 - v45;
                if ( (v5 & 0xC) == 0 )
                {
                  LOBYTE(v16) = 32;
                  write_multi_char_1(v16, v33, v50, &v46);
                  v32 = v45;
                }
                write_string_1(v43, v32, v50, &v46);
                v35 = v50;
                if ( (v5 & 0xC) == 8 )
                {
                  LOBYTE(v34) = 48;
                  write_multi_char_1(v34, v33, v50, &v46);
                }
                if ( v49 && (int)v11 > 0 )
                {
                  v36 = (unsigned __int16 *)v13;
                  v37 = v11;
                  while ( 1 )
                  {
                    v38 = *v36++;
                    --v37;
                    if ( (unsigned int)safecrt_wctomb_s(&v53, v58, 6LL, v38) || !v53 )
                      break;
                    write_string_1(v58, v53, v50, &v46);
                    v4 = 0;
                    if ( !v37 )
                    {
                      a2 = v54;
                      v35 = v50;
                      goto LABEL_129;
                    }
                  }
                  a2 = v54;
                  v35 = v50;
                  v46 = -1;
                }
                else
                {
                  write_string_1(v13, (unsigned int)v11, v35, &v46);
                }
                v4 = 0;
LABEL_129:
                if ( v46 < 0 || (v5 & 4) == 0 )
                {
                  a3 = v48;
                  v7 = v42;
                  v12 = v41;
                  v6 = v47;
                  v8 = v45;
                  goto LABEL_142;
                }
                LOBYTE(v39) = 32;
                write_multi_char_1(v39, v33, v35, &v46);
                v12 = v41;
                v8 = v45;
                goto LABEL_132;
              }
LABEL_50:
              v21 = a3 + 2;
              v48 = v21;
              if ( (v5 & 0x810) != 0 )
              {
                v22 = safecrt_wctomb_s(&v44, v55, 512LL, *((unsigned __int16 *)v21 - 4));
                LODWORD(v11) = v44;
                v4 = 0;
                v7 = v42;
                v6 = v47;
                if ( v22 )
                  v52 = 1;
              }
              else
              {
                LODWORD(v11) = 1;
                v55[0] = *((_BYTE *)v21 - 8);
                v44 = 1;
              }
              v13 = v55;
              goto LABEL_106;
            }
            v16 = *(_QWORD *)a3;
            v48 = a3 + 2;
            if ( v16 && (v13 = *(char **)(v16 + 8)) != 0LL )
            {
              if ( *(_WORD *)(v16 + 2) < *(_WORD *)v16 )
                goto LABEL_178;
              LODWORD(v11) = *(unsigned __int16 *)v16;
              if ( (v5 & 0x800) != 0 )
              {
                if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                  goto LABEL_178;
                LODWORD(v11) = *(unsigned __int16 *)v16 >> 1;
                v49 = 1;
              }
              else
              {
                v49 = 0;
              }
            }
            else
            {
              v13 = "(null)";
              LODWORD(v11) = 6;
            }
LABEL_105:
            v44 = v11;
            goto LABEL_106;
          }
LABEL_74:
          v23 = 7;
LABEL_75:
          v51 = v23;
          v17 = 16;
          if ( (v5 & 0x80u) != 0 )
          {
            v43[0] = 48;
            v43[1] = v23 + 81;
            v8 = 2;
          }
          goto LABEL_28;
        }
        if ( (v5 & 0x830) == 0 )
          v5 |= 0x800u;
      }
      v16 = (unsigned int)v7;
      if ( v7 == -1 )
        v16 = 0x7FFFFFFFLL;
      v19 = *(char **)a3;
      v48 = a3 + 2;
      if ( (v5 & 0x810) == 0 )
      {
        v13 = "(null)";
        if ( v19 )
          v13 = v19;
        for ( i = v13; (_DWORD)v16; ++i )
        {
          v16 = (unsigned int)(v16 - 1);
          if ( !*i )
            break;
        }
        LODWORD(v11) = (_DWORD)i - (_DWORD)v13;
        v44 = (_DWORD)i - (_DWORD)v13;
        goto LABEL_106;
      }
      v49 = 1;
      v13 = (char *)L"(null)";
      if ( v19 )
        v13 = v19;
      for ( j = v13; (_DWORD)v16; j += 2 )
      {
        v16 = (unsigned int)(v16 - 1);
        if ( !*(_WORD *)j )
          break;
      }
      v11 = (j - v13) >> 1;
      goto LABEL_105;
    }
LABEL_142:
    v10 = *a2;
  }
  while ( *a2 );
  if ( v12 && v12 != 7 )
  {
LABEL_178:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v46;
}
