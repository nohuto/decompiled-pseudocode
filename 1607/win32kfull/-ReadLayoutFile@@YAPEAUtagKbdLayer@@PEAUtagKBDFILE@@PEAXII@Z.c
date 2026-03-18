/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C00E964C
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C00E9570 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C00E9CF0 (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     strcmp_0 @ 0x1C015A006 (strcmp_0.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?ValidateKbdNLSTable@@YAHPEBUtagKbdNlsLayer@@@Z @ 0x1C0228BA4 (-ValidateKbdNLSTable@@YAHPEBUtagKbdNlsLayer@@@Z.c)
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
  unsigned __int64 i; // rdx
  unsigned __int64 *j; // r8
  char *v16; // rcx
  char *v17; // r15
  __int16 v18; // ax
  __int64 v19; // r12
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
  unsigned __int64 *v37; // rcx
  unsigned __int64 *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 *v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  unsigned __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 *v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 *v70; // rcx
  unsigned __int64 v71; // rax
  unsigned __int64 *v72; // rcx
  unsigned __int64 *v73; // rcx
  unsigned __int64 v74; // rax
  unsigned __int64 *v75; // rax
  unsigned int v76; // eax
  unsigned __int64 v77; // r9
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  bool v80; // cc
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  __int64 v86; // rax
  unsigned __int64 v87; // rbx
  unsigned __int64 v88; // r11
  unsigned __int64 v89; // r10
  unsigned __int8 v90; // al
  int v91; // eax
  unsigned __int64 *v92; // r9
  unsigned __int64 *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 v99; // r11
  unsigned __int64 v100; // r10
  unsigned __int64 v101; // r9
  unsigned __int64 k; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // r10
  unsigned __int64 v106; // r11
  unsigned __int64 v107; // r9
  unsigned __int64 m; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  unsigned __int64 v111; // rbx
  unsigned __int64 v112; // r11
  unsigned __int64 v113; // r9
  unsigned __int64 n; // rax
  __int64 v115; // rax
  unsigned __int64 v116; // r10
  __int64 v117; // rax
  unsigned __int8 v118; // al
  unsigned __int64 v119; // r9
  _BYTE *v120; // rax
  __int64 v121; // rax
  unsigned __int64 v122; // r9
  _BYTE *v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // r9
  int v126; // r8d
  __int16 *v127; // rcx
  unsigned __int64 v128; // r9
  __int16 v129; // ax
  __int64 v130; // r9
  unsigned __int64 v131; // r10
  __int64 v132; // rax
  unsigned __int64 v133; // r9
  __int64 v134; // rcx
  unsigned int v135[2]; // [rsp+38h] [rbp-60h] BYREF
  BOOL v136; // [rsp+40h] [rbp-58h]
  void *v137; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v138; // [rsp+50h] [rbp-48h]

  v135[0] = 0;
  v5 = 0LL;
  v137 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  CurrentProcessId = PsGetCurrentProcessId();
  *((_QWORD *)v9 + 6) = 0LL;
  v11 = CurrentProcessId == (HANDLE)gpidLogon;
  v136 = v11;
  if ( (int)LoadFileContent(a2, v12, v13, &v137, v135) >= 0 )
  {
    j = (unsigned __int64 *)v137;
    v16 = (char *)v137 + *((unsigned int *)v137 + 15);
    if ( v16 >= v137 && (v11 || v16 + 263 >= v16) )
    {
      v17 = (char *)v137 + v135[0];
      if ( v16 + 264 < v17 )
      {
        v18 = *((_WORD *)v16 + 2);
        if ( v18 == 512 || v18 == -31132 || v18 == -21916 )
          v19 = *((_QWORD *)v16 + 6);
        else
          v19 = *((unsigned int *)v16 + 13);
        i = *((unsigned __int16 *)v16 + 3);
        v20 = v136;
        v21 = (unsigned __int64)&v16[*((unsigned __int16 *)v16 + 10) + 24];
        v22 = (unsigned __int16)i;
        v138 = v21;
        *(_QWORD *)v135 = v136;
        if ( (_WORD)i )
        {
          v23 = v21 + 40;
          while ( v21 >= (unsigned __int64)j && (v20 || v23 - 1 >= v21) && v23 < (unsigned __int64)v17 )
          {
            v24 = strcmp_0((const char *)v21, ".data");
            j = (unsigned __int64 *)v137;
            if ( v24 )
            {
              v20 = *(_QWORD *)v135;
              v21 += 40LL;
              v23 += 40LL;
              v138 = v21;
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
            v28 = (char *)v137 + *(unsigned int *)(v21 + 20);
            if ( v28 < v137 || &v28[v26] < v28 || &v28[v26] >= v17 )
              break;
            v29 = (unsigned __int64 *)Win32AllocPool((unsigned int)v26, 1953198933LL);
            v30 = v29;
            if ( v29 )
            {
              v31 = v138;
              *((_QWORD *)a1 + 3) = v29;
              memmove(v29, (char *)v137 + *(unsigned int *)(v31 + 20), (unsigned int)v26);
              *((_DWORD *)a1 + 10) = v26;
              v32 = (unsigned __int64)v30 + (unsigned int)v26;
              v33 = *(unsigned int *)(v31 + 12);
              v5 = (unsigned __int64)v30 + v27;
              if ( (unsigned __int64)v30 >= v33 )
              {
                v34 = v136;
                v35 = (char *)v30 - v33 - v19;
                if ( v136 || v5 >= (unsigned __int64)v30 && v5 <= v32 - 104 )
                {
                  if ( !*(_QWORD *)v5
                    || (v36 = (unsigned __int64)&v35[*(_QWORD *)v5], *(_QWORD *)v5 = v36, v36 >= (unsigned __int64)v30)
                    && v36 + 16 >= v36
                    && v36 + 16 <= v32 )
                  {
                    if ( v34 || *(_QWORD *)v5 )
                    {
                      i = *(_QWORD *)v5;
                      v37 = **(unsigned __int64 ***)v5;
                      if ( !v37
                        || (*(_QWORD *)i = &v35[(_QWORD)v37],
                            i = *(_QWORD *)v5,
                            v37 = **(unsigned __int64 ***)v5,
                            v37 >= v30)
                        && (unsigned __int64 *)((char *)v37 + 2) >= v37
                        && (unsigned __int64)v37 + 2 <= v32 )
                      {
                        if ( (v34 || i >= (unsigned __int64)v30 && i <= v32 - 16) && v37 >= v30 )
                        {
                          v38 = (unsigned __int64 *)((char *)v37 + 2);
                          while ( v38 >= v37 && (unsigned __int64)v38 <= v32 )
                          {
                            if ( !*(_BYTE *)v37 )
                            {
                              v39 = *(_QWORD *)(v5 + 8);
                              if ( v39 )
                              {
                                v40 = (unsigned __int64)&v35[v39];
                                *(_QWORD *)(v5 + 8) = v40;
                                if ( v40 < (unsigned __int64)v30 || v40 + 16 < v40 || v40 + 16 > v32 )
                                  break;
                              }
                              v41 = *(unsigned __int64 **)(v5 + 8);
                              if ( v41 )
                              {
                                if ( v41 >= v30 )
                                {
                                  i = (unsigned __int64)(v41 + 2);
                                  do
                                  {
                                    if ( i < (unsigned __int64)v41 || i > v32 )
                                      break;
                                    if ( !*v41 )
                                      goto LABEL_57;
                                    v42 = (unsigned __int64)&v35[*v41];
                                    *v41 = v42;
                                    if ( v42 < (unsigned __int64)v30 )
                                      break;
                                    j = (unsigned __int64 *)(v42 + 4);
                                    if ( v42 + 4 < v42 )
                                      break;
                                    if ( (unsigned __int64)j > v32 )
                                      break;
                                    v41 += 2;
                                    i += 16LL;
                                  }
                                  while ( v41 >= v30 );
                                }
                                break;
                              }
LABEL_57:
                              v43 = *(_QWORD *)(v5 + 16);
                              if ( v43 )
                              {
                                v69 = (unsigned __int64)&v35[v43];
                                *(_QWORD *)(v5 + 16) = v69;
                                if ( v69 < (unsigned __int64)v30 || v69 + 8 < v69 || v69 + 8 > v32 )
                                  break;
                              }
                              v44 = *(unsigned __int64 **)(v5 + 16);
                              if ( v44 )
                              {
                                v70 = v44 + 1;
                                while ( v44 >= v30 && v70 >= v44 && (unsigned __int64)v70 <= v32 )
                                {
                                  if ( *(_DWORD *)v44 )
                                  {
                                    ++v44;
                                    if ( ++v70 != (unsigned __int64 *)8 )
                                      continue;
                                  }
                                  goto LABEL_59;
                                }
                                break;
                              }
LABEL_59:
                              if ( *(_WORD *)(v5 + 82) )
                              {
                                v45 = *(_QWORD *)(v5 + 88);
                                if ( v45 )
                                {
                                  v71 = (unsigned __int64)&v35[v45];
                                  *(_QWORD *)(v5 + 88) = v71;
                                  if ( v71 < (unsigned __int64)v30 || v71 + 6 < v71 || v71 + 6 > v32 )
                                    break;
                                }
                              }
                              v46 = *(_QWORD *)(v5 + 24);
                              if ( v46 )
                              {
                                v47 = (unsigned __int64)&v35[v46];
                                *(_QWORD *)(v5 + 24) = v47;
                                if ( v47 < (unsigned __int64)v30 || v47 + 16 < v47 || v47 + 16 > v32 )
                                  break;
                              }
                              v48 = *(_QWORD *)(v5 + 24);
                              if ( v48 )
                              {
                                if ( v48 >= (unsigned __int64)v30 )
                                {
                                  v49 = *(_QWORD *)v135;
                                  do
                                  {
                                    j = (unsigned __int64 *)(v48 + 16);
                                    if ( v48 + 16 < v48 || (unsigned __int64)j > v32 )
                                      break;
                                    if ( !*(_BYTE *)v48 )
                                      goto LABEL_78;
                                    v50 = *(_QWORD *)(v48 + 8);
                                    if ( v50 )
                                    {
                                      v51 = (unsigned __int64)&v35[v50];
                                      *(_QWORD *)(v48 + 8) = v51;
                                      if ( v51 < (unsigned __int64)v30 )
                                        break;
                                      i = v51 + 2;
                                      if ( v51 + 2 < v51 || i > v32 )
                                        break;
                                    }
                                    if ( !v49 )
                                    {
                                      v72 = *(unsigned __int64 **)(v48 + 8);
                                      if ( v72 )
                                      {
                                        if ( v72 >= v30 )
                                        {
                                          i = v32 - 2;
                                          do
                                          {
                                            if ( (unsigned __int64)v72 > i )
                                              break;
                                            if ( !*(_WORD *)v72 )
                                              goto LABEL_76;
                                            v72 = (unsigned __int64 *)((char *)v72 + 2);
                                          }
                                          while ( v72 >= v30 );
                                        }
                                        *(_QWORD *)(v48 + 8) = 0LL;
                                      }
                                    }
LABEL_76:
                                    v48 += 16LL;
                                  }
                                  while ( j >= v30 );
                                }
                                break;
                              }
                              v49 = *(_QWORD *)v135;
LABEL_78:
                              v52 = *(_QWORD *)(v5 + 32);
                              if ( v52 )
                              {
                                v53 = (unsigned __int64)&v35[v52];
                                *(_QWORD *)(v5 + 32) = v53;
                                if ( v53 < (unsigned __int64)v30 || v53 + 16 < v53 || v53 + 16 > v32 )
                                  break;
                              }
                              v54 = *(_QWORD *)(v5 + 32);
                              if ( v54 )
                              {
                                if ( v54 >= (unsigned __int64)v30 )
                                {
                                  do
                                  {
                                    j = (unsigned __int64 *)(v54 + 16);
                                    if ( v54 + 16 < v54 || (unsigned __int64)j > v32 )
                                      break;
                                    if ( !*(_BYTE *)v54 )
                                      goto LABEL_94;
                                    v55 = *(_QWORD *)(v54 + 8);
                                    if ( v55 )
                                    {
                                      v56 = (unsigned __int64)&v35[v55];
                                      *(_QWORD *)(v54 + 8) = v56;
                                      if ( v56 < (unsigned __int64)v30 )
                                        break;
                                      i = v56 + 2;
                                      if ( v56 + 2 < v56 || i > v32 )
                                        break;
                                    }
                                    if ( !v49 )
                                    {
                                      v73 = *(unsigned __int64 **)(v54 + 8);
                                      if ( v73 )
                                      {
                                        if ( v73 >= v30 )
                                        {
                                          i = v32 - 2;
                                          do
                                          {
                                            if ( (unsigned __int64)v73 > i )
                                              break;
                                            if ( !*(_WORD *)v73 )
                                              goto LABEL_92;
                                            v73 = (unsigned __int64 *)((char *)v73 + 2);
                                          }
                                          while ( v73 >= v30 );
                                        }
                                        *(_QWORD *)(v54 + 8) = 0LL;
                                      }
                                    }
LABEL_92:
                                    v54 += 16LL;
                                  }
                                  while ( j >= v30 );
                                }
                                break;
                              }
LABEL_94:
                              v57 = *(_QWORD *)(v5 + 40);
                              if ( v57 )
                              {
                                v74 = (unsigned __int64)&v35[v57];
                                *(_QWORD *)(v5 + 40) = v74;
                                if ( v74 < (unsigned __int64)v30 || v74 + 8 < v74 || v74 + 8 > v32 )
                                  break;
                              }
                              v58 = *(unsigned __int64 **)(v5 + 40);
                              if ( v58 )
                              {
                                if ( v58 < v30 )
                                  break;
                                j = v58 + 1;
LABEL_187:
                                if ( j < v58 || (unsigned __int64)j > v32 )
                                  break;
                                if ( *v58 )
                                {
                                  v75 = (unsigned __int64 *)&v35[*v58];
                                  *v58 = (unsigned __int64)v75;
                                  if ( v75 >= v30 )
                                  {
                                    i = (unsigned __int64)v75 + 2;
                                    if ( (unsigned __int64 *)((char *)v75 + 2) >= v75 && i <= v32 )
                                    {
                                      for ( i = (unsigned __int64)v75 + 2;
                                            v75 >= v30 && i >= (unsigned __int64)v75 && i <= v32;
                                            i += 2LL )
                                      {
                                        if ( !*(_WORD *)v75 )
                                        {
                                          ++v58;
                                          ++j;
                                          if ( v58 >= v30 )
                                            goto LABEL_187;
                                          goto LABEL_424;
                                        }
                                        v75 = (unsigned __int64 *)((char *)v75 + 2);
                                      }
                                    }
                                  }
                                  break;
                                }
                              }
                              v59 = *(_QWORD *)(v5 + 48);
                              if ( !v59 )
                                break;
                              v60 = (unsigned __int64)&v35[v59];
                              *(_QWORD *)(v5 + 48) = &v35[v59];
                              if ( &v35[v59] < (char *)v30 )
                                break;
                              if ( v60 + 2 < v60 )
                                break;
                              if ( v60 + 2 > v32 )
                                break;
                              i = v60 + 2LL * *(unsigned __int8 *)(v5 + 56);
                              if ( i < (unsigned __int64)v30 )
                                break;
                              if ( i + 2 < i )
                                break;
                              if ( i + 2 > v32 )
                                break;
                              v61 = *(_QWORD *)(v5 + 64);
                              if ( v61 )
                              {
                                v62 = (unsigned __int64)&v35[v61];
                                *(_QWORD *)(v5 + 64) = v62;
                                if ( v62 < (unsigned __int64)v30 || v62 + 4 < v62 || v62 + 4 > v32 )
                                  break;
                              }
                              v63 = *(_QWORD *)(v5 + 64);
                              if ( v63 )
                              {
                                while ( !v49 || *(_WORD *)(v63 + 2) )
                                {
                                  if ( v63 < (unsigned __int64)v30 || v63 + 4 < v63 || v63 + 4 > v32 )
                                    goto LABEL_424;
                                  if ( !v49 && !*(_WORD *)(v63 + 2) )
                                    break;
                                  v63 += 4LL;
                                }
                              }
                              v64 = *(_QWORD *)(v5 + 72);
                              if ( v64 )
                              {
                                v65 = (unsigned __int64)&v35[v64];
                                *(_QWORD *)(v5 + 72) = v65;
                                if ( v65 < (unsigned __int64)v30 || v65 + 4 < v65 || v65 + 4 > v32 )
                                  break;
                              }
                              v66 = *(_QWORD *)(v5 + 72);
                              if ( v66 )
                              {
                                if ( v66 >= (unsigned __int64)v30 )
                                {
                                  v67 = v66 + 4;
                                  do
                                  {
                                    if ( v67 < v66 || v67 > v32 )
                                      break;
                                    if ( !*(_WORD *)(v67 - 2) )
                                      goto LABEL_127;
                                    v66 += 4LL;
                                    v67 += 4LL;
                                  }
                                  while ( v66 >= (unsigned __int64)v30 );
                                }
                                break;
                              }
LABEL_127:
                              if ( a4 )
                              {
                                v76 = *(_DWORD *)(v31 + 12);
                                if ( a4 < v76 )
                                  break;
                                v6 = (unsigned __int64)v30 + a4 - v76;
                                if ( v6 < (unsigned __int64)v30 )
                                  break;
                                v77 = v6 + 32;
                                if ( v6 + 32 < v6 )
                                  break;
                                if ( v77 > v32 )
                                  break;
                                v78 = *(_QWORD *)(v6 + 8);
                                if ( v78 )
                                {
                                  v79 = (unsigned __int64)&v35[v78];
                                  *(_QWORD *)(v6 + 8) = v79;
                                  if ( v79 < (unsigned __int64)v30 || v79 + 132 < v79 || v79 + 132 > v32 )
                                    break;
                                }
                                j = *(unsigned __int64 **)(v6 + 8);
                                if ( j )
                                {
                                  if ( v34 )
                                  {
                                    v81 = (unsigned __int64)j + 132 * (unsigned int)(*(_DWORD *)(v6 + 4) - 1);
                                    if ( v81 < (unsigned __int64)v30 || v81 + 132 < v81 )
                                      break;
                                    v80 = v81 + 132 <= v32;
                                  }
                                  else
                                  {
                                    i = (v32 - (unsigned __int64)j) / 0x84;
                                    v80 = *(unsigned int *)(v6 + 4) <= i;
                                  }
                                  if ( !v80 )
                                    break;
                                }
                                v82 = *(_QWORD *)(v6 + 24);
                                if ( v82 )
                                {
                                  v83 = (unsigned __int64)&v35[v82];
                                  *(_QWORD *)(v6 + 24) = v83;
                                  if ( v83 < (unsigned __int64)v30 || v83 + 2 < v83 || v83 + 2 > v32 )
                                    break;
                                }
                                v84 = *(_QWORD *)(v6 + 24);
                                if ( v84 )
                                {
                                  v85 = v84 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                  if ( v85 < (unsigned __int64)v30 || v85 + 2 < v85 || v85 + 2 > v32 )
                                    break;
                                }
                                if ( !v34 )
                                {
                                  v86 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v86 )
                                  {
                                    if ( (unsigned __int64)j < v77 && (unsigned __int64)j + 132 * v86 > v6 )
                                      break;
                                  }
                                  if ( v6 - 104 < v5 && v77 > v5 )
                                    break;
                                }
                                if ( !(unsigned int)ValidateKbdNLSTable((const struct tagKbdNlsLayer *)v6) )
                                  break;
                                *((_QWORD *)a1 + 6) = v6;
                              }
                              if ( v34 )
                                goto LABEL_129;
                              v87 = *(_QWORD *)(v5 + 8);
                              if ( v87 )
                              {
                                i = *(_QWORD *)(v5 + 8);
                                if ( v87 < (unsigned __int64)v30 )
                                  break;
LABEL_236:
                                v88 = i + 16;
                                if ( i + 16 < i || v88 > v32 )
                                  break;
                                v89 = *(_QWORD *)i;
                                if ( *(_QWORD *)i )
                                {
                                  for ( j = *(unsigned __int64 **)i;
                                        j >= v30
                                     && (unsigned __int64 *)((char *)j + 4) >= j
                                     && (unsigned __int64)j + 4 <= v32;
                                        j = (unsigned __int64 *)((char *)j + *(unsigned __int8 *)(i + 9)) )
                                  {
                                    if ( !*(_BYTE *)j )
                                    {
                                      j = (unsigned __int64 *)((char *)j + 4);
                                      if ( !v6
                                        || (v94 = *(unsigned int *)(v6 + 4), !(_DWORD)v94)
                                        || (i = *(_QWORD *)(v6 + 8), i >= (unsigned __int64)j)
                                        || i + 132 * v94 <= v89 )
                                      {
                                        if ( v89 - 104 >= v5 || (unsigned __int64)j <= v5 )
                                        {
                                          i = v88;
                                          if ( v88 >= (unsigned __int64)v30 )
                                            goto LABEL_236;
                                        }
                                      }
                                      goto LABEL_424;
                                    }
                                    v90 = *(_BYTE *)(i + 8);
                                    if ( v90 > 1u )
                                    {
                                      v91 = v90 - 1;
                                      v92 = (unsigned __int64 *)((char *)j + 2 * v91 + 2);
                                      if ( v92 < v30 )
                                        goto LABEL_424;
                                      v93 = (unsigned __int64 *)((char *)j + 2 * v91 + 4);
                                      if ( v93 < v92 || (unsigned __int64)v93 > v32 )
                                        goto LABEL_424;
                                    }
                                  }
                                  break;
                                }
                                i += 16LL;
                                if ( v6 )
                                {
                                  v95 = *(unsigned int *)(v6 + 4);
                                  if ( (_DWORD)v95 )
                                  {
                                    j = *(unsigned __int64 **)(v6 + 8);
                                    if ( (unsigned __int64)j < i && (unsigned __int64)j + 132 * v95 > v87 )
                                      break;
                                  }
                                }
                                if ( v87 - 104 < v5 && i > v5 )
                                  break;
                              }
                              v96 = *(_QWORD *)(v5 + 16);
                              i = v96;
                              if ( v96 )
                              {
                                v97 = v96 + 8;
                                while ( i >= (unsigned __int64)v30 && v97 >= i && v97 <= v32 )
                                {
                                  if ( !*(_DWORD *)i )
                                  {
                                    i += 8LL;
                                    if ( v6 )
                                    {
                                      v98 = *(unsigned int *)(v6 + 4);
                                      if ( (_DWORD)v98 )
                                      {
                                        j = *(unsigned __int64 **)(v6 + 8);
                                        if ( (unsigned __int64)j < i && (unsigned __int64)j + 132 * v98 > v96 )
                                          goto LABEL_424;
                                      }
                                    }
                                    if ( v96 - 104 < v5 && i > v5 )
                                      goto LABEL_424;
                                    goto LABEL_277;
                                  }
                                  i += 8LL;
                                  v97 += 8LL;
                                  if ( v97 == 8 )
                                    goto LABEL_277;
                                }
                              }
                              else
                              {
LABEL_277:
                                v99 = *(_QWORD *)(v5 + 24);
                                if ( v99 )
                                {
                                  i = *(_QWORD *)(v5 + 24);
                                  if ( v99 >= (unsigned __int64)v30 )
                                  {
                                    while ( 1 )
                                    {
                                      v100 = i + 16;
                                      if ( i + 16 < i || v100 > v32 )
                                        break;
                                      if ( !*(_BYTE *)i )
                                      {
                                        i += 16LL;
                                        if ( v6 )
                                        {
                                          v104 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v104 )
                                          {
                                            j = *(unsigned __int64 **)(v6 + 8);
                                            if ( (unsigned __int64)j < i && (unsigned __int64)j + 132 * v104 > v99 )
                                              goto LABEL_424;
                                          }
                                        }
                                        if ( v99 - 104 < v5 && i > v5 )
                                          goto LABEL_424;
                                        goto LABEL_303;
                                      }
                                      v101 = *(_QWORD *)(i + 8);
                                      if ( v101 )
                                      {
                                        i = *(_QWORD *)(i + 8);
                                        for ( k = v101 + 2; i >= (unsigned __int64)v30 && k >= i && k <= v32; k += 2LL )
                                        {
                                          if ( !*(_WORD *)i )
                                          {
                                            i += 2LL;
                                            if ( v6 )
                                            {
                                              v103 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v103 )
                                              {
                                                j = *(unsigned __int64 **)(v6 + 8);
                                                if ( (unsigned __int64)j < i && (unsigned __int64)j + 132 * v103 > v101 )
                                                  goto LABEL_424;
                                              }
                                            }
                                            if ( v101 - 104 < v5 && i > v5 )
                                              goto LABEL_424;
                                            goto LABEL_295;
                                          }
                                          i += 2LL;
                                        }
                                        goto LABEL_424;
                                      }
LABEL_295:
                                      i = v100;
                                      if ( v100 < (unsigned __int64)v30 )
                                        goto LABEL_424;
                                    }
                                  }
                                }
                                else
                                {
LABEL_303:
                                  v105 = *(_QWORD *)(v5 + 32);
                                  if ( v105 )
                                  {
                                    i = *(_QWORD *)(v5 + 32);
                                    if ( v105 >= (unsigned __int64)v30 )
                                    {
                                      while ( 1 )
                                      {
                                        v106 = i + 16;
                                        if ( i + 16 < i || v106 > v32 )
                                          break;
                                        if ( !*(_BYTE *)i )
                                        {
                                          i += 16LL;
                                          if ( v6 )
                                          {
                                            v110 = *(unsigned int *)(v6 + 4);
                                            if ( (_DWORD)v110 )
                                            {
                                              j = *(unsigned __int64 **)(v6 + 8);
                                              if ( (unsigned __int64)j < i && (unsigned __int64)j + 132 * v110 > v105 )
                                                goto LABEL_424;
                                            }
                                          }
                                          if ( v105 - 104 < v5 && i > v5 )
                                            goto LABEL_424;
                                          goto LABEL_329;
                                        }
                                        v107 = *(_QWORD *)(i + 8);
                                        if ( v107 )
                                        {
                                          i = *(_QWORD *)(i + 8);
                                          for ( m = v107 + 2; i >= (unsigned __int64)v30 && m >= i && m <= v32; m += 2LL )
                                          {
                                            if ( !*(_WORD *)i )
                                            {
                                              i += 2LL;
                                              if ( v6 )
                                              {
                                                v109 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v109 )
                                                {
                                                  j = *(unsigned __int64 **)(v6 + 8);
                                                  if ( (unsigned __int64)j < i
                                                    && (unsigned __int64)j + 132 * v109 > v107 )
                                                  {
                                                    goto LABEL_424;
                                                  }
                                                }
                                              }
                                              if ( v107 - 104 < v5 && i > v5 )
                                                goto LABEL_424;
                                              goto LABEL_321;
                                            }
                                            i += 2LL;
                                          }
                                          goto LABEL_424;
                                        }
LABEL_321:
                                        i = v106;
                                        if ( v106 < (unsigned __int64)v30 )
                                          goto LABEL_424;
                                      }
                                    }
                                  }
                                  else
                                  {
LABEL_329:
                                    v111 = *(_QWORD *)(v5 + 40);
                                    if ( v111 )
                                    {
                                      i = *(_QWORD *)(v5 + 40);
                                      if ( v111 < (unsigned __int64)v30 )
                                        break;
                                      v112 = v111 + 8;
LABEL_332:
                                      if ( v112 < i || v112 > v32 )
                                        break;
                                      v113 = *(_QWORD *)i;
                                      if ( *(_QWORD *)i )
                                      {
                                        j = *(unsigned __int64 **)i;
                                        for ( n = v113 + 2; j >= v30 && n >= (unsigned __int64)j && n <= v32; n += 2LL )
                                        {
                                          if ( !*(_WORD *)j )
                                          {
                                            j = (unsigned __int64 *)((char *)j + 2);
                                            if ( !v6
                                              || (v115 = *(unsigned int *)(v6 + 4), !(_DWORD)v115)
                                              || (v116 = *(_QWORD *)(v6 + 8), v116 >= (unsigned __int64)j)
                                              || v116 + 132 * v115 <= v113 )
                                            {
                                              if ( v113 - 104 >= v5 || (unsigned __int64)j <= v5 )
                                              {
                                                i += 8LL;
                                                v112 += 8LL;
                                                if ( i >= (unsigned __int64)v30 )
                                                  goto LABEL_332;
                                              }
                                            }
                                            goto LABEL_424;
                                          }
                                          j = (unsigned __int64 *)((char *)j + 2);
                                        }
                                        break;
                                      }
                                      i += 8LL;
                                      if ( v6 )
                                      {
                                        v117 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v117 )
                                        {
                                          j = *(unsigned __int64 **)(v6 + 8);
                                          if ( (unsigned __int64)j < i && (unsigned __int64)j + 132 * v117 > v111 )
                                            break;
                                        }
                                      }
                                      if ( v111 - 104 < v5 && i > v5 )
                                        break;
                                    }
                                    v118 = *(_BYTE *)(v5 + 56);
                                    if ( v118 )
                                    {
                                      if ( v6 )
                                      {
                                        i = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)i )
                                        {
                                          j = *(unsigned __int64 **)(v5 + 48);
                                          v119 = *(_QWORD *)(v6 + 8);
                                          if ( v119 < (unsigned __int64)j + 2 * v118
                                            && v119 + 132 * i > (unsigned __int64)j )
                                          {
                                            break;
                                          }
                                        }
                                      }
                                    }
                                    j = *(unsigned __int64 **)(v5 + 64);
                                    if ( j )
                                    {
                                      i = *(_QWORD *)(v5 + 64);
                                      if ( j >= v30 )
                                      {
                                        v120 = (char *)j + 4;
                                        while ( (unsigned __int64)v120 >= i && (unsigned __int64)v120 <= v32 )
                                        {
                                          i += 4LL;
                                          if ( !*((_WORD *)v120 - 1) )
                                          {
                                            if ( v6 )
                                            {
                                              v121 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v121 )
                                              {
                                                v122 = *(_QWORD *)(v6 + 8);
                                                if ( v122 < i && v122 + 132 * v121 > (unsigned __int64)j )
                                                  goto LABEL_424;
                                              }
                                            }
                                            if ( (unsigned __int64)(j - 13) < v5 && i > v5 )
                                              goto LABEL_424;
                                            goto LABEL_374;
                                          }
                                          v120 += 4;
                                          if ( i < (unsigned __int64)v30 )
                                            goto LABEL_424;
                                        }
                                      }
                                    }
                                    else
                                    {
LABEL_374:
                                      j = *(unsigned __int64 **)(v5 + 72);
                                      if ( j )
                                      {
                                        i = *(_QWORD *)(v5 + 72);
                                        if ( j >= v30 )
                                        {
                                          v123 = (char *)j + 4;
                                          while ( (unsigned __int64)v123 >= i && (unsigned __int64)v123 <= v32 )
                                          {
                                            i += 4LL;
                                            if ( !*((_WORD *)v123 - 1) )
                                            {
                                              if ( v6 )
                                              {
                                                v124 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v124 )
                                                {
                                                  v125 = *(_QWORD *)(v6 + 8);
                                                  if ( v125 < i && v125 + 132 * v124 > (unsigned __int64)j )
                                                    goto LABEL_424;
                                                }
                                              }
                                              if ( (unsigned __int64)(j - 13) < v5 && i > v5 )
                                                goto LABEL_424;
                                              goto LABEL_388;
                                            }
                                            v123 += 4;
                                            if ( i < (unsigned __int64)v30 )
                                              goto LABEL_424;
                                          }
                                        }
                                      }
                                      else
                                      {
LABEL_388:
                                        if ( *(_WORD *)(v5 + 82) )
                                        {
                                          i = *(_QWORD *)(v5 + 88);
                                          if ( i )
                                          {
                                            v126 = 0;
                                            if ( i >= (unsigned __int64)v30 )
                                            {
                                              while ( i <= v32 - 6 )
                                              {
                                                if ( !*(_BYTE *)i )
                                                  goto LABEL_412;
                                                if ( *(_BYTE *)(v5 + 84) )
                                                {
                                                  v127 = (__int16 *)(i + 4);
                                                  while ( 1 )
                                                  {
                                                    if ( v126 > 0 )
                                                    {
                                                      v128 = i + 2 * (v126 + 2LL);
                                                      if ( v128 < (unsigned __int64)v30 || v128 > v32 - 2 )
                                                        break;
                                                    }
                                                    v129 = *v127++;
                                                    ++v126;
                                                    if ( v129 == -4096 || v126 >= *(unsigned __int8 *)(v5 + 84) )
                                                      goto LABEL_402;
                                                  }
                                                  *(_QWORD *)(v5 + 88) = 0LL;
                                                }
LABEL_402:
                                                if ( !*(_QWORD *)(v5 + 88) )
                                                  goto LABEL_412;
                                                if ( v126 <= 0
                                                  || (!v6
                                                   || (v130 = *(unsigned int *)(v6 + 4), !(_DWORD)v130)
                                                   || (v131 = *(_QWORD *)(v6 + 8), v131 >= i + 2 * (v126 + 2LL))
                                                   || v131 + 132 * v130 <= i + 4)
                                                  && (i - 100 >= v5 || i + 2 * (v126 + 2LL) <= v5) )
                                                {
                                                  v126 = 0;
                                                  i += *(unsigned __int8 *)(v5 + 85);
                                                  if ( i >= (unsigned __int64)v30 )
                                                    continue;
                                                }
                                                break;
                                              }
                                            }
                                            *(_QWORD *)(v5 + 88) = 0LL;
LABEL_412:
                                            j = *(unsigned __int64 **)(v5 + 88);
                                            if ( j )
                                            {
                                              if ( (i += 6LL, v6)
                                                && (v132 = *(unsigned int *)(v6 + 4), (_DWORD)v132)
                                                && (v133 = *(_QWORD *)(v6 + 8), v133 < i)
                                                && v133 + 132 * v132 > (unsigned __int64)j
                                                || (unsigned __int64)(j - 13) < v5 && i > v5 )
                                              {
                                                *(_QWORD *)(v5 + 88) = 0LL;
                                              }
                                            }
                                          }
                                        }
                                        if ( !v6 )
                                          goto LABEL_129;
                                        v134 = *(unsigned int *)(v6 + 4);
                                        if ( !(_DWORD)v134 )
                                          goto LABEL_129;
                                        i = *(_QWORD *)(v6 + 8);
                                        if ( i - 104 >= v5 || i + 132 * v134 <= v5 )
                                          goto LABEL_129;
                                      }
                                    }
                                  }
                                }
                              }
                              break;
                            }
                            v37 = (unsigned __int64 *)((char *)v37 + 2);
                            v38 = (unsigned __int64 *)((char *)v38 + 2);
                            if ( v37 < v30 )
                              break;
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_424:
              Win32FreePool(v30, i, j);
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
  if ( v137 )
    Win32FreePool(v137, i, j);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}
