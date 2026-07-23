/*
 * XREFs of _output_s @ 0x1401538E4
 * Callers:
 *     _soutput_s @ 0x140154224 (_soutput_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     write_char_0 @ 0x140151390 (write_char_0.c)
 *     _safecrt_wctomb_s @ 0x140154154 (_safecrt_wctomb_s.c)
 *     write_multi_char_0 @ 0x1401542FC (write_multi_char_0.c)
 *     write_string_1 @ 0x140154350 (write_string_1.c)
 */

__int64 __fastcall output_s(FILE *a1, char *a2, int *a3)
{
  int v4; // edx
  int v5; // edi
  int v6; // r11d
  int v7; // r10d
  int v8; // r15d
  char v10; // r9
  __int64 v11; // r12
  int v12; // esi
  char *v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r9d
  __int64 v17; // r8
  char *v18; // rax
  char *j; // r12
  int *v20; // r8
  int v21; // eax
  int v22; // eax
  _BYTE *i; // rax
  int *v24; // r8
  char *v25; // rbx
  int v26; // ecx
  char v27; // r15
  unsigned __int64 v28; // rdx
  char v29; // al
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // r15d
  __int64 v33; // rcx
  FILE *v34; // rsi
  unsigned __int16 *v35; // r14
  int v36; // esi
  __int64 v37; // r9
  __int64 v38; // rcx
  char v39; // al
  __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-D0h]
  int v42; // [rsp+34h] [rbp-CCh]
  _BYTE v43[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v44; // [rsp+3Ch] [rbp-C4h] BYREF
  int v45; // [rsp+40h] [rbp-C0h]
  int v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h]
  int *v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+58h] [rbp-A8h]
  FILE *v50; // [rsp+60h] [rbp-A0h]
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
    xHalFreeMessageTarget();
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
    v14 = v4 + v12 + 8 * v4;
    v4 = 0;
    v12 = _lookuptable_s[v14] >> 4;
    v41 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_179;
      case 0:
        v12 = 0;
        goto LABEL_176;
      case 1:
        v52 = 0;
        v6 = 0;
        v47 = 0;
        v8 = 0;
        v45 = 0;
        v5 = 0;
        v7 = -1;
        v42 = -1;
        v49 = 0;
        break;
      case 2:
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
        break;
      case 3:
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
        break;
      case 4:
        v7 = 0;
        v42 = 0;
        break;
      case 5:
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
        break;
      case 6:
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
          break;
        }
        v39 = *a2;
        v5 |= 0x8000u;
        if ( *a2 == 54 && a2[1] == 52 )
        {
          a2 += 2;
          v5 |= 0x8000u;
          break;
        }
        if ( v39 == 51 && a2[1] == 50 )
        {
          a2 += 2;
          v5 &= ~0x8000u;
          break;
        }
        LOBYTE(v14) = v39 - 88;
        if ( (unsigned __int8)v14 <= 0x20u )
        {
          v40 = 0x120821001LL;
          if ( _bittest64(&v40, v14) )
            break;
        }
        v12 = 0;
LABEL_176:
        v49 = 0;
        write_char_0(v10, v50, &v46);
LABEL_132:
        v6 = v47;
        v4 = 0;
        v7 = v42;
        a3 = v48;
        break;
      case 7:
        if ( v10 > 105 )
        {
          switch ( v10 )
          {
            case 'n':
              goto LABEL_179;
            case 'o':
              v16 = 8;
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
            v15 = (unsigned int)(v10 - 117);
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_106;
              v22 = 39;
              goto LABEL_75;
            }
LABEL_27:
            v16 = 10;
LABEL_28:
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v48 = a3 + 2;
              v17 = *(_QWORD *)a3;
            }
            else
            {
              v24 = a3 + 2;
              v48 = v24;
              if ( (v5 & 0x20) != 0 )
              {
                if ( (v5 & 0x40) != 0 )
                  v17 = *((__int16 *)v24 - 4);
                else
                  v17 = *((unsigned __int16 *)v24 - 4);
              }
              else if ( (v5 & 0x40) != 0 )
              {
                v17 = *(v24 - 2);
              }
              else
              {
                v17 = (unsigned int)*(v24 - 2);
              }
            }
            if ( (v5 & 0x40) != 0 && v17 < 0 )
            {
              v17 = -v17;
              v5 |= 0x100u;
            }
            if ( (v5 & 0x9000) == 0 )
              v17 = (unsigned int)v17;
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
            v25 = &v57;
            v26 = v17 != 0 ? v8 : 0;
            v27 = v51;
            v45 = v26;
            while ( 1 )
            {
              v15 = (unsigned int)v7--;
              if ( (int)v15 <= 0 && !v17 )
                break;
              v28 = v17 % (unsigned __int64)v16;
              v17 /= (unsigned __int64)v16;
              v29 = v28 + 48;
              if ( (int)v28 + 48 > 57 )
                v29 += v27;
              *v25-- = v29;
              v4 = 0;
            }
            v8 = v45;
            v30 = (unsigned int)&v56 + 383 - (_DWORD)v25;
            v42 = v7;
            v13 = v25 + 1;
            v44 = v30;
            LODWORD(v11) = v30;
            if ( (v5 & 0x200) == 0 || v30 && *v13 == 48 )
              goto LABEL_106;
            --v13;
            LODWORD(v11) = v30 + 1;
            *v13 = 48;
            goto LABEL_105;
          }
        }
        else
        {
          if ( v10 == 105 )
            goto LABEL_26;
          v15 = (unsigned int)(v10 - 67);
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
                v15 = (unsigned int)(v10 - 99);
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
                    break;
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
                  v31 = v45;
                  v32 = v6 - v11 - v45;
                  if ( (v5 & 0xC) == 0 )
                  {
                    LOBYTE(v15) = 32;
                    write_multi_char_0(v15, v32, v50, &v46);
                    v31 = v45;
                  }
                  write_string_1(v43, v31, v50, &v46);
                  v34 = v50;
                  if ( (v5 & 0xC) == 8 )
                  {
                    LOBYTE(v33) = 48;
                    write_multi_char_0(v33, v32, v50, &v46);
                  }
                  if ( v49 && (int)v11 > 0 )
                  {
                    v35 = (unsigned __int16 *)v13;
                    v36 = v11;
                    while ( 1 )
                    {
                      v37 = *v35++;
                      --v36;
                      if ( (unsigned int)safecrt_wctomb_s(&v53, v58, 6LL, v37) || !v53 )
                        break;
                      write_string_1(v58, v53, v50, &v46);
                      v4 = 0;
                      if ( !v36 )
                      {
                        a2 = v54;
                        v34 = v50;
                        goto LABEL_129;
                      }
                    }
                    a2 = v54;
                    v34 = v50;
                    v46 = -1;
                  }
                  else
                  {
                    write_string_1(v13, (unsigned int)v11, v34, &v46);
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
                    break;
                  }
                  LOBYTE(v38) = 32;
                  write_multi_char_0(v38, v32, v34, &v46);
                  v12 = v41;
                  v8 = v45;
                  goto LABEL_132;
                }
LABEL_50:
                v20 = a3 + 2;
                v48 = v20;
                if ( (v5 & 0x810) != 0 )
                {
                  v21 = safecrt_wctomb_s(&v44, v55, 512LL, *((unsigned __int16 *)v20 - 4));
                  LODWORD(v11) = v44;
                  v4 = 0;
                  v7 = v42;
                  v6 = v47;
                  if ( v21 )
                    v52 = 1;
                }
                else
                {
                  LODWORD(v11) = 1;
                  v55[0] = *((_BYTE *)v20 - 8);
                  v44 = 1;
                }
                v13 = v55;
                goto LABEL_106;
              }
              v15 = *(_QWORD *)a3;
              v48 = a3 + 2;
              if ( v15 && (v13 = *(char **)(v15 + 8)) != 0LL )
              {
                if ( *(_WORD *)(v15 + 2) < *(_WORD *)v15 )
                  goto LABEL_179;
                LODWORD(v11) = *(unsigned __int16 *)v15;
                if ( (v5 & 0x800) != 0 )
                {
                  if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                    goto LABEL_179;
                  LODWORD(v11) = *(unsigned __int16 *)v15 >> 1;
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
            v22 = 7;
LABEL_75:
            v51 = v22;
            v16 = 16;
            if ( (v5 & 0x80u) != 0 )
            {
              v43[0] = 48;
              v43[1] = v22 + 81;
              v8 = 2;
            }
            goto LABEL_28;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x800u;
        }
        v15 = (unsigned int)v7;
        if ( v7 == -1 )
          v15 = 0x7FFFFFFFLL;
        v18 = *(char **)a3;
        v48 = a3 + 2;
        if ( (v5 & 0x810) == 0 )
        {
          v13 = "(null)";
          if ( v18 )
            v13 = v18;
          for ( i = v13; (_DWORD)v15; ++i )
          {
            v15 = (unsigned int)(v15 - 1);
            if ( !*i )
              break;
          }
          LODWORD(v11) = (_DWORD)i - (_DWORD)v13;
          v44 = (_DWORD)i - (_DWORD)v13;
          goto LABEL_106;
        }
        v49 = 1;
        v13 = (char *)L"(null)";
        if ( v18 )
          v13 = v18;
        for ( j = v13; (_DWORD)v15; j += 2 )
        {
          v15 = (unsigned int)(v15 - 1);
          if ( !*(_WORD *)j )
            break;
        }
        v11 = (j - v13) >> 1;
        goto LABEL_105;
    }
    v10 = *a2;
  }
  while ( *a2 );
  if ( v12 && v12 != 7 )
  {
LABEL_179:
    xHalFreeMessageTarget();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v46;
}
