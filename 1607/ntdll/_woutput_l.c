/*
 * XREFs of _woutput_l @ 0x18009DA60
 * Callers:
 *     _snwprintf @ 0x180097990 (_snwprintf.c)
 *     swprintf @ 0x180097F90 (swprintf.c)
 *     _vswprintf_l @ 0x1800980D4 (_vswprintf_l.c)
 *     _vsnwprintf_l @ 0x18009826C (_vsnwprintf_l.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     write_char_0 @ 0x18009E340 (write_char_0.c)
 *     write_multi_char_0 @ 0x18009E390 (write_multi_char_0.c)
 *     write_string_0 @ 0x18009E3E8 (write_string_0.c)
 *     _get_printf_count_output @ 0x1800A08FC (_get_printf_count_output.c)
 *     mbtowc @ 0x1800A0A48 (mbtowc.c)
 */

__int64 __fastcall woutput_l(__int64 a1, char *a2, __int64 a3, wchar_t *a4)
{
  wchar_t *v5; // r10
  int v6; // edi
  int v7; // r12d
  int v8; // edx
  int v9; // r11d
  unsigned __int16 v11; // r9
  int v12; // r15d
  __int64 v13; // r13
  int v14; // r8d
  char *v15; // rbx
  int v16; // eax
  __int16 v17; // cx
  unsigned __int16 *v18; // rcx
  int v19; // ecx
  char *v20; // rax
  _BYTE *v21; // rax
  wchar_t v22; // ax
  int v23; // eax
  int v24; // r9d
  __int64 v25; // r8
  wchar_t *v26; // r10
  int v27; // r8d
  char *i; // r13
  int v29; // r15d
  char *v30; // rbx
  int v31; // ecx
  char v32; // r11
  int v33; // ecx
  unsigned __int64 v34; // rdx
  char v35; // al
  unsigned int v36; // eax
  _WORD *v37; // rsi
  unsigned int v38; // r15d
  unsigned int v39; // r12d
  __int64 v40; // rsi
  const char *v41; // r15
  int v42; // esi
  int v43; // eax
  __int64 v44; // r14
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  int v47; // [rsp+30h] [rbp-D0h]
  int v48; // [rsp+34h] [rbp-CCh] BYREF
  int v49; // [rsp+38h] [rbp-C8h]
  wchar_t *v50; // [rsp+40h] [rbp-C0h]
  int v51; // [rsp+48h] [rbp-B8h]
  int v52; // [rsp+4Ch] [rbp-B4h]
  int v53; // [rsp+50h] [rbp-B0h]
  char SrcCh[4]; // [rsp+54h] [rbp-ACh] BYREF
  wchar_t v55[2]; // [rsp+58h] [rbp-A8h] BYREF
  _WORD v56[2]; // [rsp+5Ch] [rbp-A4h] BYREF
  int v57; // [rsp+60h] [rbp-A0h]
  __int64 v58; // [rsp+68h] [rbp-98h]
  int v59; // [rsp+70h] [rbp-90h]
  char *v60; // [rsp+78h] [rbp-88h]
  wchar_t DstCh[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v62; // [rsp+100h] [rbp+0h] BYREF
  char v63; // [rsp+27Fh] [rbp+17Fh] BYREF

  v50 = a4;
  v58 = a1;
  v59 = 0;
  v5 = a4;
  v52 = 0;
  v6 = 0;
  v49 = 0;
  v7 = 0;
  v47 = 0;
  v8 = 0;
  v57 = 0;
  v9 = 0;
  v51 = 0;
  if ( a1 && a2 )
  {
    v11 = *(_WORD *)a2;
    v12 = 0;
    v48 = 0;
    LODWORD(v13) = 0;
    v14 = 0;
    if ( v11 )
    {
      v15 = v60;
      do
      {
        a2 += 2;
        v60 = a2;
        if ( v12 < 0 )
          return (unsigned int)v12;
        if ( (unsigned __int16)(v11 - 32) > 0x58u )
          v16 = 0;
        else
          v16 = _lookuptable[v11 - 32] & 0xF;
        v14 = _lookuptable[8 * v16 + v14] >> 4;
        v53 = v14;
        switch ( v14 )
        {
          case 0:
            goto LABEL_161;
          case 1:
            v8 = -1;
            v57 = 0;
            v7 = 0;
            v52 = 0;
            v9 = 0;
            v47 = 0;
            v6 = 0;
            v49 = -1;
            v51 = 0;
            break;
          case 2:
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
          case 3:
            if ( v11 != 42 )
            {
              v7 = v11 + 2 * (5 * v7 - 24);
              goto LABEL_172;
            }
            v7 = *(_DWORD *)v5;
            v5 += 4;
            v50 = v5;
            v52 = v7;
            if ( v7 < 0 )
            {
              v6 |= 4u;
              v7 = -v7;
LABEL_172:
              v52 = v7;
            }
            break;
          case 4:
            v8 = 0;
            goto LABEL_167;
          case 5:
            if ( v11 != 42 )
            {
              v8 = v11 + 2 * (5 * v8 - 24);
              goto LABEL_167;
            }
            v8 = *(_DWORD *)v5;
            v5 += 4;
            v50 = v5;
            v49 = v8;
            if ( v8 < 0 )
            {
              v8 = -1;
LABEL_167:
              v49 = v8;
            }
            break;
          case 6:
            if ( v11 != 73 )
            {
              switch ( v11 )
              {
                case 'h':
                  v6 |= 0x20u;
                  break;
                case 'l':
                  if ( *(_WORD *)a2 == 108 )
                  {
                    a2 += 2;
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
            v45 = *(unsigned __int16 *)a2;
            v6 |= 0x8000u;
            if ( *(_DWORD *)a2 == 3407926 )
            {
              a2 += 4;
              v6 |= 0x8000u;
              break;
            }
            if ( (_WORD)v45 == 51 && *((_WORD *)a2 + 1) == 50 )
            {
              a2 += 4;
              v6 &= ~0x8000u;
              break;
            }
            LOWORD(v45) = v45 - 88;
            if ( (unsigned __int16)v45 <= 0x20u )
            {
              v46 = 0x120821001LL;
              if ( _bittest64(&v46, v45) )
                break;
            }
            v53 = 0;
LABEL_161:
            v51 = 1;
            write_char_0(v11, v58, &v48);
            v12 = v48;
            goto LABEL_140;
          case 7:
            if ( v11 > 0x69u )
            {
              switch ( v11 )
              {
                case 'n':
                  v37 = *(_WORD **)v5;
                  v50 = v5 + 4;
                  if ( !get_printf_count_output() )
                    goto LABEL_184;
                  if ( (v6 & 0x20) != 0 )
                    *v37 = v12;
                  else
                    *(_DWORD *)v37 = v12;
                  a2 = v60;
                  v9 = v47;
                  v57 = 1;
                  goto LABEL_26;
                case 'o':
                  v24 = 8;
                  if ( (v6 & 0x80u) != 0 )
                    v6 |= 0x200u;
                  goto LABEL_59;
                case 'p':
                  v49 = 16;
                  v6 |= 0x8000u;
                  goto LABEL_76;
              }
              if ( v11 != 115 )
              {
                if ( v11 == 117 )
                  goto LABEL_58;
                if ( v11 != 120 )
                  goto LABEL_26;
                v27 = 39;
                goto LABEL_77;
              }
            }
            else
            {
              if ( v11 == 105 )
                goto LABEL_57;
              if ( v11 == 67 )
              {
                if ( (v6 & 0x830) == 0 )
                  v6 |= 0x20u;
                goto LABEL_52;
              }
              if ( v11 != 83 )
              {
                if ( v11 != 88 )
                {
                  if ( v11 == 90 )
                  {
                    v18 = *(unsigned __int16 **)v5;
                    v50 = v5 + 4;
                    if ( v18 && (v15 = (char *)*((_QWORD *)v18 + 1)) != 0LL )
                    {
                      if ( v18[1] < *v18 )
                        goto LABEL_184;
                      LODWORD(v13) = *v18;
                      if ( (v6 & 0x800) != 0 )
                      {
                        if ( (v13 & 1) != 0 || ((unsigned __int8)v15 & 1) != 0 )
                        {
LABEL_184:
                          invalid_parameter();
                          return 0xFFFFFFFFLL;
                        }
                        LODWORD(v13) = *v18 >> 1;
                        v51 = 1;
                      }
                      else
                      {
                        v51 = 0;
                      }
                    }
                    else
                    {
                      v15 = "(null)";
                      LODWORD(v13) = 6;
                    }
                    goto LABEL_26;
                  }
                  if ( v11 != 99 )
                  {
                    if ( v11 != 100 )
                      goto LABEL_26;
LABEL_57:
                    v6 |= 0x40u;
LABEL_58:
                    v24 = 10;
LABEL_59:
                    if ( (v6 & 0x8000) != 0 || (v6 & 0x1000) != 0 )
                    {
                      v25 = *(_QWORD *)v5;
                      v26 = v5 + 4;
                    }
                    else
                    {
                      v26 = v5 + 4;
                      if ( (v6 & 0x20) != 0 )
                      {
                        v50 = v26;
                        if ( (v6 & 0x40) != 0 )
                          v25 = (__int16)*(v26 - 4);
                        else
                          v25 = *(v26 - 4);
LABEL_90:
                        if ( (v6 & 0x40) != 0 && v25 < 0 )
                        {
                          v25 = -v25;
                          v6 |= 0x100u;
                        }
                        if ( (v6 & 0x9000) == 0 )
                          v25 = (unsigned int)v25;
                        v29 = v49;
                        if ( v49 >= 0 )
                        {
                          v6 &= ~8u;
                          if ( v49 > 512 )
                            v29 = 512;
                        }
                        else
                        {
                          v29 = 1;
                        }
                        v30 = &v63;
                        v31 = v25 != 0 ? v9 : 0;
                        v32 = v59;
                        v47 = v31;
                        while ( 1 )
                        {
                          v33 = v29--;
                          if ( v33 <= 0 && !v25 )
                            break;
                          v34 = v25 % (unsigned __int64)v24;
                          v25 /= (unsigned __int64)v24;
                          v35 = v34 + 48;
                          if ( (int)v34 + 48 > 57 )
                            v35 += v32;
                          *v30-- = v35;
                        }
                        v9 = v47;
                        v36 = (unsigned int)&v62 + 383 - (_DWORD)v30;
                        v49 = v29;
                        v12 = v48;
                        v15 = v30 + 1;
                        LODWORD(v13) = v36;
                        if ( (v6 & 0x200) != 0 && (!v36 || *v15 != 48) )
                        {
                          --v15;
                          LODWORD(v13) = v36 + 1;
                          *v15 = 48;
                        }
LABEL_26:
                        if ( v57 )
                          goto LABEL_141;
                        if ( (v6 & 0x40) != 0 )
                        {
                          if ( (v6 & 0x100) != 0 )
                          {
                            v17 = 45;
                            goto LABEL_116;
                          }
                          if ( (v6 & 1) != 0 )
                          {
                            v17 = 43;
LABEL_116:
                            v56[0] = v17;
LABEL_117:
                            v38 = 1;
                            v47 = 1;
LABEL_121:
                            v39 = v7 - v13 - v38;
                            if ( (v6 & 0xC) == 0 )
                              write_multi_char_0(32LL, v39, v58, &v48);
                            write_string_0(v56, v38, v58, &v48);
                            v40 = v58;
                            if ( (v6 & 0xC) == 8 )
                              write_multi_char_0(48LL, v39, v58, &v48);
                            if ( v51 || (int)v13 <= 0 )
                            {
                              write_string_0(v15, (unsigned int)v13, v40, &v48);
LABEL_135:
                              v12 = v48;
                            }
                            else
                            {
                              v41 = v15;
                              v42 = v13;
                              while ( 1 )
                              {
                                --v42;
                                v43 = mbtowc(v55, v41, _mb_cur_max);
                                v44 = v43;
                                if ( v43 == 2 )
                                  --v42;
                                if ( v43 <= 0 )
                                  break;
                                write_char_0(v55[0], v58, &v48);
                                v41 += v44;
                                if ( v42 <= 0 )
                                {
                                  v40 = v58;
                                  goto LABEL_135;
                                }
                              }
                              v40 = v58;
                              v12 = -1;
                              v48 = -1;
                            }
                            if ( v12 >= 0 && (v6 & 4) != 0 )
                            {
                              write_multi_char_0(32LL, v39, v40, &v48);
                              v12 = v48;
                            }
                            a2 = v60;
                            v7 = v52;
LABEL_140:
                            v9 = v47;
LABEL_141:
                            v5 = v50;
                            v8 = v49;
                            v14 = v53;
                            break;
                          }
                          if ( (v6 & 2) != 0 )
                          {
                            v56[0] = 32;
                            goto LABEL_117;
                          }
                        }
                        v38 = v47;
                        goto LABEL_121;
                      }
                      if ( (v6 & 0x40) != 0 )
                        v25 = *((int *)v26 - 2);
                      else
                        v25 = *((unsigned int *)v26 - 2);
                    }
                    v50 = v26;
                    goto LABEL_90;
                  }
LABEL_52:
                  v22 = *v5;
                  v55[0] = *v5;
                  v51 = 1;
                  v50 = v5 + 4;
                  if ( (v6 & 0x20) != 0 )
                  {
                    SrcCh[0] = v22;
                    SrcCh[1] = 0;
                    v23 = mbtowc(DstCh, SrcCh, _mb_cur_max);
                    v9 = v47;
                    if ( v23 < 0 )
                      v57 = 1;
                  }
                  else
                  {
                    DstCh[0] = v22;
                  }
                  v15 = (char *)DstCh;
                  LODWORD(v13) = 1;
                  goto LABEL_26;
                }
LABEL_76:
                v27 = 7;
LABEL_77:
                v59 = v27;
                v24 = 16;
                if ( (v6 & 0x80u) != 0 )
                {
                  v56[0] = 48;
                  v9 = 2;
                  v56[1] = v27 + 81;
                }
                goto LABEL_59;
              }
              if ( (v6 & 0x830) == 0 )
                v6 |= 0x20u;
            }
            v19 = v8;
            if ( v8 == -1 )
              v19 = 0x7FFFFFFF;
            v20 = *(char **)v5;
            v50 = v5 + 4;
            if ( (v6 & 0x20) != 0 )
            {
              v15 = "(null)";
              LODWORD(v13) = 0;
              if ( v20 )
                v15 = v20;
              v21 = v15;
              if ( v19 > 0 )
              {
                do
                {
                  if ( !*v21 )
                    break;
                  ++v21;
                  LODWORD(v13) = v13 + 1;
                }
                while ( (int)v13 < v19 );
              }
            }
            else
            {
              v51 = 1;
              v15 = (char *)L"(null)";
              if ( v20 )
                v15 = v20;
              for ( i = v15; v19; i += 2 )
              {
                --v19;
                if ( !*(_WORD *)i )
                  break;
              }
              v13 = (i - v15) >> 1;
            }
            goto LABEL_26;
        }
        v11 = *(_WORD *)a2;
      }
      while ( *(_WORD *)a2 );
    }
    return (unsigned int)v12;
  }
  else
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
}
