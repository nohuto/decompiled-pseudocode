/*
 * XREFs of sub_14072DC88 @ 0x14072DC88
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140228000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_1402347EC @ 0x1402347EC (sub_1402347EC.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     sub_14014F138 @ 0x14014F138 (sub_14014F138.c)
 *     sub_14014F19C @ 0x14014F19C (sub_14014F19C.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     sub_140236718 @ 0x140236718 (sub_140236718.c)
 *     MmImageSectionPagable @ 0x1403CF324 (MmImageSectionPagable.c)
 */

__int64 __fastcall sub_14072DC88(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // r15
  int v6; // esi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r14
  int v10; // r12d
  unsigned __int64 v11; // rcx
  __int64 v12; // xmm1_8
  int v13; // ecx
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned int v18; // r15d
  unsigned int v19; // eax
  _BYTE *v20; // rdi
  int v21; // edx
  unsigned int v22; // eax
  __int64 v23; // r9
  int v24; // r8d
  unsigned __int64 v25; // rcx
  int v26; // ebx
  int v27; // ecx
  int v29; // ecx
  _BYTE *v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 i; // rax
  _QWORD *v35; // rdx
  __int64 v36; // r8
  char *v37; // rcx
  char v38; // al
  __int64 v39; // rbx
  _QWORD *v40; // rax
  unsigned __int64 v41; // rcx
  int v42; // r11d
  _DWORD *v43; // rsi
  int v44; // ecx
  __int16 v45; // ax
  char *v46; // r8
  int v47; // r10d
  signed __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 *v51; // r9
  unsigned int v52; // r8d
  __int64 *v53; // r10
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  char *v58; // r8
  int v59; // r10d
  __int64 v60; // rdx
  __int64 v61; // rax
  char *v62; // r8
  int v63; // r10d
  __int64 v64; // rdx
  __int64 v65; // rax
  unsigned int v66; // ecx
  BOOL v67; // r12d
  unsigned int v68; // r15d
  int v69; // eax
  ULONG_PTR v70; // rdx
  unsigned int v71; // r10d
  _BYTE *v72; // rcx
  __int64 v73; // r9
  BOOL v74; // r11d
  ULONG_PTR v75; // rax
  unsigned int v76; // r13d
  _DWORD *v77; // rsi
  int v78; // eax
  int v79; // r11d
  char *v80; // rbx
  int v81; // ecx
  __int16 v82; // ax
  char *v83; // r8
  int v84; // r10d
  signed __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 *v88; // r9
  unsigned int v89; // r8d
  __int64 *v90; // r10
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rax
  char *v95; // r8
  int v96; // r10d
  __int64 v97; // rdx
  __int64 v98; // rax
  char *v99; // r8
  int v100; // r9d
  signed __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rax
  unsigned int v104; // ecx
  int v105; // eax
  bool v106; // zf
  __int64 *v107; // rax
  int v108; // r9d
  unsigned int *v109; // rcx
  ULONG_PTR v110; // r8
  _BYTE *v111; // rax
  __int64 v112; // r8
  __int64 v113; // rsi
  __int64 v114; // rax
  _QWORD *v115; // r13
  unsigned int v116; // eax
  __int64 v117; // rbx
  _QWORD *v118; // r11
  _DWORD *v119; // r15
  int v120; // r9d
  _QWORD *v121; // r8
  const char *v122; // rax
  int v123; // r12d
  unsigned __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rax
  unsigned __int64 j; // rax
  __int64 v128; // rsi
  char *v129; // r15
  _QWORD *v130; // r11
  __int64 v131; // r13
  _DWORD *v132; // r12
  _DWORD *v133; // r9
  int v134; // r8d
  char *v135; // rcx
  _QWORD *v136; // rdx
  __int64 v137; // r10
  char v138; // al
  int v139; // ecx
  __int64 k; // rcx
  __int64 v141; // rax
  unsigned __int64 v142; // r15
  __int64 v143; // r13
  int v144; // r8d
  unsigned int v145; // eax
  __int64 v146; // rsi
  int v147; // edx
  unsigned int v148; // eax
  __int64 v149; // r9
  int v150; // r8d
  unsigned __int64 v151; // rcx
  int v152; // edi
  int v153; // ecx
  __int64 v154; // rdi
  int v155; // ecx
  _QWORD *v156; // rax
  __int64 v157; // rdx
  _QWORD *v158; // r8
  int v159; // r10d
  const char *v160; // rax
  unsigned __int64 v161; // rdx
  int v162; // r9d
  unsigned __int64 v163; // rax
  __int64 v164; // rax
  unsigned __int64 m; // rax
  _BYTE *v166; // [rsp+38h] [rbp-D0h]
  ULONG_PTR v167; // [rsp+38h] [rbp-D0h]
  int v168; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v169; // [rsp+40h] [rbp-C8h]
  int v170; // [rsp+40h] [rbp-C8h]
  unsigned int v171; // [rsp+48h] [rbp-C0h]
  unsigned int v172; // [rsp+48h] [rbp-C0h]
  int v173; // [rsp+4Ch] [rbp-BCh]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v175; // [rsp+58h] [rbp-B0h]
  _DWORD *v176; // [rsp+58h] [rbp-B0h]
  __int64 v177; // [rsp+58h] [rbp-B0h]
  __int64 v178; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v179; // [rsp+68h] [rbp-A0h]
  __int64 v180; // [rsp+70h] [rbp-98h]
  int v181; // [rsp+78h] [rbp-90h]
  int v182; // [rsp+7Ch] [rbp-8Ch]
  _BYTE *v183; // [rsp+80h] [rbp-88h]
  __int128 v184; // [rsp+88h] [rbp-80h] BYREF
  __int64 v185; // [rsp+98h] [rbp-70h]
  char *v186; // [rsp+A0h] [rbp-68h]
  __int64 *v187; // [rsp+A8h] [rbp-60h]
  char *v188; // [rsp+B0h] [rbp-58h]
  char *v189; // [rsp+B8h] [rbp-50h]
  char *v190; // [rsp+C0h] [rbp-48h]
  __int64 *v191; // [rsp+C8h] [rbp-40h]
  char *v192; // [rsp+D0h] [rbp-38h]
  char *v193; // [rsp+D8h] [rbp-30h]
  _BYTE *v194; // [rsp+E0h] [rbp-28h]
  __int64 v195; // [rsp+E8h] [rbp-20h]
  __int64 v196; // [rsp+F0h] [rbp-18h]
  _BYTE *v197; // [rsp+F8h] [rbp-10h]
  _BYTE v198[88]; // [rsp+100h] [rbp-8h] BYREF
  int v201; // [rsp+178h] [rbp+70h]
  unsigned int v202; // [rsp+180h] [rbp+78h] BYREF

  v3 = *(_BYTE **)a1;
  BugCheckParameter2 = a2;
  v179 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 456LL))(a2);
  v5 = v179;
  if ( !v179 )
    return 3221225595LL;
  v173 = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 78))(a2);
  v168 = *(unsigned __int16 *)(v179 + 6);
  if ( *(_WORD *)(v179 + 6) && *(_DWORD *)(v179 + 56) >= 0x1000u && (a2 & 0xFFF) == 0 )
  {
    v6 = -1073741275;
    v7 = *((_QWORD *)v3 + 138);
    v8 = *((_QWORD *)v3 + 135) + 16LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*((void (__fastcall **)(__int64))v3 + 41))(v7);
    v10 = 24;
    v11 = v8 + 24LL * **((unsigned int **)v3 + 135);
    while ( *(_QWORD *)(v8 + 8) != a2 )
    {
      v8 += 24LL;
      if ( v8 >= v11 )
        goto LABEL_10;
    }
    v12 = *(_QWORD *)(v8 + 16);
    v6 = 0;
    v184 = *(_OWORD *)v8;
    v185 = v12;
LABEL_10:
    (*((void (__fastcall **)(_QWORD))v3 + 49))(*((_QWORD *)v3 + 138));
    __writecr8(CurrentIrql);
    if ( v6 >= 0 )
    {
      v16 = (unsigned int)v185;
    }
    else
    {
      v13 = 24;
      v14 = &v184;
      v15 = 3LL;
      do
      {
        *(_QWORD *)v14 = 0LL;
        v13 -= 8;
        v14 = (__int128 *)((char *)v14 + 8);
        --v15;
      }
      while ( v15 );
      for ( ; v13; --v13 )
      {
        *(_BYTE *)v14 = 0;
        v14 = (__int128 *)((char *)v14 + 1);
      }
      v16 = *(unsigned int *)(v5 + 80);
      LODWORD(v185) = *(_DWORD *)(v5 + 80);
      *((_QWORD *)&v184 + 1) = a2;
      *(_QWORD *)&v184 = 1LL;
    }
    v17 = *((unsigned int *)v3 + 341);
    v175 = ((a2 & 0xFFF) + 4095 + v16) >> 12;
    v18 = 20 * v175;
    v19 = 20 * v175 + v17 + 48;
    if ( v19 <= *((_DWORD *)v3 + 453) )
    {
      v20 = v3;
      *((_DWORD *)v3 + 341) = v19;
    }
    else
    {
      v20 = (_BYTE *)sub_140236718(v3, v19, *((_DWORD *)v3 + 397));
      if ( !v20 )
        return 3221225626LL;
      v21 = *((_DWORD *)v3 + 420);
      if ( (v21 & 4) == 0 )
      {
        v22 = *((_DWORD *)v3 + 341);
        v23 = *((_QWORD *)v3 + 167);
        v24 = (v21 & 0x20000000) != 0 ? *((_DWORD *)v3 + 397) : 0;
        if ( v22 >= 8 )
        {
          v25 = (unsigned __int64)v22 >> 3;
          do
          {
            *(_QWORD *)v3 = 0LL;
            v22 -= 8;
            v3 += 8;
            --v25;
          }
          while ( v25 );
        }
        for ( ; v22; --v22 )
          *v3++ = 0;
        v26 = *((_DWORD *)v20 + 397);
        *((_DWORD *)v20 + 397) = v24;
        if ( v24 == 3 )
        {
          (*((void (__fastcall **)(__int64))v20 + 100))(v23);
        }
        else
        {
          v27 = 0;
          if ( (*((_DWORD *)v20 + 420) & 0x10000000) == 0 )
            v27 = v24;
          if ( v27 )
            (*((void (__fastcall **)(__int64, _QWORD))v20 + 63))(v23 - 8, *(_QWORD *)(v23 - 8));
          else
            (*((void (__fastcall **)(__int64))v20 + 31))(v23);
        }
        *((_DWORD *)v20 + 397) = v26;
      }
      *((_DWORD *)v20 + 420) &= ~4u;
    }
    ++*((_DWORD *)v20 + 351);
    v29 = 48;
    v30 = &v20[v17];
    v197 = v30;
    v31 = v30;
    v32 = 6LL;
    do
    {
      *v31 = 0LL;
      v29 -= 8;
      ++v31;
      --v32;
    }
    while ( v32 );
    for ( ; v29; --v29 )
    {
      *(_BYTE *)v31 = 0;
      v31 = (_QWORD *)((char *)v31 + 1);
    }
    *(_DWORD *)v30 = (v173 != 0) + 33;
    *((_QWORD *)v30 + 1) = 0LL;
    *((_DWORD *)v30 + 4) = 0;
    v33 = *((_QWORD *)v20 + 177);
    for ( i = v33; ; LODWORD(v33) = i ^ v33 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v35 = v30 + 24;
    v194 = v30;
    *((_DWORD *)v30 + 5) = v33 & 0x7FFFFFFF;
    v36 = 3LL;
    v37 = (char *)&v184;
    *(_QWORD *)a1 = v20;
    do
    {
      v10 -= 8;
      *v35 = *(_QWORD *)v37;
      v37 += 8;
      ++v35;
      --v36;
    }
    while ( v36 );
    for ( ; v10; --v10 )
    {
      v38 = *v37++;
      *(_BYTE *)v35 = v38;
      v35 = (_QWORD *)((char *)v35 + 1);
    }
    LOBYTE(v35) = 1;
    v39 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))v20 + 56))(
            BugCheckParameter2,
            v35,
            12LL,
            &v202);
    v178 = v39;
    v202 &= -(v39 != 0);
    v201 = a3 & 1;
    if ( !v201 )
    {
      v39 = 0LL;
      v202 = 0;
      v178 = 0LL;
    }
    v183 = v30 + 48;
    v166 = v30 + 48;
    v180 = (__int64)&v30[20 * (unsigned int)v175 + 48];
    v40 = v30 + 48;
    if ( v18 >= 8 )
    {
      v41 = (unsigned __int64)v18 >> 3;
      do
      {
        *v40 = -1LL;
        v18 -= 8;
        ++v40;
        --v41;
      }
      while ( v41 );
    }
    for ( ; v18; --v18 )
    {
      *(_BYTE *)v40 = -1;
      v40 = (_QWORD *)((char *)v40 + 1);
    }
    v42 = 0;
    v43 = (_DWORD *)(*(unsigned __int16 *)(v179 + 20) + v179 + 24);
    v176 = &v43[10 * v168];
    if ( (v43[9] & 0x2000000) != 0
      || (v44 = *v43, *v43 == 1414090313) && v43[1] == 1195525195
      || v44 == 1162297680 && ((v45 = *((_WORD *)v43 + 2), v45 == 30583) || v45 == 29303 || v45 == 30839)
      || v44 == 1095914053 && *((_WORD *)v43 + 2) == 16724 )
    {
LABEL_82:
      v42 = 1;
    }
    else
    {
      v46 = (char *)*((_QWORD *)v20 + 200);
      v47 = 7;
      v191 = (__int64 *)*((_QWORD *)v20 + 201);
      v48 = (char *)v43 - v46;
      v192 = (char *)*((_QWORD *)v20 + 202);
      v193 = (char *)*((_QWORD *)v20 + 203);
      v190 = v46;
      while ( 1 )
      {
        v49 = (unsigned __int8)v46[v48];
        v50 = (unsigned __int8)*v46++;
        if ( v49 != v50 )
          break;
        if ( !--v47 )
        {
LABEL_81:
          v39 = v178;
          goto LABEL_82;
        }
      }
      v51 = v191;
      v52 = 8;
      v53 = (__int64 *)v43;
      while ( 1 )
      {
        v54 = *v53++;
        v55 = *v51++;
        if ( v54 != v55 )
          break;
        v52 -= 8;
        if ( v52 < 8 )
        {
          if ( !v52 )
            goto LABEL_81;
          while ( 1 )
          {
            v56 = *(unsigned __int8 *)v53;
            v53 = (__int64 *)((char *)v53 + 1);
            v57 = *(unsigned __int8 *)v51;
            v51 = (__int64 *)((char *)v51 + 1);
            if ( v56 != v57 )
              goto LABEL_74;
            if ( !--v52 )
              goto LABEL_81;
          }
        }
      }
LABEL_74:
      v58 = v192;
      v59 = 4;
      while ( 1 )
      {
        v60 = (unsigned __int8)v58[(char *)v43 - v192];
        v61 = (unsigned __int8)*v58++;
        if ( v60 != v61 )
          break;
        if ( !--v59 )
          goto LABEL_81;
      }
      v62 = v193;
      v63 = 6;
      while ( 1 )
      {
        v64 = (unsigned __int8)v62[(char *)v43 - v193];
        v65 = (unsigned __int8)*v62++;
        if ( v64 != v65 )
          break;
        if ( !--v63 )
          goto LABEL_81;
      }
      v39 = v178;
    }
    if ( (int)v43[9] < 0 )
      v42 = 1;
    if ( v42 && *v43 == 1414090313 && v43[1] == 1195525195 && (*((_DWORD *)v20 + 420) & 0x10000000) != 0 )
      v42 = 0;
    v66 = v43[2];
    v67 = v42 == 0;
    v171 = v43[3];
    if ( v43[4] > v66 )
      v66 = v43[4];
    v68 = (v66 + v43[3] + 4095) & 0xFFFFF000;
    v69 = MmImageSectionPagable((__int64)v43);
    v70 = BugCheckParameter2;
    v71 = 0;
    v72 = v166;
    v73 = v180;
    v74 = v69 != 0;
    v169 = BugCheckParameter2;
    v75 = BugCheckParameter2;
    v76 = 0;
    if ( v166 != (_BYTE *)v180 )
    {
      v77 = v43 + 1;
      while ( 1 )
      {
        if ( v76 < v171 )
        {
LABEL_138:
          v107 = &v178;
          v108 = 0;
          v109 = &v202;
          while ( 1 )
          {
            v110 = *v107;
            if ( *v109 )
            {
              if ( v169 >= v110 && v169 <= v110 + *v109 - 1LL )
                break;
            }
            ++v108;
            ++v109;
            ++v107;
            if ( v108 )
            {
              if ( v76 >= v171 && v74 )
              {
                v111 = v166;
              }
              else
              {
                v111 = v166;
                *((_DWORD *)v166 + 4) &= ~0x80000000;
              }
              v111[15] &= ~0x80u;
              break;
            }
          }
          v72 = v166;
          v75 = v169;
          v73 = v180;
          goto LABEL_151;
        }
        if ( v76 >= v68 )
        {
          if ( v77 - 1 == v176 )
          {
            if ( (*((_DWORD *)v20 + 420) & 0x200000) == 0 )
            {
              v181 = 324608;
              KeBugCheckEx(__ROR4__(324608, 170), 0xAuLL, BugCheckParameter2, 5uLL, 0LL);
            }
            if ( !*((_DWORD *)v20 + 386) )
            {
              *((_QWORD *)v20 + 195) = 0LL;
              *((_QWORD *)v20 + 196) = 271LL;
              *((_QWORD *)v20 + 194) = v20 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v20 + 197) = BugCheckParameter2;
              *((_DWORD *)v20 + 386) = 1;
            }
            return 3221225595LL;
          }
          if ( v77[12] < v76 )
          {
            v75 = v169;
            goto LABEL_151;
          }
          v78 = v77[18];
          v77 += 10;
          v79 = 0;
          if ( (v78 & 0x2000000) != 0
            || (v80 = (char *)(v77 - 1), v81 = *(v77 - 1), v81 == 1414090313) && *v77 == 1195525195
            || v81 == 1162297680 && ((v82 = *(_WORD *)v77, *(_WORD *)v77 == 30583) || v82 == 29303 || v82 == 30839)
            || v81 == 1095914053 && *(_WORD *)v77 == 16724 )
          {
            v79 = 1;
          }
          else
          {
            v83 = (char *)*((_QWORD *)v20 + 200);
            v84 = 7;
            v187 = (__int64 *)*((_QWORD *)v20 + 201);
            v85 = v80 - v83;
            v188 = (char *)*((_QWORD *)v20 + 202);
            v189 = (char *)*((_QWORD *)v20 + 203);
            v186 = v83;
            while ( 1 )
            {
              v86 = (unsigned __int8)v83[v85];
              v87 = (unsigned __int8)*v83++;
              if ( v86 != v87 )
                break;
              if ( !--v84 )
              {
LABEL_126:
                v79 = 1;
                goto LABEL_127;
              }
            }
            v88 = v187;
            v89 = 8;
            v90 = (__int64 *)(v77 - 1);
            while ( 1 )
            {
              v91 = *v90++;
              v92 = *v88++;
              if ( v91 != v92 )
                break;
              v89 -= 8;
              if ( v89 < 8 )
              {
                if ( !v89 )
                  goto LABEL_126;
                while ( 1 )
                {
                  v93 = *(unsigned __int8 *)v90;
                  v90 = (__int64 *)((char *)v90 + 1);
                  v94 = *(unsigned __int8 *)v88;
                  v88 = (__int64 *)((char *)v88 + 1);
                  if ( v93 != v94 )
                    goto LABEL_119;
                  if ( !--v89 )
                    goto LABEL_126;
                }
              }
            }
LABEL_119:
            v95 = v188;
            v96 = 4;
            while ( 1 )
            {
              v97 = (unsigned __int8)v95[v80 - v188];
              v98 = (unsigned __int8)*v95++;
              if ( v97 != v98 )
                break;
              if ( !--v96 )
                goto LABEL_126;
            }
            v99 = v189;
            v100 = 6;
            v101 = v80 - v189;
            while ( 1 )
            {
              v102 = (unsigned __int8)v99[v101];
              v103 = (unsigned __int8)*v99++;
              if ( v102 != v103 )
                break;
              if ( !--v100 )
                goto LABEL_126;
            }
          }
LABEL_127:
          if ( (int)v77[8] < 0 )
            v79 = 1;
          if ( v79 && *(v77 - 1) == 1414090313 && *v77 == 1195525195 && (*((_DWORD *)v20 + 420) & 0x10000000) != 0 )
            v79 = 0;
          v104 = v77[1];
          v67 = v79 == 0;
          if ( v77[3] > v104 )
            v104 = v77[3];
          v68 = (v104 + 4095 + v77[2]) & 0xFFFFF000;
          v105 = MmImageSectionPagable((__int64)(v77 - 1));
          v72 = v166;
          v73 = v180;
          v106 = v105 == 0;
          v75 = v169;
          v74 = !v106;
        }
        if ( v67 )
          goto LABEL_138;
LABEL_151:
        v75 += 4096LL;
        v72 += 20;
        v76 += 4096;
        v169 = v75;
        v71 = 0;
        v166 = v72;
        if ( v72 == (_BYTE *)v73 )
        {
          v39 = v178;
          v70 = BugCheckParameter2;
          break;
        }
      }
    }
    v112 = (__int64)v183;
    if ( v183 != (_BYTE *)v73 )
    {
      do
      {
        LODWORD(v113) = 0;
        if ( v112 != v73 )
        {
          v114 = v112;
          do
          {
            if ( *(char *)(v114 + 15) < 0 )
              break;
            v113 = (unsigned int)(v113 + 1);
            v114 = v112 + 20 * v113;
          }
          while ( v114 != v73 );
          v170 = v113;
          if ( (_DWORD)v113 )
          {
            v115 = (_QWORD *)*((_QWORD *)v20 + 232);
            v116 = v113;
            v172 = v113;
            v177 = (__int64)v115;
            v179 = v112;
            v167 = v70;
            do
            {
              v117 = 8LL;
              if ( v116 < 8 )
                v117 = v116;
              v118 = v115;
              v119 = v198;
              do
              {
                v120 = 4096;
                v118[1] = 4096LL;
                v121 = (_QWORD *)(v167 + (v71 << 12));
                *v118 = v121;
                v122 = (const char *)v121;
                *((_DWORD *)v20 + 358) += 4096;
                v123 = *((_DWORD *)v20 + 353);
                v124 = *((_QWORD *)v20 + 177);
                if ( v121 < v121 + 512 )
                {
                  do
                  {
                    _mm_prefetch(v122, 0);
                    v122 += 64;
                  }
                  while ( v122 < (const char *)v121 + 4096 );
                }
                v125 = 512LL;
                do
                {
                  v124 = __ROL8__(*v121++ ^ v124, v123);
                  v120 -= 8;
                  --v125;
                }
                while ( v125 );
                for ( ; v120; --v120 )
                {
                  v126 = *(unsigned __int8 *)v121;
                  v121 = (_QWORD *)((char *)v121 + 1);
                  v124 = __ROL8__(v126 ^ v124, v123);
                }
                for ( j = v124; ; LODWORD(v124) = j ^ v124 )
                {
                  j >>= 31;
                  if ( !j )
                    break;
                }
                ++v71;
                *v119 = v124 & 0x7FFFFFFF;
                v118 += 6;
                ++v119;
              }
              while ( v71 < (unsigned int)v117 );
              v128 = v179;
              sub_14014F19C((__int64)v20, v177, v117);
              v129 = (char *)(v177 + 16);
              v130 = (_QWORD *)v128;
              v131 = (unsigned int)v117;
              v132 = v198;
              v133 = (_DWORD *)(v128 + 16);
              do
              {
                v134 = 16;
                v135 = v129;
                v136 = v130;
                v137 = 2LL;
                do
                {
                  v134 -= 8;
                  *v136 = *(_QWORD *)v135;
                  v135 += 8;
                  ++v136;
                  --v137;
                }
                while ( v137 );
                for ( ; v134; --v134 )
                {
                  v138 = *v135++;
                  *(_BYTE *)v136 = v138;
                  v136 = (_QWORD *)((char *)v136 + 1);
                }
                v129 += 48;
                v130 = (_QWORD *)((char *)v130 + 20);
                v139 = (*v132++ ^ *v133) & 0x7FFFFFFF;
                *v133 ^= v139;
                v133 += 5;
                --v131;
              }
              while ( v131 );
              v71 = 0;
              v115 = (_QWORD *)v177;
              v167 += (unsigned int)((_DWORD)v117 << 12);
              v116 = v172 - v117;
              v179 += 20 * v117;
              *((_DWORD *)v20 + 358) += (_DWORD)v117 << 15;
              v172 = v116;
            }
            while ( v116 );
            LODWORD(v113) = v170;
            v112 = (__int64)v183;
            v73 = v180;
          }
        }
        for ( k = 5LL * (unsigned int)v113; ; k = 5 * v113 )
        {
          v141 = v112 + 4 * k;
          if ( v141 == v73 || *(char *)(v141 + 15) >= 0 )
            break;
          v113 = (unsigned int)(v113 + 1);
        }
        v70 = (unsigned int)((_DWORD)v113 << 12) + BugCheckParameter2;
        BugCheckParameter2 = v70;
        v112 += 20LL * (unsigned int)v113;
        v183 = (_BYTE *)v112;
      }
      while ( v112 != v73 );
      v39 = v178;
    }
    if ( !v201 )
      return 0LL;
    v142 = v202;
    if ( !v202 )
      return 0LL;
    v143 = *((unsigned int *)v20 + 341);
    v144 = *((_DWORD *)v20 + 397);
    v195 = 0LL;
    v145 = v143 + 48;
    if ( (unsigned int)(v143 + 48) <= *((_DWORD *)v20 + 453) )
    {
      v146 = (__int64)v20;
      *((_DWORD *)v20 + 341) = v145;
LABEL_210:
      ++*(_DWORD *)(v146 + 1404);
      v154 = v146 + v143;
      v155 = 48;
      v196 = v146 + v143;
      v156 = (_QWORD *)(v146 + v143);
      v157 = 6LL;
      do
      {
        *v156 = 0LL;
        v155 -= 8;
        ++v156;
        --v157;
      }
      while ( v157 );
      for ( ; v155; --v155 )
      {
        *(_BYTE *)v156 = 0;
        v156 = (_QWORD *)((char *)v156 + 1);
      }
      *(_DWORD *)v154 = (v173 != 0) + 13;
      *(_QWORD *)(v154 + 8) = v39;
      if ( (v173 != 0) == 19 && (_DWORD)v142 )
        sub_14014F138(v146, v39, v142, v154 + 24);
      *(_DWORD *)(v154 + 16) = v142;
      *(_DWORD *)(v146 + 1432) += v142;
      v158 = (_QWORD *)v39;
      v159 = *(_DWORD *)(v146 + 1412);
      v160 = (const char *)v39;
      v161 = *(_QWORD *)(v146 + 1416);
      if ( v39 < v39 + v142 )
      {
        do
        {
          _mm_prefetch(v160, 0);
          v160 += 64;
        }
        while ( (unsigned __int64)v160 < v39 + v142 );
      }
      v162 = v142;
      if ( (unsigned int)v142 >= 8 )
      {
        v163 = v142 >> 3;
        do
        {
          v161 = __ROL8__(*v158++ ^ v161, v159);
          v162 -= 8;
          --v163;
        }
        while ( v163 );
      }
      for ( ; v162; --v162 )
      {
        v164 = *(unsigned __int8 *)v158;
        v158 = (_QWORD *)((char *)v158 + 1);
        v161 = __ROL8__(v164 ^ v161, v159);
      }
      for ( m = v161; ; LODWORD(v161) = m ^ v161 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      *(_DWORD *)(v154 + 20) = v161 & 0x7FFFFFFF;
      *(_DWORD *)(v146 + 1432) += v142;
      if ( (*(_DWORD *)(v146 + 1680) & 0x40000000) != 0 )
      {
        if ( (_DWORD)v142 )
          sub_14014F138(v146, v39, v142, v154 + 28);
      }
      *(_DWORD *)(v154 + 24) = 1;
      *(_QWORD *)a1 = v146;
      return 0LL;
    }
    v146 = sub_140236718(v20, v145, v144);
    if ( v146 )
    {
      v147 = *((_DWORD *)v20 + 420);
      if ( (v147 & 4) == 0 )
      {
        v148 = *((_DWORD *)v20 + 341);
        v149 = *((_QWORD *)v20 + 167);
        v150 = (v147 & 0x20000000) != 0 ? *((_DWORD *)v20 + 397) : 0;
        if ( v148 >= 8 )
        {
          v151 = (unsigned __int64)v148 >> 3;
          do
          {
            *(_QWORD *)v20 = 0LL;
            v148 -= 8;
            v20 += 8;
            --v151;
          }
          while ( v151 );
        }
        for ( ; v148; --v148 )
          *v20++ = 0;
        v152 = *(_DWORD *)(v146 + 1588);
        *(_DWORD *)(v146 + 1588) = v150;
        if ( v150 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v146 + 800))(v149);
        }
        else
        {
          v153 = 0;
          if ( (*(_DWORD *)(v146 + 1680) & 0x10000000) == 0 )
            v153 = v150;
          if ( v153 )
            (*(void (__fastcall **)(__int64, _QWORD))(v146 + 504))(v149 - 8, *(_QWORD *)(v149 - 8));
          else
            (*(void (__fastcall **)(__int64))(v146 + 248))(v149);
        }
        *(_DWORD *)(v146 + 1588) = v152;
      }
      *(_DWORD *)(v146 + 1680) &= ~4u;
      goto LABEL_210;
    }
    return 3221225626LL;
  }
  if ( (*((_DWORD *)v3 + 420) & 0x200000) == 0 )
  {
    v182 = 324608;
    KeBugCheckEx(__ROR4__(324608, 170), 0xAuLL, a2, 4uLL, 0LL);
  }
  if ( !*((_DWORD *)v3 + 386) )
  {
    *((_QWORD *)v3 + 195) = 0LL;
    *((_QWORD *)v3 + 196) = 271LL;
    *((_QWORD *)v3 + 194) = v3 - 0x5C5FC0A76E374B18LL;
    *((_QWORD *)v3 + 197) = a2;
    *((_DWORD *)v3 + 386) = 1;
  }
  return 3221225595LL;
}
