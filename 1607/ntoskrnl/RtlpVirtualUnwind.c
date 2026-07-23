/*
 * XREFs of RtlpVirtualUnwind @ 0x1400F125C
 * Callers:
 *     PspGetSetContextInternal @ 0x1404FB520 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpUnwindEpilogue @ 0x1400B1AE0 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400B1C9C (RtlpUnwindOpSlots.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     RtlpSameFunction @ 0x140159958 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x1401599F0 (RtlpTrivialFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpVirtualUnwind(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        char *a6,
        _QWORD *a7,
        __int64 *a8,
        __int64 a9,
        unsigned __int64 *a10,
        _QWORD *a11)
{
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v16; // r11
  int v17; // r12d
  unsigned int v18; // r15d
  unsigned int v19; // edi
  __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 v22; // r11
  unsigned int v23; // ecx
  _DWORD *v24; // rdx
  __int64 v25; // r9
  __int64 (__fastcall *v26)(int, int, int, int, int, int, int, __int64); // r15
  unsigned int v27; // r10d
  __int64 v28; // rsi
  char v29; // r8
  unsigned int v30; // ecx
  __int64 v31; // r9
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned __int64 v39; // rdx
  unsigned int v40; // ecx
  int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int16 v47; // ax
  unsigned int v48; // r10d
  int v49; // r8d
  int v50; // ecx
  unsigned int j; // r9d
  __int16 v52; // ax
  int v53; // edx
  _BYTE *v54; // r8
  int v55; // ecx
  char v56; // al
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned int v59; // ecx
  __int64 (__fastcall **v60)(int, int, int, int, int, int, int, __int64); // rax
  unsigned int v61; // ecx
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  char v64; // r8
  _BYTE *v65; // rcx
  unsigned int v66; // r12d
  char v67; // al
  char v68; // dl
  __int64 v69; // rax
  __int64 v70; // rax
  int v71; // eax
  unsigned int v72; // ebp
  unsigned __int16 v73; // cx
  __int64 v74; // rax
  bool v75; // cf
  char v76; // dl
  bool v77; // zf
  _BYTE *v78; // r15
  int v79; // eax
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // r15
  unsigned int *v82; // rax
  _BYTE *i; // rcx
  char v84; // al
  char v85; // al
  __int64 v86; // rcx
  unsigned __int64 v87; // rdx
  __int64 v88; // r9
  unsigned __int64 v89; // rdx
  __int64 v90; // r9
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  __int64 v93; // rcx
  _QWORD *v94; // rcx
  _QWORD *v95; // r8
  __int64 v96; // rcx
  _DWORD *v97; // [rsp+40h] [rbp-68h]
  __int64 v98; // [rsp+50h] [rbp-58h]
  int v99; // [rsp+B0h] [rbp+8h]
  char v101; // [rsp+C0h] [rbp+18h]
  unsigned int v102; // [rsp+C8h] [rbp+20h]
  unsigned int v104; // [rsp+108h] [rbp+60h]

  v11 = 0;
  v12 = a2 + a4[2];
  v97 = a4;
  v16 = a2;
  v17 = 0;
  if ( a3 <= 0x7FFFFFFEFFFFLL && (v12 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = *(_BYTE *)v12 & 7;
  if ( *a6 )
  {
    if ( a1 < 0 && v18 < 2 )
    {
      if ( !(unsigned int)RtlpTrivialFunction(a4, a2, a3, v12) )
        return (unsigned int)-1073741784;
      v16 = a2;
      v17 = 1;
    }
  }
  else
  {
    v17 = 1;
  }
  v99 = a1 & 0x7FFFFFFF;
  v19 = a3 - *a4 - v16;
  if ( (*(_BYTE *)(v12 + 3) & 0xF) == 0 )
  {
    v20 = a5;
    v21 = a8;
LABEL_6:
    *v21 = *(_QWORD *)(v20 + 152);
    goto LABEL_7;
  }
  if ( v19 >= *(unsigned __int8 *)(v12 + 1) || (*(_BYTE *)v12 & 0x20) != 0 )
  {
    v20 = a5;
    v21 = a8;
    v56 = *(_BYTE *)(v12 + 3);
  }
  else
  {
    v72 = 0;
    if ( *(_BYTE *)(v12 + 2) )
    {
      do
      {
        v73 = *(_WORD *)(v12 + 2LL * v72 + 4);
        if ( (HIBYTE(v73) & 0xF) == 3 )
          break;
        v72 += RtlpUnwindOpSlots(v73);
      }
      while ( v72 < *(unsigned __int8 *)(v12 + 2) );
      v16 = a2;
    }
    v74 = v72;
    v21 = a8;
    v75 = v19 < *(unsigned __int8 *)(v12 + 2 * v74 + 4);
    v20 = a5;
    if ( v75 )
      goto LABEL_6;
    v56 = *(_BYTE *)(v12 + 3);
  }
  v57 = *(_QWORD *)(v20 + 8LL * (v56 & 0xF) + 120);
  *v21 = v57;
  *v21 = v57 - (*(_BYTE *)(v12 + 3) & 0xF0);
LABEL_7:
  if ( v17 )
    goto LABEL_8;
  if ( v18 < 2 )
  {
    v64 = *(_BYTE *)a3;
    v65 = (_BYTE *)a3;
    v66 = 0;
    if ( *(_BYTE *)a3 == 72 )
    {
      v67 = *(_BYTE *)(a3 + 1);
      if ( v67 == -125 && *(_BYTE *)(a3 + 2) == 0xC4 )
      {
LABEL_169:
        v65 = (_BYTE *)(a3 + 4);
        goto LABEL_100;
      }
      if ( v67 == -127 && *(_BYTE *)(a3 + 2) == 0xC4 )
        goto LABEL_171;
    }
    if ( (v64 & 0xFE) != 0x48 )
      goto LABEL_100;
    if ( *(_BYTE *)(a3 + 1) != 0x8D )
      goto LABEL_100;
    v66 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v64 & 1));
    if ( !v66 || v66 != (*(_BYTE *)(v12 + 3) & 0xF) )
      goto LABEL_100;
    v76 = *(_BYTE *)(a3 + 2) & 0xF8;
    if ( v76 == 96 )
      goto LABEL_169;
    if ( v76 == -96 )
LABEL_171:
      v65 = (_BYTE *)(a3 + 7);
    while ( 1 )
    {
LABEL_100:
      while ( (*v65 & 0xF8) == 0x58 )
        ++v65;
      if ( (*v65 & 0xF0) != 0x40 || (v65[1] & 0xF8) != 0x58 )
        break;
      v65 += 2;
    }
    if ( *v65 == 0xF2 )
      ++v65;
    v68 = *v65;
    if ( (unsigned __int8)(*v65 + 62) > 1u && (v68 != -13 || v65[1] != 0xC3) )
    {
      if ( ((v68 + 23) & 0xFD) != 0 )
      {
        if ( v68 == -1 && v65[1] == 37 )
          goto LABEL_189;
        if ( (v68 & 0xF8) != 0x48 || v65[1] != 0xFF )
          goto LABEL_8;
        v77 = (v65[2] & 0x38) == 32;
      }
      else
      {
        v78 = &v65[-v16];
        if ( v68 == -21 )
          v79 = (char)v65[1] + 2;
        else
          v79 = *(_DWORD *)(v65 + 1) + 5;
        v80 = *a4;
        v81 = (unsigned __int64)&v78[v79];
        if ( v81 < v80 || v81 >= a4[1] )
        {
          v82 = (unsigned int *)RtlpSameFunction(a4, v16, v81 + v16);
          if ( !v82 )
            goto LABEL_189;
          v77 = v81 == *v82;
        }
        else
        {
          if ( v81 != v80 )
            goto LABEL_8;
          v77 = (*(_BYTE *)v12 & 0x20) == 0;
        }
      }
      if ( !v77 )
        goto LABEL_8;
    }
LABEL_189:
    i = (_BYTE *)a3;
    if ( (*(_BYTE *)a3 & 0xF8) != 0x48 )
      goto LABEL_201;
    v84 = *(_BYTE *)(a3 + 1);
    switch ( v84 )
    {
      case -125:
        *(_QWORD *)(v20 + 152) += *(char *)(a3 + 3);
LABEL_197:
        i = (_BYTE *)(a3 + 4);
        goto LABEL_201;
      case -127:
        *(_QWORD *)(v20 + 152) += ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8) | *(unsigned __int8 *)(a3 + 3);
        break;
      case -115:
        v85 = *(_BYTE *)(a3 + 2) & 0xF8;
        if ( v85 == 96 )
        {
          v86 = *(_QWORD *)(v20 + 8LL * v66 + 120);
          *(_QWORD *)(v20 + 152) = v86;
          *(_QWORD *)(v20 + 152) = v86 + *(char *)(a3 + 3);
          goto LABEL_197;
        }
        if ( v85 != -96 )
          goto LABEL_201;
        *(_QWORD *)(v20 + 152) = *(_QWORD *)(v20 + 8LL * v66 + 120)
                               + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_201;
    }
    for ( i = (_BYTE *)(a3 + 7); ; i += 2 )
    {
LABEL_201:
      while ( (*i & 0xF8) == 0x58 )
      {
        v87 = *(_QWORD *)(v20 + 152);
        v88 = *i & 7;
        if ( a3 <= 0x7FFFFFFEFFFFLL && (v87 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a10 && (v87 < *a10 || v87 > *a11 - 8LL) )
          return (unsigned int)-1073741784;
        *(_QWORD *)(v20 + 8 * v88 + 120) = *(_QWORD *)v87;
        if ( a9 )
          *(_QWORD *)(a9 + 8 * v88 + 128) = v87;
        *(_QWORD *)(v20 + 152) += 8LL;
        ++i;
      }
      if ( (*i & 0xF0) != 0x40 || (i[1] & 0xF8) != 0x58 )
        break;
      v89 = *(_QWORD *)(v20 + 152);
      v90 = i[1] & 7 | (8 * (*i & 1u));
      if ( a3 <= 0x7FFFFFFEFFFFLL && (v89 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a10 && (v89 < *a10 || v89 > *a11 - 8LL) )
        return (unsigned int)-1073741784;
      *(_QWORD *)(v20 + 8 * v90 + 120) = *(_QWORD *)v89;
      if ( a9 )
        *(_QWORD *)(a9 + 8 * v90 + 128) = v89;
      *(_QWORD *)(v20 + 152) += 8LL;
    }
    if ( a3 <= 0x7FFFFFFEFFFFLL )
    {
      v91 = *(_QWORD *)(v20 + 152);
      if ( (v91 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    if ( a10 )
    {
      v92 = *(_QWORD *)(v20 + 152);
      if ( v92 < *a10 || v92 > *a11 - 8LL )
        return (unsigned int)-1073741784;
    }
    v93 = **(_QWORD **)(v20 + 152);
    *(_QWORD *)(v20 + 152) += 8LL;
    *(_QWORD *)(v20 + 248) = v93;
LABEL_138:
    *a6 = 0;
    return v11;
  }
  if ( !*(_BYTE *)(v12 + 2) )
    goto LABEL_8;
  v47 = *(_WORD *)(v12 + 4);
  if ( (HIBYTE(v47) & 0xF) != 6 )
    goto LABEL_8;
  v48 = (unsigned __int8)v47;
  v49 = a3 - v16;
  if ( (v47 & 0x1000) != 0 )
  {
    v50 = a4[1] - (unsigned __int8)v47;
    if ( v49 - v50 < (unsigned int)(unsigned __int8)v47 )
    {
LABEL_137:
      RtlpUnwindEpilogue(v16, a3, (unsigned int)(v49 - v50), a4, v20, a9, a10, a11);
      goto LABEL_138;
    }
  }
  for ( j = 1; j < *(unsigned __int8 *)(v12 + 2); ++j )
  {
    v52 = *(_WORD *)(v12 + 2LL * j + 4);
    if ( (HIBYTE(v52) & 0xF) != 6 )
      break;
    v53 = (unsigned __int8)v52 + (HIBYTE(v52) >> 4 << 8);
    if ( !v53 )
      break;
    v50 = a4[1] - v53;
    if ( v49 - v50 < v48 )
      goto LABEL_137;
  }
LABEL_8:
  v22 = *v21;
  v23 = 0;
  v24 = v97;
  v25 = a2;
  v98 = *v21;
  v102 = 0;
  while ( 1 )
  {
    v26 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))(v25 + (unsigned int)v24[2]);
    v27 = a3 - *v24 - v25;
    v101 = 0;
    v104 = v27;
    LODWORD(v28) = 0;
    v29 = 0;
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v26 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( *((_BYTE *)v26 + 2) )
    {
      do
      {
        v30 = *((_BYTE *)v26 + 2 * (unsigned int)v28 + 5) & 0xF;
        v31 = *((unsigned __int8 *)v26 + 2 * (unsigned int)v28 + 5) >> 4;
        if ( v27 < *((unsigned __int8 *)v26 + 2 * (unsigned int)v28 + 4) )
        {
          v71 = RtlpUnwindOpSlots(*((_WORD *)v26 + (unsigned int)v28 + 2));
          v27 = v104;
          LODWORD(v28) = v71 + v28;
          v22 = v98;
        }
        else
        {
          if ( v30 > 5 )
          {
            v40 = v30 - 6;
            if ( v40 )
            {
              v43 = v40 - 1;
              if ( v43 )
              {
                v44 = v43 - 1;
                if ( v44 )
                {
                  v61 = v44 - 1;
                  if ( v61 )
                  {
                    if ( v61 != 1 )
LABEL_246:
                      RtlRaiseStatus(-1073741569);
                    v101 = 1;
                    v62 = *(_QWORD *)(v20 + 152);
                    v63 = v62 + 24;
                    if ( (_DWORD)v31 )
                    {
                      v62 += 8LL;
                      v63 += 8LL;
                    }
                    if ( a3 <= 0x7FFFFFFEFFFFLL && (v62 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( a10 && (v62 < *a10 || v62 > *a11 - 8LL) )
                      return (unsigned int)-1073741784;
                    if ( a3 <= 0x7FFFFFFEFFFFLL && (v63 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( a10 && (v63 < *a10 || v63 > *a11 - 8LL) )
                      return (unsigned int)-1073741784;
                    *(_QWORD *)(v20 + 248) = *(_QWORD *)v62;
                    *(_QWORD *)(v20 + 152) = *(_QWORD *)v63;
                  }
                  else
                  {
                    v28 = (unsigned int)(v28 + 2);
                    v95 = (_QWORD *)(v22
                                   + *((unsigned __int16 *)v26 + (unsigned int)(v28 - 1) + 2)
                                   + (*((unsigned __int16 *)v26 + v28 + 2) << 16));
                    if ( a3 <= 0x7FFFFFFEFFFFLL
                      && (((_BYTE)v22 + (unsigned __int8)*((_WORD *)v26 + (unsigned int)(v28 - 1) + 2)) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    if ( a10 && ((unsigned __int64)v95 < *a10 || (unsigned __int64)v95 > *a11 - 16LL) )
                      return (unsigned int)-1073741784;
                    v96 = 2LL * (unsigned int)v31;
                    *(_QWORD *)(v20 + 8 * v96 + 416) = *v95;
                    *(_QWORD *)(v20 + 8 * v96 + 424) = v95[1];
                    if ( a9 )
                      *(_QWORD *)(a9 + 8 * v31) = v95;
                  }
                }
                else
                {
                  v28 = (unsigned int)(v28 + 1);
                  v45 = v22 + 16 * (unsigned int)*((unsigned __int16 *)v26 + v28 + 2);
                  if ( a3 <= 0x7FFFFFFEFFFFLL && (v45 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( a10 && (v45 < *a10 || v45 > *a11 - 16LL) )
                    return (unsigned int)-1073741784;
                  v46 = 2LL * (unsigned int)v31;
                  *(_QWORD *)(v20 + 8 * v46 + 416) = *(_QWORD *)v45;
                  *(_QWORD *)(v20 + 8 * v46 + 424) = *(_QWORD *)(v45 + 8);
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v31) = v45;
                }
              }
              else
              {
                LODWORD(v28) = v28 + 2;
              }
            }
            else
            {
              LODWORD(v28) = v28 + 1;
            }
          }
          else if ( v30 == 5 )
          {
            v28 = (unsigned int)(v28 + 2);
            v94 = (_QWORD *)(v22
                           + (*((unsigned __int16 *)v26 + v28 + 2) << 16)
                           + (unsigned int)*((unsigned __int16 *)v26 + (unsigned int)(v28 - 1) + 2));
            if ( a3 <= 0x7FFFFFFEFFFFLL
              && (((_BYTE)v22 + (unsigned __int8)*((_WORD *)v26 + (unsigned int)(v28 - 1) + 2)) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
            if ( a10 && ((unsigned __int64)v94 < *a10 || (unsigned __int64)v94 > *a11 - 8LL) )
              return (unsigned int)-1073741784;
            *(_QWORD *)(v20 + 8 * v31 + 120) = *v94;
            if ( a9 )
              *(_QWORD *)(a9 + 8 * v31 + 128) = v94;
          }
          else if ( (*((_BYTE *)v26 + 2 * (unsigned int)v28 + 5) & 0xF) != 0 )
          {
            v36 = v30 - 1;
            if ( v36 )
            {
              v37 = v36 - 1;
              if ( v37 )
              {
                v38 = v37 - 1;
                if ( v38 )
                {
                  if ( v38 != 1 )
                    goto LABEL_246;
                  v28 = (unsigned int)(v28 + 1);
                  v39 = v22 + 8 * (unsigned int)*((unsigned __int16 *)v26 + v28 + 2);
                  if ( a3 <= 0x7FFFFFFEFFFFLL && (v39 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( a10 && (v39 < *a10 || v39 > *a11 - 8LL) )
                    return (unsigned int)-1073741784;
                  *(_QWORD *)(v20 + 8 * v31 + 120) = *(_QWORD *)v39;
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v31 + 128) = v39;
                }
                else
                {
                  v58 = *(_QWORD *)(v20 + 8LL * (*((_BYTE *)v26 + 3) & 0xF) + 120);
                  *(_QWORD *)(v20 + 152) = v58;
                  *(_QWORD *)(v20 + 152) = v58 - (*((_BYTE *)v26 + 3) & 0xF0);
                }
              }
              else
              {
                *(_QWORD *)(v20 + 152) += (unsigned int)(8 * v31 + 8);
              }
            }
            else
            {
              v28 = (unsigned int)(v28 + 1);
              v41 = *((unsigned __int16 *)v26 + v28 + 2);
              if ( (_DWORD)v31 )
              {
                v28 = (unsigned int)(v28 + 1);
                v42 = (*((unsigned __int16 *)v26 + v28 + 2) << 16) + v41;
              }
              else
              {
                v42 = 8 * v41;
              }
              *(_QWORD *)(v20 + 152) += v42;
            }
          }
          else
          {
            v32 = *(_QWORD *)(v20 + 152);
            if ( a3 <= 0x7FFFFFFEFFFFLL && (v32 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( a10 && (v32 < *a10 || v32 > *a11 - 8LL) )
              return (unsigned int)-1073741784;
            *(_QWORD *)(v20 + 8 * v31 + 120) = *(_QWORD *)v32;
            if ( a9 )
              *(_QWORD *)(a9 + 8 * v31 + 128) = v32;
            *(_QWORD *)(v20 + 152) += 8LL;
          }
          LODWORD(v28) = v28 + 1;
        }
      }
      while ( (unsigned int)v28 < *((unsigned __int8 *)v26 + 2) );
      v29 = v101;
      v24 = v97;
      v23 = v102;
      v25 = a2;
    }
    if ( (*(_BYTE *)v26 & 0x20) == 0 )
      break;
    v69 = *((unsigned __int8 *)v26 + 2);
    if ( (v69 & 1) != 0 )
      v69 = (unsigned int)(v69 + 1);
    v24 = (_DWORD *)((char *)v26 + 2 * v69 + 4);
    v97 = v24;
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v24 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v102 = ++v23;
    if ( v23 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( v29 )
  {
    v59 = 0;
    v60 = &RtlpSafeMachineFrameEntries;
    while ( v26 != *v60 )
    {
      ++v59;
      ++v60;
      if ( v59 >= 3 )
        goto LABEL_32;
    }
    v29 = 0;
    goto LABEL_32;
  }
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    v70 = *(_QWORD *)(v20 + 152);
    if ( (v70 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  if ( a10 )
  {
    v33 = *(_QWORD *)(v20 + 152);
    if ( v33 < *a10 || v33 > *a11 - 8LL )
      return (unsigned int)-1073741784;
  }
  v34 = **(_QWORD **)(v20 + 152);
  *(_QWORD *)(v20 + 152) += 8LL;
  *(_QWORD *)(v20 + 248) = v34;
LABEL_32:
  *a6 = v29;
  if ( v99 )
  {
    v54 = (_BYTE *)(v25 + (unsigned int)v24[2]);
    if ( a3 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v54 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (int)a3 - *v24 - (int)v25 >= (unsigned int)(unsigned __int8)v54[1] && ((*v54 >> 3) & (unsigned __int8)v99) != 0 )
    {
      v55 = (unsigned __int8)v54[2];
      if ( (v55 & 1) != 0 )
        ++v55;
      *a7 = &v54[2 * (v55 + 2) + 4];
    }
  }
  return v11;
}
