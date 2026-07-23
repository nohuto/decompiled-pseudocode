/*
 * XREFs of _winput_s @ 0x1800A5094
 * Callers:
 *     _swinput_s @ 0x1800A4FD0 (_swinput_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     iswctype @ 0x18009A240 (iswctype.c)
 *     ReadString_1 @ 0x1800A4BA8 (ReadString_1.c)
 *     ReadStringDelimited_1 @ 0x1800A4DE4 (ReadStringDelimited_1.c)
 *     _hextodec @ 0x1800A4F84 (_hextodec.c)
 *     _whiteout @ 0x1800A503C (_whiteout.c)
 *     _fgetwc_nolock @ 0x1800A5A78 (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x1800A5AD0 (_ungetwc_nolock.c)
 */

__int64 __fastcall winput_s(FILE *Stream, wint_t *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v4; // r12
  int v5; // edi
  FILE *v6; // rsi
  unsigned int v8; // edi
  wint_t v9; // ax
  int v10; // r13d
  unsigned int v11; // ecx
  wint_t v12; // ax
  char v13; // r9
  int v14; // r11d
  int v15; // r10d
  char v16; // r13
  char v17; // r8
  char v18; // r14
  int v19; // esi
  int v20; // edx
  int v21; // ecx
  unsigned __int16 *v22; // rax
  unsigned __int16 v23; // ax
  unsigned __int16 *v24; // rcx
  unsigned __int16 *v25; // rcx
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  char v28; // dl
  unsigned __int64 Src; // r9
  char v30; // r15
  int v31; // esi
  unsigned __int16 v32; // ax
  _DWORD *v33; // r8
  __int64 *v34; // rax
  bool v35; // cc
  int v36; // r14d
  int v37; // ecx
  char v38; // cl
  FILE *v39; // r14
  int v40; // r11d
  int v41; // r14d
  wint_t v42; // ax
  int v43; // eax
  __int64 v44; // r10
  int v45; // eax
  __int64 v46; // r10
  wint_t v47; // ax
  int v48; // eax
  int v49; // r10d
  int v50; // eax
  int v51; // r10d
  wint_t v52; // ax
  int v53; // eax
  wint_t v54; // ax
  wint_t v55; // ax
  FILE *v56; // rdx
  int v57; // [rsp+50h] [rbp-49h] BYREF
  char v58; // [rsp+54h] [rbp-45h]
  int v59; // [rsp+58h] [rbp-41h] BYREF
  char v60; // [rsp+5Ch] [rbp-3Dh]
  char v61; // [rsp+5Dh] [rbp-3Ch]
  int v62; // [rsp+60h] [rbp-39h]
  int v63; // [rsp+64h] [rbp-35h]
  int v64; // [rsp+68h] [rbp-31h]
  int v65; // [rsp+6Ch] [rbp-2Dh]
  int v66; // [rsp+70h] [rbp-29h]
  unsigned int v67; // [rsp+78h] [rbp-21h] BYREF
  int v68; // [rsp+7Ch] [rbp-1Dh]
  __int64 v69; // [rsp+80h] [rbp-19h]
  _DWORD *v70; // [rsp+88h] [rbp-11h]
  __int64 *v71; // [rsp+90h] [rbp-9h]
  __int64 v72[11]; // [rsp+98h] [rbp-1h] BYREF
  unsigned __int16 *v74; // [rsp+108h] [rbp+6Fh] BYREF
  _DWORD *v75; // [rsp+110h] [rbp+77h]
  char v76; // [rsp+118h] [rbp+7Fh]

  v75 = a3;
  v3 = 0;
  v4 = a2;
  LOWORD(v57) = 0;
  LOWORD(v5) = 0;
  v62 = 0;
  v6 = Stream;
  v70 = 0LL;
  if ( !a2 )
  {
    invalid_parameter();
    return 0xFFFFFFFFLL;
  }
  if ( !Stream )
  {
    v8 = -1;
LABEL_208:
    invalid_parameter();
    return v8;
  }
  v9 = *a2;
  v10 = 0;
  v58 = 0;
  v11 = 0;
  v59 = 0;
  v67 = 0;
  if ( !v9 )
    return v11;
  while ( iswctype(v9, 8u) )
  {
    v59 = v10 - 1;
    v12 = whiteout(&v59, v6);
    if ( v12 != 0xFFFF )
      ungetwc_nolock(v12, v6);
    do
      ++v4;
    while ( iswctype(*v4, 8u) );
    v10 = v59;
LABEL_193:
    v9 = *v4;
    if ( !*v4 )
      goto LABEL_204;
  }
  if ( *v4 != 37 )
    goto LABEL_189;
  if ( v4[1] == 37 )
  {
    ++v4;
LABEL_189:
    v59 = ++v10;
    v54 = fgetwc_nolock(v6);
    v5 = v54;
    LOWORD(v57) = v54;
    v55 = *v4++;
    v62 = v5;
    if ( v55 == (_WORD)v5 )
      goto LABEL_190;
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_209;
    v56 = v6;
    goto LABEL_203;
  }
  v13 = 1;
  v65 = 0;
  v68 = 0;
  v60 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  do
  {
    v74 = ++v4;
    v20 = *v4;
    if ( (v20 & 0xFF00) == 0 )
    {
      v21 = (unsigned __int8)v20;
      if ( (unsigned __int8)v20 == -1 )
        v21 = -1;
      if ( (pctype[v21] & 4) != 0 )
      {
        ++v14;
        v15 = v20 + 2 * (5 * v15 - 24);
        continue;
      }
    }
    switch ( v20 )
    {
      case '*':
        ++v16;
        break;
      case 'F':
        break;
      case 'I':
        v23 = v4[1];
        if ( v23 == 54 )
        {
          v24 = v4 + 2;
          if ( v4[2] == 52 )
          {
            v4 += 2;
            v74 = v24;
LABEL_37:
            ++v19;
            v69 = 0LL;
            break;
          }
        }
        if ( v23 == 51 )
        {
          v25 = v4 + 2;
          if ( v4[2] == 50 )
          {
            v4 += 2;
            v74 = v25;
            break;
          }
        }
        v26 = v23 - 88;
        if ( v26 <= 0x20u )
        {
          v27 = 0x100821001LL;
          if ( _bittest64(&v27, v26) )
            goto LABEL_37;
        }
        ++v19;
        v69 = 0LL;
        break;
      case 'L':
        ++v13;
        break;
      case 'N':
        break;
      case 'h':
        --v13;
        --v18;
        break;
      case 'l':
        v22 = v4 + 1;
        if ( v4[1] != 108 )
        {
          ++v13;
LABEL_31:
          ++v18;
          break;
        }
        ++v4;
        v74 = v22;
        goto LABEL_37;
      case 'w':
        goto LABEL_31;
      default:
        ++v17;
        break;
    }
  }
  while ( !v17 );
  LOWORD(v5) = v62;
  v61 = v16;
  v28 = v16;
  v10 = v59;
  v76 = v13;
  Src = 0LL;
  v66 = v19;
  v64 = v14;
  v63 = v15;
  if ( v28 )
  {
    v71 = 0LL;
    v72[0] = 0LL;
  }
  else
  {
    v70 = v75;
    v75 += 2;
    v71 = (__int64 *)*((_QWORD *)v75 - 1);
    v72[0] = (__int64)v71;
  }
  v30 = 0;
  if ( !v18 )
    v18 = ((*v4 - 67) & 0xFFEF) != 0 ? 1 : -1;
  v31 = *v4 | 0x20;
  if ( v31 == 110 )
  {
LABEL_59:
    if ( !v14 || v15 )
    {
      if ( v28 || ((v31 - 99) & 0xFFFFFFE7) != 0 || v31 == 107 )
      {
        v33 = v70;
      }
      else
      {
        v33 = v70 + 2;
        v70 = v33;
        v34 = (__int64 *)*((_QWORD *)v33 - 1);
        v71 = v34;
        v72[0] = (__int64)v34;
        v75 = v33 + 2;
        Src = (unsigned int)*v33;
        if ( !*v33 )
        {
          v35 = v18 <= 0;
          v36 = 0;
          if ( v35 )
            *(_BYTE *)v34 = 0;
          else
            *(_WORD *)v34 = 0;
LABEL_205:
          if ( (_WORD)v5 == 0xFFFF )
            goto LABEL_209;
          if ( v36 == 1 )
          {
            v8 = v67;
            goto LABEL_208;
          }
          return v67;
        }
      }
      if ( v31 > 112 )
      {
        switch ( v31 )
        {
          case 's':
            v38 = 32;
            break;
          case 'u':
            goto LABEL_75;
          case 'x':
            goto LABEL_80;
          case '{':
            v38 = 64;
            break;
          default:
            goto LABEL_89;
        }
        if ( !v14 )
        {
LABEL_178:
          if ( v18 > 0 )
            v38 |= 2u;
          if ( v28 )
            v38 |= 4u;
          if ( v31 == 123 )
          {
            v53 = ReadStringDelimited_1(v38, &v74, (wint_t *)&v57, &v59, (void **)v72, v15, Stream, Src, &v67);
            v4 = v74;
          }
          else
          {
            v53 = ReadString_1(v38, 0LL, (wint_t *)&v57, &v59, (void **)v72, v15, Stream, Src, &v67);
          }
          LOWORD(v5) = v57;
          if ( v53 )
            goto LABEL_204;
          v10 = v59;
          v62 = (unsigned __int16)v57;
          goto LABEL_187;
        }
      }
      else
      {
        if ( v31 == 112 )
        {
          ++v66;
          v76 = 1;
          v69 = 0LL;
          goto LABEL_75;
        }
        if ( v31 != 99 )
        {
          if ( v31 == 100 )
            goto LABEL_75;
          if ( v31 != 105 )
          {
            if ( v31 == 110 )
            {
              v37 = v10;
              if ( v28 )
              {
LABEL_187:
                ++v58;
                v6 = Stream;
                ++v4;
LABEL_190:
                if ( (_WORD)v5 == 0xFFFF && (*v4 != 37 || v4[1] != 110) )
                  goto LABEL_209;
                goto LABEL_193;
              }
LABEL_170:
              if ( v66 )
              {
                *v71 = v69;
              }
              else if ( v76 )
              {
                *(_DWORD *)v71 = v37;
              }
              else
              {
                *(_WORD *)v71 = v37;
              }
              goto LABEL_187;
            }
            if ( v31 == 111 )
            {
LABEL_75:
              if ( (_WORD)v5 == 45 )
              {
                v60 = 1;
              }
              else if ( (_WORD)v5 != 43 )
              {
                goto LABEL_118;
              }
              v63 = v15 - 1;
              if ( v15 == 1 && v14 )
              {
                v30 = 1;
                v41 = 0;
LABEL_119:
                v40 = v64;
LABEL_120:
                if ( v66 )
                {
                  if ( !v30 )
                  {
                    while ( 1 )
                    {
                      if ( ((v31 - 112) & 0xFFFFFFF7) != 0 )
                      {
                        if ( (v5 & 0xFF00) != 0 )
                          goto LABEL_139;
                        v43 = (unsigned __int8)v5;
                        if ( (unsigned __int8)v5 == -1 )
                          v43 = -1;
                        if ( (pctype[v43] & 4) == 0 )
                          goto LABEL_139;
                        if ( v31 == 111 )
                        {
                          if ( (unsigned __int16)v5 >= 0x38u )
                            goto LABEL_139;
                          v44 = 8 * v69;
                        }
                        else
                        {
                          v44 = 10 * v69;
                        }
                      }
                      else
                      {
                        if ( (v5 & 0xFF00) != 0 )
                          goto LABEL_139;
                        v45 = (unsigned __int8)v5;
                        if ( (unsigned __int8)v5 == -1 )
                          v45 = -1;
                        if ( SLOBYTE(pctype[v45]) >= 0 )
                        {
LABEL_139:
                          v59 = --v10;
                          if ( (_WORD)v5 != 0xFFFF )
                            ungetwc_nolock(v5, Stream);
                          break;
                        }
                        LOWORD(v5) = hextodec(v5);
                        LOWORD(v57) = v5;
                        v62 = (unsigned __int16)v5;
                      }
                      ++v68;
                      v46 = (unsigned __int16)v5 - 48 + v44;
                      v69 = v46;
                      if ( v40 )
                      {
                        if ( !--v41 )
                          goto LABEL_142;
                      }
                      v59 = ++v10;
                      v47 = fgetwc_nolock(Stream);
                      v40 = v64;
                      LOWORD(v5) = v47;
                      v62 = v47;
                      LOWORD(v57) = v47;
                    }
                  }
                  v46 = v69;
LABEL_142:
                  if ( v60 )
                    v69 = -v46;
                }
                else
                {
                  if ( !v30 )
                  {
                    while ( 1 )
                    {
                      if ( ((v31 - 112) & 0xFFFFFFF7) != 0 )
                      {
                        if ( (v5 & 0xFF00) != 0 )
                          goto LABEL_162;
                        v48 = (unsigned __int8)v5;
                        if ( (unsigned __int8)v5 == -1 )
                          v48 = -1;
                        if ( (pctype[v48] & 4) == 0 )
                          goto LABEL_162;
                        if ( v31 == 111 )
                        {
                          if ( (unsigned __int16)v5 >= 0x38u )
                            goto LABEL_162;
                          v49 = 8 * v65;
                        }
                        else
                        {
                          v49 = 10 * v65;
                        }
                      }
                      else
                      {
                        if ( (v5 & 0xFF00) != 0 )
                          goto LABEL_162;
                        v50 = (unsigned __int8)v5;
                        if ( (unsigned __int8)v5 == -1 )
                          v50 = -1;
                        if ( SLOBYTE(pctype[v50]) >= 0 )
                        {
LABEL_162:
                          v59 = --v10;
                          if ( (_WORD)v5 != 0xFFFF )
                            ungetwc_nolock(v5, Stream);
                          break;
                        }
                        LOWORD(v5) = hextodec(v5);
                        LOWORD(v57) = v5;
                        v62 = (unsigned __int16)v5;
                      }
                      ++v68;
                      v51 = (unsigned __int16)v5 + v49 - 48;
                      v65 = v51;
                      if ( v40 )
                      {
                        if ( !--v41 )
                          goto LABEL_165;
                      }
                      v59 = ++v10;
                      v52 = fgetwc_nolock(Stream);
                      v40 = v64;
                      LOWORD(v5) = v52;
                      v62 = v52;
                      LOWORD(v57) = v52;
                    }
                  }
                  v51 = v65;
LABEL_165:
                  if ( v60 )
                    v65 = -v51;
                }
                if ( !v68 )
                  goto LABEL_204;
                if ( v61 )
                  goto LABEL_187;
                ++v67;
                v37 = v65;
                goto LABEL_170;
              }
              v59 = ++v10;
              LOWORD(v5) = fgetwc_nolock(Stream);
              LOWORD(v57) = v5;
              v62 = (unsigned __int16)v5;
LABEL_118:
              v41 = v63;
              goto LABEL_119;
            }
LABEL_89:
            if ( *v4 != (_WORD)v5 )
            {
              if ( (_WORD)v5 != 0xFFFF )
                ungetwc_nolock(v5, Stream);
              v36 = 1;
              goto LABEL_205;
            }
            --v58;
            if ( !v28 )
              v75 = v33;
            goto LABEL_187;
          }
          v31 = 100;
LABEL_80:
          if ( (_WORD)v5 == 45 )
          {
            v60 = 1;
          }
          else if ( (_WORD)v5 != 43 )
          {
            goto LABEL_97;
          }
          v63 = v15 - 1;
          if ( v15 != 1 || !v14 )
          {
            v39 = Stream;
            v59 = ++v10;
            LOWORD(v5) = fgetwc_nolock(Stream);
            LOWORD(v57) = v5;
            v62 = (unsigned __int16)v5;
LABEL_98:
            if ( (_WORD)v5 == 48 )
            {
              v59 = ++v10;
              LOWORD(v5) = fgetwc_nolock(v39);
              LOWORD(v57) = v5;
              v62 = (unsigned __int16)v5;
              if ( (((_WORD)v5 - 88) & 0xFFDF) == 0 )
              {
                v59 = ++v10;
                v42 = fgetwc_nolock(v39);
                v40 = v64;
                LOWORD(v5) = v42;
                v41 = v63;
                v62 = v42;
                LOWORD(v57) = v42;
                if ( v64 )
                {
                  v41 = v63 - 2;
                  if ( v63 - 2 < 1 )
                    ++v30;
                }
                v31 = 120;
                goto LABEL_120;
              }
              v68 = 1;
              if ( v31 != 120 )
              {
                v40 = v64;
                v41 = v63;
                if ( v64 )
                {
                  v41 = v63 - 1;
                  if ( v63 == 1 )
                    ++v30;
                }
                v31 = 111;
                goto LABEL_120;
              }
              v59 = --v10;
              if ( (_WORD)v5 != 0xFFFF )
                ungetwc_nolock(v5, v39);
              LOWORD(v5) = 48;
              v62 = 48;
              LOWORD(v57) = 48;
            }
            goto LABEL_118;
          }
          v30 = 1;
LABEL_97:
          v39 = Stream;
          goto LABEL_98;
        }
        v38 = 16;
        if ( !v14 )
          ++v15;
      }
      v38 |= 1u;
      goto LABEL_178;
    }
    if ( (_WORD)v5 == 0xFFFF )
      goto LABEL_209;
    v56 = Stream;
LABEL_203:
    ungetwc_nolock(v5, v56);
LABEL_204:
    v36 = 0;
    goto LABEL_205;
  }
  if ( v31 == 99 || v31 == 123 )
  {
    v10 = ++v59;
    v32 = fgetwc_nolock(Stream);
  }
  else
  {
    v32 = whiteout(&v59, Stream);
    v10 = v59;
  }
  LOWORD(v5) = v32;
  LOWORD(v57) = v32;
  v62 = v32;
  if ( v32 != 0xFFFF )
  {
    v15 = v63;
    Src = 0LL;
    v14 = v64;
    v28 = v61;
    goto LABEL_59;
  }
LABEL_209:
  if ( v67 || v58 )
    return v67;
  return v3;
}
