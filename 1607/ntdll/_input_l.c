/*
 * XREFs of _input_l @ 0x18009FFF0
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     isleadbyte @ 0x18009A148 (isleadbyte.c)
 *     __pctype_func @ 0x18009CE60 (__pctype_func.c)
 *     ReadString @ 0x18009FCA4 (ReadString.c)
 *     ReadStringDelimited @ 0x18009FE64 (ReadStringDelimited.c)
 *     _inc @ 0x18009FFB8 (_inc.c)
 *     _ungetc_nolock @ 0x1800A0AD0 (_ungetc_nolock.c)
 */

__int64 __fastcall input_l(FILE *Stream, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  unsigned __int8 *v5; // r12
  FILE *v6; // rsi
  int v7; // edi
  unsigned __int8 v9; // al
  unsigned int v10; // ecx
  int v11; // r15d
  unsigned int v12; // r14d
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  char v16; // r15
  int v17; // edi
  int v18; // esi
  const unsigned __int16 *v19; // rcx
  unsigned __int64 v20; // rax
  char v21; // r9
  __int64 v22; // rax
  unsigned __int8 *v23; // rax
  unsigned __int8 v24; // al
  unsigned __int8 *v25; // rcx
  unsigned __int8 *v26; // rcx
  __int64 v27; // rcx
  char v28; // si
  char v29; // bl
  int v30; // r13d
  int v31; // edx
  int v32; // ecx
  char v33; // cl
  FILE *v34; // rsi
  bool v35; // zf
  __int64 v36; // rbx
  __int64 v37; // rbx
  int v38; // eax
  __int64 v39; // rsi
  int v40; // ebx
  int v41; // ebx
  int v42; // ebx
  int v43; // eax
  __int64 v44; // rsi
  int v45; // ebx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  FILE *v51; // rdx
  char v52; // [rsp+48h] [rbp-29h]
  char v53; // [rsp+49h] [rbp-28h]
  char v54; // [rsp+4Ah] [rbp-27h]
  char v55; // [rsp+4Bh] [rbp-26h]
  char v56; // [rsp+4Ch] [rbp-25h]
  int v57; // [rsp+50h] [rbp-21h] BYREF
  int v58; // [rsp+54h] [rbp-1Dh]
  int v59; // [rsp+58h] [rbp-19h] BYREF
  int Character; // [rsp+5Ch] [rbp-15h]
  int v61; // [rsp+60h] [rbp-11h]
  int v62; // [rsp+64h] [rbp-Dh]
  int v63; // [rsp+68h] [rbp-9h]
  int v64; // [rsp+6Ch] [rbp-5h]
  __int64 v65; // [rsp+70h] [rbp-1h]
  int v66; // [rsp+78h] [rbp+7h]
  _DWORD v67[3]; // [rsp+7Ch] [rbp+Bh] BYREF
  char SrcCh[8]; // [rsp+88h] [rbp+17h] BYREF
  __int64 v69; // [rsp+90h] [rbp+1Fh]
  unsigned __int8 *v71; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v72; // [rsp+F0h] [rbp+7Fh]

  v72 = a4;
  v4 = 0;
  v5 = a2;
  Character = 0;
  v6 = Stream;
  v59 = 0;
  v7 = 0;
  v69 = 0LL;
  if ( !a2 || !Stream )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  v9 = *a2;
  v10 = 0;
  v55 = 0;
  v11 = 0;
  v58 = 0;
  v57 = 0;
  v67[0] = 0;
  if ( !v9 )
    return v10;
  v12 = -1;
  while ( 2 )
  {
    v13 = v9;
    if ( v9 == -1 )
      v13 = -1;
    if ( (_pctype_func()[v13] & 8) != 0 )
    {
      --v11;
      while ( 1 )
      {
        v58 = ++v11;
        v57 = v11;
        v14 = inc((__int64)v6);
        if ( v14 == -1 )
          break;
        if ( (_pctype_func()[(unsigned __int8)v14] & 8) == 0 )
        {
          ungetc_nolock(v14, v6);
          goto LABEL_13;
        }
      }
      do
LABEL_13:
        v15 = *++v5;
      while ( (_pctype_func()[v15] & 8) != 0 );
      goto LABEL_191;
    }
    if ( *v5 != 37 )
      goto LABEL_184;
    if ( v5[1] == 37 )
    {
      if ( *v5 == 37 && v5[1] == 37 )
        ++v5;
LABEL_184:
      v58 = ++v11;
      v57 = v11;
      v7 = inc((__int64)v6);
      Character = v7;
      v59 = v7;
      v48 = *v5++;
      if ( v48 == v7 )
      {
        if ( !isleadbyte((unsigned __int8)v7) )
          goto LABEL_188;
        v49 = inc((__int64)v6);
        v50 = *v5++;
        if ( v50 == v49 )
        {
          v58 = v11;
          v57 = v11;
          goto LABEL_188;
        }
        if ( v49 != -1 )
          ungetc_nolock(v49, v6);
      }
      if ( v7 == -1 )
        goto LABEL_201;
      v51 = v6;
      goto LABEL_199;
    }
    v63 = 0;
    v16 = 0;
    v62 = 0;
    v66 = 0;
    v17 = 0;
    v64 = 0;
    v56 = 0;
    v52 = 0;
    v53 = 1;
    do
    {
      v71 = ++v5;
      v18 = *v5;
      v19 = _pctype_func();
      v20 = v18;
      if ( (v19[v18] & 4) != 0 )
      {
        ++v64;
        v17 = v18 + 2 * (5 * v17 - 24);
        goto LABEL_20;
      }
      if ( v18 != 42 )
      {
        switch ( v18 )
        {
          case 'F':
            goto LABEL_20;
          case 'I':
            v24 = v5[1];
            if ( v24 == 54 && (v25 = v5 + 2, v5[2] == 52) )
            {
              v5 += 2;
              v71 = v25;
            }
            else
            {
              if ( v24 == 51 )
              {
                v26 = v5 + 2;
                if ( v5[2] == 50 )
                {
                  v5 += 2;
                  v71 = v26;
                  goto LABEL_20;
                }
              }
              LOBYTE(v20) = v24 - 88;
              if ( (unsigned __int8)v20 > 0x20u || (v27 = 0x100821001LL, !_bittest64(&v27, v20)) )
              {
                ++v62;
                v65 = 0LL;
LABEL_49:
                ++v4;
                goto LABEL_20;
              }
            }
            break;
          case 'L':
            ++v53;
            goto LABEL_20;
          case 'N':
LABEL_20:
            v21 = v52;
            continue;
          case 'h':
            --v53;
            --v16;
            goto LABEL_20;
          case 'l':
            v23 = v5 + 1;
            if ( v5[1] != 108 )
            {
              ++v53;
              goto LABEL_37;
            }
            ++v5;
            v71 = v23;
            break;
          case 'w':
LABEL_37:
            ++v16;
            goto LABEL_20;
          default:
            goto LABEL_49;
        }
        ++v62;
        v65 = 0LL;
        goto LABEL_20;
      }
      v21 = ++v52;
    }
    while ( !v4 );
    v61 = v17;
    v7 = Character;
    v54 = v16;
    v11 = v58;
    if ( v21 )
    {
      v22 = 0LL;
    }
    else
    {
      v69 = v72;
      v72 += 8LL;
      v22 = *(_QWORD *)(v72 - 8);
    }
    v28 = v54;
    v29 = 0;
    *(_QWORD *)SrcCh = v22;
    *(_QWORD *)&v67[1] = v22;
    if ( !v54 )
    {
      v28 = ((*v5 - 67) & 0xEF) != 0 ? -1 : 1;
      v54 = v28;
    }
    v30 = *v5 | 0x20;
    if ( v30 != 110 )
    {
      if ( v30 == 99 || v30 == 123 )
      {
        v11 = v58 + 1;
        v58 = v11;
        v57 = v11;
        v7 = inc((__int64)Stream);
        Character = v7;
        v59 = v7;
      }
      else
      {
        do
        {
          v57 = ++v11;
          v7 = inc((__int64)Stream);
          Character = v7;
        }
        while ( v7 != -1 && (_pctype_func()[(unsigned __int8)v7] & 8) != 0 );
        v28 = v54;
        v58 = v11;
        v59 = v7;
      }
      if ( v7 == -1 )
        goto LABEL_201;
      v21 = v52;
    }
    v31 = v61;
    if ( v64 && !v61 )
      goto LABEL_193;
    if ( v30 > 112 )
    {
      switch ( v30 )
      {
        case 's':
          v33 = 32;
          break;
        case 'u':
          goto LABEL_72;
        case 'x':
          goto LABEL_77;
        case '{':
          v33 = 64;
          break;
        default:
          goto LABEL_86;
      }
      if ( v64 )
        goto LABEL_170;
      goto LABEL_171;
    }
    if ( v30 != 112 )
    {
      if ( v30 != 99 )
      {
        if ( v30 == 100 )
          goto LABEL_72;
        if ( v30 != 105 )
        {
          if ( v30 != 110 )
          {
            if ( v30 == 111 )
              goto LABEL_72;
LABEL_86:
            if ( *v5 == v7 )
            {
              v4 = 0;
              --v55;
              if ( !v21 )
                v72 = v69;
              goto LABEL_180;
            }
LABEL_193:
            if ( v7 == -1 )
              goto LABEL_201;
            v51 = Stream;
LABEL_199:
            ungetc_nolock(v7, v51);
            goto LABEL_200;
          }
          v4 = 0;
          v32 = v11;
          if ( !v21 )
          {
LABEL_163:
            if ( v62 )
            {
              **(_QWORD **)&v67[1] = v65;
            }
            else if ( v53 )
            {
              **(_DWORD **)&v67[1] = v32;
            }
            else
            {
              **(_WORD **)&v67[1] = v32;
            }
          }
LABEL_180:
          ++v55;
          v6 = Stream;
          ++v5;
LABEL_188:
          if ( v7 == -1 && (*v5 != 37 || v5[1] != 110) )
            goto LABEL_201;
LABEL_191:
          v9 = *v5;
          if ( !*v5 )
            goto LABEL_200;
          continue;
        }
        v30 = 100;
LABEL_77:
        switch ( v7 )
        {
          case '-':
            v56 = 1;
LABEL_91:
            --v61;
            if ( v31 == 1 && v64 )
            {
              v29 = 1;
              goto LABEL_94;
            }
            v34 = Stream;
            v58 = ++v11;
            v57 = v11;
            v7 = inc((__int64)Stream);
            Character = v7;
            v59 = v7;
            break;
          case '+':
            goto LABEL_91;
          case '0':
            v58 = ++v11;
            v57 = v11;
            v7 = inc((__int64)v34);
            Character = v7;
            v59 = v7;
            if ( (((_BYTE)v7 - 88) & 0xDF) != 0 )
            {
              v66 = 1;
              if ( v30 == 120 )
              {
                v58 = --v11;
                v57 = v11;
                if ( v7 != -1 )
                  ungetc_nolock(v7, v34);
                v7 = 48;
                Character = 48;
                v59 = 48;
              }
              else
              {
                if ( v64 )
                {
                  if ( !--v61 )
                    ++v29;
                }
                v30 = 111;
              }
            }
            else
            {
              v58 = ++v11;
              v57 = v11;
              v7 = inc((__int64)v34);
              Character = v7;
              v59 = v7;
              if ( v64 )
              {
                v61 -= 2;
                if ( v61 < 1 )
                  ++v29;
              }
              v30 = 120;
            }
            break;
          default:
LABEL_94:
            v34 = Stream;
            break;
        }
        goto LABEL_115;
      }
      v33 = 16;
      if ( !v64 )
        v31 = v61 + 1;
LABEL_170:
      v33 |= 1u;
LABEL_171:
      if ( v28 > 0 )
        v33 |= 2u;
      if ( v21 )
        v33 |= 4u;
      if ( v30 == 123 )
      {
        v47 = ReadStringDelimited(v33, &v71, &v59, &v57, SrcCh, v31, Stream, v67);
        v5 = v71;
      }
      else
      {
        v47 = ReadString(v33, 0LL, &v59, &v57, SrcCh, v31, Stream, v67);
      }
      v7 = v59;
      v4 = 0;
      if ( !v47 )
      {
        v11 = v57;
        v58 = v57;
        Character = v59;
        goto LABEL_180;
      }
      goto LABEL_200;
    }
    break;
  }
  ++v62;
  v53 = 1;
  v65 = 0LL;
LABEL_72:
  if ( v7 == 45 )
  {
    v56 = 1;
  }
  else if ( v7 != 43 )
  {
    goto LABEL_115;
  }
  --v61;
  if ( v31 == 1 && v64 )
  {
    v29 = 1;
  }
  else
  {
    v58 = ++v11;
    v57 = v11;
    v7 = inc((__int64)Stream);
    Character = v7;
    v59 = v7;
  }
LABEL_115:
  if ( !v62 )
  {
    v35 = v29 == 0;
    v41 = v63;
    if ( v35 )
    {
      while ( 1 )
      {
        if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
        {
          if ( (_pctype_func()[(unsigned __int8)v7] & 4) == 0 )
            goto LABEL_153;
          if ( v30 == 111 )
          {
            if ( v7 >= 56 )
              goto LABEL_153;
            v42 = 8 * v63;
          }
          else
          {
            v42 = 10 * v63;
          }
        }
        else
        {
          v43 = (unsigned __int8)v7;
          if ( (unsigned __int8)v7 == -1 )
            v43 = -1;
          v44 = v43;
          if ( SLOBYTE(_pctype_func()[v43]) >= 0 )
          {
LABEL_153:
            v58 = --v11;
            v57 = v11;
            if ( v7 != -1 )
              ungetc_nolock(v7, Stream);
            v41 = v63;
            break;
          }
          v63 = 16 * v41;
          v45 = (char)v7;
          v7 = ((char)v7 & 0xFFFFFFDF) - 7;
          if ( (_pctype_func()[v44] & 4) != 0 )
            v7 = v45;
          v42 = v63;
          Character = v7;
          v59 = v7;
        }
        ++v66;
        v41 = v7 + v42 - 48;
        v63 = v41;
        if ( v64 )
        {
          if ( !--v61 )
            break;
        }
        v58 = ++v11;
        v57 = v11;
        v7 = inc((__int64)Stream);
        Character = v7;
        v59 = v7;
      }
    }
    if ( v56 )
      v63 = -v41;
    goto LABEL_158;
  }
  v35 = v29 == 0;
  v36 = v65;
  if ( !v35 )
    goto LABEL_135;
  while ( 2 )
  {
    if ( ((v30 - 112) & 0xFFFFFFF7) != 0 )
    {
      if ( (_pctype_func()[(unsigned __int8)v7] & 4) == 0 )
        break;
      if ( v30 == 111 )
      {
        if ( v7 >= 56 )
          break;
        v37 = 8 * v65;
      }
      else
      {
        v37 = 10 * v65;
      }
      goto LABEL_129;
    }
    v38 = (unsigned __int8)v7;
    if ( (unsigned __int8)v7 == -1 )
      v38 = -1;
    v39 = v38;
    if ( SLOBYTE(_pctype_func()[v38]) < 0 )
    {
      v65 = 16 * v36;
      v40 = (char)v7;
      v7 = ((char)v7 & 0xFFFFFFDF) - 7;
      if ( (_pctype_func()[v39] & 4) != 0 )
        v7 = v40;
      v37 = v65;
      Character = v7;
      v59 = v7;
LABEL_129:
      ++v66;
      v36 = v7 - 48 + v37;
      v65 = v36;
      if ( v64 )
      {
        if ( !--v61 )
          goto LABEL_135;
      }
      v58 = ++v11;
      v57 = v11;
      v7 = inc((__int64)Stream);
      Character = v7;
      v59 = v7;
      continue;
    }
    break;
  }
  v58 = --v11;
  v57 = v11;
  if ( v7 != -1 )
    ungetc_nolock(v7, Stream);
  v36 = v65;
LABEL_135:
  if ( v56 )
    v65 = -v36;
LABEL_158:
  v46 = v66;
  v35 = v30 == 70;
  v4 = 0;
  if ( v35 )
    v46 = 0;
  if ( v46 )
  {
    if ( !v52 )
    {
      ++v67[0];
      v32 = v63;
      goto LABEL_163;
    }
    goto LABEL_180;
  }
LABEL_200:
  if ( v7 != -1 )
    return v67[0];
LABEL_201:
  if ( v67[0] || v55 )
    return v67[0];
  return v12;
}
