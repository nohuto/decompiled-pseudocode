/*
 * XREFs of RtlpVirtualUnwind @ 0x140023A90
 * Callers:
 *     PspGetSetContextInternal @ 0x1403EDB60 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlpUnwindEpilogue @ 0x1400F34A4 (RtlpUnwindEpilogue.c)
 *     RtlpUnwindOpSlots @ 0x1400F3634 (RtlpUnwindOpSlots.c)
 *     RtlpSameFunction @ 0x1401348A0 (RtlpSameFunction.c)
 *     RtlpTrivialFunction @ 0x14014FEB8 (RtlpTrivialFunction.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
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
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  __int16 v47; // ax
  unsigned int v48; // r10d
  int v49; // r8d
  int v50; // ecx
  unsigned int k; // r9d
  __int16 v52; // ax
  int v53; // edx
  _BYTE *v54; // r8
  int v55; // ecx
  unsigned int v56; // eax
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // rcx
  unsigned int v60; // ecx
  __int64 (__fastcall **v61)(int, int, int, int, int, int, int, __int64); // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  char v64; // r8
  _BYTE *i; // rcx
  unsigned int v66; // r12d
  char v67; // al
  char v68; // dl
  __int64 v69; // rcx
  int v70; // eax
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
  char *j; // rdx
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
    v57 = *(_BYTE *)(v12 + 3);
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
    v57 = *(_BYTE *)(v12 + 3);
  }
  v58 = *(_QWORD *)(v20 + 8LL * (v57 & 0xF) + 120);
  *v21 = v58;
  *v21 = v58 - (*(_BYTE *)(v12 + 3) & 0xF0);
LABEL_7:
  if ( v17 )
    goto LABEL_8;
  if ( v18 < 2 )
  {
    v64 = *(_BYTE *)a3;
    i = (_BYTE *)a3;
    v66 = 0;
    if ( *(_BYTE *)a3 != 72 )
      goto LABEL_135;
    v67 = *(_BYTE *)(a3 + 1);
    if ( v67 == -125 && *(_BYTE *)(a3 + 2) == 0xC4 )
    {
LABEL_177:
      for ( i = (_BYTE *)(a3 + 4); ; i += 2 )
      {
LABEL_108:
        while ( (*i & 0xF8) == 0x58 )
          ++i;
        if ( (*i & 0xF0) != 0x40 || (i[1] & 0xF8) != 0x58 )
          break;
      }
      if ( *i == 0xF2 )
        ++i;
      v68 = *i;
      if ( (unsigned __int8)(*i + 62) > 1u && (v68 != -13 || i[1] != 0xC3) )
      {
        if ( ((v68 + 23) & 0xFD) != 0 )
        {
          if ( v68 == -1 && i[1] == 37 )
            goto LABEL_192;
          if ( (v68 & 0xF8) != 0x48 || i[1] != 0xFF )
            goto LABEL_8;
          v75 = (i[2] & 0x38) == 32;
        }
        else
        {
          v76 = &i[-v15];
          if ( v68 == -21 )
            v77 = (char)i[1] + 2;
          else
            v77 = *(_DWORD *)(i + 1) + 5;
          v78 = *a4;
          v79 = (unsigned __int64)&v76[v77];
          if ( v79 < v78 || v79 >= a4[1] )
          {
            v80 = (unsigned int *)RtlpSameFunction(a4, v15, v79 + v15);
            if ( !v80 )
              goto LABEL_192;
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
LABEL_192:
      j = (char *)a3;
      if ( (*(_BYTE *)a3 & 0xF8) != 0x48 )
        goto LABEL_204;
      v82 = *(_BYTE *)(a3 + 1);
      switch ( v82 )
      {
        case -125:
          *(_QWORD *)(v20 + 152) += *(char *)(a3 + 3);
LABEL_200:
          j = (char *)(a3 + 4);
          goto LABEL_204;
        case -127:
          *(_QWORD *)(v20 + 152) += *(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8);
          break;
        case -115:
          v83 = *(_BYTE *)(a3 + 2) & 0xF8;
          if ( v83 == 96 )
          {
            v84 = *(_QWORD *)(v20 + 8LL * v66 + 120);
            *(_QWORD *)(v20 + 152) = v84;
            *(_QWORD *)(v20 + 152) = v84 + *(char *)(a3 + 3);
            goto LABEL_200;
          }
          if ( v83 != -96 )
            goto LABEL_204;
          *(_QWORD *)(v20 + 152) = *(_QWORD *)(v20 + 8LL * v66 + 120)
                                 + (*(unsigned __int8 *)(a3 + 3) | ((*(unsigned __int8 *)(a3 + 4) | (*(unsigned __int16 *)(a3 + 5) << 8)) << 8));
          break;
        default:
          goto LABEL_204;
      }
      for ( j = (char *)(a3 + 7); ; j += 2 )
      {
LABEL_204:
        while ( 1 )
        {
          v85 = *j;
          if ( (*j & 0xF8) != 0x58 )
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
          ++j;
        }
        if ( (v85 & 0xF0) != 0x40 || (j[1] & 0xF8) != 0x58 )
          break;
        v88 = *(_QWORD *)(v20 + 152);
        v89 = j[1] & 7 | (8 * (v85 & 1u));
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
LABEL_140:
      *a6 = 0;
      return v11;
    }
    if ( v67 != -127 || *(_BYTE *)(a3 + 2) != 0xC4 )
    {
LABEL_135:
      if ( (v64 & 0xFE) != 0x48 )
        goto LABEL_108;
      if ( *(_BYTE *)(a3 + 1) != 0x8D )
        goto LABEL_108;
      v66 = *(_BYTE *)(a3 + 2) & 7 | (8 * (v64 & 1));
      if ( !v66 || v66 != (*(_BYTE *)(v12 + 3) & 0xF) )
        goto LABEL_108;
      v74 = *(_BYTE *)(a3 + 2) & 0xF8;
      if ( v74 == 96 )
        goto LABEL_177;
      if ( v74 != -96 )
        goto LABEL_108;
    }
    i = (_BYTE *)(a3 + 7);
    goto LABEL_108;
  }
  if ( !*(_BYTE *)(v12 + 2) )
    goto LABEL_8;
  v47 = *(_WORD *)(v12 + 4);
  if ( (HIBYTE(v47) & 0xF) != 6 )
    goto LABEL_8;
  v48 = (unsigned __int8)v47;
  v49 = a3 - v15;
  if ( (v47 & 0x1000) != 0 )
  {
    v50 = a4[1] - (unsigned __int8)v47;
    if ( v49 - v50 < (unsigned int)(unsigned __int8)v47 )
    {
LABEL_139:
      RtlpUnwindEpilogue(v15, a3, v49 - v50, (_DWORD)a4, v20, a9, (__int64)a10, (__int64)a11);
      goto LABEL_140;
    }
  }
  for ( k = 1; k < *(unsigned __int8 *)(v12 + 2); ++k )
  {
    v52 = *(_WORD *)(v12 + 2LL * k + 4);
    if ( (HIBYTE(v52) & 0xF) != 6 )
      break;
    v53 = (unsigned __int8)v52 + (HIBYTE(v52) >> 4 << 8);
    if ( !v53 )
      break;
    v50 = a4[1] - v53;
    if ( v49 - v50 < v48 )
      goto LABEL_139;
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
          v70 = RtlpUnwindOpSlots(*((unsigned __int16 *)v27 + (unsigned int)v25 + 2));
          v22 = v97;
          LODWORD(v25) = v70 + v25;
        }
        else
        {
          if ( v29 > 5 )
          {
            v39 = v29 - 6;
            if ( v39 )
            {
              v42 = v39 - 1;
              if ( v42 )
              {
                v43 = v42 - 1;
                if ( v43 )
                {
                  v44 = v43 - 1;
                  if ( v44 )
                  {
                    if ( v44 != 1 )
LABEL_248:
                      RtlRaiseStatus(-1073741569);
                    v45 = *(_QWORD *)(v20 + 152);
                    v100 = 1;
                    v46 = v45 + 24;
                    if ( (_DWORD)v30 )
                    {
                      v45 += 8LL;
                      v46 += 8LL;
                    }
                    if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v45 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( a10 && (v45 < *a10 || v45 > *a11 - 8LL) )
                      return (unsigned int)-1073741784;
                    if ( a3 <= (unsigned __int64)MmHighestUserAddress && (v46 & 3) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( a10 && (v46 < *a10 || v46 > *a11 - 8LL) )
                      return (unsigned int)-1073741784;
                    *(_QWORD *)(v20 + 248) = *(_QWORD *)v45;
                    *(_QWORD *)(v20 + 152) = *(_QWORD *)v46;
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
                    goto LABEL_248;
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
                  v59 = *(_QWORD *)(v20 + 8LL * (*((_BYTE *)v27 + 3) & 0xF) + 120);
                  *(_QWORD *)(v20 + 152) = v59;
                  *(_QWORD *)(v20 + 152) = v59 - (*((_BYTE *)v27 + 3) & 0xF0);
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
    v56 = *((unsigned __int8 *)v27 + 2);
    if ( (v56 & 1) != 0 )
      ++v56;
    v24 = (_DWORD *)((char *)v27 + 2 * v56 + 4);
    v96 = v24;
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v24 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v101 = ++v23;
    if ( v23 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  if ( v28 )
  {
    v60 = 0;
    v61 = &RtlpSafeMachineFrameEntries;
    while ( v27 != *v61 )
    {
      ++v60;
      ++v61;
      if ( v60 >= 3 )
        goto LABEL_42;
    }
    v28 = 0;
    goto LABEL_42;
  }
  if ( a3 <= (unsigned __int64)MmHighestUserAddress )
  {
    v69 = *(_QWORD *)(v20 + 152);
    if ( (v69 & 3) != 0 )
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
    v54 = (_BYTE *)(a2 + (unsigned int)v24[2]);
    if ( a3 <= (unsigned __int64)MmHighestUserAddress && ((unsigned __int8)v54 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (int)a3 - *v24 - (int)a2 >= (unsigned int)(unsigned __int8)v54[1] && ((*v54 >> 3) & (unsigned __int8)v98) != 0 )
    {
      v55 = (unsigned __int8)v54[2];
      if ( (v55 & 1) != 0 )
        ++v55;
      *a7 = &v54[2 * (v55 + 2) + 4];
    }
  }
  return v11;
}
