/*
 * XREFs of _output_s @ 0x140178014
 * Callers:
 *     _soutput_s @ 0x1401789B4 (_soutput_s.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     write_char_0 @ 0x140175A6C (write_char_0.c)
 *     write_multi_char_0 @ 0x140175AB4 (write_multi_char_0.c)
 *     _safecrt_wctomb_s @ 0x1401788E4 (_safecrt_wctomb_s.c)
 *     sub_140178A8C @ 0x140178A8C (sub_140178A8C.c)
 */

__int64 __fastcall output_s(FILE *a1, char *a2, int *a3)
{
  FILE *v4; // r15
  int v5; // edi
  int v6; // r10d
  int v7; // edx
  unsigned int v8; // r11d
  char v10; // r9
  __int64 v11; // r12
  int v12; // esi
  char *v13; // rbx
  int v14; // ecx
  unsigned __int8 *v15; // rax
  int v16; // esi
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // r9d
  __int64 v25; // r8
  unsigned __int16 *v26; // rcx
  int v27; // ecx
  char *v28; // rax
  char *j; // r12
  int *v30; // r8
  int v31; // eax
  int v32; // eax
  _BYTE *i; // rax
  int *v34; // r8
  int v35; // r13d
  char v36; // r15
  char *v37; // rbx
  int v38; // ecx
  unsigned __int64 v39; // rdx
  char v40; // al
  int v41; // r15d
  FILE *v42; // rsi
  unsigned __int16 *v43; // r14
  int v44; // esi
  __int64 v45; // r9
  char v46; // al
  __int64 v47; // rcx
  int v48; // [rsp+30h] [rbp-D0h]
  int v49; // [rsp+34h] [rbp-CCh]
  int v50; // [rsp+38h] [rbp-C8h]
  int v51; // [rsp+3Ch] [rbp-C4h] BYREF
  int v52; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v53[4]; // [rsp+44h] [rbp-BCh] BYREF
  int v54; // [rsp+48h] [rbp-B8h]
  int *v55; // [rsp+50h] [rbp-B0h]
  int v56; // [rsp+58h] [rbp-A8h]
  FILE *v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+68h] [rbp-98h]
  int v59; // [rsp+6Ch] [rbp-94h]
  unsigned int v60; // [rsp+70h] [rbp-90h] BYREF
  char *v61; // [rsp+78h] [rbp-88h]
  _BYTE v62[128]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+100h] [rbp+0h] BYREF
  char v64; // [rsp+27Fh] [rbp+17Fh] BYREF
  char v65[8]; // [rsp+280h] [rbp+180h] BYREF

  v55 = a3;
  v57 = a1;
  v58 = 0;
  v4 = a1;
  v54 = 0;
  v5 = 0;
  v49 = 0;
  v6 = 0;
  v50 = 0;
  v7 = 0;
  v59 = 0;
  v8 = 0;
  v56 = 0;
  if ( !a1 || !a2 )
  {
    PopPoCoalescinCallback();
    return 0xFFFFFFFFLL;
  }
  v10 = *a2;
  LODWORD(v11) = 0;
  v51 = 0;
  v12 = 0;
  v52 = 0;
  if ( !v10 )
    return (unsigned int)v51;
  v13 = v61;
  do
  {
    v61 = ++a2;
    if ( v51 < 0 )
      break;
    if ( (unsigned __int8)(v10 - 32) > 0x58u )
      v14 = 0;
    else
      v14 = _lookuptable_s[v10 - 32] & 0xF;
    v15 = _lookuptable_s;
    v16 = _lookuptable_s[9 * v14 + v12] >> 4;
    v48 = v16;
    if ( v16 == 8 )
      goto LABEL_180;
    v17 = v16;
    v12 = 0;
    if ( !v17 )
    {
      v12 = 0;
LABEL_179:
      v56 = 0;
      write_char_0(v10, v4, &v51);
      a3 = v55;
      v7 = v49;
      v6 = v54;
      v8 = v50;
      goto LABEL_135;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v7 = -1;
      v59 = 0;
      v49 = -1;
      v6 = 0;
      v54 = 0;
      v8 = 0;
      v50 = 0;
      v5 = 0;
      v56 = 0;
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
          v12 = v48;
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
        v12 = v48;
        v55 = a3;
        v54 = v6;
        if ( v6 < 0 )
        {
          v5 |= 4u;
          v6 = -v6;
          v54 = v6;
        }
        goto LABEL_135;
      }
      v6 = v10 + 2 * (5 * v6 - 24);
      v54 = v6;
      goto LABEL_134;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v7 = 0;
LABEL_161:
      v49 = v7;
      goto LABEL_134;
    }
    v22 = v21 - 1;
    if ( !v22 )
    {
      if ( v10 == 42 )
      {
        v7 = *a3;
        a3 += 2;
        v12 = v48;
        v55 = a3;
        v49 = v7;
        if ( v7 < 0 )
        {
          v7 = -1;
          v49 = -1;
        }
        goto LABEL_135;
      }
      v7 = v10 + 2 * (5 * v7 - 24);
      goto LABEL_161;
    }
    v23 = v22 - 1;
    if ( v23 )
    {
      if ( v23 == 1 )
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
              v49 = 16;
              v5 |= 0x8000u;
              goto LABEL_75;
          }
          if ( v10 != 115 )
          {
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_107;
              v32 = 39;
              goto LABEL_76;
            }
LABEL_28:
            v24 = 10;
LABEL_29:
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v55 = a3 + 2;
              v25 = *(_QWORD *)a3;
            }
            else
            {
              v34 = a3 + 2;
              v55 = v34;
              if ( (v5 & 0x20) != 0 )
              {
                if ( (v5 & 0x40) != 0 )
                  v25 = *((__int16 *)v34 - 4);
                else
                  v25 = *((unsigned __int16 *)v34 - 4);
              }
              else if ( (v5 & 0x40) != 0 )
              {
                v25 = *(v34 - 2);
              }
              else
              {
                v25 = (unsigned int)*(v34 - 2);
              }
            }
            if ( (v5 & 0x40) != 0 && v25 < 0 )
            {
              v25 = -v25;
              v5 |= 0x100u;
            }
            if ( (v5 & 0x9000) == 0 )
              v25 = (unsigned int)v25;
            v35 = v49;
            if ( v49 >= 0 )
            {
              v5 &= ~8u;
              if ( v49 > 512 )
                v35 = 512;
            }
            else
            {
              v35 = 1;
            }
            v36 = v58;
            v37 = &v64;
            v8 &= -(v25 != 0);
            v50 = v8;
            while ( 1 )
            {
              v38 = v35--;
              if ( v38 <= 0 && !v25 )
                break;
              v39 = v25 % (unsigned __int64)v24;
              v25 /= (unsigned __int64)v24;
              v40 = v39 + 48;
              if ( (int)v39 + 48 > 57 )
                v40 += v36;
              *v37-- = v40;
            }
            v4 = v57;
            v49 = v35;
            LODWORD(v11) = (unsigned int)&v63 + 383 - (_DWORD)v37;
            v52 = v11;
            v13 = v37 + 1;
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
                if ( v10 != 99 )
                {
                  if ( v10 == 100 )
                  {
LABEL_27:
                    v5 |= 0x40u;
                    goto LABEL_28;
                  }
LABEL_107:
                  if ( !v59 )
                  {
                    if ( (v5 & 0x40) != 0 )
                    {
                      if ( (v5 & 0x100) != 0 )
                      {
                        v53[0] = 45;
                        goto LABEL_115;
                      }
                      if ( (v5 & 1) != 0 )
                      {
                        v53[0] = 43;
                        goto LABEL_115;
                      }
                      if ( (v5 & 2) != 0 )
                      {
                        v53[0] = 32;
LABEL_115:
                        v8 = 1;
                        v50 = 1;
                      }
                    }
                    v41 = v6 - v11 - v8;
                    if ( (v5 & 0xC) == 0 )
                    {
                      write_multi_char_0(32, v41, v57, &v51);
                      v8 = v50;
                    }
                    sub_140178A8C(v53, v8, v57, &v51);
                    v42 = v57;
                    if ( (v5 & 0xC) == 8 )
                      write_multi_char_0(48, v41, v57, &v51);
                    if ( v56 && (int)v11 > 0 )
                    {
                      v43 = (unsigned __int16 *)v13;
                      v44 = v11;
                      while ( 1 )
                      {
                        v45 = *v43++;
                        --v44;
                        if ( (unsigned int)safecrt_wctomb_s(&v60, v65, 6LL, v45) || !v60 )
                          break;
                        sub_140178A8C(v65, v60, v57, &v51);
                        if ( !v44 )
                        {
                          a2 = v61;
                          v42 = v57;
                          goto LABEL_129;
                        }
                      }
                      a2 = v61;
                      v42 = v57;
                      v51 = -1;
                    }
                    else
                    {
                      sub_140178A8C(v13, (unsigned int)v11, v42, &v51);
                    }
LABEL_129:
                    if ( v51 >= 0 && (v5 & 4) != 0 )
                      write_multi_char_0(32, v41, v42, &v51);
                    v4 = v57;
                    v8 = v50;
                    v6 = v54;
                  }
                  a3 = v55;
                  v7 = v49;
                  goto LABEL_134;
                }
LABEL_51:
                v30 = a3 + 2;
                v55 = v30;
                if ( (v5 & 0x810) != 0 )
                {
                  v31 = safecrt_wctomb_s(&v52, v62, 512LL, *((unsigned __int16 *)v30 - 4));
                  LODWORD(v11) = v52;
                  v6 = v54;
                  v8 = v50;
                  if ( v31 )
                    v59 = 1;
                }
                else
                {
                  LODWORD(v11) = 1;
                  v62[0] = *((_BYTE *)v30 - 8);
                  v52 = 1;
                }
                v13 = v62;
                goto LABEL_107;
              }
              v26 = *(unsigned __int16 **)a3;
              v55 = a3 + 2;
              if ( v26 && (v13 = (char *)*((_QWORD *)v26 + 1)) != 0LL )
              {
                if ( v26[1] < *v26 )
                  goto LABEL_180;
                LODWORD(v11) = *v26;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                    goto LABEL_180;
                  LODWORD(v11) = *v26 >> 1;
                  v56 = 1;
                }
                else
                {
                  v56 = 0;
                }
              }
              else
              {
                v13 = "(null)";
                LODWORD(v11) = 6;
              }
LABEL_106:
              v52 = v11;
              goto LABEL_107;
            }
LABEL_75:
            v32 = 7;
LABEL_76:
            v58 = v32;
            v24 = 16;
            if ( (v5 & 0x80u) != 0 )
            {
              v53[0] = 48;
              v53[1] = v32 + 81;
              v8 = 2;
            }
            goto LABEL_29;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v27 = v7;
        if ( v7 == -1 )
          v27 = 0x7FFFFFFF;
        v28 = *(char **)a3;
        v55 = a3 + 2;
        if ( (v5 & 0x810) == 0 )
        {
          v13 = "(null)";
          if ( v28 )
            v13 = v28;
          for ( i = v13; v27; ++i )
          {
            --v27;
            if ( !*i )
              break;
          }
          LODWORD(v11) = (_DWORD)i - (_DWORD)v13;
          v52 = (_DWORD)i - (_DWORD)v13;
          goto LABEL_107;
        }
        v56 = 1;
        v13 = (char *)L"(null)";
        if ( v28 )
          v13 = v28;
        for ( j = v13; v27; j += 2 )
        {
          --v27;
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
          v46 = *a2;
          v5 |= 0x8000u;
          if ( *a2 == 54 && a2[1] == 52 )
          {
            a2 += 2;
            v5 |= 0x8000u;
          }
          else if ( v46 == 51 && a2[1] == 50 )
          {
            a2 += 2;
            v5 &= ~0x8000u;
          }
          else
          {
            LOBYTE(v15) = v46 - 88;
            if ( (unsigned __int8)v15 > 0x20u )
              goto LABEL_179;
            v47 = 0x120821001LL;
            if ( !_bittest64(&v47, (unsigned __int64)v15) )
              goto LABEL_179;
          }
          break;
        case 'h':
          v5 |= 0x20u;
          break;
        case 'l':
          v12 = v48;
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
    v12 = v48;
LABEL_135:
    v10 = *a2;
  }
  while ( *a2 );
  if ( v12 && v12 != 7 )
  {
LABEL_180:
    PopPoCoalescinCallback();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v51;
}
