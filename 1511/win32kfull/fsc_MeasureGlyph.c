/*
 * XREFs of fsc_MeasureGlyph @ 0x1C00AB4F0
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00AC4E8 (fs_FindBitMapSize.c)
 * Callees:
 *     fsc_CheckYReversalInSpline @ 0x1C00A9AB8 (fsc_CheckYReversalInSpline.c)
 *     fsc_AddXReversal @ 0x1C00A9CF0 (fsc_AddXReversal.c)
 *     fsc_AddYReversal @ 0x1C00A9D2C (fsc_AddYReversal.c)
 *     GetIxEstimate @ 0x1C00AC1C4 (GetIxEstimate.c)
 *     FindExtrema @ 0x1C00AC1F8 (FindExtrema.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 *     FixPointers @ 0x1C02DDDCC (FixPointers.c)
 */

__int64 __fastcall fsc_MeasureGlyph(_QWORD *a1, __int64 a2, int *a3, char a4, __int16 a5, __int16 a6, __int16 a7)
{
  char v7; // bl
  int *v8; // rsi
  __int64 v9; // rdi
  _QWORD *v10; // r15
  __int64 result; // rax
  __int16 v12; // r9
  __int16 v13; // ax
  __int16 v14; // cx
  __int16 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  _QWORD *v18; // r12
  int v19; // r14d
  int v20; // r13d
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  __int16 v23; // dx
  __int64 v24; // rax
  __int16 v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  int *v29; // rbx
  _BYTE *v30; // rdi
  int *v31; // rdx
  _BYTE *v32; // r8
  int *v33; // rsi
  int v34; // ecx
  signed int v35; // r15d
  signed int v36; // r11d
  int v37; // r13d
  char v38; // al
  unsigned int v39; // r9d
  int v40; // r13d
  __int16 v41; // di
  int v42; // r14d
  int v43; // edi
  int v44; // eax
  int v45; // r12d
  int v46; // ecx
  int v47; // r13d
  bool v48; // sf
  bool v49; // sf
  signed __int16 v50; // r10
  __int16 v51; // bx
  __int16 v52; // dx
  __int64 v53; // rax
  signed int v54; // ecx
  signed int *v55; // r8
  signed int v56; // eax
  __int64 v57; // r13
  __int16 v58; // di
  __int64 k; // r15
  signed int v60; // r9d
  int v61; // r11d
  int v62; // ebx
  __int16 v63; // ax
  int IxEstimate; // eax
  __int64 v65; // r10
  int v66; // r11d
  unsigned int v67; // edx
  int v68; // edi
  unsigned int v69; // r8d
  int v70; // edx
  unsigned int v71; // ecx
  unsigned int v72; // r8d
  __int16 v73; // r11
  int v74; // edx
  __int64 v75; // r11
  int v76; // r15d
  _QWORD *j; // rcx
  unsigned int v78; // r12d
  __int64 v79; // r10
  int v80; // r11d
  __int64 v81; // r10
  int v82; // eax
  int v83; // r11d
  __int64 v84; // r10
  int v85; // eax
  int v86; // r12d
  int v87; // r15d
  int v88; // r11d
  int v89; // r13d
  __int64 v90; // rdx
  unsigned int v91; // r12d
  __int64 v92; // r10
  int v93; // r11d
  __int64 v94; // r10
  int v95; // eax
  int v96; // r11d
  __int64 v97; // r10
  int v98; // r12d
  int v99; // r15d
  int v100; // r11d
  __int64 v101; // r9
  int v102; // r15d
  _QWORD *i; // rcx
  unsigned __int16 v104; // r14
  __int64 v105; // r11
  _QWORD *v106; // rax
  int v107; // r10d
  __int64 v108; // r11
  _QWORD *v109; // r10
  int v110; // ecx
  unsigned __int16 v111; // ax
  __int64 v112; // r9
  _QWORD *v113; // rdx
  int v114; // r8d
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  int *v118; // r11
  int *v119; // rbx
  unsigned __int8 *v120; // rdi
  int v121; // r14d
  int v122; // esi
  unsigned __int8 v123; // r8
  __int64 v124; // r12
  unsigned __int8 v125; // cl
  int v126; // r10d
  int v127; // r9d
  int v128; // eax
  int v129; // r15d
  int v130; // r8d
  int m; // edx
  char v132; // al
  int v133; // r13d
  int v134; // [rsp+28h] [rbp-89h]
  int v135; // [rsp+28h] [rbp-89h]
  _WORD v136[2]; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v137; // [rsp+54h] [rbp-5Dh]
  _WORD v138[2]; // [rsp+58h] [rbp-59h] BYREF
  _WORD v139[2]; // [rsp+5Ch] [rbp-55h] BYREF
  char v140; // [rsp+60h] [rbp-51h]
  int v141; // [rsp+64h] [rbp-4Dh]
  int v142; // [rsp+68h] [rbp-49h]
  __int64 v143; // [rsp+70h] [rbp-41h]
  int v144; // [rsp+78h] [rbp-39h]
  int v145; // [rsp+7Ch] [rbp-35h]
  unsigned __int16 v146; // [rsp+80h] [rbp-31h]
  __int16 v147; // [rsp+82h] [rbp-2Fh]
  __int16 v148; // [rsp+84h] [rbp-2Dh]
  signed int v149; // [rsp+88h] [rbp-29h]
  _BYTE *v150; // [rsp+90h] [rbp-21h]
  int *v151; // [rsp+98h] [rbp-19h]
  __int64 v152; // [rsp+A0h] [rbp-11h]

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
  v143 = v16;
  if ( v17 < 0x38 )
    return 6656LL;
  *(_QWORD *)v16 = v16 + 40;
  v18 = (_QWORD *)(v16 + 8);
  *(_QWORD *)(v16 + 8) = v16 + 40;
  *(_DWORD *)(v16 + 40) = 0x7FFF;
  v19 = 0;
  *(_QWORD *)(v16 + 48) = 0LL;
  v20 = 0;
  *(_QWORD *)(v16 + 32) = v16;
  *(_QWORD *)(v16 + 16) = v16 + 56;
  *(_QWORD *)(v16 + 24) = v17 + v16;
  v21 = 0;
  v146 = 0;
  v144 = 0;
  if ( !*(_WORD *)v10 )
    goto LABEL_50;
  while ( 1 )
  {
    v22 = 2LL * v21;
    v23 = *(_WORD *)(v22 + v10[1]);
    v24 = v10[2];
    v148 = v23;
    v25 = *(_WORD *)(v22 + v24);
    v147 = v25;
    if ( v23 != v25 )
      break;
LABEL_48:
    v19 = 0;
    v21 = v146 + 1;
    v146 = v21;
    if ( v21 >= *(_WORD *)v10 )
    {
      v9 = a2;
      v18 = (_QWORD *)(v16 + 8);
      v8 = a3;
LABEL_50:
      if ( (v7 & 6) == 4 )
      {
        v20 += 2 * ((*(_QWORD *)(v16 + 16) - v16 - 56) >> 4);
        if ( v20 > 0x3FFF )
          return 4869LL;
      }
      v61 = *(__int16 *)(v9 + 6) - *(__int16 *)(v9 + 10);
      v62 = *(__int16 *)(v9 + 12) - *(__int16 *)(v9 + 8);
      v63 = ((v62 + 31) >> 3) & 0xFFFC;
      *(_WORD *)v9 = v63;
      *(_DWORD *)(v9 + 36) = v61 * v63;
      if ( v16 != *(_QWORD *)(v16 + 32) )
        FixPointers(v16);
      IxEstimate = GetIxEstimate(*(_QWORD *)v16);
      v67 = (v66 + 7) & 0xFFFFFFF8;
      v68 = IxEstimate;
      v69 = (IxEstimate + 7) & 0xFFFFFFF8;
      if ( (a4 & 4) != 0 )
        v70 = 8 * (v69 + 4 * v67 + v67);
      else
        v70 = 4 * (v69 + 10 * v67);
      v8[1] = v70;
      if ( (a4 & 2) != 0 )
      {
        v8[2] = 0;
      }
      else
      {
        if ( v65 != *(_QWORD *)(v65 + 32) )
          FixPointers(v65);
        v19 = GetIxEstimate(*v18);
        v71 = (v62 + 7) & 0xFFFFFFF8;
        v72 = (v19 + 7) & 0xFFFFFFF8;
        if ( v73 )
          v74 = 8 * (v72 + ((v20 + 7) & 0xFFFFFFF8) + 5 * v71);
        else
          v74 = 4 * (v72 + 10 * v71);
        v8[2] = v74;
      }
      v8[3] = v68;
      v8[4] = v19;
      v8[5] = v20;
      *v8 = *(_DWORD *)(v65 + 16) - v65;
      return 0LL;
    }
  }
  v26 = v10[5];
  v27 = v10[3];
  v28 = v10[4];
  v152 = v23;
  v29 = (int *)(v27 + 4LL * v23);
  v30 = (_BYTE *)(v25 + v26);
  v31 = (int *)(v28 + 4LL * v23);
  v32 = (_BYTE *)(v26 + v152);
  v33 = (int *)(v27 + 4LL * v25);
  if ( (*v30 & 1) != 0 )
  {
    v34 = *v33++;
    v35 = *(_DWORD *)(v28 + 4LL * v25);
    v36 = *v31;
    v37 = *v29;
    v38 = *v32;
    v149 = *v31;
    v142 = v34;
    v145 = v37;
  }
  else
  {
    v132 = *(v30 - 1);
    v35 = *(_DWORD *)(v28 + 4LL * v25 - 4);
    v34 = *(v33 - 1);
    v133 = *v33;
    v36 = *(_DWORD *)(v28 + 4LL * v25);
    v142 = v34;
    v145 = v133;
    v149 = v36;
    if ( (v132 & 1) == 0 )
    {
      v34 = (v133 + v34 + 1) >> 1;
      v142 = v34;
      v35 = (v36 + v35 + 1) >> 1;
    }
    v38 = 0;
    --v29;
    --v31;
    --v32;
  }
  v140 = v38;
  v139[0] = 1;
  LOWORD(v39) = 0;
  v40 = v145;
  v41 = 0;
  v137 = 0;
  v136[0] = 0;
  LOWORD(v141) = 0;
  v138[0] = 0;
  if ( v29 >= v33 )
    goto LABEL_167;
  do
  {
    if ( (v38 & 1) != 0 )
    {
      if ( (_WORD)v39 )
      {
        if ( (_WORD)v39 == 1 )
        {
          if ( v36 > v35 )
          {
LABEL_92:
            ++v29;
            ++v31;
            ++v32;
            v34 = v40;
            v35 = v36;
            goto LABEL_27;
          }
          v101 = *(_QWORD *)(v16 + 16);
          if ( (unsigned __int64)(v101 + 16) > *(_QWORD *)(v16 + 24) )
            return 6656LL;
          v102 = (v35 + 32) >> 6;
          for ( i = (_QWORD *)v16; (__int16)v102 > *(__int16 *)*i; i = (_QWORD *)(*i + 8LL) )
            ;
          v104 = -1;
        }
        else
        {
          if ( v36 < v35 )
            goto LABEL_92;
          v101 = *(_QWORD *)(v16 + 16);
          if ( (unsigned __int64)(v101 + 16) > *(_QWORD *)(v16 + 24) )
            return 6656LL;
          v102 = (v35 + 31) >> 6;
          for ( i = (_QWORD *)v16; (__int16)v102 > *(__int16 *)*i; i = (_QWORD *)(*i + 8LL) )
            ;
          v104 = 1;
        }
        *(_WORD *)v101 = v102;
        *(_WORD *)(v101 + 2) = v104;
        *(_QWORD *)(v101 + 8) = *i;
        *i = v101;
        v39 = v104;
        *(_QWORD *)(v16 + 16) += 16LL;
      }
      else
      {
        if ( v36 > v35 )
        {
          LOWORD(v39) = 1;
          v137 = 1;
          v136[0] = 1;
          v139[0] = 1;
          goto LABEL_92;
        }
        if ( v36 >= v35 )
        {
          LOWORD(v141) = ++v41;
          v138[0] = v41;
          goto LABEL_92;
        }
        v39 = 0xFFFF;
        v139[0] = -1;
      }
      v137 = v39;
      v136[0] = v39;
      goto LABEL_92;
    }
    v42 = v29[1];
    ++v31;
    ++v32;
    v151 = v31;
    ++v29;
    v150 = v32;
    v43 = *v31;
    if ( (*v32 & 1) != 0 )
    {
      ++v31;
      ++v29;
      ++v32;
      v151 = v31;
      v150 = v32;
    }
    else
    {
      v42 = (v40 + v42 + 1) >> 1;
      v43 = (v36 + v43 + 1) >> 1;
    }
    v44 = v40 - v34;
    v45 = v42 - v40;
    v46 = v36 - v35;
    v47 = v43 - v36;
    v48 = v36 - v35 < 0;
    if ( v36 - v35 > 0 )
    {
      if ( v47 < 0 )
        goto LABEL_77;
      v48 = v46 < 0;
    }
    if ( v48 && v47 > 0 )
    {
LABEL_77:
      v137 = v46 - v47;
      if ( v46 == v47 )
        return 4870LL;
      CompDiv((unsigned int)(v46 - v47), v46 * (__int64)v44);
      v89 = v142;
      v90 = v45;
      v91 = v137;
      v137 = v145 + CompDiv(v137, v92 * v90);
      v95 = CompDiv(v91, v94 * (int)(v137 - v93));
      v142 = v96 + v95;
      v98 = v35 + CompDiv(v91, v97 * v97);
      v135 = v35;
      v99 = v143;
      result = fsc_CheckYReversalInSpline(
                 v143,
                 (int)v136,
                 (__int64)v139,
                 (__int64)v138,
                 v89,
                 v135,
                 v100,
                 v98,
                 v142,
                 v98);
      if ( !(_DWORD)result )
        result = fsc_CheckYReversalInSpline(
                   v99,
                   (int)v136,
                   (__int64)v139,
                   (__int64)v138,
                   v142,
                   v98,
                   v137,
                   v98,
                   v42,
                   v43);
      goto LABEL_73;
    }
    v49 = v44 < 0;
    if ( v44 > 0 )
    {
      if ( v45 < 0 )
        goto LABEL_70;
      v49 = v44 < 0;
    }
    if ( v49 && v45 > 0 )
    {
LABEL_70:
      v137 = v44 - v45;
      if ( v44 == v45 )
        return 4870LL;
      CompDiv((unsigned int)(v44 - v45), v44 * (__int64)v46);
      v78 = v137;
      v141 = v149 + CompDiv(v137, v79 * v47);
      v82 = CompDiv(v78, v81 * (v141 - v80));
      v137 = v83 + v82;
      v85 = CompDiv(v78, v84 * v84);
      v86 = v85 + v142;
      v134 = v35;
      v87 = v143;
      result = fsc_CheckYReversalInSpline(
                 v143,
                 (int)v136,
                 (__int64)v139,
                 (__int64)v138,
                 v142,
                 v134,
                 v85 + v142,
                 v88,
                 v85 + v142,
                 v137);
      if ( !(_DWORD)result )
        result = fsc_CheckYReversalInSpline(
                   v87,
                   (int)v136,
                   (__int64)v139,
                   (__int64)v138,
                   v86,
                   v137,
                   v86,
                   v141,
                   v42,
                   v43);
LABEL_73:
      LOWORD(v39) = v136[0];
      v31 = v151;
      v32 = v150;
      v16 = v143;
      v137 = v136[0];
      LOWORD(v141) = v138[0];
      goto LABEL_25;
    }
    if ( (_WORD)v39 )
    {
      if ( (_WORD)v39 == 1 )
      {
        if ( v43 > v35 )
          goto LABEL_24;
        v75 = *(_QWORD *)(v16 + 16);
        if ( (unsigned __int64)(v75 + 16) > *(_QWORD *)(v16 + 24) )
          goto LABEL_176;
        v76 = (v35 + 32) >> 6;
        for ( j = (_QWORD *)v16; (__int16)v76 > *(__int16 *)*j; j = (_QWORD *)(*j + 8LL) )
          ;
        v39 = -1;
      }
      else
      {
        if ( v43 < v35 )
          goto LABEL_24;
        v75 = *(_QWORD *)(v16 + 16);
        if ( (unsigned __int64)(v75 + 16) > *(_QWORD *)(v16 + 24) )
        {
LABEL_176:
          result = 6656LL;
          goto LABEL_25;
        }
        v76 = (v35 + 31) >> 6;
        for ( j = (_QWORD *)v16; (__int16)v76 > *(__int16 *)*j; j = (_QWORD *)(*j + 8LL) )
          ;
        v39 = 1;
      }
      *(_WORD *)v75 = v76;
      *(_WORD *)(v75 + 2) = v39;
      *(_QWORD *)(v75 + 8) = *j;
      *j = v75;
      *(_QWORD *)(v16 + 16) += 16LL;
      v136[0] = v39;
      v137 = v39;
      goto LABEL_24;
    }
    if ( v43 > v35 )
    {
      v111 = 1;
    }
    else
    {
      if ( v43 >= v35 )
      {
        LOWORD(v141) = v141 + 1;
        v138[0] = v141;
        goto LABEL_24;
      }
      v111 = -1;
    }
    LOWORD(v39) = v111;
    v139[0] = v111;
    v137 = v111;
    v136[0] = v111;
LABEL_24:
    result = 0LL;
LABEL_25:
    if ( (_DWORD)result )
      return result;
    v36 = v149;
    v35 = v43;
    v41 = v141;
    v34 = v42;
    v40 = v145;
LABEL_27:
    v142 = v34;
    if ( v29 == v33 )
    {
      v38 = v140;
    }
    else
    {
      v38 = *v32;
      v40 = *v29;
      v36 = *v31;
      v140 = *v32;
      v145 = v40;
      v149 = v36;
    }
  }
  while ( v29 < v33 );
  for ( ; v41 > 0; v137 = v39 )
  {
    if ( !(_WORD)v39 )
    {
      LOWORD(v39) = 1;
      v137 = 1;
    }
    result = fsc_AddYReversal(v16, v35, v39);
    if ( (_DWORD)result )
      return result;
    HIWORD(v39) = HIWORD(v137);
    --v41;
    v16 = v143;
    LOWORD(v39) = -(__int16)v137;
  }
  v25 = v147;
  if ( v139[0] == (_WORD)v39 )
    goto LABEL_32;
  v16 = v143;
LABEL_167:
  result = fsc_AddYReversal(v16, v35, v39);
  if ( !(_DWORD)result )
  {
LABEL_32:
    v7 = a4;
    if ( (a4 & 2) != 0 )
    {
      v20 = v144;
      v10 = a1;
    }
    else
    {
      v50 = 0;
      v51 = 0;
      v52 = v148;
      v53 = a1[3];
      v54 = *(_DWORD *)(v53 + 4LL * v25);
      v55 = (signed int *)(v53 + 4 * v152);
      do
      {
        if ( v52 > v25 )
          break;
        v56 = *v55++;
        if ( v56 > v54 )
        {
          v50 = 1;
        }
        else if ( v56 < v54 )
        {
          v50 = -1;
        }
        else
        {
          ++v51;
        }
        ++v52;
        v54 = v56;
      }
      while ( !v50 );
      v57 = v152;
      v58 = v50;
      for ( k = v143; v52 <= v25; v54 = v60 )
      {
        v60 = *v55++;
        if ( v50 == 1 )
        {
          if ( v60 <= v54 )
          {
            v105 = *(_QWORD *)(k + 16);
            if ( (unsigned __int64)(v105 + 16) > *(_QWORD *)(k + 24) )
              return 6656LL;
            v106 = (_QWORD *)(k + 8);
            v107 = (v54 + 32) >> 6;
            if ( (__int16)v107 > **(__int16 **)(k + 8) )
            {
              do
                v106 = (_QWORD *)(*v106 + 8LL);
              while ( (__int16)v107 > *(__int16 *)*v106 );
            }
            *(_WORD *)v105 = v107;
            v50 = -1;
            *(_WORD *)(v105 + 2) = -1;
            *(_QWORD *)(v105 + 8) = *v106;
            *v106 = v105;
            *(_QWORD *)(k + 16) += 16LL;
          }
        }
        else if ( v60 >= v54 )
        {
          v108 = *(_QWORD *)(k + 16);
          if ( (unsigned __int64)(v108 + 16) > *(_QWORD *)(k + 24) )
            return 6656LL;
          v109 = (_QWORD *)(k + 8);
          v110 = (v54 + 31) >> 6;
          if ( (__int16)v110 > **(__int16 **)(k + 8) )
          {
            do
              v109 = (_QWORD *)(*v109 + 8LL);
            while ( (__int16)v110 > *(__int16 *)*v109 );
          }
          *(_WORD *)v108 = v110;
          *(_WORD *)(v108 + 2) = 1;
          *(_QWORD *)(v108 + 8) = *v109;
          *v109 = v108;
          v50 = 1;
          *(_QWORD *)(k + 16) += 16LL;
        }
        ++v52;
      }
      for ( ; v51 > 0; *(_QWORD *)(k + 16) += 16LL )
      {
        if ( !v50 )
        {
          v50 = 1;
          v58 = 1;
        }
        v112 = *(_QWORD *)(k + 16);
        if ( (unsigned __int64)(v112 + 16) > *(_QWORD *)(k + 24) )
          return 6656LL;
        v113 = (_QWORD *)(k + 8);
        v114 = (v54 + (v50 >> 1) + 32) >> 6;
        if ( (__int16)v114 > **(__int16 **)(k + 8) )
        {
          do
            v113 = (_QWORD *)(*v113 + 8LL);
          while ( (__int16)v114 > *(__int16 *)*v113 );
        }
        *(_WORD *)v112 = v114;
        v50 = -v50;
        *(_WORD *)(v112 + 2) = v50;
        --v51;
        *(_QWORD *)(v112 + 8) = *v113;
        *v113 = v112;
      }
      if ( v58 != v50 )
      {
        result = fsc_AddXReversal(k, v54, v50);
        if ( (_DWORD)result )
          return result;
      }
      v7 = a4;
      v10 = a1;
      if ( (a4 & 4) != 0 )
      {
        v115 = a1[3];
        v116 = a1[4];
        v117 = a1[5];
        v118 = (int *)(v115 + 4 * v57);
        v119 = (int *)(v116 + 4 * v57);
        v120 = (unsigned __int8 *)(v117 + v57);
        v121 = *(_DWORD *)(v116 + 4LL * v25);
        v122 = *(_DWORD *)(v115 + 4LL * v25);
        v123 = *(_BYTE *)(v117 + v25);
        v20 = v25 - v148 + v144 + 2;
        v144 = v20;
        if ( v148 <= v25 )
        {
          v124 = (unsigned __int16)(v25 - v148 + 1);
          do
          {
            v125 = *v120++;
            v126 = *v119;
            v127 = *v118++;
            ++v119;
            if ( (v123 & v125 & 1) == 0 )
            {
              if ( ((v123 | v125) & 1) == 0 )
                ++v20;
              v128 = v127 - v122;
              if ( v127 - v122 < 0 )
                v129 = v122 - v127;
              else
                v129 = v127 - v122;
              if ( v126 - v121 < 0 )
                v130 = v121 - v126;
              else
                v130 = v126 - v121;
              if ( v129 <= v130 )
              {
                if ( v126 - v121 >= 0 )
                  v128 = v126 - v121;
                else
                  v128 = v121 - v126;
              }
              else if ( v128 < 0 )
              {
                v128 = v122 - v127;
              }
              for ( m = 0; v128 > 1600; m = 2 * m + 2 )
                v128 >>= 1;
              v20 += m;
            }
            v122 = v127;
            v121 = v126;
            v123 = v125;
            --v124;
          }
          while ( v124 );
          v10 = a1;
          v144 = v20;
        }
        v7 = a4;
      }
      else
      {
        v20 = v144;
      }
    }
    v16 = v143;
    goto LABEL_48;
  }
  return result;
}
