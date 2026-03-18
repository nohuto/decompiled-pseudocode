/*
 * XREFs of _output_s @ 0x140149F94
 * Callers:
 *     _soutput_s @ 0x14014A8E4 (_soutput_s.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     write_char_0 @ 0x140147A34 (write_char_0.c)
 *     _safecrt_wctomb_s @ 0x14014A814 (_safecrt_wctomb_s.c)
 *     write_multi_char_0 @ 0x14014A9BC (write_multi_char_0.c)
 *     sub_14014AA10 @ 0x14014AA10 (sub_14014AA10.c)
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
  __int64 v24; // rcx
  int v25; // r9d
  __int64 v26; // r8
  char *v27; // rax
  char *j; // r12
  int *v29; // r8
  int v30; // eax
  int v31; // eax
  _BYTE *i; // rax
  int *v33; // r8
  unsigned int v34; // r13d
  char v35; // r15
  char *v36; // rbx
  unsigned __int64 v37; // rdx
  char v38; // al
  unsigned int v39; // r15d
  __int64 v40; // rcx
  FILE *v41; // rsi
  unsigned __int16 *v42; // r14
  int v43; // esi
  __int64 v44; // r9
  __int64 v45; // rcx
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
              v25 = 8;
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
            v24 = (unsigned int)(v10 - 117);
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_107;
              v31 = 39;
              goto LABEL_76;
            }
LABEL_28:
            v25 = 10;
LABEL_29:
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v55 = a3 + 2;
              v26 = *(_QWORD *)a3;
            }
            else
            {
              v33 = a3 + 2;
              v55 = v33;
              if ( (v5 & 0x20) != 0 )
              {
                if ( (v5 & 0x40) != 0 )
                  v26 = *((__int16 *)v33 - 4);
                else
                  v26 = *((unsigned __int16 *)v33 - 4);
              }
              else if ( (v5 & 0x40) != 0 )
              {
                v26 = *(v33 - 2);
              }
              else
              {
                v26 = (unsigned int)*(v33 - 2);
              }
            }
            if ( (v5 & 0x40) != 0 && v26 < 0 )
            {
              v26 = -v26;
              v5 |= 0x100u;
            }
            if ( (v5 & 0x9000) == 0 )
              v26 = (unsigned int)v26;
            v34 = v49;
            if ( v49 >= 0 )
            {
              v5 &= ~8u;
              if ( v49 > 512 )
                v34 = 512;
            }
            else
            {
              v34 = 1;
            }
            v35 = v58;
            v36 = &v64;
            v8 &= -(v26 != 0);
            v50 = v8;
            while ( 1 )
            {
              v24 = v34--;
              if ( (int)v24 <= 0 && !v26 )
                break;
              v37 = v26 % (unsigned __int64)v25;
              v26 /= (unsigned __int64)v25;
              v38 = v37 + 48;
              if ( (int)v37 + 48 > 57 )
                v38 += v35;
              *v36-- = v38;
            }
            v4 = v57;
            v49 = v34;
            LODWORD(v11) = (unsigned int)&v63 + 383 - (_DWORD)v36;
            v52 = v11;
            v13 = v36 + 1;
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
          v24 = (unsigned int)(v10 - 67);
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
                v24 = (unsigned int)(v10 - 99);
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
                    v39 = v6 - v11 - v8;
                    if ( (v5 & 0xC) == 0 )
                    {
                      LOBYTE(v24) = 32;
                      write_multi_char_0(v24, v39, v57, &v51);
                      v8 = v50;
                    }
                    sub_14014AA10(v53, v8, v57, &v51);
                    v41 = v57;
                    if ( (v5 & 0xC) == 8 )
                    {
                      LOBYTE(v40) = 48;
                      write_multi_char_0(v40, v39, v57, &v51);
                    }
                    if ( v56 && (int)v11 > 0 )
                    {
                      v42 = (unsigned __int16 *)v13;
                      v43 = v11;
                      while ( 1 )
                      {
                        v44 = *v42++;
                        --v43;
                        if ( (unsigned int)safecrt_wctomb_s(&v60, v65, 6LL, v44) || !v60 )
                          break;
                        sub_14014AA10(v65, v60, v57, &v51);
                        if ( !v43 )
                        {
                          a2 = v61;
                          v41 = v57;
                          goto LABEL_129;
                        }
                      }
                      a2 = v61;
                      v41 = v57;
                      v51 = -1;
                    }
                    else
                    {
                      sub_14014AA10(v13, (unsigned int)v11, v41, &v51);
                    }
LABEL_129:
                    if ( v51 >= 0 && (v5 & 4) != 0 )
                    {
                      LOBYTE(v45) = 32;
                      write_multi_char_0(v45, v39, v41, &v51);
                    }
                    v4 = v57;
                    v8 = v50;
                    v6 = v54;
                  }
                  a3 = v55;
                  v7 = v49;
                  goto LABEL_134;
                }
LABEL_51:
                v29 = a3 + 2;
                v55 = v29;
                if ( (v5 & 0x810) != 0 )
                {
                  v30 = safecrt_wctomb_s(&v52, v62, 512LL, *((unsigned __int16 *)v29 - 4));
                  LODWORD(v11) = v52;
                  v6 = v54;
                  v8 = v50;
                  if ( v30 )
                    v59 = 1;
                }
                else
                {
                  LODWORD(v11) = 1;
                  v62[0] = *((_BYTE *)v29 - 8);
                  v52 = 1;
                }
                v13 = v62;
                goto LABEL_107;
              }
              v24 = *(_QWORD *)a3;
              v55 = a3 + 2;
              if ( v24 && (v13 = *(char **)(v24 + 8)) != 0LL )
              {
                if ( *(_WORD *)(v24 + 2) < *(_WORD *)v24 )
                  goto LABEL_180;
                LODWORD(v11) = *(unsigned __int16 *)v24;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                    goto LABEL_180;
                  LODWORD(v11) = *(unsigned __int16 *)v24 >> 1;
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
            v31 = 7;
LABEL_76:
            v58 = v31;
            v25 = 16;
            if ( (v5 & 0x80u) != 0 )
            {
              v53[0] = 48;
              v53[1] = v31 + 81;
              v8 = 2;
            }
            goto LABEL_29;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v24 = (unsigned int)v7;
        if ( v7 == -1 )
          v24 = 0x7FFFFFFFLL;
        v27 = *(char **)a3;
        v55 = a3 + 2;
        if ( (v5 & 0x810) == 0 )
        {
          v13 = "(null)";
          if ( v27 )
            v13 = v27;
          for ( i = v13; (_DWORD)v24; ++i )
          {
            v24 = (unsigned int)(v24 - 1);
            if ( !*i )
              break;
          }
          LODWORD(v11) = (_DWORD)i - (_DWORD)v13;
          v52 = (_DWORD)i - (_DWORD)v13;
          goto LABEL_107;
        }
        v56 = 1;
        v13 = (char *)L"(null)";
        if ( v27 )
          v13 = v27;
        for ( j = v13; (_DWORD)v24; j += 2 )
        {
          v24 = (unsigned int)(v24 - 1);
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
