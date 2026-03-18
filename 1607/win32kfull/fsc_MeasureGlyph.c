/*
 * XREFs of fsc_MeasureGlyph @ 0x1C00C3070
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 * Callees:
 *     fsc_CheckYReversalInSpline @ 0x1C00C1AB8 (fsc_CheckYReversalInSpline.c)
 *     fsc_AddYReversal @ 0x1C00C1CE8 (fsc_AddYReversal.c)
 *     GetIxEstimate @ 0x1C00C3D38 (GetIxEstimate.c)
 *     AddReversal @ 0x1C00C3D6C (AddReversal.c)
 *     FindExtrema @ 0x1C00C3DA8 (FindExtrema.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 *     FixPointers @ 0x1C02DFF7C (FixPointers.c)
 */

__int64 __fastcall fsc_MeasureGlyph(_QWORD *a1, __int64 a2, int *a3, char a4, __int16 a5, __int16 a6, __int16 a7)
{
  char v7; // r14
  __int64 v9; // rdi
  _QWORD *v10; // r12
  __int64 result; // rax
  __int16 v12; // r9
  __int16 v13; // ax
  __int16 v14; // cx
  __int16 v15; // r8
  __int64 v16; // r11
  unsigned __int64 v17; // rcx
  int v18; // esi
  int v19; // r13d
  unsigned __int16 v20; // ax
  _QWORD *m; // r15
  __int64 v22; // rcx
  __int16 v23; // dx
  __int64 v24; // rax
  __int16 v25; // r14
  __int64 v26; // r10
  __int64 v27; // rdi
  __int64 v28; // r9
  int *v29; // rbx
  int *v30; // rdx
  _BYTE *v31; // r8
  int *v32; // rsi
  int v33; // r12d
  int v34; // r13d
  signed int v35; // r10d
  signed int v36; // r15d
  char v37; // al
  __int64 v38; // r9
  __int16 v39; // di
  int v40; // r14d
  int v41; // edi
  int v42; // eax
  int v43; // ecx
  int v44; // r12d
  int v45; // r13d
  bool v46; // sf
  bool v47; // sf
  __int64 v48; // rax
  __int16 v49; // r10
  __int64 v50; // r13
  __int16 v51; // bx
  __int16 v52; // dx
  int *v53; // r8
  signed int v54; // ecx
  int v55; // eax
  __int16 v56; // di
  __int64 v57; // r15
  __int16 **v58; // r13
  int v59; // r9d
  int v60; // r10d
  int v61; // ebx
  __int16 v62; // ax
  int v63; // r10d
  int IxEstimate; // edi
  __int64 v65; // r11
  unsigned int v66; // edx
  unsigned int v67; // r8d
  int v68; // edx
  unsigned int v69; // ecx
  unsigned int v70; // r8d
  __int16 v71; // r10
  int v72; // edx
  __int64 v73; // r10
  int v74; // r15d
  _QWORD *j; // rcx
  unsigned int v76; // r12d
  __int64 v77; // r10
  int v78; // r11d
  __int64 v79; // r10
  int v80; // eax
  int v81; // r11d
  __int64 v82; // r10
  int v83; // eax
  int v84; // r12d
  int v85; // r15d
  int v86; // r11d
  int v87; // r13d
  __int64 v88; // rdx
  unsigned int v89; // r12d
  __int64 v90; // r10
  int v91; // r11d
  __int64 v92; // r10
  int v93; // eax
  int v94; // r11d
  __int64 v95; // r10
  int v96; // r12d
  int v97; // r15d
  int v98; // r11d
  __int64 v99; // r9
  int v100; // r15d
  _QWORD *i; // rcx
  unsigned __int16 v102; // r14
  __int64 v103; // r11
  __int16 **v104; // rax
  int v105; // r10d
  __int64 v106; // r11
  int v107; // ecx
  __int16 **k; // r10
  unsigned __int16 v109; // ax
  __int64 v110; // r9
  _QWORD *v111; // rdx
  int v112; // r8d
  __int64 v113; // rdx
  __int64 v114; // rcx
  int *v115; // r10
  int *v116; // r11
  __int64 v117; // rax
  int v118; // r12d
  int v119; // r15d
  unsigned __int8 v120; // r9
  unsigned __int8 *v121; // rbx
  __int64 v122; // r14
  unsigned __int8 v123; // r8
  int v124; // edi
  int v125; // esi
  int v126; // ecx
  signed int v127; // eax
  int n; // eax
  __int64 v129; // rcx
  char v130; // al
  __int64 v131; // rdx
  __int64 v132; // rdx
  int v133; // [rsp+28h] [rbp-89h]
  int v134; // [rsp+28h] [rbp-89h]
  _WORD v135[2]; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v136; // [rsp+54h] [rbp-5Dh]
  _WORD v137[2]; // [rsp+58h] [rbp-59h] BYREF
  _WORD v138[2]; // [rsp+5Ch] [rbp-55h] BYREF
  char v139; // [rsp+60h] [rbp-51h]
  int v140; // [rsp+64h] [rbp-4Dh]
  int v141; // [rsp+68h] [rbp-49h]
  __int64 v142; // [rsp+70h] [rbp-41h]
  __int16 v143; // [rsp+78h] [rbp-39h]
  __int16 v144; // [rsp+7Ah] [rbp-37h]
  unsigned __int16 v145; // [rsp+7Ch] [rbp-35h]
  int v146; // [rsp+80h] [rbp-31h]
  int v147; // [rsp+84h] [rbp-2Dh]
  signed int v148; // [rsp+88h] [rbp-29h]
  _QWORD *v149; // [rsp+90h] [rbp-21h]
  int *v150; // [rsp+98h] [rbp-19h]
  _BYTE *v151; // [rsp+A0h] [rbp-11h]
  __int64 v152; // [rsp+A8h] [rbp-9h]

  v7 = a4;
  v9 = a2;
  v10 = a1;
  result = FindExtrema();
  if ( (_DWORD)result )
    return result;
  v12 = *(_WORD *)(v9 + 10);
  v13 = *(_WORD *)(v9 + 8) & -a5;
  v14 = *(_WORD *)(v9 + 6);
  *(_WORD *)(v9 + 8) = v13;
  if ( v14 != v12 )
  {
    v15 = *(_WORD *)(v9 + 12);
    if ( v13 != v15 )
    {
      if ( a6 > 0 )
        *(_WORD *)(v9 + 12) = a6 + v15;
      else
        *(_WORD *)(v9 + 8) = a6 + v13;
      if ( a7 > 0 )
        *(_WORD *)(v9 + 10) = v12 - a7;
      else
        *(_WORD *)(v9 + 6) = v14 - a7;
    }
  }
  v16 = *((_QWORD *)a3 + 3);
  v17 = *a3;
  v142 = v16;
  if ( v17 < 0x38 )
    return 6656LL;
  *(_QWORD *)(v16 + 8) = v16 + 40;
  v18 = 0;
  *(_QWORD *)v16 = v16 + 40;
  *(_DWORD *)(v16 + 40) = 0x7FFF;
  *(_QWORD *)(v16 + 48) = 0LL;
  *(_QWORD *)(v16 + 16) = v16 + 56;
  v19 = 0;
  *(_QWORD *)(v16 + 24) = v17 + v16;
  v20 = 0;
  m = (_QWORD *)(v16 + 8);
  *(_QWORD *)(v16 + 32) = v16;
  v145 = 0;
  v149 = (_QWORD *)(v16 + 8);
  v146 = 0;
  if ( !*(_WORD *)v10 )
    goto LABEL_53;
  do
  {
    v22 = 2LL * v20;
    v23 = *(_WORD *)(v22 + v10[1]);
    v24 = v10[2];
    v144 = v23;
    v25 = *(_WORD *)(v22 + v24);
    v143 = v25;
    if ( v23 == v25 )
      goto LABEL_51;
    v26 = v10[3];
    v27 = v10[5];
    v28 = v10[4];
    v152 = v23;
    v29 = (int *)(v26 + 4LL * v23);
    v30 = (int *)(v28 + 4LL * v23);
    v31 = (_BYTE *)(v27 + v152);
    v32 = (int *)(v26 + 4LL * v25);
    if ( (*(_BYTE *)(v25 + v27) & 1) != 0 )
    {
      v33 = *v32++;
      v34 = *v29;
      v35 = *v30;
      v36 = *(_DWORD *)(v28 + 4LL * v25);
      v37 = *v31;
      v141 = v33;
      v147 = v34;
      v148 = v35;
    }
    else
    {
      v34 = *v32;
      v147 = *v32;
      v129 = v25 - 1;
      v33 = *(_DWORD *)(v26 + 4 * v129);
      v35 = *(_DWORD *)(v28 + 4LL * v25);
      v130 = *(_BYTE *)(v129 + v27);
      v36 = *(_DWORD *)(v28 + 4 * v129);
      v141 = v33;
      v148 = v35;
      if ( (v130 & 1) == 0 )
      {
        v33 = (v34 + v33 + 1) >> 1;
        v141 = v33;
        v36 = (v35 + v36 + 1) >> 1;
      }
      v37 = 0;
      --v29;
      --v30;
      --v31;
    }
    v139 = v37;
    v135[0] = 0;
    v38 = 0LL;
    LOWORD(v140) = 0;
    v39 = 0;
    v137[0] = 0;
    v138[0] = 1;
    v136 = 0;
    if ( v29 >= v32 )
    {
LABEL_14:
      result = fsc_AddYReversal(v16, v36, v38);
      if ( !(_DWORD)result )
        goto LABEL_34;
      return result;
    }
    do
    {
      if ( (v37 & 1) != 0 )
      {
        if ( (_WORD)v38 )
        {
          if ( (_WORD)v38 == 1 )
          {
            if ( v35 > v36 )
            {
LABEL_95:
              ++v29;
              ++v30;
              ++v31;
              v33 = v34;
              v36 = v35;
              goto LABEL_29;
            }
            v99 = *(_QWORD *)(v16 + 16);
            if ( (unsigned __int64)(v99 + 16) > *(_QWORD *)(v16 + 24) )
              return 6656LL;
            v100 = (v36 + 32) >> 6;
            for ( i = (_QWORD *)v16; (__int16)v100 > *(__int16 *)*i; i = (_QWORD *)(*i + 8LL) )
              ;
            v102 = -1;
          }
          else
          {
            if ( v35 < v36 )
              goto LABEL_95;
            v99 = *(_QWORD *)(v16 + 16);
            if ( (unsigned __int64)(v99 + 16) > *(_QWORD *)(v16 + 24) )
              return 6656LL;
            v100 = (v36 + 31) >> 6;
            for ( i = (_QWORD *)v16; (__int16)v100 > *(__int16 *)*i; i = (_QWORD *)(*i + 8LL) )
              ;
            v102 = 1;
          }
          *(_WORD *)v99 = v100;
          *(_WORD *)(v99 + 2) = v102;
          *(_QWORD *)(v99 + 8) = *i;
          *i = v99;
          v38 = v102;
          *(_QWORD *)(v16 + 16) += 16LL;
        }
        else
        {
          if ( v35 > v36 )
          {
            v38 = 1LL;
            v136 = 1;
            v135[0] = 1;
            v138[0] = 1;
            goto LABEL_95;
          }
          if ( v35 >= v36 )
          {
            LOWORD(v140) = ++v39;
            v137[0] = v39;
            goto LABEL_95;
          }
          v38 = 0xFFFFLL;
          v138[0] = -1;
        }
        v136 = v38;
        v135[0] = v38;
        goto LABEL_95;
      }
      v40 = v29[1];
      ++v30;
      ++v31;
      v150 = v30;
      ++v29;
      v151 = v31;
      v41 = *v30;
      if ( (*v31 & 1) != 0 )
      {
        ++v30;
        ++v29;
        ++v31;
        v150 = v30;
        v151 = v31;
      }
      else
      {
        v40 = (v34 + v40 + 1) >> 1;
        v41 = (v35 + v41 + 1) >> 1;
      }
      v42 = v34 - v33;
      v43 = v35 - v36;
      v44 = v40 - v34;
      v45 = v41 - v35;
      v46 = v35 - v36 < 0;
      if ( v35 - v36 > 0 )
      {
        if ( v45 < 0 )
          goto LABEL_80;
        v46 = v43 < 0;
      }
      if ( v46 && v45 > 0 )
      {
LABEL_80:
        v136 = v43 - v45;
        if ( v43 == v45 )
          return 4870LL;
        CompDiv((unsigned int)(v43 - v45), v43 * (__int64)v42);
        v87 = v141;
        v88 = v44;
        v89 = v136;
        v136 = v147 + CompDiv(v136, v90 * v88);
        v93 = CompDiv(v89, v92 * (int)(v136 - v91));
        v141 = v94 + v93;
        v96 = v36 + CompDiv(v89, v95 * v95);
        v134 = v36;
        v97 = v142;
        result = fsc_CheckYReversalInSpline(
                   v142,
                   (int)v135,
                   (__int64)v138,
                   (__int64)v137,
                   v87,
                   v134,
                   v98,
                   v96,
                   v141,
                   v96);
        if ( !(_DWORD)result )
          result = fsc_CheckYReversalInSpline(
                     v97,
                     (int)v135,
                     (__int64)v138,
                     (__int64)v137,
                     v141,
                     v96,
                     v136,
                     v96,
                     v40,
                     v41);
        goto LABEL_76;
      }
      v47 = v42 < 0;
      if ( v42 > 0 )
      {
        if ( v44 < 0 )
          goto LABEL_73;
        v47 = v42 < 0;
      }
      if ( v47 && v44 > 0 )
      {
LABEL_73:
        v136 = v42 - v44;
        if ( v42 == v44 )
          return 4870LL;
        CompDiv((unsigned int)(v42 - v44), v42 * (__int64)v43);
        v76 = v136;
        v140 = v148 + CompDiv(v136, v77 * v45);
        v80 = CompDiv(v76, v79 * (v140 - v78));
        v136 = v81 + v80;
        v83 = CompDiv(v76, v82 * v82);
        v84 = v83 + v141;
        v133 = v36;
        v85 = v142;
        result = fsc_CheckYReversalInSpline(
                   v142,
                   (int)v135,
                   (__int64)v138,
                   (__int64)v137,
                   v141,
                   v133,
                   v83 + v141,
                   v86,
                   v83 + v141,
                   v136);
        if ( !(_DWORD)result )
          result = fsc_CheckYReversalInSpline(
                     v85,
                     (int)v135,
                     (__int64)v138,
                     (__int64)v137,
                     v84,
                     v136,
                     v84,
                     v140,
                     v40,
                     v41);
LABEL_76:
        v38 = v135[0];
        v30 = v150;
        v31 = v151;
        v16 = v142;
        v136 = v135[0];
        LOWORD(v140) = v137[0];
        goto LABEL_27;
      }
      if ( (_WORD)v38 )
      {
        if ( (_WORD)v38 == 1 )
        {
          if ( v41 > v36 )
            goto LABEL_26;
          v73 = *(_QWORD *)(v16 + 16);
          if ( (unsigned __int64)(v73 + 16) > *(_QWORD *)(v16 + 24) )
            goto LABEL_165;
          v74 = (v36 + 32) >> 6;
          for ( j = (_QWORD *)v16; (__int16)v74 > *(__int16 *)*j; j = (_QWORD *)(*j + 8LL) )
            ;
          v38 = 0xFFFFFFFFLL;
        }
        else
        {
          if ( v41 < v36 )
            goto LABEL_26;
          v73 = *(_QWORD *)(v16 + 16);
          if ( (unsigned __int64)(v73 + 16) > *(_QWORD *)(v16 + 24) )
          {
LABEL_165:
            result = 6656LL;
            goto LABEL_27;
          }
          v74 = (v36 + 31) >> 6;
          for ( j = (_QWORD *)v16; (__int16)v74 > *(__int16 *)*j; j = (_QWORD *)(*j + 8LL) )
            ;
          v38 = 1LL;
        }
        *(_WORD *)v73 = v74;
        *(_WORD *)(v73 + 2) = v38;
        *(_QWORD *)(v73 + 8) = *j;
        *j = v73;
        *(_QWORD *)(v16 + 16) += 16LL;
        v135[0] = v38;
        v136 = v38;
        goto LABEL_26;
      }
      if ( v41 > v36 )
      {
        v109 = 1;
      }
      else
      {
        if ( v41 >= v36 )
        {
          LOWORD(v140) = v140 + 1;
          v137[0] = v140;
          goto LABEL_26;
        }
        v109 = -1;
      }
      v38 = v109;
      v138[0] = v109;
      v136 = v109;
      v135[0] = v109;
LABEL_26:
      result = 0LL;
LABEL_27:
      if ( (_DWORD)result )
        return result;
      v35 = v148;
      v36 = v41;
      v39 = v140;
      v33 = v40;
      v34 = v147;
LABEL_29:
      v141 = v33;
      if ( v29 == v32 )
      {
        v37 = v139;
      }
      else
      {
        v37 = *v31;
        v34 = *v29;
        v35 = *v30;
        v139 = *v31;
        v147 = v34;
        v148 = v35;
      }
    }
    while ( v29 < v32 );
    for ( ; v39 > 0; v136 = v38 )
    {
      if ( !(_WORD)v38 )
      {
        v38 = 1LL;
        v136 = 1;
      }
      v132 = *(_QWORD *)(v16 + 16);
      if ( (unsigned __int64)(v132 + 16) > *(_QWORD *)(v16 + 24) )
        return 6656LL;
      AddReversal(v16, v132, (unsigned int)v36, v38);
      v38 = v136;
      --v39;
      *(_QWORD *)(v16 + 16) += 16LL;
      LOWORD(v38) = -(__int16)v38;
    }
    v25 = v143;
    if ( v138[0] != (_WORD)v38 )
      goto LABEL_14;
LABEL_34:
    v10 = a1;
    v18 = 0;
    if ( (a4 & 2) != 0 )
    {
      v16 = v142;
      m = v149;
      goto LABEL_50;
    }
    v48 = a1[3];
    v49 = 0;
    v50 = v152;
    v51 = 0;
    v52 = v144;
    v53 = (int *)(v48 + 4 * v152);
    v54 = *(_DWORD *)(v48 + 4LL * v25);
    do
    {
      if ( v52 > v25 )
        break;
      v55 = *v53++;
      if ( v55 > v54 )
      {
        v49 = 1;
      }
      else if ( v55 < v54 )
      {
        v49 = -1;
      }
      else
      {
        ++v51;
      }
      ++v52;
      v54 = v55;
    }
    while ( !v49 );
    v10 = a1;
    v56 = v49;
    if ( v52 <= v25 )
    {
      v57 = v142;
      v58 = (__int16 **)v149;
      do
      {
        v59 = *v53++;
        if ( v49 == 1 )
        {
          if ( v59 <= v54 )
          {
            v103 = *(_QWORD *)(v57 + 16);
            if ( (unsigned __int64)(v103 + 16) > *(_QWORD *)(v57 + 24) )
              return 6656LL;
            v104 = v58;
            v105 = (v54 + 32) >> 6;
            if ( (__int16)v105 > **v58 )
            {
              do
                v104 = (__int16 **)(*v104 + 4);
              while ( (__int16)v105 > **v104 );
            }
            *(_WORD *)v103 = v105;
            v49 = -1;
            *(_WORD *)(v103 + 2) = -1;
            *(_QWORD *)(v103 + 8) = *v104;
            *v104 = (__int16 *)v103;
            *(_QWORD *)(v57 + 16) += 16LL;
          }
        }
        else if ( v59 >= v54 )
        {
          v106 = *(_QWORD *)(v57 + 16);
          if ( (unsigned __int64)(v106 + 16) > *(_QWORD *)(v57 + 24) )
            return 6656LL;
          v107 = (v54 + 31) >> 6;
          for ( k = v58; (__int16)v107 > **k; k = (__int16 **)(*k + 4) )
            ;
          *(_WORD *)v106 = v107;
          *(_WORD *)(v106 + 2) = 1;
          *(_QWORD *)(v106 + 8) = *k;
          *k = (__int16 *)v106;
          v49 = 1;
          *(_QWORD *)(v57 + 16) += 16LL;
        }
        ++v52;
        v54 = v59;
      }
      while ( v52 <= v25 );
      v50 = v152;
    }
    v16 = v142;
    for ( m = v149; v51 > 0; *(_QWORD *)(v16 + 16) += 16LL )
    {
      if ( !v49 )
      {
        v49 = 1;
        v56 = 1;
      }
      v110 = *(_QWORD *)(v16 + 16);
      if ( (unsigned __int64)(v110 + 16) > *(_QWORD *)(v16 + 24) )
        return 6656LL;
      v111 = m;
      v112 = (v54 + (v49 >> 1) + 32) >> 6;
      if ( (__int16)v112 > *(__int16 *)*m )
      {
        do
          v111 = (_QWORD *)(*v111 + 8LL);
        while ( (__int16)v112 > *(__int16 *)*v111 );
      }
      *(_WORD *)v110 = v112;
      v49 = -v49;
      *(_WORD *)(v110 + 2) = v49;
      --v51;
      *(_QWORD *)(v110 + 8) = *v111;
      *v111 = v110;
    }
    if ( v56 == v49 )
      goto LABEL_49;
    v131 = *(_QWORD *)(v16 + 16);
    if ( (unsigned __int64)(v131 + 16) > *(_QWORD *)(v16 + 24) )
      return 6656LL;
    AddReversal(m, v131, (unsigned int)v54, (unsigned __int16)v49);
    *(_QWORD *)(v16 + 16) += 16LL;
LABEL_49:
    if ( (a4 & 4) != 0 )
    {
      v113 = a1[3];
      v114 = a1[4];
      v115 = (int *)(v113 + 4 * v50);
      v116 = (int *)(v114 + 4 * v50);
      v117 = a1[5];
      v118 = *(_DWORD *)(v114 + 4LL * v25);
      v119 = *(_DWORD *)(v113 + 4LL * v25);
      v120 = *(_BYTE *)(v117 + v25);
      v121 = (unsigned __int8 *)(v117 + v50);
      v19 = v25 - v144 + v146 + 2;
      v146 = v19;
      if ( v144 > v25 )
      {
        v16 = v142;
        v10 = a1;
        m = v149;
      }
      else
      {
        v122 = (unsigned __int16)(v25 - v144 + 1);
        do
        {
          v123 = *v121++;
          v124 = *v115++;
          v125 = *v116++;
          if ( (v120 & v123 & 1) == 0 )
          {
            if ( ((v120 | v123) & 1) == 0 )
              ++v19;
            v126 = abs32(v125 - v118);
            v127 = abs32(v124 - v119);
            if ( v127 > v126 )
              v126 = v127;
            for ( n = 0; v126 > 1600; n = 2 * n + 2 )
              v126 >>= 1;
            v19 += n;
          }
          v119 = v124;
          v118 = v125;
          v120 = v123;
          --v122;
        }
        while ( v122 );
        v16 = v142;
        v18 = 0;
        v10 = a1;
        m = v149;
        v146 = v19;
      }
    }
    else
    {
LABEL_50:
      v19 = v146;
    }
LABEL_51:
    v20 = v145 + 1;
    v145 = v20;
  }
  while ( v20 < *(_WORD *)v10 );
  v9 = a2;
  v7 = a4;
LABEL_53:
  if ( (v7 & 6) == 4 )
  {
    v19 += 2 * ((*(_QWORD *)(v16 + 16) - v16 - 56) >> 4);
    if ( v19 > 0x3FFF )
      return 4869LL;
  }
  v60 = *(__int16 *)(v9 + 6) - *(__int16 *)(v9 + 10);
  v61 = *(__int16 *)(v9 + 12) - *(__int16 *)(v9 + 8);
  v62 = ((v61 + 31) >> 3) & 0xFFFC;
  *(_WORD *)v9 = v62;
  *(_DWORD *)(v9 + 36) = v60 * v62;
  if ( v16 != *(_QWORD *)(v16 + 32) )
    FixPointers(v16);
  IxEstimate = GetIxEstimate(*(_QWORD *)v16);
  v66 = (v63 + 7) & 0xFFFFFFF8;
  v67 = (IxEstimate + 7) & 0xFFFFFFF8;
  if ( (v7 & 4) != 0 )
    v68 = 8 * (v67 + 4 * v66 + v66);
  else
    v68 = 4 * (v67 + 10 * v66);
  a3[1] = v68;
  if ( (a4 & 2) != 0 )
  {
    a3[2] = 0;
  }
  else
  {
    if ( v65 != *(_QWORD *)(v65 + 32) )
      FixPointers(v65);
    v18 = GetIxEstimate(*m);
    v69 = (v61 + 7) & 0xFFFFFFF8;
    v70 = (v18 + 7) & 0xFFFFFFF8;
    if ( v71 )
      v72 = 8 * (v70 + ((v19 + 7) & 0xFFFFFFF8) + 5 * v69);
    else
      v72 = 4 * (v70 + 10 * v69);
    a3[2] = v72;
  }
  a3[3] = IxEstimate;
  a3[4] = v18;
  a3[5] = v19;
  *a3 = *(_DWORD *)(v65 + 16) - v65;
  return 0LL;
}
