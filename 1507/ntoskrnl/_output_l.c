/*
 * XREFs of _output_l @ 0x140175228
 * Callers:
 *     _vsnprintf_l @ 0x140171B44 (_vsnprintf_l.c)
 *     _snprintf @ 0x140171E40 (_snprintf.c)
 *     sprintf @ 0x140172FA4 (sprintf.c)
 *     _vsprintf_l @ 0x140173ACC (_vsprintf_l.c)
 * Callees:
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wctomb_s @ 0x1401741F0 (wctomb_s.c)
 *     write_char_0 @ 0x140175A6C (write_char_0.c)
 *     write_multi_char_0 @ 0x140175AB4 (write_multi_char_0.c)
 *     write_string_0 @ 0x140175B08 (write_string_0.c)
 *     _get_printf_count_output @ 0x14017615C (_get_printf_count_output.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, int *a4)
{
  char *v5; // rsi
  int v6; // edi
  int v7; // r15d
  int v8; // r10d
  int v9; // r11d
  char v11; // r9
  int v12; // r14d
  unsigned int v13; // edx
  char *v14; // rbx
  int v15; // ecx
  char *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r9d
  __int64 v20; // r8
  __int64 j; // rax
  char *v22; // rax
  char *i; // rax
  errno_t v24; // eax
  int v25; // r8d
  char *v26; // rbx
  int v27; // ecx
  char v28; // r11
  unsigned __int64 v29; // rdx
  char v30; // al
  int v31; // eax
  _WORD *v32; // rsi
  unsigned int v33; // r14d
  unsigned int v34; // r15d
  __int64 v35; // rcx
  __int64 v36; // r14
  int v37; // esi
  wchar_t *v38; // r14
  wchar_t v39; // r9
  __int64 v40; // rcx
  char v41; // al
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+34h] [rbp-CCh] BYREF
  int SizeConverted; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v45[4]; // [rsp+3Ch] [rbp-C4h] BYREF
  int v46; // [rsp+40h] [rbp-C0h]
  int v47; // [rsp+44h] [rbp-BCh]
  int v48; // [rsp+48h] [rbp-B8h]
  unsigned int v49; // [rsp+4Ch] [rbp-B4h]
  int v50; // [rsp+50h] [rbp-B0h]
  int v51; // [rsp+54h] [rbp-ACh]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  char *v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+68h] [rbp-98h] BYREF
  char MbCh[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+100h] [rbp+0h] BYREF
  char v57; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v58[8]; // [rsp+270h] [rbp+170h] BYREF

  v52 = a1;
  v47 = 0;
  v46 = 0;
  v51 = 0;
  v42 = 0;
  v5 = a2;
  v50 = 0;
  v6 = 0;
  v48 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( a1 && a2 )
  {
    v11 = *a2;
    v12 = 0;
    v43 = 0;
    v13 = 0;
    SizeConverted = 0;
    if ( v11 )
    {
      v14 = v53;
      do
      {
        v53 = ++v5;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int8)(v11 - 32) > 0x58u )
          v15 = 0;
        else
          v15 = _lookuptable[v11 - 32] & 0xF;
        v16 = _lookuptable;
        v13 = _lookuptable[8 * v15 + v13] >> 4;
        v49 = v13;
        v17 = v13;
        switch ( v13 )
        {
          case 0u:
            goto $NORMAL_STATE$217;
          case 1u:
            v50 = 0;
            v7 = 0;
            v47 = 0;
            v9 = 0;
            v42 = 0;
            v6 = 0;
            v8 = -1;
            v46 = -1;
            v48 = 0;
            break;
          case 2u:
            switch ( v11 )
            {
              case ' ':
                v6 |= 2u;
                break;
              case '#':
                v6 |= 0x80u;
                break;
              case '+':
                v6 |= 1u;
                break;
              case '-':
                v6 |= 4u;
                break;
              case '0':
                v6 |= 8u;
                break;
            }
            break;
          case 3u:
            if ( v11 != 42 )
            {
              v7 = v11 + 2 * (5 * v7 - 24);
              goto LABEL_172;
            }
            v7 = *a4;
            a4 += 2;
            v47 = v7;
            if ( v7 < 0 )
            {
              v6 |= 4u;
              v7 = -v7;
LABEL_172:
              v47 = v7;
            }
            break;
          case 4u:
            v8 = 0;
            v46 = 0;
            break;
          case 5u:
            if ( v11 == 42 )
            {
              v8 = *a4;
              a4 += 2;
              v46 = v8;
              if ( v8 < 0 )
              {
                v8 = -1;
                v46 = -1;
              }
            }
            else
            {
              v8 = v11 + 2 * (5 * v8 - 24);
              v46 = v8;
            }
            break;
          default:
            v17 = v13 - 6;
            if ( v13 == 6 )
            {
              if ( v11 != 73 )
              {
                switch ( v11 )
                {
                  case 'h':
                    v6 |= 0x20u;
                    break;
                  case 'l':
                    if ( *v5 == 108 )
                    {
                      ++v5;
                      v6 |= 0x1000u;
                    }
                    else
                    {
                      v6 |= 0x10u;
                    }
                    break;
                  case 'w':
                    v6 |= 0x800u;
                    break;
                }
                break;
              }
              v41 = *v5;
              v6 |= 0x8000u;
              if ( *v5 == 54 && v5[1] == 52 )
              {
                v5 += 2;
                v6 |= 0x8000u;
              }
              else
              {
                if ( v41 != 51 || v5[1] != 50 )
                {
                  LOBYTE(v16) = v41 - 88;
                  if ( (unsigned __int8)v16 <= 0x20u )
                  {
                    v17 = 0x120821001LL;
                    if ( _bittest64(&v17, (unsigned __int64)v16) )
                      break;
                  }
                  v49 = 0;
$NORMAL_STATE$217:
                  LOBYTE(v17) = v11;
                  v48 = 0;
                  write_char_0(v17, v52, &v43);
LABEL_158:
                  v12 = v43;
                  goto LABEL_159;
                }
                v5 += 2;
                v6 &= ~0x8000u;
              }
            }
            else if ( v13 == 7 )
            {
              if ( v11 > 105 )
              {
                switch ( v11 )
                {
                  case 'n':
                    v32 = *(_WORD **)a4;
                    a4 += 2;
                    if ( !get_printf_count_output() )
                      goto LABEL_184;
                    if ( (v6 & 0x20) != 0 )
                      *v32 = v12;
                    else
                      *(_DWORD *)v32 = v12;
                    v5 = v53;
                    v9 = v42;
                    v50 = 1;
                    goto LABEL_111;
                  case 'o':
                    v19 = 8;
                    if ( (v6 & 0x80u) != 0 )
                      v6 |= 0x200u;
                    goto $COMMON_INT$215;
                  case 'p':
                    v8 = 16;
                    v6 |= 0x8000u;
                    goto LABEL_75;
                }
                if ( v11 != 115 )
                {
                  v18 = (unsigned int)(v11 - 117);
                  if ( v11 != 117 )
                  {
                    if ( v11 != 120 )
                      goto LABEL_111;
                    v25 = 39;
                    goto LABEL_76;
                  }
LABEL_27:
                  v19 = 10;
$COMMON_INT$215:
                  if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
                  {
                    v20 = *(_QWORD *)a4;
                    a4 += 2;
                  }
                  else
                  {
                    a4 += 2;
                    if ( (v6 & 0x20) != 0 )
                    {
                      if ( (v6 & 0x40) != 0 )
                        v20 = *((__int16 *)a4 - 4);
                      else
                        v20 = *((unsigned __int16 *)a4 - 4);
                    }
                    else if ( (v6 & 0x40) != 0 )
                    {
                      v20 = *(a4 - 2);
                    }
                    else
                    {
                      v20 = (unsigned int)*(a4 - 2);
                    }
                  }
                  if ( (v6 & 0x40) != 0 && v20 < 0 )
                  {
                    v20 = -v20;
                    v6 |= 0x100u;
                  }
                  if ( (v6 & 0x9000) == 0 )
                    v20 = (unsigned int)v20;
                  if ( v8 >= 0 )
                  {
                    v6 &= ~8u;
                    if ( v8 > 512 )
                      v8 = 512;
                  }
                  else
                  {
                    v8 = 1;
                  }
                  v26 = &v57;
                  v27 = v20 != 0 ? v9 : 0;
                  v28 = v51;
                  v42 = v27;
                  while ( 1 )
                  {
                    v18 = (unsigned int)v8--;
                    if ( (int)v18 <= 0 && !v20 )
                      break;
                    v29 = v20 % (unsigned __int64)v19;
                    v20 /= (unsigned __int64)v19;
                    v30 = v29 + 48;
                    if ( (int)v29 + 48 > 57 )
                      v30 += v28;
                    *v26-- = v30;
                  }
                  v9 = v42;
                  v31 = (unsigned int)&v56 + 367 - (_DWORD)v26;
                  v46 = v8;
                  v14 = v26 + 1;
                  SizeConverted = v31;
                  if ( (v6 & 0x200) != 0 && (!v31 || *v14 != 48) )
                  {
                    --v14;
                    ++SizeConverted;
                    *v14 = 48;
                  }
                  goto LABEL_111;
                }
              }
              else
              {
                if ( v11 == 105 )
                  goto LABEL_26;
                v18 = (unsigned int)(v11 - 67);
                if ( v11 == 67 )
                {
                  if ( (v6 & 0x830) == 0 )
                    v6 |= 0x800u;
                  goto LABEL_50;
                }
                if ( v11 != 83 )
                {
                  if ( v11 != 88 )
                  {
                    if ( v11 != 90 )
                    {
                      v18 = (unsigned int)(v11 - 99);
                      if ( v11 != 99 )
                      {
                        if ( v11 == 100 )
                        {
LABEL_26:
                          v6 |= 0x40u;
                          goto LABEL_27;
                        }
LABEL_111:
                        if ( !v50 )
                        {
                          if ( (v6 & 0x40) == 0 )
                            goto LABEL_120;
                          if ( (v6 & 0x100) != 0 )
                          {
                            v45[0] = 45;
                            goto LABEL_117;
                          }
                          if ( (v6 & 1) != 0 )
                          {
                            v45[0] = 43;
                            goto LABEL_117;
                          }
                          if ( (v6 & 2) != 0 )
                          {
                            v45[0] = 32;
LABEL_117:
                            v33 = 1;
                            v42 = 1;
                          }
                          else
                          {
LABEL_120:
                            v33 = v42;
                          }
                          v34 = v7 - SizeConverted - v33;
                          if ( (v6 & 0xC) == 0 )
                          {
                            LOBYTE(v18) = 32;
                            write_multi_char_0(v18, v34, v52, &v43);
                          }
                          write_string_0(v45, v33, v52, &v43);
                          v36 = v52;
                          if ( (v6 & 0xC) == 8 )
                          {
                            LOBYTE(v35) = 48;
                            write_multi_char_0(v35, v34, v52, &v43);
                          }
                          v37 = SizeConverted;
                          if ( v48 && SizeConverted > 0 )
                          {
                            v38 = (wchar_t *)v14;
                            while ( 1 )
                            {
                              v39 = *v38++;
                              --v37;
                              if ( wctomb_s(&v54, v58, 6uLL, v39) || !v54 )
                                break;
                              write_string_0(v58, (unsigned int)v54, v52, &v43);
                              if ( !v37 )
                                goto LABEL_134;
                            }
                            v12 = -1;
                            v43 = -1;
                          }
                          else
                          {
                            write_string_0(v14, (unsigned int)SizeConverted, v36, &v43);
LABEL_134:
                            v12 = v43;
                          }
                          if ( v12 >= 0 && (v6 & 4) != 0 )
                          {
                            LOBYTE(v40) = 32;
                            write_multi_char_0(v40, v34, v52, &v43);
                            v5 = v53;
                            v7 = v47;
                            goto LABEL_158;
                          }
                          v5 = v53;
                          v7 = v47;
LABEL_159:
                          v9 = v42;
                        }
                        v13 = v49;
                        v8 = v46;
                        break;
                      }
LABEL_50:
                      a4 += 2;
                      if ( (v6 & 0x810) != 0 )
                      {
                        v24 = wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4));
                        v9 = v42;
                        if ( v24 )
                          v50 = 1;
                      }
                      else
                      {
                        MbCh[0] = *((_BYTE *)a4 - 8);
                        SizeConverted = 1;
                      }
                      v14 = MbCh;
                      goto LABEL_111;
                    }
                    v18 = *(_QWORD *)a4;
                    a4 += 2;
                    if ( !v18 || (v14 = *(char **)(v18 + 8)) == 0LL )
                    {
                      v14 = "(null)";
                      SizeConverted = 6;
                      goto LABEL_111;
                    }
                    LOWORD(j) = *(_WORD *)v18;
                    if ( *(_WORD *)(v18 + 2) < *(_WORD *)v18 )
                      goto LABEL_184;
                    if ( (v6 & 0x800) != 0 )
                    {
                      if ( (j & 1) != 0 || ((unsigned __int8)v14 & 1) != 0 )
                      {
LABEL_184:
                        PopPoCoalescinCallback();
                        return 0xFFFFFFFFLL;
                      }
                      SizeConverted = (unsigned __int16)j >> 1;
                      v48 = 1;
                      goto LABEL_111;
                    }
                    v48 = 0;
                    LODWORD(j) = (unsigned __int16)j;
LABEL_73:
                    SizeConverted = j;
                    goto LABEL_111;
                  }
LABEL_75:
                  v25 = 7;
LABEL_76:
                  v51 = v25;
                  v19 = 16;
                  if ( (v6 & 0x80u) != 0 )
                  {
                    v45[0] = 48;
                    v45[1] = v25 + 81;
                    v9 = 2;
                  }
                  goto $COMMON_INT$215;
                }
                if ( (v6 & 0x830) == 0 )
                  v6 |= 0x800u;
              }
              v18 = (unsigned int)v8;
              if ( v8 == -1 )
                v18 = 0x7FFFFFFFLL;
              v22 = *(char **)a4;
              a4 += 2;
              if ( (v6 & 0x810) != 0 )
              {
                v48 = 1;
                v14 = (char *)L"(null)";
                if ( v22 )
                  v14 = v22;
                for ( i = v14; (_DWORD)v18; i += 2 )
                {
                  v18 = (unsigned int)(v18 - 1);
                  if ( !*(_WORD *)i )
                    break;
                }
                j = (i - v14) >> 1;
              }
              else
              {
                v14 = "(null)";
                if ( v22 )
                  v14 = v22;
                for ( j = (__int64)v14; (_DWORD)v18; ++j )
                {
                  v18 = (unsigned int)(v18 - 1);
                  if ( !*(_BYTE *)j )
                    break;
                }
                LODWORD(j) = j - (_DWORD)v14;
              }
              goto LABEL_73;
            }
            break;
        }
        v11 = *v5;
      }
      while ( *v5 );
    }
    return (unsigned int)v12;
  }
  else
  {
    PopPoCoalescinCallback();
    return 0xFFFFFFFFLL;
  }
}
