/*
 * XREFs of _output_s @ 0x1800A1454
 * Callers:
 *     _soutput_s @ 0x1800A1E0C (_soutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _safecrt_wctomb_s @ 0x1800A1D34 (_safecrt_wctomb_s.c)
 *     write_char_1 @ 0x1800A1EE8 (write_char_1.c)
 *     write_multi_char_1 @ 0x1800A1F38 (write_multi_char_1.c)
 *     write_string_1 @ 0x1800A1F90 (write_string_1.c)
 */

__int64 __fastcall output_s(__int64 a1, char *a2, int *a3)
{
  __int64 v4; // r15
  int v5; // edi
  int v6; // r10d
  int v7; // edx
  unsigned int v8; // r11d
  char v10; // r9
  __int64 v11; // r12
  unsigned int v12; // esi
  char *v13; // rbx
  int v14; // ecx
  unsigned __int8 *v15; // rax
  unsigned int v16; // esi
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // r9d
  __int64 v25; // r8
  char *v26; // rax
  char *j; // r12
  int *v28; // r8
  int v29; // eax
  int v30; // eax
  _BYTE *i; // rax
  int *v32; // r8
  unsigned int v33; // r13d
  char v34; // r15
  char *v35; // rbx
  unsigned __int64 v36; // rdx
  char v37; // al
  unsigned int v38; // r15d
  __int64 v39; // rcx
  __int64 v40; // rsi
  unsigned __int16 *v41; // r14
  int v42; // esi
  __int64 v43; // r9
  __int64 v44; // rcx
  char v45; // al
  unsigned int v46; // [rsp+30h] [rbp-D0h]
  int v47; // [rsp+34h] [rbp-CCh]
  int v48; // [rsp+38h] [rbp-C8h]
  int v49; // [rsp+3Ch] [rbp-C4h] BYREF
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v51[4]; // [rsp+44h] [rbp-BCh] BYREF
  int v52; // [rsp+48h] [rbp-B8h]
  int *v53; // [rsp+50h] [rbp-B0h]
  int v54; // [rsp+58h] [rbp-A8h]
  __int64 v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+68h] [rbp-98h]
  int v57; // [rsp+6Ch] [rbp-94h]
  unsigned int v58; // [rsp+70h] [rbp-90h] BYREF
  char *v59; // [rsp+78h] [rbp-88h]
  _BYTE v60[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h] BYREF
  char v62; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v63[8]; // [rsp+280h] [rbp+180h] BYREF

  v53 = a3;
  v55 = a1;
  v56 = 0;
  v4 = a1;
  v52 = 0;
  v5 = 0;
  v47 = 0;
  v6 = 0;
  v48 = 0;
  v7 = 0;
  v57 = 0;
  v8 = 0;
  v54 = 0;
  if ( !a1 || !a2 )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v10 = *a2;
  LODWORD(v11) = 0;
  v49 = 0;
  v12 = 0;
  v50 = 0;
  if ( !v10 )
    return (unsigned int)v49;
  v13 = v59;
  do
  {
    v59 = ++a2;
    if ( v49 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x58u )
      v14 = 0;
    else
      v14 = _lookuptable_s[v10 - 32] & 0xF;
    v15 = _lookuptable_s;
    v16 = _lookuptable_s[9 * v14 + v12] >> 4;
    v46 = v16;
    if ( v16 == 8 )
      goto LABEL_180;
    v17 = v16;
    v12 = 0;
    if ( !(_DWORD)v17 )
    {
      v12 = 0;
LABEL_179:
      v54 = 0;
      LOBYTE(v17) = v10;
      write_char_1(v17, v4, &v49);
      a3 = v53;
      v7 = v47;
      v6 = v52;
      v8 = v48;
      goto LABEL_135;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v7 = -1;
      v57 = 0;
      v47 = -1;
      v6 = 0;
      v52 = 0;
      v8 = 0;
      v48 = 0;
      v5 = 0;
      v54 = 0;
      goto LABEL_134;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
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
        default:
          v12 = v46;
          if ( v10 == 48 )
            v5 |= 8u;
          goto LABEL_135;
      }
      goto LABEL_134;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      if ( v10 == 42 )
      {
        v6 = *a3;
        a3 += 2;
        v12 = v46;
        v53 = a3;
        v52 = v6;
        if ( v6 < 0 )
        {
          v5 |= 4u;
          v6 = -v6;
          v52 = v6;
        }
        goto LABEL_135;
      }
      v6 = v10 + 2 * (5 * v6 - 24);
      v52 = v6;
      goto LABEL_134;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v7 = 0;
LABEL_161:
      v47 = v7;
      goto LABEL_134;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      if ( v10 == 42 )
      {
        v7 = *a3;
        a3 += 2;
        v12 = v46;
        v53 = a3;
        v47 = v7;
        if ( v7 < 0 )
        {
          v7 = -1;
          v47 = -1;
        }
        goto LABEL_135;
      }
      v7 = v10 + 2 * (5 * v7 - 24);
      goto LABEL_161;
    }
    v17 = (unsigned int)(v22 - 1);
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)v17 == 1 )
      {
        if ( v10 > 105 )
        {
          switch ( v10 )
          {
            case 'n':
              goto LABEL_180;
            case 'o':
              v24 = 8;
              if ( (v5 & 0x80u) != 0 )
                v5 |= 0x200u;
              goto LABEL_29;
            case 'p':
              v47 = 16;
              v5 |= 0x8000u;
              goto LABEL_75;
          }
          if ( v10 != 115 )
          {
            v23 = (unsigned int)(v10 - 117);
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_107;
              v30 = 39;
              goto LABEL_76;
            }
LABEL_28:
            v24 = 10;
LABEL_29:
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v53 = a3 + 2;
              v25 = *(_QWORD *)a3;
            }
            else
            {
              v32 = a3 + 2;
              v53 = v32;
              if ( (v5 & 0x20) != 0 )
              {
                if ( (v5 & 0x40) != 0 )
                  v25 = *((__int16 *)v32 - 4);
                else
                  v25 = *((unsigned __int16 *)v32 - 4);
              }
              else if ( (v5 & 0x40) != 0 )
              {
                v25 = *(v32 - 2);
              }
              else
              {
                v25 = (unsigned int)*(v32 - 2);
              }
            }
            if ( (v5 & 0x40) != 0 && v25 < 0 )
            {
              v25 = -v25;
              v5 |= 0x100u;
            }
            if ( (v5 & 0x9000) == 0 )
              v25 = (unsigned int)v25;
            v33 = v47;
            if ( v47 >= 0 )
            {
              v5 &= ~8u;
              if ( v47 > 512 )
                v33 = 512;
            }
            else
            {
              v33 = 1;
            }
            v34 = v56;
            v35 = &v62;
            v8 &= -(v25 != 0);
            v48 = v8;
            while ( 1 )
            {
              v23 = v33--;
              if ( (int)v23 <= 0 && !v25 )
                break;
              v36 = v25 % (unsigned __int64)v24;
              v25 /= (unsigned __int64)v24;
              v37 = v36 + 48;
              if ( (int)v36 + 48 > 57 )
                v37 += v34;
              *v35-- = v37;
            }
            v4 = v55;
            v47 = v33;
            LODWORD(v11) = (unsigned int)&v61 + 383 - (_DWORD)v35;
            v50 = v11;
            v13 = v35 + 1;
            if ( (v5 & 0x200) == 0 || (_DWORD)v11 && *v13 == 48 )
              goto LABEL_107;
            --v13;
            LODWORD(v11) = v11 + 1;
            *v13 = 48;
            goto LABEL_106;
          }
        }
        else
        {
          if ( v10 == 105 )
            goto LABEL_27;
          v23 = (unsigned int)(v10 - 67);
          if ( v10 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x800u;
            goto LABEL_51;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 != 90 )
              {
                v23 = (unsigned int)(v10 - 99);
                if ( v10 != 99 )
                {
                  if ( v10 == 100 )
                  {
LABEL_27:
                    v5 |= 0x40u;
                    goto LABEL_28;
                  }
LABEL_107:
                  if ( !v57 )
                  {
                    if ( (v5 & 0x40) != 0 )
                    {
                      if ( (v5 & 0x100) != 0 )
                      {
                        v51[0] = 45;
                        goto LABEL_115;
                      }
                      if ( (v5 & 1) != 0 )
                      {
                        v51[0] = 43;
                        goto LABEL_115;
                      }
                      if ( (v5 & 2) != 0 )
                      {
                        v51[0] = 32;
LABEL_115:
                        v8 = 1;
                        v48 = 1;
                      }
                    }
                    v38 = v6 - v11 - v8;
                    if ( (v5 & 0xC) == 0 )
                    {
                      LOBYTE(v23) = 32;
                      write_multi_char_1(v23, v38, v55, &v49);
                      v8 = v48;
                    }
                    write_string_1(v51, v8, v55, &v49);
                    v40 = v55;
                    if ( (v5 & 0xC) == 8 )
                    {
                      LOBYTE(v39) = 48;
                      write_multi_char_1(v39, v38, v55, &v49);
                    }
                    if ( v54 && (int)v11 > 0 )
                    {
                      v41 = (unsigned __int16 *)v13;
                      v42 = v11;
                      while ( 1 )
                      {
                        v43 = *v41++;
                        --v42;
                        if ( (unsigned int)safecrt_wctomb_s(&v58, v63, 6LL, v43) || !v58 )
                          break;
                        write_string_1(v63, v58, v55, &v49);
                        if ( !v42 )
                        {
                          a2 = v59;
                          v40 = v55;
                          goto LABEL_129;
                        }
                      }
                      a2 = v59;
                      v40 = v55;
                      v49 = -1;
                    }
                    else
                    {
                      write_string_1(v13, (unsigned int)v11, v40, &v49);
                    }
LABEL_129:
                    if ( v49 >= 0 && (v5 & 4) != 0 )
                    {
                      LOBYTE(v44) = 32;
                      write_multi_char_1(v44, v38, v40, &v49);
                    }
                    v4 = v55;
                    v8 = v48;
                    v6 = v52;
                  }
                  a3 = v53;
                  v7 = v47;
                  goto LABEL_134;
                }
LABEL_51:
                v28 = a3 + 2;
                v53 = v28;
                if ( (v5 & 0x810) != 0 )
                {
                  v29 = safecrt_wctomb_s(&v50, v60, 512LL, *((unsigned __int16 *)v28 - 4));
                  LODWORD(v11) = v50;
                  v6 = v52;
                  v8 = v48;
                  if ( v29 )
                    v57 = 1;
                }
                else
                {
                  LODWORD(v11) = 1;
                  v60[0] = *((_BYTE *)v28 - 8);
                  v50 = 1;
                }
                v13 = v60;
                goto LABEL_107;
              }
              v23 = *(_QWORD *)a3;
              v53 = a3 + 2;
              if ( v23 && (v13 = *(char **)(v23 + 8)) != 0LL )
              {
                if ( *(_WORD *)(v23 + 2) < *(_WORD *)v23 )
                  goto LABEL_180;
                LODWORD(v11) = *(unsigned __int16 *)v23;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                    goto LABEL_180;
                  LODWORD(v11) = *(unsigned __int16 *)v23 >> 1;
                  v54 = 1;
                }
                else
                {
                  v54 = 0;
                }
              }
              else
              {
                v13 = "(null)";
                LODWORD(v11) = 6;
              }
LABEL_106:
              v50 = v11;
              goto LABEL_107;
            }
LABEL_75:
            v30 = 7;
LABEL_76:
            v56 = v30;
            v24 = 16;
            if ( (v5 & 0x80u) != 0 )
            {
              v51[0] = 48;
              v51[1] = v30 + 81;
              v8 = 2;
            }
            goto LABEL_29;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v23 = (unsigned int)v7;
        if ( v7 == -1 )
          v23 = 0x7FFFFFFFLL;
        v26 = *(char **)a3;
        v53 = a3 + 2;
        if ( (v5 & 0x810) == 0 )
        {
          v13 = "(null)";
          if ( v26 )
            v13 = v26;
          for ( i = v13; (_DWORD)v23; ++i )
          {
            v23 = (unsigned int)(v23 - 1);
            if ( !*i )
              break;
          }
          LODWORD(v11) = (_DWORD)i - (_DWORD)v13;
          v50 = (_DWORD)i - (_DWORD)v13;
          goto LABEL_107;
        }
        v54 = 1;
        v13 = (char *)L"(null)";
        if ( v26 )
          v13 = v26;
        for ( j = v13; (_DWORD)v23; j += 2 )
        {
          v23 = (unsigned int)(v23 - 1);
          if ( !*(_WORD *)j )
            break;
        }
        v11 = (j - v13) >> 1;
        goto LABEL_106;
      }
    }
    else
    {
      switch ( v10 )
      {
        case 'I':
          v45 = *a2;
          v5 |= 0x8000u;
          if ( *a2 == 54 && a2[1] == 52 )
          {
            a2 += 2;
            v5 |= 0x8000u;
          }
          else if ( v45 == 51 && a2[1] == 50 )
          {
            a2 += 2;
            v5 &= ~0x8000u;
          }
          else
          {
            LOBYTE(v15) = v45 - 88;
            if ( (unsigned __int8)v15 > 0x20u )
              goto LABEL_179;
            v17 = 0x120821001LL;
            if ( !_bittest64(&v17, (unsigned __int64)v15) )
              goto LABEL_179;
          }
          break;
        case 'h':
          v5 |= 0x20u;
          break;
        case 'l':
          v12 = v46;
          if ( *a2 == 108 )
          {
            ++a2;
            v5 |= 0x1000u;
          }
          else
          {
            v5 |= 0x10u;
          }
          goto LABEL_135;
        case 'w':
          v5 |= 0x800u;
          break;
      }
    }
LABEL_134:
    v12 = v46;
LABEL_135:
    v10 = *a2;
  }
  while ( *a2 );
  if ( v12 && v12 != 7 )
  {
LABEL_180:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v49;
}
