/*
 * XREFs of _input_s @ 0x1401551E4
 * Callers:
 *     _sinput_s @ 0x140155ABC (_sinput_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     ReadString @ 0x140154EB0 (ReadString.c)
 *     ReadStringDelimited @ 0x14015505C (ReadStringDelimited.c)
 *     _inc @ 0x1401551BC (_inc.c)
 *     _ungetc_nolock @ 0x1401569C4 (_ungetc_nolock.c)
 */

__int64 __fastcall input_s(FILE *a1, unsigned __int8 *a2, _DWORD *a3)
{
  int v3; // r15d
  unsigned __int8 *v4; // r13
  int v5; // ebx
  FILE *v6; // r11
  __int64 result; // rax
  unsigned int v8; // edi
  unsigned __int8 v9; // dl
  int v10; // r12d
  int v11; // eax
  int v12; // r8d
  int v13; // ecx
  int v14; // esi
  int v15; // r10d
  char v16; // r9
  char v17; // r8
  char v18; // r14
  char v19; // r11
  int v20; // edx
  const unsigned __int16 *v21; // rax
  unsigned __int8 *v22; // rax
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // rcx
  unsigned __int8 *v25; // rcx
  __int64 v26; // rcx
  char v27; // r8
  __int64 v28; // r9
  FILE *v29; // r11
  __int64 v30; // rax
  char v31; // r15
  int v32; // esi
  _BYTE *v33; // rax
  int v34; // ecx
  char v35; // cl
  int v36; // r8d
  int v37; // r14d
  int v38; // eax
  __int64 v39; // r9
  unsigned __int16 v40; // dx
  int v41; // eax
  __int64 v42; // r9
  int v43; // eax
  int v44; // ecx
  unsigned __int16 v45; // dx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // esi
  char v52; // [rsp+50h] [rbp-39h]
  char v53; // [rsp+51h] [rbp-38h]
  char v54; // [rsp+52h] [rbp-37h]
  int v55; // [rsp+54h] [rbp-35h] BYREF
  int v56; // [rsp+58h] [rbp-31h] BYREF
  int v57; // [rsp+5Ch] [rbp-2Dh]
  int v58; // [rsp+60h] [rbp-29h]
  int v59; // [rsp+64h] [rbp-25h]
  int v60; // [rsp+68h] [rbp-21h]
  int v61; // [rsp+6Ch] [rbp-1Dh]
  unsigned int v62; // [rsp+70h] [rbp-19h] BYREF
  int v63; // [rsp+74h] [rbp-15h]
  __int64 v64; // [rsp+78h] [rbp-11h]
  _QWORD *v65; // [rsp+80h] [rbp-9h]
  _DWORD *v66; // [rsp+88h] [rbp-1h]
  __int64 v67; // [rsp+90h] [rbp+7h] BYREF
  __int64 v68; // [rsp+98h] [rbp+Fh]
  unsigned __int8 *v70; // [rsp+F8h] [rbp+6Fh] BYREF
  _DWORD *v71; // [rsp+100h] [rbp+77h]
  char v72; // [rsp+108h] [rbp+7Fh]

  v71 = a3;
  v3 = 0;
  v4 = a2;
  v61 = 0;
  v5 = 0;
  v56 = 0;
  v6 = a1;
  v66 = 0LL;
  if ( !a2 )
  {
    xHalFreeMessageTarget();
    return 0xFFFFFFFFLL;
  }
  if ( !a1 )
  {
    v8 = -1;
    goto LABEL_194;
  }
  v9 = *a2;
  result = 0LL;
  v52 = 0;
  v10 = 0;
  v55 = 0;
  v62 = 0;
  if ( !v9 )
    return result;
  v8 = -1;
  while ( 2 )
  {
    v11 = v9;
    if ( v9 == -1 )
      v11 = -1;
    if ( (pctype[v11] & 8) != 0 )
    {
      --v10;
      while ( 1 )
      {
        v55 = ++v10;
        v12 = inc(v6);
        if ( v12 == -1 )
          break;
        v6 = a1;
        if ( (pctype[(unsigned __int8)v12] & 8) == 0 )
        {
          ungetc_nolock(v12, a1);
          v3 = 0;
          goto LABEL_14;
        }
      }
      do
LABEL_14:
        v13 = *++v4;
      while ( (pctype[v13] & 8) != 0 );
      goto LABEL_186;
    }
    if ( v9 != 37 )
      goto LABEL_182;
    if ( v4[1] == 37 )
    {
      ++v4;
LABEL_182:
      v55 = ++v10;
      v5 = inc(v6);
      v56 = v5;
      v50 = *v4++;
      if ( v50 == v5 )
        goto LABEL_183;
      if ( v5 == -1 )
        goto LABEL_204;
      ungetc_nolock(v5, a1);
      v51 = v61;
      goto LABEL_191;
    }
    v59 = 0;
    v14 = 0;
    v63 = 0;
    v15 = 0;
    v16 = 0;
    v68 = 0LL;
    v53 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 1;
    do
    {
      v70 = ++v4;
      v20 = *v4;
      v21 = pctype;
      if ( (pctype[*v4] & 4) != 0 )
      {
        ++v14;
        v15 = v20 + 2 * (5 * v15 - 24);
        continue;
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
              v70 = v24;
LABEL_39:
              ++v3;
              v64 = 0LL;
              break;
            }
          }
          if ( v23 == 51 )
          {
            v25 = v4 + 2;
            if ( v4[2] == 50 )
            {
              v4 += 2;
              v70 = v25;
              break;
            }
          }
          LOBYTE(v21) = v23 - 88;
          if ( (unsigned __int8)v21 <= 0x20u )
          {
            v26 = 0x100821001LL;
            if ( _bittest64(&v26, (unsigned __int64)v21) )
              goto LABEL_39;
          }
          ++v3;
          v64 = 0LL;
          break;
        case 'L':
          ++v19;
          break;
        case 'N':
          break;
        case 'h':
          --v19;
          --v18;
          break;
        case 'l':
          v22 = v4 + 1;
          if ( v4[1] != 108 )
          {
            ++v19;
LABEL_33:
            ++v18;
            break;
          }
          ++v4;
          v70 = v22;
          goto LABEL_39;
        case 'w':
          goto LABEL_33;
        default:
          ++v17;
          break;
      }
    }
    while ( !v17 );
    v54 = v16;
    v27 = v16;
    v28 = v68;
    v58 = v14;
    v72 = v19;
    v29 = a1;
    v60 = v3;
    v57 = v15;
    if ( v27 )
    {
      v30 = 0LL;
    }
    else
    {
      v66 = v71;
      v71 += 2;
      v30 = *((_QWORD *)v71 - 1);
    }
    v67 = v30;
    v31 = 0;
    v65 = (_QWORD *)v30;
    if ( !v18 )
      v18 = ((*v4 - 67) & 0xEF) != 0 ? -1 : 1;
    v32 = *v4 | 0x20;
    if ( v32 == 110 )
    {
LABEL_63:
      if ( v58 && !v15 )
      {
        if ( v5 == -1 )
          goto LABEL_204;
        ungetc_nolock(v5, v29);
LABEL_190:
        v51 = v61;
        goto LABEL_191;
      }
      if ( !v27 && ((v32 - 99) & 0xFFFFFFE7) == 0 && v32 != 107 )
      {
        v66 += 2;
        v33 = (_BYTE *)*((_QWORD *)v66 - 1);
        v65 = v33;
        v67 = (__int64)v33;
        v71 = v66 + 2;
        v28 = (unsigned int)*v66;
        if ( !*v66 )
        {
          v51 = 0;
          if ( v18 <= 0 )
            *v33 = 0;
          else
            *(_WORD *)v33 = 0;
          goto LABEL_191;
        }
      }
      if ( v32 <= 112 )
      {
        switch ( v32 )
        {
          case 'p':
            ++v60;
            v72 = 1;
            v64 = 0LL;
            goto LABEL_76;
          case 'c':
            v3 = 0;
            v35 = 16;
            if ( !v58 )
              ++v15;
LABEL_170:
            v35 |= 1u;
LABEL_171:
            if ( v18 > 0 )
              v35 |= 2u;
            if ( v27 )
              v35 |= 4u;
            if ( v32 == 123 )
            {
              v49 = ReadStringDelimited(v35, &v70, &v56, &v55, (__int64)&v67, v15, v29, v28, &v62);
              v4 = v70;
            }
            else
            {
              v49 = ReadString(v35, 0LL, &v56, &v55, (__int64)&v67, v15, v29, v28, &v62);
            }
            v5 = v56;
            if ( v49 )
              goto LABEL_190;
            v10 = v55;
            goto LABEL_180;
          case 'd':
            goto LABEL_76;
          case 'i':
            v32 = 100;
            goto LABEL_81;
        }
        if ( v32 != 110 )
        {
          if ( v32 != 111 )
            goto LABEL_90;
LABEL_76:
          if ( v5 == 45 )
          {
            v53 = 1;
LABEL_115:
            v57 = v15 - 1;
            if ( v15 == 1 && v58 )
            {
              v31 = 1;
              v37 = 0;
              v36 = v58;
LABEL_121:
              if ( v60 )
              {
                if ( !v31 )
                {
                  while ( 1 )
                  {
                    if ( ((v32 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_136;
                      if ( v32 == 111 )
                      {
                        if ( v5 >= 56 )
                          goto LABEL_136;
                        v39 = 8 * v64;
                      }
                      else
                      {
                        v39 = 10 * v64;
                      }
                    }
                    else
                    {
                      v40 = pctype[(unsigned __int8)v5];
                      if ( (v40 & 0x80u) == 0 )
                      {
LABEL_136:
                        v55 = --v10;
                        if ( v5 != -1 )
                          ungetc_nolock(v5, a1);
                        break;
                      }
                      v41 = (char)v5;
                      v39 = 16 * v64;
                      v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                      if ( (v40 & 4) != 0 )
                        v5 = v41;
                      v56 = v5;
                    }
                    ++v63;
                    v42 = v5 - 48 + v39;
                    v64 = v42;
                    if ( v36 )
                    {
                      if ( !--v37 )
                        goto LABEL_139;
                    }
                    v55 = ++v10;
                    v43 = inc(a1);
                    v36 = v58;
                    v5 = v43;
                    v56 = v43;
                  }
                }
                v42 = v64;
LABEL_139:
                v3 = 0;
                if ( v53 )
                  v64 = -v42;
              }
              else
              {
                if ( !v31 )
                {
                  while ( 1 )
                  {
                    if ( ((v32 - 112) & 0xFFFFFFF7) != 0 )
                    {
                      if ( (pctype[(unsigned __int8)v5] & 4) == 0 )
                        goto LABEL_155;
                      if ( v32 == 111 )
                      {
                        if ( v5 >= 56 )
                          goto LABEL_155;
                        v44 = 8 * v59;
                      }
                      else
                      {
                        v44 = 10 * v59;
                      }
                    }
                    else
                    {
                      v45 = pctype[(unsigned __int8)v5];
                      if ( (v45 & 0x80u) == 0 )
                      {
LABEL_155:
                        v55 = --v10;
                        if ( v5 != -1 )
                          ungetc_nolock(v5, a1);
                        break;
                      }
                      v46 = (char)v5;
                      v44 = 16 * v59;
                      v5 = ((char)v5 & 0xFFFFFFDF) - 7;
                      if ( (v45 & 4) != 0 )
                        v5 = v46;
                      v56 = v5;
                    }
                    ++v63;
                    v47 = v5 + v44 - 48;
                    v59 = v47;
                    if ( v36 )
                    {
                      if ( !--v37 )
                        goto LABEL_158;
                    }
                    v55 = ++v10;
                    v48 = inc(a1);
                    v36 = v58;
                    v5 = v48;
                    v56 = v48;
                  }
                }
                v47 = v59;
LABEL_158:
                v3 = 0;
                if ( v53 )
                  v59 = -v47;
              }
              if ( !v63 )
                goto LABEL_190;
              if ( v54 )
                goto LABEL_180;
              ++v62;
              v34 = v59;
LABEL_163:
              if ( v60 )
              {
                *v65 = v64;
              }
              else if ( v72 )
              {
                *(_DWORD *)v65 = v34;
              }
              else
              {
                *(_WORD *)v65 = v34;
              }
              goto LABEL_180;
            }
            v55 = ++v10;
            v5 = inc(v29);
            v56 = v5;
LABEL_109:
            v36 = v58;
          }
          else
          {
            if ( v5 == 43 )
              goto LABEL_115;
            v36 = v58;
          }
          v37 = v57;
          goto LABEL_121;
        }
        v3 = 0;
        v34 = v10;
        if ( !v27 )
          goto LABEL_163;
LABEL_180:
        ++v52;
        ++v4;
LABEL_183:
        if ( v5 == -1 && (*v4 != 37 || v4[1] != 110) )
          goto LABEL_204;
LABEL_186:
        v9 = *v4;
        if ( !*v4 )
          goto LABEL_190;
        v6 = a1;
        continue;
      }
      if ( v32 == 115 )
      {
        v35 = 32;
        goto LABEL_169;
      }
      if ( v32 == 117 )
        goto LABEL_76;
      if ( v32 != 120 )
      {
        if ( v32 != 123 )
        {
LABEL_90:
          if ( *v4 == v5 )
          {
            --v52;
            v3 = 0;
            if ( !v27 )
              v71 = v66;
            goto LABEL_180;
          }
          if ( v5 != -1 )
            ungetc_nolock(v5, v29);
          v51 = 1;
LABEL_191:
          if ( v5 == -1 )
            goto LABEL_204;
          if ( v51 != 1 )
            return v62;
          v8 = v62;
LABEL_194:
          xHalFreeMessageTarget();
          return v8;
        }
        v35 = 64;
LABEL_169:
        v3 = 0;
        if ( v58 )
          goto LABEL_170;
        goto LABEL_171;
      }
LABEL_81:
      if ( v5 == 45 )
      {
        v53 = 1;
      }
      else if ( v5 != 43 )
      {
        goto LABEL_99;
      }
      v57 = v15 - 1;
      if ( v15 == 1 && v58 )
      {
        v31 = 1;
      }
      else
      {
        v55 = ++v10;
        v5 = inc(v29);
        v56 = v5;
      }
LABEL_99:
      if ( v5 == 48 )
      {
        v55 = ++v10;
        v5 = inc(a1);
        v56 = v5;
        if ( (((_BYTE)v5 - 88) & 0xDF) == 0 )
        {
          v55 = ++v10;
          v38 = inc(a1);
          v36 = v58;
          v5 = v38;
          v37 = v57;
          v56 = v38;
          if ( v58 )
          {
            v37 = v57 - 2;
            if ( v57 - 2 < 1 )
              ++v31;
          }
          v32 = 120;
          goto LABEL_121;
        }
        v63 = 1;
        if ( v32 != 120 )
        {
          v36 = v58;
          v37 = v57;
          if ( v58 )
          {
            v37 = v57 - 1;
            if ( v57 == 1 )
              ++v31;
          }
          v32 = 111;
          goto LABEL_121;
        }
        v55 = --v10;
        if ( v5 != -1 )
          ungetc_nolock(v5, a1);
        v5 = 48;
        v56 = 48;
      }
      goto LABEL_109;
    }
    break;
  }
  if ( v32 == 99 || v32 == 123 )
  {
    v55 = ++v10;
    v5 = inc(a1);
    v56 = v5;
  }
  else
  {
    do
    {
      ++v10;
      v5 = inc(v29);
      if ( v5 == -1 )
        break;
      v29 = a1;
    }
    while ( (pctype[(unsigned __int8)v5] & 8) != 0 );
    v55 = v10;
    v56 = v5;
  }
  if ( v5 != -1 )
  {
    v28 = v68;
    v15 = v57;
    v29 = a1;
    v27 = v54;
    goto LABEL_63;
  }
LABEL_204:
  if ( v62 || v52 )
    return v62;
  return v8;
}
