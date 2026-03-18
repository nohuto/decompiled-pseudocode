/*
 * XREFs of fsc_MeasureGlyph @ 0x1C00B2BF0
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00B3C18 (fs_FindBitMapSize.c)
 * Callees:
 *     fsc_CheckYReversalInSpline @ 0x1C00B1228 (fsc_CheckYReversalInSpline.c)
 *     fsc_AddYReversal @ 0x1C00B1458 (fsc_AddYReversal.c)
 *     GetIxEstimate @ 0x1C00B38B8 (GetIxEstimate.c)
 *     AddReversal @ 0x1C00B38EC (AddReversal.c)
 *     FindExtrema @ 0x1C00B3928 (FindExtrema.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 *     FixPointers @ 0x1C02DDECC (FixPointers.c)
 */

__int64 __fastcall fsc_MeasureGlyph(__int64 a1, __int64 a2, int *a3, char a4, __int16 a5, __int16 a6, __int16 a7)
{
  char v7; // bl
  int *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 result; // rax
  __int16 v12; // r9
  __int16 v13; // ax
  __int16 v14; // cx
  __int16 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  int v18; // r14d
  int v19; // r13d
  _QWORD *v20; // r15
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  __int16 v23; // dx
  __int64 v24; // rax
  __int16 v25; // di
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  int *v29; // rbx
  signed int *v30; // r15
  _BYTE *v31; // r11
  char *v32; // r12
  int *v33; // rsi
  signed int v34; // edx
  int v35; // ecx
  signed int v36; // r9d
  int v37; // r13d
  char v38; // al
  unsigned __int16 v39; // r11
  int v40; // edi
  int v41; // eax
  int v42; // r13d
  int v43; // ecx
  int v44; // r8d
  bool v45; // sf
  bool v46; // sf
  __int16 v47; // r10
  __int64 v48; // r12
  __int16 v49; // bx
  __int16 v50; // dx
  __int64 v51; // r11
  __int64 v52; // rax
  signed int v53; // ecx
  int *v54; // r8
  int v55; // eax
  __int16 v56; // r15
  __int16 v57; // si
  _QWORD *v58; // r13
  int v59; // r9d
  int v60; // r11d
  int v61; // ebx
  __int16 v62; // ax
  int IxEstimate; // eax
  __int64 v64; // r10
  int v65; // r11d
  unsigned int v66; // edx
  int v67; // edi
  unsigned int v68; // r8d
  int v69; // edx
  unsigned int v70; // ecx
  unsigned int v71; // r8d
  __int16 v72; // r11
  int v73; // edx
  __int64 v74; // r8
  int v75; // edx
  _QWORD *j; // rcx
  __int16 v77; // dx
  int v78; // r13d
  __int64 v79; // r10
  int v80; // r11d
  __int64 v81; // r10
  int v82; // eax
  int v83; // r11d
  __int64 v84; // r10
  int v85; // ecx
  int v86; // eax
  int v87; // r13d
  int v88; // r11d
  __int64 v89; // rdx
  unsigned int v90; // r13d
  __int64 v91; // r10
  int v92; // r11d
  __int64 v93; // r10
  int v94; // eax
  int v95; // r11d
  __int64 v96; // r10
  int v97; // eax
  int v98; // r13d
  int v99; // r11d
  __int64 v100; // r8
  int v101; // edx
  _QWORD *i; // rcx
  __int16 v103; // dx
  int v104; // edx
  int v105; // edx
  __int64 v106; // r11
  _QWORD *v107; // rax
  int v108; // r10d
  __int64 v109; // r11
  _QWORD *v110; // r10
  int v111; // ecx
  __int64 v112; // r9
  _QWORD *v113; // rdx
  int v114; // r8d
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  int v118; // esi
  int v119; // r14d
  int *v120; // rbx
  unsigned __int8 v121; // r8
  unsigned __int8 *v122; // rdi
  int *v123; // r11
  __int64 v124; // r12
  unsigned __int8 v125; // cl
  int v126; // r10d
  int v127; // r9d
  int v128; // eax
  int v129; // r15d
  int v130; // r8d
  int k; // edx
  char v132; // al
  __int64 v133; // rdx
  __int16 v134; // r11
  int v135; // [rsp+28h] [rbp-89h]
  int v136; // [rsp+28h] [rbp-89h]
  _WORD v137[2]; // [rsp+50h] [rbp-61h] BYREF
  _WORD v138[2]; // [rsp+54h] [rbp-5Dh] BYREF
  _WORD v139[2]; // [rsp+58h] [rbp-59h] BYREF
  unsigned int v140; // [rsp+5Ch] [rbp-55h]
  char v141; // [rsp+60h] [rbp-51h]
  int v142; // [rsp+64h] [rbp-4Dh]
  int v143; // [rsp+68h] [rbp-49h]
  __int16 v144; // [rsp+6Ch] [rbp-45h]
  signed int v145; // [rsp+70h] [rbp-41h]
  __int64 v146; // [rsp+78h] [rbp-39h]
  int v147; // [rsp+80h] [rbp-31h]
  int v148; // [rsp+84h] [rbp-2Dh]
  __int16 v149; // [rsp+88h] [rbp-29h]
  int v150; // [rsp+8Ch] [rbp-25h]
  unsigned __int16 v151; // [rsp+90h] [rbp-21h]
  __int64 v152; // [rsp+98h] [rbp-19h]
  __int64 v153; // [rsp+A0h] [rbp-11h]

  v7 = a4;
  v8 = a3;
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
  v16 = *((_QWORD *)v8 + 3);
  v17 = *v8;
  v146 = v16;
  if ( v17 < 0x38 )
    return 6656LL;
  *(_QWORD *)(v16 + 8) = v16 + 40;
  *(_QWORD *)v16 = v16 + 40;
  *(_DWORD *)(v16 + 40) = 0x7FFF;
  v18 = 0;
  *(_QWORD *)(v16 + 48) = 0LL;
  v19 = 0;
  *(_QWORD *)(v16 + 16) = v16 + 56;
  v20 = (_QWORD *)(v16 + 8);
  *(_QWORD *)(v16 + 32) = v16;
  *(_QWORD *)(v16 + 24) = v17 + v16;
  v21 = 0;
  v151 = 0;
  v150 = 0;
  if ( !*(_WORD *)v10 )
    goto LABEL_50;
  do
  {
    v22 = 2LL * v21;
    v23 = *(_WORD *)(v22 + *(_QWORD *)(v10 + 8));
    v24 = *(_QWORD *)(v10 + 16);
    v149 = v23;
    v25 = *(_WORD *)(v22 + v24);
    v144 = v25;
    if ( v23 == v25 )
      goto LABEL_48;
    v152 = v23;
    v26 = *(_QWORD *)(a1 + 24);
    v27 = *(_QWORD *)(a1 + 32);
    v28 = *(_QWORD *)(a1 + 40);
    v153 = v25;
    v29 = (int *)(v26 + 4LL * v23);
    v30 = (signed int *)(v27 + 4LL * v23);
    v31 = (_BYTE *)(v25 + v28);
    v32 = (char *)(v28 + v23);
    v33 = (int *)(v26 + 4LL * v25);
    if ( (*v31 & 1) != 0 )
    {
      v34 = *(_DWORD *)(v27 + 4LL * v25);
      v35 = *v33++;
      v36 = *v30;
      v37 = *v29;
      v38 = *v32;
      v145 = *v30;
      v143 = v35;
      v142 = v34;
      v147 = v37;
    }
    else
    {
      v34 = *(_DWORD *)(v27 + 4LL * v25 - 4);
      v132 = *(v31 - 1);
      v35 = *(v33 - 1);
      v37 = *v33;
      v36 = *(_DWORD *)(v27 + 4LL * v25);
      v143 = v35;
      v142 = v34;
      v147 = v37;
      v145 = v36;
      if ( (v132 & 1) == 0 )
      {
        v35 = (v37 + v35 + 1) >> 1;
        v34 = (v36 + v34 + 1) >> 1;
        v142 = v34;
        v143 = v35;
      }
      v38 = 0;
      --v29;
      --v30;
      --v32;
    }
    v141 = v38;
    v139[0] = 1;
    v39 = 0;
    v137[0] = 0;
    LOWORD(v140) = 0;
    v138[0] = 0;
    if ( v29 >= v33 )
    {
LABEL_164:
      result = fsc_AddYReversal(v16, v34, v39);
      if ( !(_DWORD)result )
        goto LABEL_32;
      return result;
    }
    do
    {
      if ( (v38 & 1) != 0 )
      {
        if ( !v39 )
        {
          if ( v36 > v34 )
          {
            v39 = 1;
            v137[0] = 1;
            v139[0] = 1;
          }
          else if ( v36 >= v34 )
          {
            LOWORD(v18) = v18 + 1;
            LOWORD(v140) = v18;
            v138[0] = v18;
          }
          else
          {
            v39 = -1;
            v137[0] = -1;
            v139[0] = -1;
          }
          goto LABEL_91;
        }
        if ( v39 == 1 )
        {
          if ( v36 > v34 )
          {
LABEL_91:
            ++v29;
            ++v30;
            ++v32;
            v35 = v37;
            v34 = v36;
            goto LABEL_27;
          }
          v100 = *(_QWORD *)(v16 + 16);
          if ( (unsigned __int64)(v100 + 16) > *(_QWORD *)(v16 + 24) )
            return 6656LL;
          v101 = (v34 + 32) >> 6;
          for ( i = (_QWORD *)v16; (__int16)v101 > *(__int16 *)*i; i = (_QWORD *)(*i + 8LL) )
            ;
          *(_WORD *)v100 = v101;
          v103 = -1;
        }
        else
        {
          if ( v36 < v34 )
            goto LABEL_91;
          v100 = *(_QWORD *)(v16 + 16);
          if ( (unsigned __int64)(v100 + 16) > *(_QWORD *)(v16 + 24) )
            return 6656LL;
          v104 = (v34 + 31) >> 6;
          for ( i = (_QWORD *)v16; (__int16)v104 > *(__int16 *)*i; i = (_QWORD *)(*i + 8LL) )
            ;
          *(_WORD *)v100 = v104;
          v103 = 1;
        }
        *(_WORD *)(v100 + 2) = v103;
        v39 = v103;
        *(_QWORD *)(v100 + 8) = *i;
        *i = v100;
        *(_QWORD *)(v16 + 16) += 16LL;
        v137[0] = v103;
        goto LABEL_91;
      }
      v18 = v29[1];
      ++v29;
      v40 = v30[1];
      ++v30;
      if ( (*++v32 & 1) != 0 )
      {
        ++v29;
        ++v30;
        ++v32;
      }
      else
      {
        v18 = (v37 + v18 + 1) >> 1;
        v40 = (v36 + v40 + 1) >> 1;
      }
      v41 = v37 - v35;
      v42 = v18 - v147;
      v43 = v40 - v36;
      v44 = v36 - v34;
      v148 = v40 - v36;
      v45 = v36 - v34 < 0;
      if ( v36 - v34 > 0 )
      {
        if ( v43 < 0 )
          goto LABEL_77;
        v45 = v44 < 0;
      }
      if ( v45 && v43 > 0 )
      {
LABEL_77:
        v140 = v44 - v43;
        if ( v44 == v43 )
          return 4870LL;
        CompDiv((unsigned int)(v44 - v43), v44 * (__int64)v41);
        v89 = v42;
        v90 = v140;
        v148 = v147 + CompDiv(v140, v91 * v89);
        v94 = CompDiv(v90, v93 * (v148 - v92));
        v140 = v95 + v94;
        v97 = CompDiv(v90, v96 * v96);
        v136 = v142;
        v98 = v146;
        v142 += v97;
        result = fsc_CheckYReversalInSpline(
                   v146,
                   (int)v137,
                   (__int64)v139,
                   (__int64)v138,
                   v143,
                   v136,
                   v99,
                   v142,
                   v140,
                   v142);
        if ( !(_DWORD)result )
          result = fsc_CheckYReversalInSpline(
                     v98,
                     (int)v137,
                     (__int64)v139,
                     (__int64)v138,
                     v140,
                     v142,
                     v148,
                     v142,
                     v18,
                     v40);
        goto LABEL_73;
      }
      v46 = v41 < 0;
      if ( v41 > 0 )
      {
        if ( v42 < 0 )
          goto LABEL_70;
        v46 = v41 < 0;
      }
      if ( v46 && v42 > 0 )
      {
LABEL_70:
        v140 = v41 - v42;
        if ( v41 == v42 )
          return 4870LL;
        CompDiv((unsigned int)(v41 - v42), v41 * (__int64)v44);
        v78 = v142;
        v148 = v145 + CompDiv(v140, v79 * v148);
        v82 = CompDiv(v140, v81 * (v148 - v80));
        v142 = v83 + v82;
        v85 = CompDiv(v140, v84 * v84);
        v86 = v143;
        v135 = v78;
        v87 = v146;
        v143 += v85;
        result = fsc_CheckYReversalInSpline(
                   v146,
                   (int)v137,
                   (__int64)v139,
                   (__int64)v138,
                   v86,
                   v135,
                   v143,
                   v88,
                   v143,
                   v142);
        if ( !(_DWORD)result )
          result = fsc_CheckYReversalInSpline(
                     v87,
                     (int)v137,
                     (__int64)v139,
                     (__int64)v138,
                     v143,
                     v142,
                     v143,
                     v148,
                     v18,
                     v40);
LABEL_73:
        v39 = v137[0];
        v16 = v146;
        v36 = v145;
        LOWORD(v140) = v138[0];
        goto LABEL_25;
      }
      if ( !v39 )
      {
        if ( v40 > v34 )
        {
          v39 = 1;
          v137[0] = 1;
          v139[0] = 1;
        }
        else if ( v40 >= v34 )
        {
          LOWORD(v140) = v140 + 1;
          v138[0] = v140;
        }
        else
        {
          v39 = -1;
          v137[0] = -1;
          v139[0] = -1;
        }
        goto LABEL_24;
      }
      if ( v39 == 1 )
      {
        if ( v40 > v34 )
          goto LABEL_24;
        v74 = *(_QWORD *)(v16 + 16);
        if ( (unsigned __int64)(v74 + 16) > *(_QWORD *)(v16 + 24) )
          goto LABEL_173;
        v75 = (v34 + 32) >> 6;
        for ( j = (_QWORD *)v16; (__int16)v75 > *(__int16 *)*j; j = (_QWORD *)(*j + 8LL) )
          ;
        *(_WORD *)v74 = v75;
        v77 = -1;
LABEL_101:
        *(_WORD *)(v74 + 2) = v77;
        v39 = v77;
        *(_QWORD *)(v74 + 8) = *j;
        *j = v74;
        *(_QWORD *)(v16 + 16) += 16LL;
        v137[0] = v77;
        goto LABEL_24;
      }
      if ( v40 >= v34 )
      {
        v74 = *(_QWORD *)(v16 + 16);
        if ( (unsigned __int64)(v74 + 16) > *(_QWORD *)(v16 + 24) )
        {
LABEL_173:
          result = 6656LL;
          goto LABEL_25;
        }
        v105 = (v34 + 31) >> 6;
        for ( j = (_QWORD *)v16; (__int16)v105 > *(__int16 *)*j; j = (_QWORD *)(*j + 8LL) )
          ;
        *(_WORD *)v74 = v105;
        v77 = 1;
        goto LABEL_101;
      }
LABEL_24:
      result = 0LL;
LABEL_25:
      if ( (_DWORD)result )
        return result;
      v37 = v147;
      v35 = v18;
      LOWORD(v18) = v140;
      v34 = v40;
LABEL_27:
      v142 = v34;
      v143 = v35;
      if ( v29 == v33 )
      {
        v38 = v141;
      }
      else
      {
        v38 = *v32;
        v37 = *v29;
        v36 = *v30;
        v141 = *v32;
        v147 = v37;
        v145 = v36;
      }
    }
    while ( v29 < v33 );
    for ( ; (__int16)v18 > 0; *(_QWORD *)(v146 + 16) += 16LL )
    {
      if ( !v39 )
        v39 = 1;
      if ( (unsigned __int64)(*(_QWORD *)(v16 + 16) + 16LL) > *(_QWORD *)(v16 + 24) )
        return 6656LL;
      AddReversal(v16, *(_QWORD *)(v16 + 16), (unsigned int)v34, v39);
      v16 = v146;
      v39 = -v134;
      v34 = v142;
      LOWORD(v18) = v18 - 1;
    }
    v25 = v144;
    if ( v139[0] != v39 )
      goto LABEL_164;
LABEL_32:
    v7 = a4;
    v18 = 0;
    if ( (a4 & 2) != 0 )
    {
      v16 = v146;
      v19 = v150;
      goto LABEL_48;
    }
    v47 = 0;
    v48 = v152;
    v49 = 0;
    v50 = v149;
    v51 = v25;
    v52 = *(_QWORD *)(a1 + 24);
    v53 = *(_DWORD *)(v52 + 4LL * v25);
    v54 = (int *)(v52 + 4 * v152);
    do
    {
      if ( v50 > v25 )
        break;
      v55 = *v54++;
      if ( v55 > v53 )
      {
        v47 = 1;
      }
      else if ( v55 < v53 )
      {
        v47 = -1;
      }
      else
      {
        ++v49;
      }
      ++v50;
      v53 = v55;
    }
    while ( !v47 );
    v56 = v149;
    v57 = v47;
    v58 = (_QWORD *)v146;
    if ( v50 <= v25 )
    {
      do
      {
        v59 = *v54++;
        if ( v47 == 1 )
        {
          if ( v59 <= v53 )
          {
            v106 = v58[2];
            if ( (unsigned __int64)(v106 + 16) > v58[3] )
              return 6656LL;
            v107 = v58 + 1;
            v108 = (v53 + 32) >> 6;
            if ( (__int16)v108 > *(__int16 *)v58[1] )
            {
              do
                v107 = (_QWORD *)(*v107 + 8LL);
              while ( (__int16)v108 > *(__int16 *)*v107 );
            }
            *(_WORD *)v106 = v108;
            v47 = -1;
            *(_WORD *)(v106 + 2) = -1;
            *(_QWORD *)(v106 + 8) = *v107;
            *v107 = v106;
            v58[2] += 16LL;
          }
        }
        else if ( v59 >= v53 )
        {
          v109 = v58[2];
          if ( (unsigned __int64)(v109 + 16) > v58[3] )
            return 6656LL;
          v110 = v58 + 1;
          v111 = (v53 + 31) >> 6;
          if ( (__int16)v111 > *(__int16 *)v58[1] )
          {
            do
              v110 = (_QWORD *)(*v110 + 8LL);
            while ( (__int16)v111 > *(__int16 *)*v110 );
          }
          *(_WORD *)v109 = v111;
          *(_WORD *)(v109 + 2) = 1;
          *(_QWORD *)(v109 + 8) = *v110;
          *v110 = v109;
          v47 = 1;
          v58[2] += 16LL;
        }
        ++v50;
        v53 = v59;
      }
      while ( v50 <= v25 );
      v51 = v153;
    }
    for ( ; v49 > 0; v58[2] += 16LL )
    {
      if ( !v47 )
      {
        v47 = 1;
        v57 = 1;
      }
      v112 = v58[2];
      if ( (unsigned __int64)(v112 + 16) > v58[3] )
        return 6656LL;
      v113 = v58 + 1;
      v114 = (v53 + (v47 >> 1) + 32) >> 6;
      if ( (__int16)v114 > *(__int16 *)v58[1] )
      {
        do
          v113 = (_QWORD *)(*v113 + 8LL);
        while ( (__int16)v114 > *(__int16 *)*v113 );
      }
      *(_WORD *)v112 = v114;
      v47 = -v47;
      *(_WORD *)(v112 + 2) = v47;
      --v49;
      *(_QWORD *)(v112 + 8) = *v113;
      *v113 = v112;
    }
    if ( v57 != v47 )
    {
      v133 = v58[2];
      if ( (unsigned __int64)(v133 + 16) <= v58[3] )
      {
        AddReversal(v58 + 1, v133, (unsigned int)v53, (unsigned __int16)v47);
        v16 = v146;
        *(_QWORD *)(v146 + 16) += 16LL;
        goto LABEL_47;
      }
      return 6656LL;
    }
    v16 = v146;
LABEL_47:
    v7 = a4;
    v19 = v150;
    if ( (a4 & 4) != 0 )
    {
      v115 = *(_QWORD *)(a1 + 24);
      v116 = *(_QWORD *)(a1 + 32);
      v117 = *(_QWORD *)(a1 + 40);
      v118 = *(_DWORD *)(v115 + 4 * v51);
      v119 = *(_DWORD *)(v116 + 4 * v51);
      v120 = (int *)(v116 + 4 * v48);
      v121 = *(_BYTE *)(v117 + v51);
      v122 = (unsigned __int8 *)(v117 + v48);
      v123 = (int *)(v115 + 4 * v48);
      v19 = v144 - v56 + v150 + 2;
      v150 = v19;
      if ( v56 <= v144 )
      {
        v124 = (unsigned __int16)(v144 - v56 + 1);
        do
        {
          v125 = *v122++;
          v126 = *v120;
          v127 = *v123++;
          ++v120;
          if ( (v121 & v125 & 1) == 0 )
          {
            if ( ((v121 | v125) & 1) == 0 )
              ++v19;
            v128 = v127 - v118;
            if ( v127 - v118 < 0 )
              v129 = v118 - v127;
            else
              v129 = v127 - v118;
            if ( v126 - v119 < 0 )
              v130 = v119 - v126;
            else
              v130 = v126 - v119;
            if ( v129 <= v130 )
            {
              if ( v126 - v119 >= 0 )
                v128 = v126 - v119;
              else
                v128 = v119 - v126;
            }
            else if ( v128 < 0 )
            {
              v128 = v118 - v127;
            }
            for ( k = 0; v128 > 1600; k = 2 * k + 2 )
              v128 >>= 1;
            v19 += k;
          }
          v118 = v127;
          v119 = v126;
          v121 = v125;
          --v124;
        }
        while ( v124 );
        v16 = v146;
        v150 = v19;
      }
      v7 = a4;
      v18 = 0;
    }
LABEL_48:
    v10 = a1;
    v21 = v151 + 1;
    v151 = v21;
  }
  while ( v21 < *(_WORD *)a1 );
  v9 = a2;
  v20 = (_QWORD *)(v16 + 8);
  v8 = a3;
LABEL_50:
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
  v66 = (v65 + 7) & 0xFFFFFFF8;
  v67 = IxEstimate;
  v68 = (IxEstimate + 7) & 0xFFFFFFF8;
  if ( (a4 & 4) != 0 )
    v69 = 8 * (v68 + 4 * v66 + v66);
  else
    v69 = 4 * (v68 + 10 * v66);
  v8[1] = v69;
  if ( (a4 & 2) != 0 )
  {
    v8[2] = 0;
  }
  else
  {
    if ( v64 != *(_QWORD *)(v64 + 32) )
      FixPointers(v64);
    v18 = GetIxEstimate(*v20);
    v70 = (v61 + 7) & 0xFFFFFFF8;
    v71 = (v18 + 7) & 0xFFFFFFF8;
    if ( v72 )
      v73 = 8 * (v71 + ((v19 + 7) & 0xFFFFFFF8) + 5 * v70);
    else
      v73 = 4 * (v71 + 10 * v70);
    v8[2] = v73;
  }
  v8[3] = v67;
  v8[4] = v18;
  v8[5] = v19;
  *v8 = *(_DWORD *)(v64 + 16) - v64;
  return 0LL;
}
