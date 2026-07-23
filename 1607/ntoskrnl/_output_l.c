/*
 * XREFs of _output_l @ 0x140150B48
 * Callers:
 *     _vsnprintf_l @ 0x14014D330 (_vsnprintf_l.c)
 *     _snprintf @ 0x14014D750 (_snprintf.c)
 *     sprintf @ 0x14014E914 (sprintf.c)
 *     _vsprintf_l @ 0x14014F438 (_vsprintf_l.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     wctomb_s @ 0x14014FB5C (wctomb_s.c)
 *     write_char_0 @ 0x140151390 (write_char_0.c)
 *     write_string_0 @ 0x1401513D8 (write_string_0.c)
 *     _get_printf_count_output @ 0x140151A24 (_get_printf_count_output.c)
 *     write_multi_char_0 @ 0x1401542FC (write_multi_char_0.c)
 */

__int64 __fastcall output_l(__int64 a1, char *a2, __int64 a3, int *a4)
{
  __int64 v6; // r11
  int v7; // edi
  int v8; // r15d
  int v9; // edx
  int v10; // r10d
  char v12; // r9
  int v13; // r14d
  int v14; // r8d
  char *v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 j; // rax
  char *v21; // rax
  char *i; // rax
  errno_t v23; // eax
  int v24; // r9d
  __int64 v25; // r8
  int v26; // r8d
  unsigned int v27; // r12d
  char *v28; // rbx
  int v29; // ecx
  char v30; // r10
  unsigned __int64 v31; // rdx
  char v32; // al
  int v33; // eax
  _WORD *v34; // rsi
  unsigned int v35; // r14d
  unsigned int v36; // r15d
  __int64 v37; // rcx
  __int64 v38; // r14
  int v39; // esi
  wchar_t *v40; // r14
  wchar_t v41; // r9
  __int64 v42; // rcx
  char v43; // al
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // [rsp+30h] [rbp-D0h]
  int SizeConverted; // [rsp+34h] [rbp-CCh] BYREF
  int v48; // [rsp+38h] [rbp-C8h] BYREF
  int v49; // [rsp+3Ch] [rbp-C4h]
  _BYTE v50[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+4Ch] [rbp-B4h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  int v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+5Ch] [rbp-A4h]
  char *v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+68h] [rbp-98h] BYREF
  char MbCh[144]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v60; // [rsp+100h] [rbp+0h] BYREF
  char v61; // [rsp+26Fh] [rbp+16Fh] BYREF
  char v62[8]; // [rsp+270h] [rbp+170h] BYREF

  v54 = a1;
  v56 = 0;
  v51 = 0;
  v49 = 0;
  v6 = a1;
  v46 = 0;
  v7 = 0;
  v55 = 0;
  v8 = 0;
  v52 = 0;
  v9 = 0;
  v10 = 0;
  if ( a1 && a2 )
  {
    v12 = *a2;
    v13 = 0;
    v48 = 0;
    v14 = 0;
    SizeConverted = 0;
    if ( v12 )
    {
      v15 = v57;
      do
      {
        v57 = ++a2;
        if ( v13 < 0 )
          return (unsigned int)v13;
        if ( (unsigned __int8)(v12 - 32) > 0x58u )
          v16 = 0;
        else
          v16 = _lookuptable[v12 - 32] & 0xF;
        v17 = v14 + 8 * v16;
        v18 = _lookuptable;
        v14 = _lookuptable[v17] >> 4;
        v53 = v14;
        switch ( v14 )
        {
          case 0:
            v45 = 0LL;
            goto LABEL_180;
          case 1:
            v9 = -1;
            v55 = 0;
            v8 = 0;
            v51 = 0;
            v10 = 0;
            v46 = 0;
            v7 = 0;
            v49 = -1;
            v52 = 0;
            break;
          case 2:
            switch ( v12 )
            {
              case ' ':
                v7 |= 2u;
                break;
              case '#':
                v7 |= 0x80u;
                break;
              case '+':
                v7 |= 1u;
                break;
              case '-':
                v7 |= 4u;
                break;
              case '0':
                v7 |= 8u;
                break;
            }
            break;
          case 3:
            if ( v12 != 42 )
            {
              v8 = v12 + 2 * (5 * v8 - 24);
              goto LABEL_167;
            }
            v8 = *a4;
            a4 += 2;
            v51 = v8;
            if ( v8 < 0 )
            {
              v7 |= 4u;
              v8 = -v8;
LABEL_167:
              v51 = v8;
            }
            break;
          case 4:
            v9 = 0;
            goto LABEL_162;
          case 5:
            if ( v12 != 42 )
            {
              v9 = v12 + 2 * (5 * v9 - 24);
              goto LABEL_162;
            }
            v9 = *a4;
            a4 += 2;
            v49 = v9;
            if ( v9 < 0 )
            {
              v9 = -1;
LABEL_162:
              v49 = v9;
            }
            break;
          case 6:
            if ( v12 != 73 )
            {
              switch ( v12 )
              {
                case 'h':
                  v7 |= 0x20u;
                  break;
                case 'l':
                  if ( *a2 == 108 )
                  {
                    ++a2;
                    v7 |= 0x1000u;
                  }
                  else
                  {
                    v7 |= 0x10u;
                  }
                  break;
                case 'w':
                  v7 |= 0x800u;
                  break;
              }
              break;
            }
            v43 = *a2;
            v7 |= 0x8000u;
            if ( *a2 == 54 && a2[1] == 52 )
            {
              a2 += 2;
              v7 |= 0x8000u;
            }
            else
            {
              if ( v43 != 51 || a2[1] != 50 )
              {
                LOBYTE(v18) = v43 - 88;
                if ( (unsigned __int8)v18 <= 0x20u )
                {
                  v44 = 0x120821001LL;
                  if ( _bittest64(&v44, (unsigned __int64)v18) )
                    break;
                }
                v45 = 0LL;
                v53 = 0;
LABEL_180:
                v52 = 0;
                LOBYTE(v45) = v12;
                write_char_0(v45, v6, &v48);
                v13 = v48;
LABEL_181:
                v10 = v46;
LABEL_182:
                v14 = v53;
                v6 = v54;
                v9 = v49;
                break;
              }
              a2 += 2;
              v7 &= ~0x8000u;
            }
            break;
          case 7:
            if ( v12 > 105 )
            {
              switch ( v12 )
              {
                case 'n':
                  v34 = *(_WORD **)a4;
                  a4 += 2;
                  if ( !get_printf_count_output() )
                    goto LABEL_185;
                  if ( (v7 & 0x20) != 0 )
                    *v34 = v13;
                  else
                    *(_DWORD *)v34 = v13;
                  a2 = v57;
                  v10 = v46;
                  v55 = 1;
                  goto LABEL_26;
                case 'o':
                  v24 = 8;
                  if ( (v7 & 0x80u) != 0 )
                    v7 |= 0x200u;
                  goto LABEL_56;
                case 'p':
                  v49 = 16;
                  v7 |= 0x8000u;
                  goto LABEL_79;
              }
              if ( v12 != 115 )
              {
                v19 = (unsigned int)(v12 - 117);
                if ( v12 == 117 )
                  goto LABEL_55;
                if ( v12 != 120 )
                  goto LABEL_26;
                v26 = 39;
                goto LABEL_80;
              }
            }
            else
            {
              if ( v12 == 105 )
                goto LABEL_54;
              v19 = (unsigned int)(v12 - 67);
              if ( v12 == 67 )
              {
                if ( (v7 & 0x830) == 0 )
                  v7 |= 0x800u;
                goto LABEL_49;
              }
              if ( v12 != 83 )
              {
                if ( v12 != 88 )
                {
                  if ( v12 != 90 )
                  {
                    v19 = (unsigned int)(v12 - 99);
                    if ( v12 != 99 )
                    {
                      if ( v12 != 100 )
                        goto LABEL_26;
LABEL_54:
                      v7 |= 0x40u;
LABEL_55:
                      v24 = 10;
LABEL_56:
                      if ( (v7 & 0x8000) != 0 || (v7 & 0x1000) != 0 )
                      {
                        v25 = *(_QWORD *)a4;
                        a4 += 2;
                      }
                      else
                      {
                        a4 += 2;
                        if ( (v7 & 0x20) != 0 )
                        {
                          if ( (v7 & 0x40) != 0 )
                            v25 = *((__int16 *)a4 - 4);
                          else
                            v25 = *((unsigned __int16 *)a4 - 4);
                        }
                        else if ( (v7 & 0x40) != 0 )
                        {
                          v25 = *(a4 - 2);
                        }
                        else
                        {
                          v25 = (unsigned int)*(a4 - 2);
                        }
                      }
                      if ( (v7 & 0x40) != 0 && v25 < 0 )
                      {
                        v25 = -v25;
                        v7 |= 0x100u;
                      }
                      if ( (v7 & 0x9000) == 0 )
                        v25 = (unsigned int)v25;
                      v27 = v49;
                      if ( v49 >= 0 )
                      {
                        v7 &= ~8u;
                        if ( v49 > 512 )
                          v27 = 512;
                      }
                      else
                      {
                        v27 = 1;
                      }
                      v28 = &v61;
                      v29 = v25 != 0 ? v10 : 0;
                      v30 = v56;
                      v46 = v29;
                      while ( 1 )
                      {
                        v19 = v27--;
                        if ( (int)v19 <= 0 && !v25 )
                          break;
                        v31 = v25 % (unsigned __int64)v24;
                        v25 /= (unsigned __int64)v24;
                        v32 = v31 + 48;
                        if ( (int)v31 + 48 > 57 )
                          v32 += v30;
                        *v28-- = v32;
                      }
                      v10 = v46;
                      v33 = (unsigned int)&v60 + 367 - (_DWORD)v28;
                      v49 = v27;
                      v15 = v28 + 1;
                      SizeConverted = v33;
                      if ( (v7 & 0x200) != 0 && (!v33 || *v15 != 48) )
                      {
                        --v15;
                        ++SizeConverted;
                        *v15 = 48;
                      }
LABEL_26:
                      if ( v55 )
                        goto LABEL_182;
                      if ( (v7 & 0x40) == 0 )
                        goto LABEL_120;
                      if ( (v7 & 0x100) != 0 )
                      {
                        v50[0] = 45;
                        goto LABEL_117;
                      }
                      if ( (v7 & 1) != 0 )
                      {
                        v50[0] = 43;
                        goto LABEL_117;
                      }
                      if ( (v7 & 2) != 0 )
                      {
                        v50[0] = 32;
LABEL_117:
                        v35 = 1;
                        v46 = 1;
                      }
                      else
                      {
LABEL_120:
                        v35 = v46;
                      }
                      v36 = v8 - SizeConverted - v35;
                      if ( (v7 & 0xC) == 0 )
                      {
                        LOBYTE(v19) = 32;
                        write_multi_char_0(v19, v36, v54, &v48);
                      }
                      write_string_0(v50, v35, v54, &v48);
                      v38 = v54;
                      if ( (v7 & 0xC) == 8 )
                      {
                        LOBYTE(v37) = 48;
                        write_multi_char_0(v37, v36, v54, &v48);
                      }
                      v39 = SizeConverted;
                      if ( v52 && SizeConverted > 0 )
                      {
                        v40 = (wchar_t *)v15;
                        while ( 1 )
                        {
                          v41 = *v40++;
                          --v39;
                          if ( wctomb_s(&v58, v62, 6uLL, v41) || !v58 )
                            break;
                          write_string_0(v62, (unsigned int)v58, v54, &v48);
                          if ( !v39 )
                            goto LABEL_134;
                        }
                        v13 = -1;
                        v48 = -1;
                      }
                      else
                      {
                        write_string_0(v15, (unsigned int)SizeConverted, v38, &v48);
LABEL_134:
                        v13 = v48;
                      }
                      if ( v13 >= 0 && (v7 & 4) != 0 )
                      {
                        LOBYTE(v42) = 32;
                        write_multi_char_0(v42, v36, v54, &v48);
                        v13 = v48;
                      }
                      a2 = v57;
                      v8 = v51;
                      goto LABEL_181;
                    }
LABEL_49:
                    a4 += 2;
                    if ( (v7 & 0x810) != 0 )
                    {
                      v23 = wctomb_s(&SizeConverted, MbCh, 0x200uLL, *((_WORD *)a4 - 4));
                      v10 = v46;
                      if ( v23 )
                        v55 = 1;
                    }
                    else
                    {
                      MbCh[0] = *((_BYTE *)a4 - 8);
                      SizeConverted = 1;
                    }
                    v15 = MbCh;
                    goto LABEL_26;
                  }
                  v19 = *(_QWORD *)a4;
                  a4 += 2;
                  if ( !v19 || (v15 = *(char **)(v19 + 8)) == 0LL )
                  {
                    v15 = "(null)";
                    SizeConverted = 6;
                    goto LABEL_26;
                  }
                  LOWORD(j) = *(_WORD *)v19;
                  if ( *(_WORD *)(v19 + 2) < *(_WORD *)v19 )
                    goto LABEL_185;
                  if ( (v7 & 0x800) != 0 )
                  {
                    if ( (j & 1) != 0 || ((unsigned __int8)v15 & 1) != 0 )
                    {
LABEL_185:
                      xHalFreeMessageTarget();
                      return 0xFFFFFFFFLL;
                    }
                    SizeConverted = (unsigned __int16)j >> 1;
                    v52 = 1;
                    goto LABEL_26;
                  }
                  v52 = 0;
                  LODWORD(j) = (unsigned __int16)j;
LABEL_77:
                  SizeConverted = j;
                  goto LABEL_26;
                }
LABEL_79:
                v26 = 7;
LABEL_80:
                v56 = v26;
                v24 = 16;
                if ( (v7 & 0x80u) != 0 )
                {
                  v50[0] = 48;
                  v50[1] = v26 + 81;
                  v10 = 2;
                }
                goto LABEL_56;
              }
              if ( (v7 & 0x830) == 0 )
                v7 |= 0x800u;
            }
            v19 = (unsigned int)v9;
            if ( v9 == -1 )
              v19 = 0x7FFFFFFFLL;
            v21 = *(char **)a4;
            a4 += 2;
            if ( (v7 & 0x810) != 0 )
            {
              v52 = 1;
              v15 = (char *)L"(null)";
              if ( v21 )
                v15 = v21;
              for ( i = v15; (_DWORD)v19; i += 2 )
              {
                v19 = (unsigned int)(v19 - 1);
                if ( !*(_WORD *)i )
                  break;
              }
              j = (i - v15) >> 1;
            }
            else
            {
              v15 = "(null)";
              if ( v21 )
                v15 = v21;
              for ( j = (__int64)v15; (_DWORD)v19; ++j )
              {
                v19 = (unsigned int)(v19 - 1);
                if ( !*(_BYTE *)j )
                  break;
              }
              LODWORD(j) = j - (_DWORD)v15;
            }
            goto LABEL_77;
        }
        v12 = *a2;
      }
      while ( *a2 );
    }
    return (unsigned int)v13;
  }
  else
  {
    xHalFreeMessageTarget();
    return 0xFFFFFFFFLL;
  }
}
