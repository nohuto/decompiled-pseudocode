/*
 * XREFs of RtlpVirtualUnwind @ 0x14001B25C
 * Callers:
 *     PspGetSetContextInternal @ 0x14044DC60 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpUnwindEpilogue @ 0x140005800 (RtlpUnwindEpilogue.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlpUnwindOpSlots @ 0x14001D3DC (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401609E0 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x14017E660 (RtlpTrivialFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v15; // r11
  int v17; // r12d
  unsigned int v18; // r15d
  unsigned int v19; // edi
  __int64 v20; // rdi
  __int64 *v21; // rbp
  __int64 v22; // r11
  unsigned int v23; // edx
  _DWORD *v24; // r9
  __int64 v25; // rsi
  unsigned int v26; // r8d
  __int64 (__fastcall *v27)(int, int, int, int, int, int, int, __int64); // r15
  char v28; // r10
  unsigned int v29; // ecx
  __int64 v30; // r9
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v39; // ecx
  int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r8
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rcx
  unsigned int v51; // ecx
  __int64 (__fastcall **v52)(int, int, int, int, int, int, int, __int64); // rax
  __int16 v53; // ax
  unsigned int v54; // r10d
  int v55; // r8d
  int v56; // ecx
  unsigned int j; // r9d
  __int16 v58; // ax
  int v59; // edx
  _BYTE *v60; // r8
  int v61; // ecx
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  char v65; // r8
  _BYTE *v66; // rcx
  unsigned int v67; // r12d
  char v68; // al
  char v69; // dl
  __int64 v70; // rcx
  unsigned int v71; // ebp
  __int64 v72; // rax
  bool v73; // cf
  char v74; // dl
  bool v75; // zf
  _BYTE *v76; // r15
  int v77; // eax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // r15
  unsigned int *v80; // rax
  char *i; // rdx
  char v82; // al
  char v83; // al
  __int64 v84; // rcx
  char v85; // cl
  unsigned __int64 v86; // r8
  __int64 v87; // r10
  unsigned __int64 v88; // r8
  __int64 v89; // r10
  __int64 v90; // rcx
  unsigned __int64 v91; // rcx
  __int64 v92; // rcx
  _QWORD *v93; // r8
  _QWORD *v94; // r8
  __int64 v95; // rcx
  _DWORD *v96; // [rsp+40h] [rbp-58h]
  __int64 v97; // [rsp+48h] [rbp-50h]
  int v98; // [rsp+A0h] [rbp+8h]
  char v100; // [rsp+B0h] [rbp+18h]
  unsigned int v101; // [rsp+B8h] [rbp+20h]
  unsigned int v103; // [rsp+F8h] [rbp+60h]

  v11 = 0;
  v12 = a2 + a4[2];
  v96 = a4;
  v15 = a2;
  v17 = 0;
  if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v12 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v18 = *(_BYTE *)v12 & 7;
  if ( *a6 )
  {
    if ( a1 < 0 && v18 < 2 )
    {
      if ( !(unsigned int)RtlpTrivialFunction(a4, a2, a3, v12) )
        return (unsigned int)-1073741784;
      v15 = a2;
      v17 = 1;
    }
  }
  else
  {
    v17 = 1;
  }
  v98 = a1 & 0x7FFFFFFF;
  v19 = a3 - *a4 - v15;
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
    v48 = *(_BYTE *)(v12 + 3);
  }
  else
  {
    v71 = 0;
    if ( *(_BYTE *)(v12 + 2) )
    {
      do
      {
        if ( (HIBYTE(*(_WORD *)(v12 + 2LL * v71 + 4)) & 0xF) == 3 )
          break;
        v71 += ((__int64 (*)(void))RtlpUnwindOpSlots)();
      }
      while ( v71 < *(unsigned __int8 *)(v12 + 2) );
      v15 = a2;
    }
    v72 = v71;
    v21 = a8;
    v73 = v19 < *(unsigned __int8 *)(v12 + 2 * v72 + 4);
    v20 = a5;
    if ( v73 )
      goto LABEL_6;
    v48 = *(_BYTE *)(v12 + 3);
  }
  v49 = *(_QWORD *)(v20 + 8LL * (v48 & 0xF) + 120);
  *v21 = v49;
  *v21 = v49 - (*(_BYTE *)(v12 + 3) & 0xF0);
LABEL_7:
  if ( v17 )
    goto LABEL_8;
  if ( v18 < 2 )
  {
    v65 = *(_BYTE *)a3;
    v66 = (_BYTE *)a3;
    v67 = 0;
    if ( *(_BYTE *)a3 == 72 )
    {
      v68 = *(_BYTE *)(a3 + 1);
      if ( v68 == -125 && *(_BYTE *)(a3 + 2) == 0xC4 )
      {
LABEL_168:
        v66 = (_BYTE *)(a3 + 4);
        goto LABEL_109;
      }
      if ( v68 == -127 && *(_BYTE *)(a3 + 2) == 0xC4 )
        goto LABEL_170;
    }
    if ( (v65 & 0xFE) != 0x48 )
      goto LABEL_109;
    if ( *(_BYTE *)(a3 + 1) != 0x8D )
      goto LABEL_109;
    v67 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v65 & 1));
    if ( !v67 || v67 != (*(_BYTE *)(v12 + 3) & 0xF) )
      goto LABEL_109;
    v74 = *(_BYTE *)(a3 + 2) & 0xF8;
    if ( v74 == 96 )
      goto LABEL_168;
    if ( v74 == -96 )
LABEL_170:
      v66 = (_BYTE *)(a3 + 7);
    while ( 1 )
    {
LABEL_109:
      while ( (*v66 & 0xF8) == 0x58 )
        ++v66;
      if ( (*v66 & 0xF0) != 0x40 || (v66[1] & 0xF8) != 0x58 )
        break;
      v66 += 2;
    }
    if ( *v66 == 0xF2 )
      ++v66;
    v69 = *v66;
    if ( (unsigned __int8)(*v66 + 62) > 1u && (v69 != -13 || v66[1] != 0xC3) )
    {
      if ( ((v69 + 23) & 0xFD) != 0 )
      {
        if ( v69 == -1 && v66[1] == 37 )
          goto LABEL_189;
        if ( (v69 & 0xF8) != 0x48 || v66[1] != 0xFF )
          goto LABEL_8;
        v75 = (v66[2] & 0x38) == 32;
      }
      else
      {
        v76 = &v66[-v15];
        if ( v69 == -21 )
          v77 = (char)v66[1] + 2;
        else
          v77 = *(_DWORD *)(v66 + 1) + 5;
        v78 = *a4;
        v79 = (unsigned __int64)&v76[v77];
        if ( v79 < v78 || v79 >= a4[1] )
        {
          v80 = (unsigned int *)RtlpSameFunction(a4, v15, v79 + v15);
          if ( !v80 )
            goto LABEL_189;
          v75 = v79 == *v80;
        }
        else
        {
          if ( v79 != v78 )
            goto LABEL_8;
          v75 = (*(_BYTE *)v12 & 0x20) == 0;
        }
      }
      if ( !v75 )
        goto LABEL_8;
    }
LABEL_189:
    i = (char *)a3;
    if ( (*(_BYTE *)a3 & 0xF8) != 0x48 )
      goto LABEL_201;
    v82 = *(_BYTE *)(a3 + 1);
    switch ( v82 )
    {
      case -125:
        *(_QWORD *)(v20 + 152) += *(char *)(a3 + 3);
LABEL_197:
        i = (char *)(a3 + 4);
        goto LABEL_201;
      case -127:
        *(_QWORD *)(v20 + 152) += *(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8);
        break;
      case -115:
        v83 = *(_BYTE *)(a3 + 2) & 0xF8;
        if ( v83 == 96 )
        {
          v84 = *(_QWORD *)(v20 + 8LL * v67 + 120);
          *(_QWORD *)(v20 + 152) = v84;
          *(_QWORD *)(v20 + 152) = v84 + *(char *)(a3 + 3);
          goto LABEL_197;
        }
        if ( v83 != -96 )
          goto LABEL_201;
        *(_QWORD *)(v20 + 152) = *(_QWORD *)(v20 + 8LL * v67 + 120)
                               + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
        break;
      default:
        goto LABEL_201;
    }
    for ( i = (char *)(a3 + 7); ; i += 2 )
    {
LABEL_201:
      while ( 1 )
      {
        v85 = *i;
        if ( (*i & 0xF8) != 0x58 )
          break;
        v86 = *(_QWORD *)(v20 + 152);
        v87 = v85 & 7;
        if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v86 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( a10 && (v86 < *a10 || v86 > *a11 - 8LL) )
          return (unsigned int)-1073741784;
        *(_QWORD *)(v20 + 8 * v87 + 120) = *(_QWORD *)v86;
        if ( a9 )
          *(_QWORD *)(a9 + 8 * v87 + 128) = v86;
        *(_QWORD *)(v20 + 152) += 8LL;
        ++i;
      }
      if ( (v85 & 0xF0) != 0x40 || (i[1] & 0xF8) != 0x58 )
        break;
      v88 = *(_QWORD *)(v20 + 152);
      v89 = i[1] & 7 | (8 * (v85 & 1u));
      if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v88 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a10 && (v88 < *a10 || v88 > *a11 - 8LL) )
        return (unsigned int)-1073741784;
      *(_QWORD *)(v20 + 8 * v89 + 120) = *(_QWORD *)v88;
      if ( a9 )
        *(_QWORD *)(a9 + 8 * v89 + 128) = v88;
      *(_QWORD *)(v20 + 152) += 8LL;
    }
    if ( a3 <= (unsigned __int64)MmHighestUserAddress )
    {
      v90 = *(_QWORD *)(v20 + 152);
      if ( (v90 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    if ( a10 )
    {
      v91 = *(_QWORD *)(v20 + 152);
      if ( v91 < *a10 || v91 > *a11 - 8LL )
        return (unsigned int)-1073741784;
    }
    v92 = **(_QWORD **)(v20 + 152);
    *(_QWORD *)(v20 + 152) += 8LL;
    *(_QWORD *)(v20 + 248) = v92;
LABEL_126:
    *a6 = 0;
    return v11;
  }
  if ( !*(_BYTE *)(v12 + 2) )
    goto LABEL_8;
  v53 = *(_WORD *)(v12 + 4);
  if ( (HIBYTE(v53) & 0xF) != 6 )
    goto LABEL_8;
  v54 = (unsigned __int8)v53;
  v55 = a3 - v15;
  if ( (v53 & 0x1000) != 0 )
  {
    v56 = a4[1] - (unsigned __int8)v53;
    if ( v55 - v56 < (unsigned int)(unsigned __int8)v53 )
    {
LABEL_125:
      RtlpUnwindEpilogue(v15, a3, v55 - v56, a4, v20, a9, a10, a11);
      goto LABEL_126;
    }
  }
  for ( j = 1; j < *(unsigned __int8 *)(v12 + 2); ++j )
  {
    v58 = *(_WORD *)(v12 + 2LL * j + 4);
    if ( (HIBYTE(v58) & 0xF) != 6 )
      break;
    v59 = (unsigned __int8)v58 + (HIBYTE(v58) >> 4 << 8);
    if ( !v59 )
      break;
    v56 = a4[1] - v59;
    if ( v55 - v56 < v54 )
      goto LABEL_125;
  }
LABEL_8:
  v22 = *v21;
  v23 = 0;
  v24 = v96;
  v97 = *v21;
  v101 = 0;
  while ( 1 )
  {
    LODWORD(v25) = 0;
    v26 = a3 - *v24 - a2;
    v27 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64))(a2 + (unsigned int)v24[2]);
    v100 = 0;
    v28 = 0;
    v103 = v26;
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v27 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( *((_BYTE *)v27 + 2) )
    {
      do
      {
        v29 = *((_BYTE *)v27 + 2 * (unsigned int)v25 + 5) & 0xF;
        v30 = *((unsigned __int8 *)v27 + 2 * (unsigned int)v25 + 5) >> 4;
        if ( v26 < *((unsigned __int8 *)v27 + 2 * (unsigned int)v25 + 4) )
        {
          v64 = RtlpUnwindOpSlots(*((unsigned __int16 *)v27 + (unsigned int)v25 + 2));
          v22 = v97;
          LODWORD(v25) = v64 + v25;
        }
        else
        {
          if ( v29 > 5 )
          {
            v39 = v29 - 6;
            if ( v39 )
            {
              v43 = v39 - 1;
              if ( v43 )
              {
                v44 = v43 - 1;
                if ( v44 )
                {
                  v45 = v44 - 1;
                  if ( v45 )
                  {
                    if ( v45 != 1 )
LABEL_246:
                      RtlRaiseStatus(-1073741569);
                    v46 = *(_QWORD *)(v20 + 152);
                    v100 = 1;
                    v47 = v46 + 24;
                    if ( (_DWORD)v30 )
                    {
                      v46 += 8LL;
                      v47 += 8LL;
                    }
                    if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v46 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( a10 && (v46 < *a10 || v46 > *a11 - 8LL) )
                      return (unsigned int)-1073741784;
                    if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v47 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( a10 && (v47 < *a10 || v47 > *a11 - 8LL) )
                      return (unsigned int)-1073741784;
                    *(_QWORD *)(v20 + 248) = *(_QWORD *)v46;
                    *(_QWORD *)(v20 + 152) = *(_QWORD *)v47;
                  }
                  else
                  {
                    v25 = (unsigned int)(v25 + 2);
                    v94 = (_QWORD *)(v22
                                   + *((unsigned __int16 *)v27 + (unsigned int)(v25 - 1) + 2)
                                   + (*((unsigned __int16 *)v27 + v25 + 2) << 16));
                    if ( a3 <= (unsigned __int64)MmHighestUserAddress
                      && (((_BYTE)v22 + (unsigned __int8)*((_WORD *)v27 + (unsigned int)(v25 - 1) + 2)) & 3) != 0 )
                    {
                      ExRaiseDatatypeMisalignment();
                    }
                    if ( a10 && ((unsigned __int64)v94 < *a10 || (unsigned __int64)v94 > *a11 - 16LL) )
                      return (unsigned int)-1073741784;
                    v95 = 2LL * (unsigned int)v30;
                    *(_QWORD *)(v20 + 8 * v95 + 416) = *v94;
                    *(_QWORD *)(v20 + 8 * v95 + 424) = v94[1];
                    if ( a9 )
                      *(_QWORD *)(a9 + 8 * v30) = v94;
                  }
                }
                else
                {
                  v25 = (unsigned int)(v25 + 1);
                  v62 = v22 + 16 * (unsigned int)*((unsigned __int16 *)v27 + v25 + 2);
                  if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v62 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( a10 && (v62 < *a10 || v62 > *a11 - 16LL) )
                    return (unsigned int)-1073741784;
                  v63 = 2LL * (unsigned int)v30;
                  *(_QWORD *)(v20 + 8 * v63 + 416) = *(_QWORD *)v62;
                  *(_QWORD *)(v20 + 8 * v63 + 424) = *(_QWORD *)(v62 + 8);
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v30) = v62;
                }
              }
              else
              {
                LODWORD(v25) = v25 + 2;
              }
            }
            else
            {
              LODWORD(v25) = v25 + 1;
            }
          }
          else if ( v29 == 5 )
          {
            v25 = (unsigned int)(v25 + 2);
            v93 = (_QWORD *)(v22
                           + *((unsigned __int16 *)v27 + (unsigned int)(v25 - 1) + 2)
                           + (*((unsigned __int16 *)v27 + v25 + 2) << 16));
            if ( a3 <= (unsigned __int64)MmHighestUserAddress
              && (((_BYTE)v22 + (unsigned __int8)*((_WORD *)v27 + (unsigned int)(v25 - 1) + 2)) & 3) != 0 )
            {
              ExRaiseDatatypeMisalignment();
            }
            if ( a10 && ((unsigned __int64)v93 < *a10 || (unsigned __int64)v93 > *a11 - 8LL) )
              return (unsigned int)-1073741784;
            *(_QWORD *)(v20 + 8 * v30 + 120) = *v93;
            if ( a9 )
              *(_QWORD *)(a9 + 8 * v30 + 128) = v93;
          }
          else if ( (*((_BYTE *)v27 + 2 * (unsigned int)v25 + 5) & 0xF) != 0 )
          {
            v31 = v29 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                v33 = v32 - 1;
                if ( v33 )
                {
                  if ( v33 != 1 )
                    goto LABEL_246;
                  v25 = (unsigned int)(v25 + 1);
                  v34 = v22 + 8 * (unsigned int)*((unsigned __int16 *)v27 + v25 + 2);
                  if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v34 & 3) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( a10 && (v34 < *a10 || v34 > *a11 - 8LL) )
                    return (unsigned int)-1073741784;
                  *(_QWORD *)(v20 + 8 * v30 + 120) = *(_QWORD *)v34;
                  if ( a9 )
                    *(_QWORD *)(a9 + 8 * v30 + 128) = v34;
                }
                else
                {
                  v50 = *(_QWORD *)(v20 + 8LL * (*((_BYTE *)v27 + 3) & 0xF) + 120);
                  *(_QWORD *)(v20 + 152) = v50;
                  *(_QWORD *)(v20 + 152) = v50 - (*((_BYTE *)v27 + 3) & 0xF0);
                }
              }
              else
              {
                *(_QWORD *)(v20 + 152) += (unsigned int)(8 * v30 + 8);
              }
            }
            else
            {
              v25 = (unsigned int)(v25 + 1);
              v40 = *((unsigned __int16 *)v27 + v25 + 2);
              if ( (_DWORD)v30 )
              {
                v25 = (unsigned int)(v25 + 1);
                v41 = (*((unsigned __int16 *)v27 + v25 + 2) << 16) + v40;
              }
              else
              {
                v41 = 8 * v40;
              }
              *(_QWORD *)(v20 + 152) += v41;
            }
          }
          else
          {
            v35 = *(_QWORD *)(v20 + 152);
            if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v35 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            if ( a10 && (v35 < *a10 || v35 > *a11 - 8LL) )
              return (unsigned int)-1073741784;
            *(_QWORD *)(v20 + 8 * v30 + 120) = *(_QWORD *)v35;
            if ( a9 )
              *(_QWORD *)(a9 + 8 * v30 + 128) = v35;
            *(_QWORD *)(v20 + 152) += 8LL;
          }
          LODWORD(v25) = v25 + 1;
        }
        v26 = v103;
      }
      while ( (unsigned int)v25 < *((unsigned __int8 *)v27 + 2) );
      v28 = v100;
      v24 = v96;
      v23 = v101;
    }
    if ( (*(_BYTE *)v27 & 0x20) == 0 )
      break;
    v42 = *((unsigned __int8 *)v27 + 2);
    if ( (v42 & 1) != 0 )
      ++v42;
    v24 = (_DWORD *)((char *)v27 + 2 * v42 + 4);
    v96 = v24;
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v24 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v101 = ++v23;
    if ( v23 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( v28 )
  {
    v51 = 0;
    v52 = &RtlpSafeMachineFrameEntries;
    while ( v27 != *v52 )
    {
      ++v51;
      ++v52;
      if ( v51 >= 3 )
        goto LABEL_42;
    }
    v28 = 0;
    goto LABEL_42;
  }
  if ( a3 <= (unsigned __int64)MmHighestUserAddress )
  {
    v70 = *(_QWORD *)(v20 + 152);
    if ( (v70 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  if ( a10 )
  {
    v36 = *(_QWORD *)(v20 + 152);
    if ( v36 < *a10 || v36 > *a11 - 8LL )
      return (unsigned int)-1073741784;
  }
  v37 = **(_QWORD **)(v20 + 152);
  *(_QWORD *)(v20 + 152) += 8LL;
  *(_QWORD *)(v20 + 248) = v37;
LABEL_42:
  *a6 = v28;
  if ( v98 )
  {
    v60 = (_BYTE *)(a2 + (unsigned int)v24[2]);
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v60 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (int)a3 - *v24 - (int)a2 >= (unsigned int)(unsigned __int8)v60[1] && ((*v60 >> 3) & (unsigned __int8)v98) != 0 )
    {
      v61 = (unsigned __int8)v60[2];
      if ( (v61 & 1) != 0 )
        ++v61;
      *a7 = &v60[2 * (v61 + 2) + 4];
    }
  }
  return v11;
}
