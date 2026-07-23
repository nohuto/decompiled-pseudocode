/*
 * XREFs of _woutput_s @ 0x1800A2DA4
 * Callers:
 *     _swoutput_s @ 0x1800A2C8C (_swoutput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _safecrt_mbtowc @ 0x1800A1CDC (_safecrt_mbtowc.c)
 *     write_char_2 @ 0x1800A36CC (write_char_2.c)
 *     write_multi_char_2 @ 0x1800A372C (write_multi_char_2.c)
 *     write_string_2 @ 0x1800A377C (write_string_2.c)
 */

__int64 __fastcall woutput_s(__int64 a1, WCHAR *a2, int *a3)
{
  __int64 v4; // r15
  int v5; // edi
  int v6; // r10d
  int v7; // edx
  int v8; // esi
  WCHAR v10; // r9
  __int64 v11; // r12
  int v12; // r11d
  WCHAR *v13; // rbx
  int v14; // ecx
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
  int v26; // r13d
  char v27; // r15
  char *v28; // rbx
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
  int v44; // [rsp+38h] [rbp-C8h] BYREF
  int v45; // [rsp+3Ch] [rbp-C4h]
  int v46; // [rsp+40h] [rbp-C0h]
  int *v47; // [rsp+48h] [rbp-B8h]
  int v48; // [rsp+50h] [rbp-B0h]
  _WORD v49[2]; // [rsp+54h] [rbp-ACh] BYREF
  UCHAR v50[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A0h]
  WCHAR v52[2]; // [rsp+68h] [rbp-98h] BYREF
  int v53; // [rsp+6Ch] [rbp-94h]
  int v54; // [rsp+70h] [rbp-90h]
  WCHAR *v55; // [rsp+78h] [rbp-88h]
  WCHAR v56[64]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+100h] [rbp+0h] BYREF
  char v58; // [rsp+27Fh] [rbp+17Fh] BYREF

  v47 = a3;
  v51 = a1;
  v54 = 0;
  v4 = a1;
  v45 = 0;
  v5 = 0;
  v43 = 0;
  v6 = 0;
  v46 = 0;
  v7 = 0;
  v53 = 0;
  v8 = 0;
  v48 = 0;
  if ( !a1 || !a2 )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v10 = *a2;
  LODWORD(v11) = 0;
  v44 = 0;
  v12 = 0;
  if ( !v10 )
    return (unsigned int)v44;
  v13 = v55;
  do
  {
    v55 = ++a2;
    if ( v44 < 0 )
      break;
    if ( (unsigned __int16)(v10 - 32) > 0x58u )
      v14 = 0;
    else
      v14 = _lookuptable_s[v10 - 32] & 0xF;
    v12 = _lookuptable_s[9 * v14 + v12] >> 4;
    v42 = v12;
    switch ( v12 )
    {
      case 8:
        goto LABEL_179;
      case 0:
LABEL_176:
        v48 = 1;
        write_char_2(v10, v4, &v44);
        v6 = v45;
        a3 = v47;
        v7 = v43;
        goto LABEL_134;
      case 1:
        v7 = -1;
        v53 = 0;
        v43 = -1;
        v6 = 0;
        v45 = 0;
        v8 = 0;
        v46 = 0;
        v5 = 0;
        v48 = 0;
        goto LABEL_133;
      case 2:
        if ( v10 == 32 )
        {
          v5 |= 2u;
        }
        else if ( v10 == 35 )
        {
          v5 |= 0x80u;
        }
        else if ( v10 == 43 )
        {
          v5 |= 1u;
        }
        else
        {
          if ( v10 != 45 )
          {
            if ( v10 == 48 )
              v5 |= 8u;
            goto LABEL_134;
          }
          v5 |= 4u;
        }
        goto LABEL_133;
      case 3:
        if ( v10 == 42 )
        {
          v6 = *a3;
          a3 += 2;
          v47 = a3;
          v45 = v6;
          if ( v6 < 0 )
          {
            v5 |= 4u;
            v6 = -v6;
            v45 = v6;
          }
          goto LABEL_134;
        }
        v6 = v10 + 2 * (v6 + 4 * (v6 - 6));
        v45 = v6;
        goto LABEL_133;
      case 4:
        v7 = 0;
LABEL_159:
        v43 = v7;
        goto LABEL_133;
      case 5:
        if ( v10 == 42 )
        {
          v7 = *a3;
          a3 += 2;
          v47 = a3;
          v43 = v7;
          if ( v7 < 0 )
          {
            v7 = -1;
            v43 = -1;
          }
          goto LABEL_134;
        }
        v7 = v10 + 2 * (v7 + 4 * (v7 - 6));
        goto LABEL_159;
      case 6:
        switch ( v10 )
        {
          case 'I':
            v40 = *a2;
            v5 |= 0x8000u;
            if ( *(_DWORD *)a2 == 3407926 )
            {
              a2 += 2;
              v5 |= 0x8000u;
            }
            else if ( (_WORD)v40 == 51 && a2[1] == 50 )
            {
              a2 += 2;
              v5 &= ~0x8000u;
            }
            else
            {
              LOWORD(v40) = v40 - 88;
              if ( (unsigned __int16)v40 > 0x20u )
                goto LABEL_176;
              v41 = 0x120821001LL;
              if ( !_bittest64(&v41, v40) )
                goto LABEL_176;
            }
            break;
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
            goto LABEL_134;
          case 'w':
            v5 |= 0x800u;
            break;
        }
        goto LABEL_133;
    }
    if ( v12 != 7 )
      goto LABEL_133;
    if ( v10 > 0x69u )
    {
      switch ( v10 )
      {
        case 'n':
          goto LABEL_179;
        case 'o':
          v15 = 8;
          if ( (v5 & 0x80u) != 0 )
            v5 |= 0x200u;
          goto LABEL_29;
        case 'p':
          v43 = 16;
          v5 |= 0x8000u;
LABEL_74:
          v23 = 7;
LABEL_75:
          v54 = v23;
          v15 = 16;
          if ( (v5 & 0x80u) != 0 )
          {
            v49[0] = 48;
            v8 = 2;
            v49[1] = v23 + 81;
          }
LABEL_29:
          if ( (v5 & 0x8000) != 0 || (v5 & 0x1000) != 0 )
          {
            v47 = a3 + 2;
            v16 = *(_QWORD *)a3;
          }
          else
          {
            v25 = a3 + 2;
            v47 = v25;
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
          v26 = v43;
          if ( v43 >= 0 )
          {
            v5 &= ~8u;
            if ( v43 > 512 )
              v26 = 512;
          }
          else
          {
            v26 = 1;
          }
          v27 = v54;
          v28 = &v58;
          v8 &= -(v16 != 0);
          v46 = v8;
          while ( 1 )
          {
            v29 = v26--;
            if ( v29 <= 0 && !v16 )
              break;
            v30 = v16 % (unsigned __int64)v15;
            v16 /= (unsigned __int64)v15;
            v31 = v30 + 48;
            if ( (int)v30 + 48 > 57 )
              v31 += v27;
            *v28-- = v31;
          }
          v4 = v51;
          LODWORD(v11) = (unsigned int)&v57 + 383 - (_DWORD)v28;
          v43 = v26;
          v13 = (WCHAR *)(v28 + 1);
          if ( (v5 & 0x200) != 0 && (!(_DWORD)v11 || *(_BYTE *)v13 != 48) )
          {
            v13 = (WCHAR *)((char *)v13 - 1);
            LODWORD(v11) = v11 + 1;
            *(_BYTE *)v13 = 48;
          }
          break;
        case 's':
          goto LABEL_43;
        case 'u':
          goto LABEL_28;
        case 'x':
          v23 = 39;
          goto LABEL_75;
      }
    }
    else
    {
      switch ( v10 )
      {
        case 'i':
          goto LABEL_27;
        case 'C':
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x20u;
LABEL_54:
          v21 = *(_WORD *)a3;
          v52[0] = *(_WORD *)a3;
          v48 = 1;
          v47 = a3 + 2;
          if ( (v5 & 0x20) != 0 )
          {
            v50[0] = v21;
            v50[1] = 0;
            v22 = (unsigned int)safecrt_mbtowc(v56, v50, _mb_cur_max);
            v6 = v45;
            if ( v22 < 0 )
              v53 = 1;
          }
          else
          {
            v56[0] = v21;
          }
          v13 = v56;
          LODWORD(v11) = 1;
          break;
        case 'S':
          if ( (v5 & 0x830) == 0 )
            v5 |= 0x20u;
LABEL_43:
          v18 = v7;
          if ( v7 == -1 )
            v18 = 0x7FFFFFFF;
          v19 = *(WCHAR **)a3;
          v47 = a3 + 2;
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
            v48 = 1;
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
          break;
        case 'X':
          goto LABEL_74;
        case 'Z':
          v17 = *(unsigned __int16 **)a3;
          v47 = a3 + 2;
          if ( v17 && (v13 = (WCHAR *)*((_QWORD *)v17 + 1)) != 0LL )
          {
            if ( v17[1] < *v17 )
              goto LABEL_179;
            LODWORD(v11) = *v17;
            if ( (v5 & 0x800) != 0 )
            {
              if ( (v11 & 1) != 0 || ((unsigned __int8)v13 & 1) != 0 )
                goto LABEL_179;
              LODWORD(v11) = *v17 >> 1;
              v48 = 1;
            }
            else
            {
              v48 = 0;
            }
          }
          else
          {
            v13 = (WCHAR *)"(null)";
            LODWORD(v11) = 6;
          }
          break;
        case 'c':
          goto LABEL_54;
        case 'd':
LABEL_27:
          v5 |= 0x40u;
LABEL_28:
          v15 = 10;
          goto LABEL_29;
      }
    }
    if ( !v53 )
    {
      if ( (v5 & 0x40) != 0 )
      {
        if ( (v5 & 0x100) != 0 )
        {
          v32 = 45;
          goto LABEL_109;
        }
        if ( (v5 & 1) != 0 )
        {
          v32 = 43;
LABEL_109:
          v49[0] = v32;
LABEL_114:
          v46 = 1;
        }
        else if ( (v5 & 2) != 0 )
        {
          v49[0] = 32;
          goto LABEL_114;
        }
      }
      v33 = v46;
      v34 = v6 - v11 - v46;
      if ( (v5 & 0xC) == 0 )
      {
        write_multi_char_2(32LL, v34, v51, &v44);
        v33 = v46;
      }
      write_string_2(v49, v33, v51, &v44);
      v35 = v51;
      if ( (v5 & 0xC) == 8 )
        write_multi_char_2(48LL, v34, v51, &v44);
      if ( v48 || (int)v11 <= 0 )
      {
        write_string_2(v13, (unsigned int)v11, v35, &v44);
      }
      else
      {
        v36 = (UCHAR *)v13;
        v37 = v11;
        while ( 1 )
        {
          --v37;
          v38 = (unsigned int)safecrt_mbtowc(v52, v36, _mb_cur_max);
          if ( v38 == 2 )
            --v37;
          if ( v38 <= 0 )
            break;
          write_char_2(v52[0], v51, &v44);
          v36 += v39;
          if ( v37 <= 0 )
            goto LABEL_128;
        }
        v44 = -1;
LABEL_128:
        a2 = v55;
        v35 = v51;
      }
      if ( v44 >= 0 && (v5 & 4) != 0 )
      {
        write_multi_char_2(32LL, v34, v35, &v44);
        a3 = v47;
        v7 = v43;
        v6 = v45;
        v8 = v46;
        v4 = v51;
      }
      else
      {
        a3 = v47;
        v7 = v43;
        v6 = v45;
        v8 = v46;
        v4 = v51;
      }
      goto LABEL_133;
    }
    a3 = v47;
    v7 = v43;
LABEL_133:
    v12 = v42;
LABEL_134:
    v10 = *a2;
  }
  while ( *a2 );
  if ( v12 && v12 != 7 )
  {
LABEL_179:
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  return (unsigned int)v44;
}
