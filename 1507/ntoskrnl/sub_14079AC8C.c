/*
 * XREFs of sub_14079AC8C @ 0x14079AC8C
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140283BBC @ 0x140283BBC (sub_140283BBC.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     sub_14017D2FC @ 0x14017D2FC (sub_14017D2FC.c)
 *     sub_14017D360 @ 0x14017D360 (sub_14017D360.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     sub_140285DF0 @ 0x140285DF0 (sub_140285DF0.c)
 *     MmImageSectionPagable @ 0x1404F5320 (MmImageSectionPagable.c)
 */

__int64 __fastcall sub_14079AC8C(__int64 *a1, ULONG_PTR a2, char a3)
{
  __int64 v3; // rbx
  __int64 v5; // r13
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
  __int64 v17; // rdi
  int v18; // r8d
  unsigned int v19; // r15d
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rsi
  int v25; // edx
  unsigned int v26; // eax
  __int64 v27; // r8
  int v28; // edx
  unsigned __int64 v29; // rcx
  int v30; // ebx
  int v31; // ecx
  __int64 v32; // rdi
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 i; // rax
  _QWORD *v37; // rdx
  __int64 v38; // r8
  char *v39; // rcx
  char v40; // al
  __int64 v41; // rbx
  BOOL v42; // r12d
  _QWORD *v43; // rax
  unsigned __int64 v44; // rcx
  int v45; // r11d
  _DWORD *v46; // rdi
  __int16 v47; // ax
  char *v48; // r8
  int v49; // r10d
  signed __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 *v53; // r9
  unsigned int v54; // r8d
  __int64 *v55; // r10
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  char *v60; // r8
  int v61; // r10d
  __int64 v62; // rdx
  __int64 v63; // rax
  char *v64; // r8
  int v65; // r10d
  __int64 v66; // rdx
  __int64 v67; // rax
  bool v68; // zf
  unsigned int v69; // ecx
  unsigned int v70; // r15d
  int v71; // eax
  ULONG_PTR v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r9
  BOOL v75; // r11d
  ULONG_PTR v76; // rax
  unsigned int v77; // r13d
  _DWORD *v78; // rdi
  int v79; // r11d
  char *v80; // rbx
  int v81; // eax
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
  __int64 *v106; // rax
  int v107; // r9d
  unsigned int *v108; // rcx
  ULONG_PTR v109; // r8
  __int64 v110; // rax
  __int64 v111; // r8
  __int64 v112; // rdi
  __int64 v113; // rax
  unsigned __int64 v114; // r13
  unsigned int v115; // eax
  __int64 v116; // rdi
  __int64 v117; // rbx
  unsigned int v118; // r11d
  _QWORD *v119; // r10
  _DWORD *v120; // r15
  _QWORD *v121; // r8
  const char *v122; // rax
  int v123; // ecx
  int v124; // r9d
  unsigned __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rax
  unsigned __int64 j; // rax
  unsigned __int64 v129; // r13
  char *v130; // r15
  _QWORD *v131; // r11
  __int64 v132; // r13
  _DWORD *v133; // r12
  _DWORD *v134; // r9
  int v135; // r8d
  char *v136; // rcx
  _QWORD *v137; // rdx
  __int64 v138; // r10
  char v139; // al
  int v140; // ecx
  __int64 k; // rcx
  __int64 v142; // rax
  unsigned __int64 v143; // r15
  int v144; // eax
  __int64 v145; // r13
  int v146; // r8d
  int v147; // eax
  unsigned int v148; // edx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rdi
  int v153; // edx
  unsigned int v154; // eax
  __int64 v155; // r8
  int v156; // edx
  unsigned __int64 v157; // rcx
  int v158; // esi
  __int64 v159; // rsi
  int v160; // ecx
  _QWORD *v161; // rax
  __int64 v162; // rdx
  _QWORD *v163; // r8
  const char *v164; // rax
  unsigned __int64 v165; // rdx
  int v166; // r9d
  unsigned __int64 v167; // rax
  __int64 v168; // rax
  unsigned __int64 m; // rax
  int v171; // [rsp+38h] [rbp-D0h]
  unsigned int v172; // [rsp+38h] [rbp-D0h]
  unsigned int v173; // [rsp+38h] [rbp-D0h]
  __int64 v174; // [rsp+40h] [rbp-C8h]
  int v175; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v176; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v177; // [rsp+48h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h]
  int v179; // [rsp+58h] [rbp-B0h]
  __int64 v180; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v181; // [rsp+68h] [rbp-A0h]
  __int64 v182; // [rsp+70h] [rbp-98h]
  __int64 v183; // [rsp+78h] [rbp-90h]
  int v184; // [rsp+80h] [rbp-88h]
  int v185; // [rsp+84h] [rbp-84h]
  __int128 v186; // [rsp+88h] [rbp-80h] BYREF
  __int64 v187; // [rsp+98h] [rbp-70h]
  __int64 v188; // [rsp+A0h] [rbp-68h]
  char *v189; // [rsp+A8h] [rbp-60h]
  __int64 *v190; // [rsp+B0h] [rbp-58h]
  char *v191; // [rsp+B8h] [rbp-50h]
  char *v192; // [rsp+C0h] [rbp-48h]
  char *v193; // [rsp+C8h] [rbp-40h]
  __int64 *v194; // [rsp+D0h] [rbp-38h]
  char *v195; // [rsp+D8h] [rbp-30h]
  char *v196; // [rsp+E0h] [rbp-28h]
  __int64 v197; // [rsp+E8h] [rbp-20h]
  __int64 v198; // [rsp+F0h] [rbp-18h]
  __int64 v199; // [rsp+F8h] [rbp-10h]
  __int64 v200; // [rsp+100h] [rbp-8h]
  _BYTE v201[80]; // [rsp+108h] [rbp+0h] BYREF
  int v204; // [rsp+178h] [rbp+70h]
  unsigned int v205; // [rsp+180h] [rbp+78h] BYREF

  v3 = *a1;
  BugCheckParameter2 = a2;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR))(*a1 + 448))(a2);
  if ( !v5 )
    return 3221225595LL;
  v179 = (*(__int64 (__fastcall **)(ULONG_PTR))(v3 + 616))(a2);
  v171 = *(unsigned __int16 *)(v5 + 6);
  if ( *(_WORD *)(v5 + 6) && *(_DWORD *)(v5 + 56) >= 0x1000u && (a2 & 0xFFF) == 0 )
  {
    v6 = -1073741275;
    v7 = *(_QWORD *)(v3 + 1088);
    v8 = *(_QWORD *)(v3 + 1064) + 16LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*(void (__fastcall **)(__int64))(v3 + 320))(v7);
    v10 = 24;
    v11 = v8 + 24LL * **(unsigned int **)(v3 + 1064);
    while ( *(_QWORD *)(v8 + 8) != a2 )
    {
      v8 += 24LL;
      if ( v8 >= v11 )
        goto LABEL_10;
    }
    v12 = *(_QWORD *)(v8 + 16);
    v6 = 0;
    v186 = *(_OWORD *)v8;
    v187 = v12;
LABEL_10:
    (*(void (__fastcall **)(_QWORD))(v3 + 384))(*(_QWORD *)(v3 + 1088));
    __writecr8(CurrentIrql);
    if ( v6 >= 0 )
    {
      v16 = (unsigned int)v187;
    }
    else
    {
      v13 = 24;
      v14 = &v186;
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
      LODWORD(v187) = *(_DWORD *)(v5 + 80);
      *((_QWORD *)&v186 + 1) = a2;
      *(_QWORD *)&v186 = 1LL;
    }
    v17 = *(unsigned int *)(v3 + 1356);
    v18 = *(_DWORD *)(v3 + 1580);
    v181 = ((a2 & 0xFFF) + 4095 + v16) >> 12;
    v19 = 20 * v181;
    v20 = 20 * v181 + v17 + 48;
    v21 = v3 & -(__int64)((*(_DWORD *)(v3 + 1672) & 0x20000000) != 0);
    if ( v18 <= 1 )
    {
      if ( !v21 )
      {
        v23 = ((__int64 (__fastcall *)(__int64, unsigned int))sub_140285AAC)(v3, v20);
LABEL_25:
        v188 = v23;
        v24 = v23;
        if ( !v23 )
          return 3221225626LL;
        v25 = *(_DWORD *)(v3 + 1672);
        if ( (v25 & 4) == 0 )
        {
          v26 = *(_DWORD *)(v3 + 1356);
          v27 = *(_QWORD *)(v3 + 1328);
          v28 = (v25 & 0x20000000) != 0 ? *(_DWORD *)(v3 + 1580) : 0;
          if ( v26 >= 8 )
          {
            v29 = (unsigned __int64)v26 >> 3;
            do
            {
              *(_QWORD *)v3 = 0LL;
              v26 -= 8;
              v3 += 8LL;
              --v29;
            }
            while ( v29 );
          }
          for ( ; v26; --v26 )
            *(_BYTE *)v3++ = 0;
          v30 = *(_DWORD *)(v24 + 1580);
          *(_DWORD *)(v24 + 1580) = v28;
          if ( v28 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v24 + 792))(v27);
          }
          else if ( v28 == 1 )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v24 + 496))(v27 - 8, *(_QWORD *)(v27 - 8));
          }
          else
          {
            (*(void (__fastcall **)(__int64))(v24 + 240))(v27);
          }
          *(_DWORD *)(v24 + 1580) = v30;
        }
        *(_DWORD *)(v24 + 1672) &= ~4u;
        v31 = 48;
        ++*(_DWORD *)(v24 + 1396);
        v32 = v24 + v17;
        v198 = v32;
        v33 = (_QWORD *)v32;
        v34 = 6LL;
        do
        {
          *v33 = 0LL;
          v31 -= 8;
          ++v33;
          --v34;
        }
        while ( v34 );
        for ( ; v31; --v31 )
        {
          *(_BYTE *)v33 = 0;
          v33 = (_QWORD *)((char *)v33 + 1);
        }
        *(_DWORD *)v32 = (v179 != 0) + 33;
        *(_QWORD *)(v32 + 8) = 0LL;
        *(_DWORD *)(v32 + 16) = 0;
        v35 = *(_QWORD *)(v24 + 1408);
        for ( i = v35; ; LODWORD(v35) = i ^ v35 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v37 = (_QWORD *)(v32 + 24);
        v200 = v32;
        *(_DWORD *)(v32 + 20) = v35 & 0x7FFFFFFF;
        v38 = 3LL;
        v39 = (char *)&v186;
        *a1 = v24;
        do
        {
          v10 -= 8;
          *v37 = *(_QWORD *)v39;
          v39 += 8;
          ++v37;
          --v38;
        }
        while ( v38 );
        for ( ; v10; --v10 )
        {
          v40 = *v39++;
          *(_BYTE *)v37 = v40;
          v37 = (_QWORD *)((char *)v37 + 1);
        }
        LOBYTE(v37) = 1;
        v41 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))(v24 + 440))(
                BugCheckParameter2,
                v37,
                12LL,
                &v205);
        v180 = v41;
        v42 = 0;
        v205 &= -(v41 != 0);
        v204 = a3 & 1;
        if ( !v204 )
        {
          v41 = 0LL;
          v205 = 0;
          v180 = 0LL;
        }
        v183 = v32 + 48;
        v174 = v32 + 48;
        v182 = v32 + 48 + 20LL * (unsigned int)v181;
        v43 = (_QWORD *)(v32 + 48);
        if ( v19 >= 8 )
        {
          v44 = (unsigned __int64)v19 >> 3;
          do
          {
            *v43 = -1LL;
            v19 -= 8;
            ++v43;
            --v44;
          }
          while ( v44 );
        }
        for ( ; v19; --v19 )
        {
          *(_BYTE *)v43 = -1;
          v43 = (_QWORD *)((char *)v43 + 1);
        }
        v45 = 0;
        v46 = (_DWORD *)(v5 + *(unsigned __int16 *)(v5 + 20) + 24LL);
        v68 = (v46[9] & 0x2000000) == 0;
        v181 = (unsigned __int64)&v46[10 * v171];
        if ( !v68
          || *v46 == 1414090313 && v46[1] == 1195525195
          || *v46 == 1162297680 && ((v47 = *((_WORD *)v46 + 2), v47 == 30583) || v47 == 29303 || v47 == 30839) )
        {
LABEL_82:
          v45 = 1;
        }
        else
        {
          v48 = *(char **)(v24 + 1592);
          v49 = 7;
          v194 = *(__int64 **)(v24 + 1600);
          v50 = (char *)v46 - v48;
          v195 = *(char **)(v24 + 1608);
          v196 = *(char **)(v24 + 1616);
          v193 = v48;
          while ( 1 )
          {
            v51 = (unsigned __int8)v48[v50];
            v52 = (unsigned __int8)*v48++;
            if ( v51 != v52 )
              break;
            if ( !--v49 )
            {
LABEL_81:
              v41 = v180;
              goto LABEL_82;
            }
          }
          v53 = v194;
          v54 = 8;
          v55 = (__int64 *)v46;
          while ( 1 )
          {
            v56 = *v55++;
            v57 = *v53++;
            if ( v56 != v57 )
              break;
            v54 -= 8;
            if ( v54 < 8 )
            {
              if ( !v54 )
                goto LABEL_81;
              while ( 1 )
              {
                v58 = *(unsigned __int8 *)v55;
                v55 = (__int64 *)((char *)v55 + 1);
                v59 = *(unsigned __int8 *)v53;
                v53 = (__int64 *)((char *)v53 + 1);
                if ( v58 != v59 )
                  goto LABEL_74;
                if ( !--v54 )
                  goto LABEL_81;
              }
            }
          }
LABEL_74:
          v60 = v195;
          v61 = 4;
          while ( 1 )
          {
            v62 = (unsigned __int8)v60[(char *)v46 - v195];
            v63 = (unsigned __int8)*v60++;
            if ( v62 != v63 )
              break;
            if ( !--v61 )
              goto LABEL_81;
          }
          v64 = v196;
          v65 = 6;
          while ( 1 )
          {
            v66 = (unsigned __int8)v64[(char *)v46 - v196];
            v67 = (unsigned __int8)*v64++;
            if ( v66 != v67 )
              break;
            if ( !--v65 )
              goto LABEL_81;
          }
          v41 = v180;
        }
        if ( (int)v46[9] < 0 )
          v45 = 1;
        v68 = v45 == 0;
        if ( v45 )
        {
          if ( *v46 == 1414090313 && v46[1] == 1195525195 && (*(_DWORD *)(v24 + 1672) & 0x10000000) != 0 )
            v45 = 0;
          v68 = v45 == 0;
        }
        v69 = v46[2];
        LOBYTE(v42) = v68;
        v172 = v46[3];
        if ( v46[4] > v69 )
          v69 = v46[4];
        v70 = (v69 + v46[3] + 4095) & 0xFFFFF000;
        v71 = MmImageSectionPagable((__int64)v46);
        v72 = BugCheckParameter2;
        v73 = v174;
        v74 = v182;
        v75 = v71 != 0;
        v176 = BugCheckParameter2;
        v76 = BugCheckParameter2;
        v77 = 0;
        if ( v174 != v182 )
        {
          v78 = v46 + 1;
          while ( 1 )
          {
            if ( v77 < v172 )
            {
LABEL_137:
              v106 = &v180;
              v107 = 0;
              v108 = &v205;
              while ( 1 )
              {
                v109 = *v106;
                if ( *v108 )
                {
                  if ( v176 >= v109 && v176 <= v109 + *v108 - 1LL )
                    break;
                }
                ++v107;
                ++v108;
                ++v106;
                if ( v107 )
                {
                  if ( v77 >= v172 && v75 )
                  {
                    v110 = v174;
                  }
                  else
                  {
                    v110 = v174;
                    *(_DWORD *)(v174 + 16) &= ~0x80000000;
                  }
                  *(_BYTE *)(v110 + 15) &= ~0x80u;
                  break;
                }
              }
              v73 = v174;
              v76 = v176;
              v74 = v182;
              goto LABEL_150;
            }
            if ( v77 >= v70 )
            {
              if ( v78 - 1 == (_DWORD *)v181 )
              {
                if ( (*(_DWORD *)(v24 + 1672) & 0x200000) == 0 )
                {
                  v185 = 5072;
                  KeBugCheckEx(__ROL4__(5072, 188), 0xAuLL, BugCheckParameter2, 5uLL, 0LL);
                }
                if ( !*(_DWORD *)(v24 + 1536) )
                {
                  *(_QWORD *)(v24 + 1552) = 0LL;
                  *(_QWORD *)(v24 + 1560) = 271LL;
                  *(_QWORD *)(v24 + 1544) = v24 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v24 + 1568) = BugCheckParameter2;
                  *(_DWORD *)(v24 + 1536) = 1;
                }
                return 3221225595LL;
              }
              if ( v78[12] < v77 )
              {
                v76 = v176;
                goto LABEL_150;
              }
              v78 += 10;
              v79 = 0;
              if ( (v78[8] & 0x2000000) != 0
                || (v80 = (char *)(v78 - 1), v81 = *(v78 - 1), v81 == 1414090313) && *v78 == 1195525195
                || v81 == 1162297680 && ((v82 = *(_WORD *)v78, *(_WORD *)v78 == 30583) || v82 == 29303 || v82 == 30839) )
              {
                v79 = 1;
              }
              else
              {
                v83 = *(char **)(v24 + 1592);
                v84 = 7;
                v190 = *(__int64 **)(v24 + 1600);
                v85 = v80 - v83;
                v191 = *(char **)(v24 + 1608);
                v192 = *(char **)(v24 + 1616);
                v189 = v83;
                while ( 1 )
                {
                  v86 = (unsigned __int8)v83[v85];
                  v87 = (unsigned __int8)*v83++;
                  if ( v86 != v87 )
                    break;
                  if ( !--v84 )
                  {
LABEL_125:
                    v79 = 1;
                    goto LABEL_126;
                  }
                }
                v88 = v190;
                v89 = 8;
                v90 = (__int64 *)(v78 - 1);
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
                      goto LABEL_125;
                    while ( 1 )
                    {
                      v93 = *(unsigned __int8 *)v90;
                      v90 = (__int64 *)((char *)v90 + 1);
                      v94 = *(unsigned __int8 *)v88;
                      v88 = (__int64 *)((char *)v88 + 1);
                      if ( v93 != v94 )
                        goto LABEL_118;
                      if ( !--v89 )
                        goto LABEL_125;
                    }
                  }
                }
LABEL_118:
                v95 = v191;
                v96 = 4;
                while ( 1 )
                {
                  v97 = (unsigned __int8)v95[v80 - v191];
                  v98 = (unsigned __int8)*v95++;
                  if ( v97 != v98 )
                    break;
                  if ( !--v96 )
                    goto LABEL_125;
                }
                v99 = v192;
                v100 = 6;
                v101 = v80 - v192;
                while ( 1 )
                {
                  v102 = (unsigned __int8)v99[v101];
                  v103 = (unsigned __int8)*v99++;
                  if ( v102 != v103 )
                    break;
                  if ( !--v100 )
                    goto LABEL_125;
                }
              }
LABEL_126:
              if ( (int)v78[8] < 0 )
                v79 = 1;
              if ( v79 && *(v78 - 1) == 1414090313 && *v78 == 1195525195 && (*(_DWORD *)(v24 + 1672) & 0x10000000) != 0 )
                v79 = 0;
              v104 = v78[1];
              v42 = v79 == 0;
              if ( v78[3] > v104 )
                v104 = v78[3];
              v70 = (v104 + 4095 + v78[2]) & 0xFFFFF000;
              v105 = MmImageSectionPagable((__int64)(v78 - 1));
              v73 = v174;
              v74 = v182;
              v68 = v105 == 0;
              v76 = v176;
              v75 = !v68;
            }
            if ( v42 )
              goto LABEL_137;
LABEL_150:
            v76 += 4096LL;
            v73 += 20LL;
            v77 += 4096;
            v176 = v76;
            v174 = v73;
            if ( v73 == v74 )
            {
              v41 = v180;
              v72 = BugCheckParameter2;
              break;
            }
          }
        }
        v111 = v183;
        if ( v183 != v74 )
        {
          do
          {
            LODWORD(v112) = 0;
            if ( v111 != v74 )
            {
              v113 = v111;
              do
              {
                if ( *(char *)(v113 + 15) < 0 )
                  break;
                v112 = (unsigned int)(v112 + 1);
                v113 = v111 + 20 * v112;
              }
              while ( v113 != v74 );
              v175 = v112;
              if ( (_DWORD)v112 )
              {
                v114 = *(_QWORD *)(v24 + 1856);
                v115 = v112;
                v173 = v112;
                v116 = v111;
                v181 = v114;
                v177 = v72;
                do
                {
                  v117 = 8LL;
                  v118 = 0;
                  if ( v115 < 8 )
                    v117 = v115;
                  v119 = (_QWORD *)v114;
                  v120 = v201;
                  do
                  {
                    v121 = (_QWORD *)(v177 + (v118 << 12));
                    v119[1] = 4096LL;
                    *v119 = v121;
                    v122 = (const char *)v121;
                    if ( v121 < v121 + 512 )
                    {
                      do
                      {
                        _mm_prefetch(v122, 0);
                        v122 += 64;
                      }
                      while ( v122 < (const char *)v121 + 4096 );
                    }
                    v123 = *(_DWORD *)(v24 + 1404);
                    v124 = 4096;
                    v125 = *(_QWORD *)(v24 + 1408);
                    v126 = 512LL;
                    do
                    {
                      v124 -= 8;
                      v125 = __ROL8__(*v121++ ^ v125, v123);
                      --v126;
                    }
                    while ( v126 );
                    for ( ; v124; --v124 )
                    {
                      v127 = *(unsigned __int8 *)v121;
                      v121 = (_QWORD *)((char *)v121 + 1);
                      v125 = __ROL8__(v127 ^ v125, v123);
                    }
                    *(_DWORD *)(v24 + 1424) += 4096;
                    for ( j = v125; ; LODWORD(v125) = j ^ v125 )
                    {
                      j >>= 31;
                      if ( !j )
                        break;
                    }
                    ++v118;
                    *v120 = v125 & 0x7FFFFFFF;
                    v119 += 6;
                    ++v120;
                  }
                  while ( v118 < (unsigned int)v117 );
                  v129 = v181;
                  sub_14017D360(v24, v181, v117);
                  v130 = (char *)(v129 + 16);
                  v131 = (_QWORD *)v116;
                  v132 = (unsigned int)v117;
                  v133 = v201;
                  v134 = (_DWORD *)(v116 + 16);
                  do
                  {
                    v135 = 16;
                    v136 = v130;
                    v137 = v131;
                    v138 = 2LL;
                    do
                    {
                      v135 -= 8;
                      *v137 = *(_QWORD *)v136;
                      v136 += 8;
                      ++v137;
                      --v138;
                    }
                    while ( v138 );
                    for ( ; v135; --v135 )
                    {
                      v139 = *v136++;
                      *(_BYTE *)v137 = v139;
                      v137 = (_QWORD *)((char *)v137 + 1);
                    }
                    v130 += 48;
                    v131 = (_QWORD *)((char *)v131 + 20);
                    v140 = (*v134 ^ *v133++) & 0x7FFFFFFF;
                    *v134 ^= v140;
                    v134 += 5;
                    --v132;
                  }
                  while ( v132 );
                  v24 = v188;
                  v114 = v181;
                  v116 += 20 * v117;
                  v177 += (unsigned int)((_DWORD)v117 << 12);
                  v115 = v173 - v117;
                  *(_DWORD *)(v188 + 1424) += (_DWORD)v117 << 15;
                  v173 = v115;
                }
                while ( v115 );
                LODWORD(v112) = v175;
                v111 = v183;
                v74 = v182;
              }
            }
            for ( k = 5LL * (unsigned int)v112; ; k = 5 * v112 )
            {
              v142 = v111 + 4 * k;
              if ( v142 == v74 || *(char *)(v142 + 15) >= 0 )
                break;
              v112 = (unsigned int)(v112 + 1);
            }
            v72 = (unsigned int)((_DWORD)v112 << 12) + BugCheckParameter2;
            BugCheckParameter2 = v72;
            v111 += 20LL * (unsigned int)v112;
            v183 = v111;
          }
          while ( v111 != v74 );
          v41 = v180;
        }
        if ( !v204 )
          return 0LL;
        v143 = v205;
        if ( !v205 )
          return 0LL;
        v144 = *(_DWORD *)(v24 + 1672);
        v145 = *(unsigned int *)(v24 + 1356);
        v146 = *(_DWORD *)(v24 + 1580);
        v197 = 0LL;
        v147 = -(v144 & 0x20000000);
        v148 = v145 + 48;
        v149 = v24 & -(__int64)(v147 != 0);
        if ( v146 <= 1 )
        {
          if ( !v149 )
          {
            v151 = ((__int64 (__fastcall *)(__int64, unsigned int))sub_140285AAC)(v24, v148);
LABEL_199:
            v152 = v151;
            if ( v151 )
            {
              v153 = *(_DWORD *)(v24 + 1672);
              if ( (v153 & 4) == 0 )
              {
                v154 = *(_DWORD *)(v24 + 1356);
                v155 = *(_QWORD *)(v24 + 1328);
                v156 = (v153 & 0x20000000) != 0 ? *(_DWORD *)(v24 + 1580) : 0;
                if ( v154 >= 8 )
                {
                  v157 = (unsigned __int64)v154 >> 3;
                  do
                  {
                    *(_QWORD *)v24 = 0LL;
                    v154 -= 8;
                    v24 += 8LL;
                    --v157;
                  }
                  while ( v157 );
                }
                for ( ; v154; --v154 )
                  *(_BYTE *)v24++ = 0;
                v158 = *(_DWORD *)(v152 + 1580);
                *(_DWORD *)(v152 + 1580) = v156;
                if ( v156 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v152 + 792))(v155);
                }
                else if ( v156 == 1 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v152 + 496))(v155 - 8, *(_QWORD *)(v155 - 8));
                }
                else
                {
                  (*(void (__fastcall **)(__int64))(v152 + 240))(v155);
                }
                *(_DWORD *)(v152 + 1580) = v158;
              }
              *(_DWORD *)(v152 + 1672) &= ~4u;
              v159 = v152 + v145;
              ++*(_DWORD *)(v152 + 1396);
              v160 = 48;
              v199 = v152 + v145;
              v161 = (_QWORD *)(v152 + v145);
              v162 = 6LL;
              do
              {
                *v161 = 0LL;
                v160 -= 8;
                ++v161;
                --v162;
              }
              while ( v162 );
              for ( ; v160; --v160 )
              {
                *(_BYTE *)v161 = 0;
                v161 = (_QWORD *)((char *)v161 + 1);
              }
              *(_DWORD *)v159 = (v179 != 0) + 13;
              *(_QWORD *)(v159 + 8) = v41;
              if ( (v179 != 0) == 19 && (_DWORD)v143 )
                sub_14017D2FC(v152, v41, v143, v159 + 24);
              *(_DWORD *)(v159 + 16) = v143;
              v163 = (_QWORD *)v41;
              v164 = (const char *)v41;
              if ( v41 < v41 + v143 )
              {
                do
                {
                  _mm_prefetch(v164, 0);
                  v164 += 64;
                }
                while ( (unsigned __int64)v164 < v41 + v143 );
              }
              v165 = *(_QWORD *)(v152 + 1408);
              v166 = v143;
              if ( (unsigned int)v143 >= 8 )
              {
                v167 = v143 >> 3;
                do
                {
                  v166 -= 8;
                  v165 = __ROL8__(*v163++ ^ v165, *(_DWORD *)(v152 + 1404));
                  --v167;
                }
                while ( v167 );
              }
              for ( ; v166; --v166 )
              {
                v168 = *(unsigned __int8 *)v163;
                v163 = (_QWORD *)((char *)v163 + 1);
                v165 = __ROL8__(v168 ^ v165, *(_DWORD *)(v152 + 1404));
              }
              *(_DWORD *)(v152 + 1424) += v143;
              for ( m = v165; ; LODWORD(v165) = m ^ v165 )
              {
                m >>= 31;
                if ( !m )
                  break;
              }
              *(_DWORD *)(v159 + 20) = v165 & 0x7FFFFFFF;
              *(_DWORD *)(v152 + 1424) += v143;
              if ( (*(_DWORD *)(v152 + 1672) & 0x40000000) != 0 )
              {
                if ( (_DWORD)v143 )
                  sub_14017D2FC(v152, v41, v143, v159 + 28);
              }
              *(_DWORD *)(v159 + 24) = 1;
              *a1 = v152;
              return 0LL;
            }
            return 3221225626LL;
          }
          v150 = *(unsigned int *)((v24 & -(__int64)(v147 != 0)) + 0x55C);
        }
        else
        {
          if ( !v149 )
          {
            v151 = sub_140285DF0(v24, v148);
            goto LABEL_199;
          }
          v150 = *(unsigned int *)((v24 & -(__int64)(v147 != 0)) + 0x560);
        }
        v151 = ((__int64 (__fastcall *)(__int64, unsigned int))(v149 + v150))(v24, v148);
        goto LABEL_199;
      }
      v22 = *(unsigned int *)((v3 & -(__int64)((*(_DWORD *)(v3 + 1672) & 0x20000000) != 0)) + 0x55C);
    }
    else
    {
      if ( !v21 )
      {
        v23 = sub_140285DF0(v3, v20);
        goto LABEL_25;
      }
      v22 = *(unsigned int *)((v3 & -(__int64)((*(_DWORD *)(v3 + 1672) & 0x20000000) != 0)) + 0x560);
    }
    v23 = ((__int64 (__fastcall *)(__int64, unsigned int))(v21 + v22))(v3, v20);
    goto LABEL_25;
  }
  if ( (*(_DWORD *)(v3 + 1672) & 0x200000) == 0 )
  {
    v184 = 5072;
    KeBugCheckEx(__ROL4__(5072, 188), 0xAuLL, a2, 4uLL, 0LL);
  }
  if ( !*(_DWORD *)(v3 + 1536) )
  {
    *(_QWORD *)(v3 + 1552) = 0LL;
    *(_QWORD *)(v3 + 1560) = 271LL;
    *(_QWORD *)(v3 + 1544) = v3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v3 + 1568) = a2;
    *(_DWORD *)(v3 + 1536) = 1;
  }
  return 3221225595LL;
}
