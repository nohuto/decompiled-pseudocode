/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C013BC18
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C013BB3C (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C013C2BC (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     strcmp_0 @ 0x1C015D132 (strcmp_0.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?ValidateKbdNLSTable@@YAHPEBUtagKbdNlsLayer@@@Z @ 0x1C0228FA4 (-ValidateKbdNLSTable@@YAHPEBUtagKbdNlsLayer@@@Z.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  int v7; // r15d
  struct tagKBDFILE *v9; // r14
  HANDLE CurrentProcessId; // rax
  BOOL v11; // esi
  unsigned int v12; // edx
  unsigned int v13; // r8d
  void *v14; // r8
  char *v15; // rcx
  char *v16; // r15
  __int16 v17; // ax
  __int64 v18; // r12
  unsigned __int16 v19; // dx
  __int64 v20; // rax
  unsigned __int64 v21; // r14
  int v22; // esi
  unsigned __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rbx
  unsigned int v27; // ebp
  char *v28; // rax
  unsigned __int64 *v29; // rax
  unsigned __int64 *v30; // rsi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // rax
  BOOL v34; // r11d
  char *v35; // r10
  unsigned __int64 v36; // rax
  unsigned __int64 *v37; // rdx
  unsigned __int64 *v38; // rcx
  unsigned __int64 *v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 *v42; // rax
  unsigned __int64 *v43; // rdx
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // r9
  unsigned __int64 v52; // r8
  __int64 v53; // rcx
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // rcx
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 *v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  unsigned __int64 v74; // rax
  unsigned __int64 *v75; // rcx
  unsigned __int64 v76; // rax
  unsigned __int64 *v77; // rcx
  unsigned __int64 *v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 *v80; // r8
  unsigned __int64 *v81; // rax
  unsigned __int64 *i; // rdx
  unsigned int v83; // eax
  unsigned __int64 v84; // r9
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // r8
  bool v88; // cc
  unsigned __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int64 v91; // rax
  __int64 v92; // rcx
  unsigned __int64 v93; // rcx
  __int64 v94; // rax
  unsigned __int64 v95; // rbx
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // r11
  unsigned __int64 v98; // r10
  unsigned __int64 *j; // r8
  unsigned __int8 v100; // al
  int v101; // eax
  unsigned __int64 *v102; // r9
  unsigned __int64 *v103; // rax
  _BYTE *v104; // r8
  __int64 v105; // rax
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rdx
  __int64 v108; // rax
  unsigned __int64 v109; // r8
  unsigned __int64 v110; // r9
  unsigned __int64 *v111; // rdx
  unsigned __int64 v112; // rax
  _DWORD *v113; // rdx
  __int64 v114; // rax
  unsigned __int64 v115; // r8
  unsigned __int64 v116; // r11
  unsigned __int64 v117; // rdx
  unsigned __int64 v118; // r10
  unsigned __int64 v119; // r9
  unsigned __int64 *v120; // rdx
  unsigned __int64 k; // rax
  _WORD *v122; // rdx
  __int64 v123; // rax
  unsigned __int64 v124; // r8
  unsigned __int64 v125; // rdx
  __int64 v126; // rax
  unsigned __int64 v127; // r8
  unsigned __int64 v128; // r10
  unsigned __int64 v129; // rdx
  unsigned __int64 v130; // r11
  unsigned __int64 v131; // r9
  unsigned __int64 *v132; // rdx
  unsigned __int64 m; // rax
  _WORD *v134; // rdx
  __int64 v135; // rax
  unsigned __int64 v136; // r8
  unsigned __int64 v137; // rdx
  __int64 v138; // rax
  unsigned __int64 v139; // r8
  unsigned __int64 v140; // rbx
  unsigned __int64 *v141; // rdx
  unsigned __int64 v142; // r11
  unsigned __int64 v143; // r9
  unsigned __int64 *v144; // r8
  unsigned __int64 n; // rax
  _WORD *v146; // r8
  __int64 v147; // rax
  unsigned __int64 v148; // r10
  _QWORD *v149; // rdx
  __int64 v150; // rax
  unsigned __int64 v151; // r8
  unsigned __int8 v152; // al
  __int64 v153; // rdx
  unsigned __int64 v154; // r8
  unsigned __int64 v155; // r9
  unsigned __int64 v156; // r8
  unsigned __int64 v157; // rdx
  unsigned __int64 v158; // rax
  __int64 v159; // rax
  unsigned __int64 v160; // r9
  unsigned __int64 v161; // r8
  unsigned __int64 v162; // rdx
  unsigned __int64 v163; // rax
  __int64 v164; // rax
  unsigned __int64 v165; // r9
  unsigned __int64 *v166; // rdx
  int v167; // r8d
  __int16 *v168; // rcx
  unsigned __int64 v169; // r9
  __int16 v170; // ax
  __int64 v171; // r9
  unsigned __int64 v172; // r10
  unsigned __int64 v173; // r8
  _BYTE *v174; // rdx
  __int64 v175; // rax
  unsigned __int64 v176; // r9
  __int64 v177; // rcx
  __int64 v178; // rdx
  unsigned int v179[2]; // [rsp+38h] [rbp-60h] BYREF
  BOOL v180; // [rsp+40h] [rbp-58h]
  void *v181; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v182; // [rsp+50h] [rbp-48h]

  v179[0] = 0;
  v5 = 0LL;
  v181 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  CurrentProcessId = PsGetCurrentProcessId();
  *((_QWORD *)v9 + 6) = 0LL;
  v11 = CurrentProcessId == (HANDLE)gpidLogon;
  v180 = v11;
  if ( (int)LoadFileContent(a2, v12, v13, &v181, v179) >= 0 )
  {
    v14 = v181;
    v15 = (char *)v181 + *((unsigned int *)v181 + 15);
    if ( v15 >= v181 && (v11 || v15 + 263 >= v15) )
    {
      v16 = (char *)v181 + v179[0];
      if ( v15 + 264 < v16 )
      {
        v17 = *((_WORD *)v15 + 2);
        if ( v17 == 512 || v17 == -31132 || v17 == -21916 )
          v18 = *((_QWORD *)v15 + 6);
        else
          v18 = *((unsigned int *)v15 + 13);
        v19 = *((_WORD *)v15 + 3);
        v20 = v180;
        v21 = (unsigned __int64)&v15[*((unsigned __int16 *)v15 + 10) + 24];
        v22 = v19;
        v182 = v21;
        *(_QWORD *)v179 = v180;
        if ( v19 )
        {
          v23 = v21 + 40;
          while ( v21 >= (unsigned __int64)v14 && (v20 || v23 - 1 >= v21) && v23 < (unsigned __int64)v16 )
          {
            v24 = strcmp_0((const char *)v21, ".data");
            v14 = v181;
            if ( v24 )
            {
              v20 = *(_QWORD *)v179;
              v21 += 40LL;
              v23 += 40LL;
              v182 = v21;
              if ( --v22 )
                continue;
            }
            if ( !v22 )
              break;
            v25 = *(_DWORD *)(v21 + 12);
            if ( a3 < v25 )
              break;
            v26 = *(unsigned int *)(v21 + 8);
            v27 = a3 - v25;
            if ( v27 >= (unsigned int)v26 )
              break;
            if ( (unsigned int)v26 >= 0x40000 )
              break;
            v28 = (char *)v181 + *(unsigned int *)(v21 + 20);
            if ( v28 < v181 || &v28[v26] < v28 || &v28[v26] >= v16 )
              break;
            v29 = (unsigned __int64 *)Win32AllocPool((unsigned int)v26, 1953198933LL);
            v30 = v29;
            if ( v29 )
            {
              v31 = v182;
              *((_QWORD *)a1 + 3) = v29;
              memmove(v29, (char *)v181 + *(unsigned int *)(v31 + 20), (unsigned int)v26);
              *((_DWORD *)a1 + 10) = v26;
              v32 = (unsigned __int64)v30 + (unsigned int)v26;
              v33 = *(unsigned int *)(v31 + 12);
              v5 = (unsigned __int64)v30 + v27;
              if ( (unsigned __int64)v30 >= v33 )
              {
                v34 = v180;
                v35 = (char *)v30 - v33 - v18;
                if ( v180 || v5 >= (unsigned __int64)v30 && v5 <= v32 - 104 )
                {
                  if ( !*(_QWORD *)v5
                    || (v36 = (unsigned __int64)&v35[*(_QWORD *)v5], *(_QWORD *)v5 = v36, v36 >= (unsigned __int64)v30)
                    && v36 + 16 >= v36
                    && v36 + 16 <= v32 )
                  {
                    if ( v34 || *(_QWORD *)v5 )
                    {
                      v37 = *(unsigned __int64 **)v5;
                      v38 = **(unsigned __int64 ***)v5;
                      if ( !v38
                        || (*v37 = (unsigned __int64)&v35[(_QWORD)v38],
                            v37 = *(unsigned __int64 **)v5,
                            v38 = **(unsigned __int64 ***)v5,
                            v38 >= v30)
                        && (unsigned __int64 *)((char *)v38 + 2) >= v38
                        && (unsigned __int64)v38 + 2 <= v32 )
                      {
                        if ( (v34 || v37 >= v30 && (unsigned __int64)v37 <= v32 - 16) && v38 >= v30 )
                        {
                          v39 = (unsigned __int64 *)((char *)v38 + 2);
                          while ( v39 >= v38 && (unsigned __int64)v39 <= v32 )
                          {
                            if ( !*(_BYTE *)v38 )
                            {
                              v40 = *(_QWORD *)(v5 + 8);
                              if ( v40 )
                              {
                                v41 = (unsigned __int64)&v35[v40];
                                *(_QWORD *)(v5 + 8) = v41;
                                if ( v41 < (unsigned __int64)v30 || v41 + 16 < v41 || v41 + 16 > v32 )
                                  break;
                              }
                              v42 = *(unsigned __int64 **)(v5 + 8);
                              if ( v42 )
                              {
                                if ( v42 >= v30 )
                                {
                                  v43 = v42 + 2;
                                  do
                                  {
                                    if ( v43 < v42 || (unsigned __int64)v43 > v32 )
                                      break;
                                    if ( !*v42 )
                                      goto LABEL_57;
                                    v44 = (unsigned __int64)&v35[*v42];
                                    *v42 = v44;
                                    if ( v44 < (unsigned __int64)v30 )
                                      break;
                                    if ( v44 + 4 < v44 )
                                      break;
                                    if ( v44 + 4 > v32 )
                                      break;
                                    v42 += 2;
                                    v43 += 2;
                                  }
                                  while ( v42 >= v30 );
                                }
                                break;
                              }
LABEL_57:
                              v45 = *(_QWORD *)(v5 + 16);
                              if ( v45 )
                              {
                                v74 = (unsigned __int64)&v35[v45];
                                *(_QWORD *)(v5 + 16) = v74;
                                if ( v74 < (unsigned __int64)v30 || v74 + 8 < v74 || v74 + 8 > v32 )
                                  break;
                              }
                              v46 = *(unsigned __int64 **)(v5 + 16);
                              if ( v46 )
                              {
                                v75 = v46 + 1;
                                while ( v46 >= v30 && v75 >= v46 && (unsigned __int64)v75 <= v32 )
                                {
                                  if ( *(_DWORD *)v46 )
                                  {
                                    ++v46;
                                    if ( ++v75 != (unsigned __int64 *)8 )
                                      continue;
                                  }
                                  goto LABEL_59;
                                }
                                break;
                              }
LABEL_59:
                              if ( *(_WORD *)(v5 + 82) )
                              {
                                v47 = *(_QWORD *)(v5 + 88);
                                if ( v47 )
                                {
                                  v76 = (unsigned __int64)&v35[v47];
                                  *(_QWORD *)(v5 + 88) = v76;
                                  if ( v76 < (unsigned __int64)v30 || v76 + 6 < v76 || v76 + 6 > v32 )
                                    break;
                                }
                              }
                              v48 = *(_QWORD *)(v5 + 24);
                              if ( v48 )
                              {
                                v49 = (unsigned __int64)&v35[v48];
                                *(_QWORD *)(v5 + 24) = v49;
                                if ( v49 < (unsigned __int64)v30 || v49 + 16 < v49 || v49 + 16 > v32 )
                                  break;
                              }
                              v50 = *(_QWORD *)(v5 + 24);
                              if ( v50 )
                              {
                                if ( v50 >= (unsigned __int64)v30 )
                                {
                                  v51 = *(_QWORD *)v179;
                                  do
                                  {
                                    v52 = v50 + 16;
                                    if ( v50 + 16 < v50 || v52 > v32 )
                                      break;
                                    if ( !*(_BYTE *)v50 )
                                      goto LABEL_78;
                                    v53 = *(_QWORD *)(v50 + 8);
                                    if ( v53 )
                                    {
                                      v54 = (unsigned __int64)&v35[v53];
                                      *(_QWORD *)(v50 + 8) = v54;
                                      if ( v54 < (unsigned __int64)v30 || v54 + 2 < v54 || v54 + 2 > v32 )
                                        break;
                                    }
                                    if ( !v51 )
                                    {
                                      v77 = *(unsigned __int64 **)(v50 + 8);
                                      if ( v77 )
                                      {
                                        for ( ; v77 >= v30; v77 = (unsigned __int64 *)((char *)v77 + 2) )
                                        {
                                          if ( (unsigned __int64)v77 > v32 - 2 )
                                            break;
                                          if ( !*(_WORD *)v77 )
                                            goto LABEL_76;
                                        }
                                        *(_QWORD *)(v50 + 8) = 0LL;
                                      }
                                    }
LABEL_76:
                                    v50 += 16LL;
                                  }
                                  while ( v52 >= (unsigned __int64)v30 );
                                }
                                break;
                              }
                              v51 = *(_QWORD *)v179;
LABEL_78:
                              v55 = *(_QWORD *)(v5 + 32);
                              if ( v55 )
                              {
                                v56 = (unsigned __int64)&v35[v55];
                                *(_QWORD *)(v5 + 32) = v56;
                                if ( v56 < (unsigned __int64)v30 || v56 + 16 < v56 || v56 + 16 > v32 )
                                  break;
                              }
                              v57 = *(_QWORD *)(v5 + 32);
                              if ( v57 )
                              {
                                if ( v57 >= (unsigned __int64)v30 )
                                {
                                  do
                                  {
                                    v58 = v57 + 16;
                                    if ( v57 + 16 < v57 || v58 > v32 )
                                      break;
                                    if ( !*(_BYTE *)v57 )
                                      goto LABEL_94;
                                    v59 = *(_QWORD *)(v57 + 8);
                                    if ( v59 )
                                    {
                                      v60 = (unsigned __int64)&v35[v59];
                                      *(_QWORD *)(v57 + 8) = v60;
                                      if ( v60 < (unsigned __int64)v30 || v60 + 2 < v60 || v60 + 2 > v32 )
                                        break;
                                    }
                                    if ( !v51 )
                                    {
                                      v78 = *(unsigned __int64 **)(v57 + 8);
                                      if ( v78 )
                                      {
                                        for ( ; v78 >= v30; v78 = (unsigned __int64 *)((char *)v78 + 2) )
                                        {
                                          if ( (unsigned __int64)v78 > v32 - 2 )
                                            break;
                                          if ( !*(_WORD *)v78 )
                                            goto LABEL_92;
                                        }
                                        *(_QWORD *)(v57 + 8) = 0LL;
                                      }
                                    }
LABEL_92:
                                    v57 += 16LL;
                                  }
                                  while ( v58 >= (unsigned __int64)v30 );
                                }
                                break;
                              }
LABEL_94:
                              v61 = *(_QWORD *)(v5 + 40);
                              if ( v61 )
                              {
                                v79 = (unsigned __int64)&v35[v61];
                                *(_QWORD *)(v5 + 40) = v79;
                                if ( v79 < (unsigned __int64)v30 || v79 + 8 < v79 || v79 + 8 > v32 )
                                  break;
                              }
                              v62 = *(unsigned __int64 **)(v5 + 40);
                              if ( v62 )
                              {
                                if ( v62 < v30 )
                                  break;
                                v80 = v62 + 1;
LABEL_185:
                                if ( v80 < v62 || (unsigned __int64)v80 > v32 )
                                  break;
                                if ( *v62 )
                                {
                                  v81 = (unsigned __int64 *)&v35[*v62];
                                  *v62 = (unsigned __int64)v81;
                                  if ( v81 >= v30
                                    && (unsigned __int64 *)((char *)v81 + 2) >= v81
                                    && (unsigned __int64)v81 + 2 <= v32 )
                                  {
                                    for ( i = (unsigned __int64 *)((char *)v81 + 2);
                                          v81 >= v30 && i >= v81 && (unsigned __int64)i <= v32;
                                          i = (unsigned __int64 *)((char *)i + 2) )
                                    {
                                      if ( !*(_WORD *)v81 )
                                      {
                                        ++v62;
                                        ++v80;
                                        if ( v62 >= v30 )
                                          goto LABEL_185;
                                        goto LABEL_422;
                                      }
                                      v81 = (unsigned __int64 *)((char *)v81 + 2);
                                    }
                                  }
                                  break;
                                }
                              }
                              v63 = *(_QWORD *)(v5 + 48);
                              if ( !v63 )
                                break;
                              v64 = (unsigned __int64)&v35[v63];
                              *(_QWORD *)(v5 + 48) = &v35[v63];
                              if ( &v35[v63] < (char *)v30 )
                                break;
                              if ( v64 + 2 < v64 )
                                break;
                              if ( v64 + 2 > v32 )
                                break;
                              v65 = v64 + 2LL * *(unsigned __int8 *)(v5 + 56);
                              if ( v65 < (unsigned __int64)v30 )
                                break;
                              if ( v65 + 2 < v65 )
                                break;
                              if ( v65 + 2 > v32 )
                                break;
                              v66 = *(_QWORD *)(v5 + 64);
                              if ( v66 )
                              {
                                v67 = (unsigned __int64)&v35[v66];
                                *(_QWORD *)(v5 + 64) = v67;
                                if ( v67 < (unsigned __int64)v30 || v67 + 4 < v67 || v67 + 4 > v32 )
                                  break;
                              }
                              v68 = *(_QWORD *)(v5 + 64);
                              if ( v68 )
                              {
                                while ( !v51 || *(_WORD *)(v68 + 2) )
                                {
                                  if ( v68 < (unsigned __int64)v30 || v68 + 4 < v68 || v68 + 4 > v32 )
                                    goto LABEL_422;
                                  if ( !v51 && !*(_WORD *)(v68 + 2) )
                                    break;
                                  v68 += 4LL;
                                }
                              }
                              v69 = *(_QWORD *)(v5 + 72);
                              if ( v69 )
                              {
                                v70 = (unsigned __int64)&v35[v69];
                                *(_QWORD *)(v5 + 72) = v70;
                                if ( v70 < (unsigned __int64)v30 || v70 + 4 < v70 || v70 + 4 > v32 )
                                  break;
                              }
                              v71 = *(_QWORD *)(v5 + 72);
                              if ( v71 )
                              {
                                if ( v71 >= (unsigned __int64)v30 )
                                {
                                  v72 = v71 + 4;
                                  do
                                  {
                                    if ( v72 < v71 || v72 > v32 )
                                      break;
                                    if ( !*(_WORD *)(v72 - 2) )
                                      goto LABEL_127;
                                    v71 += 4LL;
                                    v72 += 4LL;
                                  }
                                  while ( v71 >= (unsigned __int64)v30 );
                                }
                                break;
                              }
LABEL_127:
                              if ( a4 )
                              {
                                v83 = *(_DWORD *)(v31 + 12);
                                if ( a4 < v83 )
                                  break;
                                v6 = (unsigned __int64)v30 + a4 - v83;
                                if ( v6 < (unsigned __int64)v30 )
                                  break;
                                v84 = v6 + 32;
                                if ( v6 + 32 < v6 )
                                  break;
                                if ( v84 > v32 )
                                  break;
                                v85 = *(_QWORD *)(v6 + 8);
                                if ( v85 )
                                {
                                  v86 = (unsigned __int64)&v35[v85];
                                  *(_QWORD *)(v6 + 8) = v86;
                                  if ( v86 < (unsigned __int64)v30 || v86 + 132 < v86 || v86 + 132 > v32 )
                                    break;
                                }
                                v87 = *(_QWORD *)(v6 + 8);
                                if ( v87 )
                                {
                                  if ( v34 )
                                  {
                                    v89 = v87 + 132LL * (unsigned int)(*(_DWORD *)(v6 + 4) - 1);
                                    if ( v89 < (unsigned __int64)v30 || v89 + 132 < v89 )
                                      break;
                                    v88 = v89 + 132 <= v32;
                                  }
                                  else
                                  {
                                    v88 = *(unsigned int *)(v6 + 4) <= (v32 - v87) / 0x84;
                                  }
                                  if ( !v88 )
                                    break;
                                }
                                v90 = *(_QWORD *)(v6 + 24);
                                if ( v90 )
                                {
                                  v91 = (unsigned __int64)&v35[v90];
                                  *(_QWORD *)(v6 + 24) = v91;
                                  if ( v91 < (unsigned __int64)v30 || v91 + 2 < v91 || v91 + 2 > v32 )
                                    break;
                                }
                                v92 = *(_QWORD *)(v6 + 24);
                                if ( v92 )
                                {
                                  v93 = v92 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                  if ( v93 < (unsigned __int64)v30 || v93 + 2 < v93 || v93 + 2 > v32 )
                                    break;
                                }
                                if ( !v34 )
                                {
                                  v94 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v94 )
                                  {
                                    if ( v87 < v84 && v87 + 132 * v94 > v6 )
                                      break;
                                  }
                                  if ( v6 - 104 < v5 && v84 > v5 )
                                    break;
                                }
                                if ( !(unsigned int)ValidateKbdNLSTable((const struct tagKbdNlsLayer *)v6) )
                                  break;
                                *((_QWORD *)a1 + 6) = v6;
                              }
                              if ( v34 )
                                goto LABEL_129;
                              v95 = *(_QWORD *)(v5 + 8);
                              if ( v95 )
                              {
                                v96 = *(_QWORD *)(v5 + 8);
                                if ( v95 < (unsigned __int64)v30 )
                                  break;
LABEL_234:
                                v97 = v96 + 16;
                                if ( v96 + 16 < v96 || v97 > v32 )
                                  break;
                                v98 = *(_QWORD *)v96;
                                if ( *(_QWORD *)v96 )
                                {
                                  for ( j = *(unsigned __int64 **)v96;
                                        j >= v30
                                     && (unsigned __int64 *)((char *)j + 4) >= j
                                     && (unsigned __int64)j + 4 <= v32;
                                        j = (unsigned __int64 *)((char *)j + *(unsigned __int8 *)(v96 + 9)) )
                                  {
                                    if ( !*(_BYTE *)j )
                                    {
                                      v104 = (char *)j + 4;
                                      if ( !v6
                                        || (v105 = *(unsigned int *)(v6 + 4), !(_DWORD)v105)
                                        || (v106 = *(_QWORD *)(v6 + 8), v106 >= (unsigned __int64)v104)
                                        || v106 + 132 * v105 <= v98 )
                                      {
                                        if ( v98 - 104 >= v5 || (unsigned __int64)v104 <= v5 )
                                        {
                                          v96 = v97;
                                          if ( v97 >= (unsigned __int64)v30 )
                                            goto LABEL_234;
                                        }
                                      }
                                      goto LABEL_422;
                                    }
                                    v100 = *(_BYTE *)(v96 + 8);
                                    if ( v100 > 1u )
                                    {
                                      v101 = v100 - 1;
                                      v102 = (unsigned __int64 *)((char *)j + 2 * v101 + 2);
                                      if ( v102 < v30 )
                                        goto LABEL_422;
                                      v103 = (unsigned __int64 *)((char *)j + 2 * v101 + 4);
                                      if ( v103 < v102 || (unsigned __int64)v103 > v32 )
                                        goto LABEL_422;
                                    }
                                  }
                                  break;
                                }
                                v107 = v96 + 16;
                                if ( v6 )
                                {
                                  v108 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v108 )
                                  {
                                    v109 = *(_QWORD *)(v6 + 8);
                                    if ( v109 < v107 && v109 + 132 * v108 > v95 )
                                      break;
                                  }
                                }
                                if ( v95 - 104 < v5 && v107 > v5 )
                                  break;
                              }
                              v110 = *(_QWORD *)(v5 + 16);
                              v111 = (unsigned __int64 *)v110;
                              if ( v110 )
                              {
                                v112 = v110 + 8;
                                while ( v111 >= v30 && v112 >= (unsigned __int64)v111 && v112 <= v32 )
                                {
                                  if ( !*(_DWORD *)v111 )
                                  {
                                    v113 = v111 + 1;
                                    if ( v6 )
                                    {
                                      v114 = *(unsigned int *)(v6 + 4);
                                      if ( (_DWORD)v114 )
                                      {
                                        v115 = *(_QWORD *)(v6 + 8);
                                        if ( v115 < (unsigned __int64)v113 && v115 + 132 * v114 > v110 )
                                          goto LABEL_422;
                                      }
                                    }
                                    if ( v110 - 104 < v5 && (unsigned __int64)v113 > v5 )
                                      goto LABEL_422;
                                    goto LABEL_275;
                                  }
                                  ++v111;
                                  v112 += 8LL;
                                  if ( v112 == 8 )
                                    goto LABEL_275;
                                }
                              }
                              else
                              {
LABEL_275:
                                v116 = *(_QWORD *)(v5 + 24);
                                if ( v116 )
                                {
                                  v117 = *(_QWORD *)(v5 + 24);
                                  if ( v116 >= (unsigned __int64)v30 )
                                  {
                                    while ( 1 )
                                    {
                                      v118 = v117 + 16;
                                      if ( v117 + 16 < v117 || v118 > v32 )
                                        break;
                                      if ( !*(_BYTE *)v117 )
                                      {
                                        v125 = v117 + 16;
                                        if ( v6 )
                                        {
                                          v126 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v126 )
                                          {
                                            v127 = *(_QWORD *)(v6 + 8);
                                            if ( v127 < v125 && v127 + 132 * v126 > v116 )
                                              goto LABEL_422;
                                          }
                                        }
                                        if ( v116 - 104 < v5 && v125 > v5 )
                                          goto LABEL_422;
                                        goto LABEL_301;
                                      }
                                      v119 = *(_QWORD *)(v117 + 8);
                                      if ( v119 )
                                      {
                                        v120 = *(unsigned __int64 **)(v117 + 8);
                                        for ( k = v119 + 2; v120 >= v30 && k >= (unsigned __int64)v120 && k <= v32; k += 2LL )
                                        {
                                          if ( !*(_WORD *)v120 )
                                          {
                                            v122 = (_WORD *)v120 + 1;
                                            if ( v6 )
                                            {
                                              v123 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v123 )
                                              {
                                                v124 = *(_QWORD *)(v6 + 8);
                                                if ( v124 < (unsigned __int64)v122 && v124 + 132 * v123 > v119 )
                                                  goto LABEL_422;
                                              }
                                            }
                                            if ( v119 - 104 < v5 && (unsigned __int64)v122 > v5 )
                                              goto LABEL_422;
                                            goto LABEL_293;
                                          }
                                          v120 = (unsigned __int64 *)((char *)v120 + 2);
                                        }
                                        goto LABEL_422;
                                      }
LABEL_293:
                                      v117 = v118;
                                      if ( v118 < (unsigned __int64)v30 )
                                        goto LABEL_422;
                                    }
                                  }
                                }
                                else
                                {
LABEL_301:
                                  v128 = *(_QWORD *)(v5 + 32);
                                  if ( v128 )
                                  {
                                    v129 = *(_QWORD *)(v5 + 32);
                                    if ( v128 >= (unsigned __int64)v30 )
                                    {
                                      while ( 1 )
                                      {
                                        v130 = v129 + 16;
                                        if ( v129 + 16 < v129 || v130 > v32 )
                                          break;
                                        if ( !*(_BYTE *)v129 )
                                        {
                                          v137 = v129 + 16;
                                          if ( v6 )
                                          {
                                            v138 = *(unsigned int *)(v6 + 4);
                                            if ( (_DWORD)v138 )
                                            {
                                              v139 = *(_QWORD *)(v6 + 8);
                                              if ( v139 < v137 && v139 + 132 * v138 > v128 )
                                                goto LABEL_422;
                                            }
                                          }
                                          if ( v128 - 104 < v5 && v137 > v5 )
                                            goto LABEL_422;
                                          goto LABEL_327;
                                        }
                                        v131 = *(_QWORD *)(v129 + 8);
                                        if ( v131 )
                                        {
                                          v132 = *(unsigned __int64 **)(v129 + 8);
                                          for ( m = v131 + 2;
                                                v132 >= v30 && m >= (unsigned __int64)v132 && m <= v32;
                                                m += 2LL )
                                          {
                                            if ( !*(_WORD *)v132 )
                                            {
                                              v134 = (_WORD *)v132 + 1;
                                              if ( v6 )
                                              {
                                                v135 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v135 )
                                                {
                                                  v136 = *(_QWORD *)(v6 + 8);
                                                  if ( v136 < (unsigned __int64)v134 && v136 + 132 * v135 > v131 )
                                                    goto LABEL_422;
                                                }
                                              }
                                              if ( v131 - 104 < v5 && (unsigned __int64)v134 > v5 )
                                                goto LABEL_422;
                                              goto LABEL_319;
                                            }
                                            v132 = (unsigned __int64 *)((char *)v132 + 2);
                                          }
                                          goto LABEL_422;
                                        }
LABEL_319:
                                        v129 = v130;
                                        if ( v130 < (unsigned __int64)v30 )
                                          goto LABEL_422;
                                      }
                                    }
                                  }
                                  else
                                  {
LABEL_327:
                                    v140 = *(_QWORD *)(v5 + 40);
                                    if ( v140 )
                                    {
                                      v141 = *(unsigned __int64 **)(v5 + 40);
                                      if ( v140 < (unsigned __int64)v30 )
                                        break;
                                      v142 = v140 + 8;
LABEL_330:
                                      if ( v142 < (unsigned __int64)v141 || v142 > v32 )
                                        break;
                                      v143 = *v141;
                                      if ( *v141 )
                                      {
                                        v144 = (unsigned __int64 *)*v141;
                                        for ( n = v143 + 2; v144 >= v30 && n >= (unsigned __int64)v144 && n <= v32; n += 2LL )
                                        {
                                          if ( !*(_WORD *)v144 )
                                          {
                                            v146 = (_WORD *)v144 + 1;
                                            if ( !v6
                                              || (v147 = *(unsigned int *)(v6 + 4), !(_DWORD)v147)
                                              || (v148 = *(_QWORD *)(v6 + 8), v148 >= (unsigned __int64)v146)
                                              || v148 + 132 * v147 <= v143 )
                                            {
                                              if ( v143 - 104 >= v5 || (unsigned __int64)v146 <= v5 )
                                              {
                                                ++v141;
                                                v142 += 8LL;
                                                if ( v141 >= v30 )
                                                  goto LABEL_330;
                                              }
                                            }
                                            goto LABEL_422;
                                          }
                                          v144 = (unsigned __int64 *)((char *)v144 + 2);
                                        }
                                        break;
                                      }
                                      v149 = v141 + 1;
                                      if ( v6 )
                                      {
                                        v150 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v150 )
                                        {
                                          v151 = *(_QWORD *)(v6 + 8);
                                          if ( v151 < (unsigned __int64)v149 && v151 + 132 * v150 > v140 )
                                            break;
                                        }
                                      }
                                      if ( v140 - 104 < v5 && (unsigned __int64)v149 > v5 )
                                        break;
                                    }
                                    v152 = *(_BYTE *)(v5 + 56);
                                    if ( v152 )
                                    {
                                      if ( v6 )
                                      {
                                        v153 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v153 )
                                        {
                                          v154 = *(_QWORD *)(v5 + 48);
                                          v155 = *(_QWORD *)(v6 + 8);
                                          if ( v155 < v154 + 2LL * v152 && v155 + 132 * v153 > v154 )
                                            break;
                                        }
                                      }
                                    }
                                    v156 = *(_QWORD *)(v5 + 64);
                                    if ( v156 )
                                    {
                                      v157 = *(_QWORD *)(v5 + 64);
                                      if ( v156 >= (unsigned __int64)v30 )
                                      {
                                        v158 = v156 + 4;
                                        while ( v158 >= v157 && v158 <= v32 )
                                        {
                                          v157 += 4LL;
                                          if ( !*(_WORD *)(v158 - 2) )
                                          {
                                            if ( v6 )
                                            {
                                              v159 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v159 )
                                              {
                                                v160 = *(_QWORD *)(v6 + 8);
                                                if ( v160 < v157 && v160 + 132 * v159 > v156 )
                                                  goto LABEL_422;
                                              }
                                            }
                                            if ( v156 - 104 < v5 && v157 > v5 )
                                              goto LABEL_422;
                                            goto LABEL_372;
                                          }
                                          v158 += 4LL;
                                          if ( v157 < (unsigned __int64)v30 )
                                            goto LABEL_422;
                                        }
                                      }
                                    }
                                    else
                                    {
LABEL_372:
                                      v161 = *(_QWORD *)(v5 + 72);
                                      if ( v161 )
                                      {
                                        v162 = *(_QWORD *)(v5 + 72);
                                        if ( v161 >= (unsigned __int64)v30 )
                                        {
                                          v163 = v161 + 4;
                                          while ( v163 >= v162 && v163 <= v32 )
                                          {
                                            v162 += 4LL;
                                            if ( !*(_WORD *)(v163 - 2) )
                                            {
                                              if ( v6 )
                                              {
                                                v164 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v164 )
                                                {
                                                  v165 = *(_QWORD *)(v6 + 8);
                                                  if ( v165 < v162 && v165 + 132 * v164 > v161 )
                                                    goto LABEL_422;
                                                }
                                              }
                                              if ( v161 - 104 < v5 && v162 > v5 )
                                                goto LABEL_422;
                                              goto LABEL_386;
                                            }
                                            v163 += 4LL;
                                            if ( v162 < (unsigned __int64)v30 )
                                              goto LABEL_422;
                                          }
                                        }
                                      }
                                      else
                                      {
LABEL_386:
                                        if ( *(_WORD *)(v5 + 82) )
                                        {
                                          v166 = *(unsigned __int64 **)(v5 + 88);
                                          if ( v166 )
                                          {
                                            v167 = 0;
                                            if ( v166 >= v30 )
                                            {
                                              while ( (unsigned __int64)v166 <= v32 - 6 )
                                              {
                                                if ( !*(_BYTE *)v166 )
                                                  goto LABEL_410;
                                                if ( *(_BYTE *)(v5 + 84) )
                                                {
                                                  v168 = (__int16 *)v166 + 2;
                                                  while ( 1 )
                                                  {
                                                    if ( v167 > 0 )
                                                    {
                                                      v169 = (unsigned __int64)v166 + 2 * v167 + 4;
                                                      if ( v169 < (unsigned __int64)v30 || v169 > v32 - 2 )
                                                        break;
                                                    }
                                                    v170 = *v168++;
                                                    ++v167;
                                                    if ( v170 == -4096 || v167 >= *(unsigned __int8 *)(v5 + 84) )
                                                      goto LABEL_400;
                                                  }
                                                  *(_QWORD *)(v5 + 88) = 0LL;
                                                }
LABEL_400:
                                                if ( !*(_QWORD *)(v5 + 88) )
                                                  goto LABEL_410;
                                                if ( v167 <= 0
                                                  || (!v6
                                                   || (v171 = *(unsigned int *)(v6 + 4), !(_DWORD)v171)
                                                   || (v172 = *(_QWORD *)(v6 + 8),
                                                       v172 >= (unsigned __int64)v166 + 2 * v167 + 4)
                                                   || v172 + 132 * v171 <= (unsigned __int64)v166 + 4)
                                                  && ((unsigned __int64)v166 - 100 >= v5
                                                   || (unsigned __int64)v166 + 2 * v167 + 4 <= v5) )
                                                {
                                                  v167 = 0;
                                                  v166 = (unsigned __int64 *)((char *)v166
                                                                            + *(unsigned __int8 *)(v5 + 85));
                                                  if ( v166 >= v30 )
                                                    continue;
                                                }
                                                break;
                                              }
                                            }
                                            *(_QWORD *)(v5 + 88) = 0LL;
LABEL_410:
                                            v173 = *(_QWORD *)(v5 + 88);
                                            if ( v173 )
                                            {
                                              if ( (v174 = (char *)v166 + 6, v6)
                                                && (v175 = *(unsigned int *)(v6 + 4), (_DWORD)v175)
                                                && (v176 = *(_QWORD *)(v6 + 8), v176 < (unsigned __int64)v174)
                                                && v176 + 132 * v175 > v173
                                                || v173 - 104 < v5 && (unsigned __int64)v174 > v5 )
                                              {
                                                *(_QWORD *)(v5 + 88) = 0LL;
                                              }
                                            }
                                          }
                                        }
                                        if ( !v6 )
                                          goto LABEL_129;
                                        v177 = *(unsigned int *)(v6 + 4);
                                        if ( !(_DWORD)v177 )
                                          goto LABEL_129;
                                        v178 = *(_QWORD *)(v6 + 8);
                                        if ( v178 - 104 >= v5 || v178 + 132 * v177 <= v5 )
                                          goto LABEL_129;
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            }
                            v38 = (unsigned __int64 *)((char *)v38 + 2);
                            v39 = (unsigned __int64 *)((char *)v39 + 2);
                            if ( v38 < v30 )
                              break;
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_422:
              Win32FreePool(v30);
              v9 = a1;
              v7 = 0;
            }
            else
            {
LABEL_129:
              v7 = 1;
              v9 = a1;
            }
            goto LABEL_130;
          }
        }
        v9 = a1;
      }
      v7 = 0;
    }
  }
LABEL_130:
  if ( v181 )
    Win32FreePool(v181);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}
