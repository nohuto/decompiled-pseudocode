/*
 * XREFs of _woutput_s @ 0x1800A41B0
 * Callers:
 *     _swoutput_s @ 0x1800A4098 (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x1800A30E8 (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x1800A4A90 (write_char_2.c)
 *     write_multi_char_2 @ 0x1800A4AF0 (write_multi_char_2.c)
 *     write_string_2 @ 0x1800A4B40 (write_string_2.c)
 */

__int64 __fastcall woutput_s(__int64 a1, WCHAR *a2, int *a3)
{
  int v4; // edx
  int v5; // edi
  int v6; // esi
  int v7; // r10d
  int v8; // r15d
  WCHAR v10; // r9
  __int64 v11; // r12
  int v12; // r11d
  WCHAR *v13; // rbx
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // r8
  unsigned __int16 *v17; // rcx
  int v18; // ecx
  WCHAR *v19; // rax
  _BYTE *v20; // rax
  WCHAR v21; // ax
  int v22; // eax
  int v23; // eax
  _WORD *i; // r12
  int *v25; // r8
  char *v26; // rbx
  int v27; // ecx
  char v28; // r15
  int v29; // ecx
  unsigned __int64 v30; // rdx
  char v31; // al
  __int16 v32; // ax
  unsigned int v33; // eax
  unsigned int v34; // r15d
  __int64 v35; // rsi
  UCHAR *v36; // r14
  int v37; // esi
  int v38; // eax
  __int64 v39; // r11
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // [rsp+30h] [rbp-D0h]
  int v43; // [rsp+34h] [rbp-CCh]
  int v44; // [rsp+38h] [rbp-C8h]
  int v45; // [rsp+3Ch] [rbp-C4h] BYREF
  int *v46; // [rsp+40h] [rbp-C0h]
  int v47; // [rsp+48h] [rbp-B8h]
  int v48; // [rsp+4Ch] [rbp-B4h]
  UCHAR v49[4]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v50; // [rsp+54h] [rbp-ACh] BYREF
  _WORD v51[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h]
  int v53; // [rsp+68h] [rbp-98h]
  int v54; // [rsp+6Ch] [rbp-94h]
  WCHAR *v55; // [rsp+70h] [rbp-90h]
  WCHAR v56[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+100h] [rbp+0h] BYREF
  char v58; // [rsp+27Fh] [rbp+17Fh] BYREF

  v46 = a3;
  v4 = 0;
  v52 = a1;
  v53 = 0;
  v5 = 0;
  v48 = 0;
  v6 = 0;
  v43 = 0;
  v7 = 0;
  v44 = 0;
  v8 = 0;
  v54 = 0;
  v47 = 0;
  if ( !a1 || !a2 )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v10 = *a2;
  LODWORD(v11) = 0;
  v45 = 0;
  v12 = 0;
  if ( !v10 )
    return (unsigned int)v45;
  v13 = v55;
  do
  {
    v55 = ++a2;
    if ( v45 < 0 )
      break;
    if ( (unsigned __int16)(v10 - 32) <= 0x58u )
      v4 = _lookuptable_s[v10 - 32] & 0xF;
    v14 = v4 + v12 + 8 * v4;
    v4 = 0;
    v12 = _lookuptable_s[v14] >> 4;
    v42 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_177;
      case 0:
        goto LABEL_174;
      case 1:
        v54 = 0;
        v6 = 0;
        v48 = 0;
        v8 = 0;
        v44 = 0;
        v5 = 0;
        v7 = -1;
        v43 = -1;
        v47 = 0;
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
          v46 = a3;
          v48 = v6;
          if ( v6 < 0 )
          {
            v5 |= 4u;
            v6 = -v6;
            v48 = v6;
          }
        }
        else
        {
          v6 = v10 + 2 * (v6 + 4 * (v6 - 6));
          v48 = v6;
        }
        break;
      case 4:
        v7 = 0;
        v43 = 0;
        break;
      case 5:
        if ( v10 == 42 )
        {
          v7 = *a3;
          a3 += 2;
          v46 = a3;
          v43 = v7;
          if ( v7 < 0 )
          {
            v7 = -1;
            v43 = -1;
          }
        }
        else
        {
          v7 = v10 + 2 * (v7 + 4 * (v7 - 6));
          v43 = v7;
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
        v40 = *a2;
        v5 |= 0x8000u;
        if ( *(_DWORD *)a2 == 3407926 )
        {
          a2 += 2;
          v5 |= 0x8000u;
          break;
        }
        if ( (_WORD)v40 == 51 && a2[1] == 50 )
        {
          a2 += 2;
          v5 &= ~0x8000u;
          break;
        }
        LOWORD(v40) = v40 - 88;
        if ( (unsigned __int16)v40 <= 0x20u )
        {
          v41 = 0x120821001LL;
          if ( _bittest64(&v41, v40) )
            break;
        }
LABEL_174:
        v47 = 1;
        write_char_2(v10, v52, &v45);
LABEL_132:
        v7 = v43;
        v4 = 0;
        a3 = v46;
        break;
      case 7:
        if ( v10 > 0x69u )
        {
          switch ( v10 )
          {
            case 'n':
              goto LABEL_177;
            case 'o':
              v15 = 8;
              if ( (v5 & 0x80u) != 0 )
                v5 |= 0x200u;
              goto LABEL_28;
            case 'p':
              v7 = 16;
              v5 |= 0x8000u;
              goto LABEL_73;
          }
          if ( v10 != 115 )
          {
            if ( v10 != 117 )
            {
              if ( v10 != 120 )
                goto LABEL_104;
              v23 = 39;
              goto LABEL_74;
            }
LABEL_27:
            v15 = 10;
LABEL_28:
            if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
            {
              v46 = a3 + 2;
              v16 = *(_QWORD *)a3;
            }
            else
            {
              v25 = a3 + 2;
              v46 = v25;
              if ( (v5 & 0x20) != 0 )
              {
                if ( (v5 & 0x40) != 0 )
                  v16 = *((__int16 *)v25 - 4);
                else
                  v16 = *((unsigned __int16 *)v25 - 4);
              }
              else if ( (v5 & 0x40) != 0 )
              {
                v16 = *(v25 - 2);
              }
              else
              {
                v16 = (unsigned int)*(v25 - 2);
              }
            }
            if ( (v5 & 0x40) != 0 && v16 < 0 )
            {
              v16 = -v16;
              v5 |= 0x100u;
            }
            if ( (v5 & 0x9000) == 0 )
              v16 = (unsigned int)v16;
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
            v26 = &v58;
            v27 = v16 != 0 ? v8 : 0;
            v28 = v53;
            v44 = v27;
            while ( 1 )
            {
              v29 = v7--;
              if ( v29 <= 0 && !v16 )
                break;
              v30 = v16 % (unsigned __int64)v15;
              v16 /= (unsigned __int64)v15;
              v31 = v30 + 48;
              if ( (int)v30 + 48 > 57 )
                v31 += v28;
              *v26-- = v31;
              v4 = 0;
            }
            v8 = v44;
            LODWORD(v11) = (unsigned int)&v57 + 383 - (_DWORD)v26;
            v43 = v7;
            v13 = (WCHAR *)(v26 + 1);
            if ( (v5 & 0x200) != 0 && (!(_DWORD)v11 || *(_BYTE *)v13 != 48) )
            {
              v13 = (WCHAR *)((char *)v13 - 1);
              LODWORD(v11) = v11 + 1;
              *(_BYTE *)v13 = 48;
            }
            goto LABEL_104;
          }
        }
        else
        {
          if ( v10 == 105 )
            goto LABEL_26;
          if ( v10 == 67 )
          {
            if ( (v5 & 0x830) == 0 )
              v5 |= 0x20u;
            goto LABEL_53;
          }
          if ( v10 != 83 )
          {
            if ( v10 != 88 )
            {
              if ( v10 == 90 )
              {
                v17 = *(unsigned __int16 **)a3;
                v46 = a3 + 2;
                if ( v17 && (v13 = (WCHAR *)*((_QWORD *)v17 + 1)) != 0LL )
                {
                  if ( v17[1] < *v17 )
                    goto LABEL_177;
                  LODWORD(v11) = *v17;
                  if ( (v5 & 0x800) != 0 )
                  {
                    if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                      goto LABEL_177;
                    LODWORD(v11) = *v17 >> 1;
                    v47 = 1;
                  }
                  else
                  {
                    v47 = 0;
                  }
                }
                else
                {
                  v13 = (WCHAR *)"(null)";
                  LODWORD(v11) = 6;
                }
                goto LABEL_104;
              }
              if ( v10 != 99 )
              {
                if ( v10 == 100 )
                {
LABEL_26:
                  v5 |= 0x40u;
                  goto LABEL_27;
                }
LABEL_104:
                if ( v54 )
                {
                  a3 = v46;
                  v12 = v42;
                  break;
                }
                if ( (v5 & 0x40) != 0 )
                {
                  if ( (v5 & 0x100) != 0 )
                  {
                    v32 = 45;
                    goto LABEL_108;
                  }
                  if ( (v5 & 1) != 0 )
                  {
                    v32 = 43;
LABEL_108:
                    v51[0] = v32;
LABEL_113:
                    v44 = 1;
                  }
                  else if ( (v5 & 2) != 0 )
                  {
                    v51[0] = 32;
                    goto LABEL_113;
                  }
                }
                v33 = v44;
                v34 = v6 - v11 - v44;
                if ( (v5 & 0xC) == 0 )
                {
                  write_multi_char_2(32LL, v34, v52, &v45);
                  v33 = v44;
                }
                write_string_2(v51, v33, v52, &v45);
                v35 = v52;
                if ( (v5 & 0xC) == 8 )
                  write_multi_char_2(48LL, v34, v52, &v45);
                if ( v47 || (int)v11 <= 0 )
                {
                  write_string_2(v13, (unsigned int)v11, v35, &v45);
                  v4 = 0;
                }
                else
                {
                  v36 = (UCHAR *)v13;
                  v37 = v11;
                  while ( 1 )
                  {
                    --v37;
                    v38 = (unsigned int)safecrt_mbtowc(&v50, v36, _mb_cur_max);
                    if ( v38 == 2 )
                      --v37;
                    v4 = 0;
                    if ( v38 <= 0 )
                      break;
                    write_char_2(v50, v52, &v45);
                    v36 += v39;
                    v4 = 0;
                    if ( v37 <= 0 )
                      goto LABEL_127;
                  }
                  v45 = -1;
LABEL_127:
                  a2 = v55;
                  v35 = v52;
                }
                if ( v45 < 0 || (v5 & 4) == 0 )
                {
                  a3 = v46;
                  v7 = v43;
                  v12 = v42;
                  v6 = v48;
                  v8 = v44;
                  break;
                }
                write_multi_char_2(32LL, v34, v35, &v45);
                v12 = v42;
                v6 = v48;
                v8 = v44;
                goto LABEL_132;
              }
LABEL_53:
              v21 = *(_WORD *)a3;
              v50 = *(_WORD *)a3;
              v47 = 1;
              v46 = a3 + 2;
              if ( (v5 & 0x20) != 0 )
              {
                v49[1] = 0;
                v49[0] = v21;
                v22 = (unsigned int)safecrt_mbtowc(v56, v49, _mb_cur_max);
                v7 = v43;
                v4 = 0;
                if ( v22 < 0 )
                  v54 = 1;
              }
              else
              {
                v56[0] = v21;
              }
              v13 = v56;
              LODWORD(v11) = 1;
              goto LABEL_104;
            }
LABEL_73:
            v23 = 7;
LABEL_74:
            v53 = v23;
            v15 = 16;
            if ( (v5 & 0x80u) != 0 )
            {
              v51[0] = 48;
              v51[1] = v23 + 81;
              v8 = 2;
            }
            goto LABEL_28;
          }
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x20u;
        }
        v18 = v7;
        if ( v7 == -1 )
          v18 = 0x7FFFFFFF;
        v19 = *(WCHAR **)a3;
        v46 = a3 + 2;
        if ( (v5 & 0x20) != 0 )
        {
          v13 = (WCHAR *)"(null)";
          LODWORD(v11) = 0;
          if ( v19 )
            v13 = v19;
          v20 = v13;
          if ( v18 > 0 )
          {
            do
            {
              if ( !*v20 )
                break;
              ++v20;
              LODWORD(v11) = v11 + 1;
            }
            while ( (int)v11 < v18 );
          }
        }
        else
        {
          v47 = 1;
          v13 = L"(null)";
          if ( v19 )
            v13 = v19;
          for ( i = v13; v18; ++i )
          {
            --v18;
            if ( !*i )
              break;
          }
          v11 = i - v13;
        }
        goto LABEL_104;
    }
    v10 = *a2;
  }
  while ( *a2 );
  if ( v12 && v12 != 7 )
  {
LABEL_177:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v45;
}
