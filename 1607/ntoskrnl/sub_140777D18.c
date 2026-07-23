/*
 * XREFs of sub_140777D18 @ 0x140777D18
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14024FE34 @ 0x14024FE34 (sub_14024FE34.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     sub_1401588B8 @ 0x1401588B8 (sub_1401588B8.c)
 *     sub_14015891C @ 0x14015891C (sub_14015891C.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     sub_140251E08 @ 0x140251E08 (sub_140251E08.c)
 *     MmImageSectionPagable @ 0x14047C974 (MmImageSectionPagable.c)
 */

__int64 __fastcall sub_140777D18(__int64 a1, ULONG_PTR a2, char a3)
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
  int v18; // r8d
  unsigned int v19; // r15d
  unsigned int v20; // eax
  _BYTE *v21; // rdi
  int v22; // edx
  unsigned int v23; // eax
  __int64 v24; // r9
  int v25; // r8d
  unsigned __int64 v26; // rcx
  int v27; // ebx
  int v28; // ecx
  int v30; // ecx
  _BYTE *v31; // rsi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 i; // rax
  _QWORD *v36; // rdx
  __int64 v37; // r8
  char *v38; // rcx
  char v39; // al
  __int64 v40; // rbx
  _QWORD *v41; // rax
  unsigned __int64 v42; // rcx
  int v43; // r11d
  _DWORD *v44; // rsi
  int v45; // ecx
  __int16 v46; // ax
  char *v47; // r8
  int v48; // r10d
  signed __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 *v52; // r9
  unsigned int v53; // r8d
  __int64 *v54; // r10
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  char *v59; // r8
  int v60; // r10d
  __int64 v61; // rdx
  __int64 v62; // rax
  char *v63; // r8
  int v64; // r10d
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned int v67; // ecx
  BOOL v68; // r12d
  unsigned int v69; // r15d
  int v70; // eax
  ULONG_PTR v71; // rdx
  unsigned int v72; // r10d
  _BYTE *v73; // rcx
  __int64 v74; // r9
  BOOL v75; // r11d
  ULONG_PTR v76; // rax
  unsigned int v77; // r13d
  _DWORD *v78; // rsi
  int v79; // eax
  int v80; // r11d
  char *v81; // rbx
  int v82; // ecx
  __int16 v83; // ax
  char *v84; // r8
  int v85; // r10d
  signed __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 *v89; // r9
  unsigned int v90; // r8d
  __int64 *v91; // r10
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  char *v96; // r8
  int v97; // r10d
  __int64 v98; // rdx
  __int64 v99; // rax
  char *v100; // r8
  int v101; // r9d
  signed __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rax
  unsigned int v105; // ecx
  int v106; // eax
  bool v107; // zf
  __int64 *v108; // rax
  int v109; // r9d
  unsigned int *v110; // rcx
  ULONG_PTR v111; // r8
  _BYTE *v112; // rax
  __int64 v113; // r8
  __int64 v114; // rsi
  __int64 v115; // rax
  unsigned __int64 v116; // r13
  unsigned int v117; // eax
  __int64 v118; // rbx
  _QWORD *v119; // r11
  _DWORD *v120; // r15
  int v121; // r9d
  _QWORD *v122; // r8
  const char *v123; // rax
  int v124; // r12d
  unsigned __int64 v125; // rdx
  __int64 v126; // rax
  __int64 v127; // rax
  unsigned __int64 j; // rax
  __int64 v129; // rsi
  unsigned __int64 v130; // r13
  char *v131; // r15
  _QWORD *v132; // r11
  __int64 v133; // r13
  _DWORD *v134; // r12
  _DWORD *v135; // r9
  int v136; // r8d
  char *v137; // rcx
  _QWORD *v138; // rdx
  __int64 v139; // r10
  char v140; // al
  int v141; // ecx
  __int64 k; // rcx
  __int64 v143; // rax
  unsigned __int64 v144; // r15
  __int64 v145; // r13
  int v146; // r8d
  unsigned int v147; // eax
  __int64 v148; // rsi
  int v149; // edx
  unsigned int v150; // eax
  __int64 v151; // r9
  int v152; // r8d
  unsigned __int64 v153; // rcx
  int v154; // edi
  int v155; // ecx
  __int64 v156; // rdi
  int v157; // ecx
  _QWORD *v158; // rax
  __int64 v159; // rdx
  _QWORD *v160; // r8
  int v161; // r10d
  const char *v162; // rax
  unsigned __int64 v163; // rdx
  int v164; // r9d
  unsigned __int64 v165; // rax
  __int64 v166; // rax
  unsigned __int64 m; // rax
  unsigned int v168; // [rsp+38h] [rbp-D0h]
  unsigned int v169; // [rsp+38h] [rbp-D0h]
  int v170; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v171; // [rsp+40h] [rbp-C8h]
  int v172; // [rsp+40h] [rbp-C8h]
  _BYTE *v173; // [rsp+48h] [rbp-C0h]
  ULONG_PTR v174; // [rsp+48h] [rbp-C0h]
  int v175; // [rsp+50h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-B0h]
  __int64 v177; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v178; // [rsp+68h] [rbp-A0h]
  __int64 v179; // [rsp+70h] [rbp-98h]
  __int64 v180; // [rsp+78h] [rbp-90h]
  int v181; // [rsp+80h] [rbp-88h]
  int v182; // [rsp+84h] [rbp-84h]
  _BYTE *v183; // [rsp+88h] [rbp-80h]
  __int128 v184; // [rsp+90h] [rbp-78h] BYREF
  __int64 v185; // [rsp+A0h] [rbp-68h]
  char *v186; // [rsp+A8h] [rbp-60h]
  __int64 *v187; // [rsp+B0h] [rbp-58h]
  char *v188; // [rsp+B8h] [rbp-50h]
  char *v189; // [rsp+C0h] [rbp-48h]
  char *v190; // [rsp+C8h] [rbp-40h]
  __int64 *v191; // [rsp+D0h] [rbp-38h]
  char *v192; // [rsp+D8h] [rbp-30h]
  char *v193; // [rsp+E0h] [rbp-28h]
  _BYTE *v194; // [rsp+E8h] [rbp-20h]
  _BYTE *v195; // [rsp+F0h] [rbp-18h]
  __int64 v196; // [rsp+F8h] [rbp-10h]
  __int64 v197; // [rsp+100h] [rbp-8h]
  _BYTE v198[80]; // [rsp+108h] [rbp+0h] BYREF
  int v201; // [rsp+178h] [rbp+70h]
  unsigned int v202; // [rsp+180h] [rbp+78h] BYREF

  v3 = *(_BYTE **)a1;
  BugCheckParameter2 = a2;
  v180 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 480LL))(a2);
  v5 = v180;
  if ( !v180 )
    return 3221225595LL;
  v175 = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 81))(a2);
  v170 = *(unsigned __int16 *)(v180 + 6);
  if ( *(_WORD *)(v180 + 6) && *(_DWORD *)(v180 + 56) >= 0x1000u && (a2 & 0xFFF) == 0 )
  {
    v6 = -1073741275;
    v7 = *((_QWORD *)v3 + 145);
    v8 = *((_QWORD *)v3 + 142) + 16LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*((void (__fastcall **)(__int64))v3 + 39))(v7);
    v10 = 24;
    v11 = v8 + 24LL * **((unsigned int **)v3 + 142);
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
    (*((void (__fastcall **)(_QWORD))v3 + 47))(*((_QWORD *)v3 + 145));
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
    v17 = *((unsigned int *)v3 + 359);
    v18 = *((_DWORD *)v3 + 415);
    v178 = ((a2 & 0xFFF) + 4095 + v16) >> 12;
    v19 = 20 * v178;
    v20 = 20 * v178 + v17 + 48;
    if ( v20 <= *((_DWORD *)v3 + 471) )
    {
      v21 = v3;
      *((_DWORD *)v3 + 359) = v20;
    }
    else
    {
      v21 = (_BYTE *)sub_140251E08(v3, v20, v18);
      if ( !v21 )
        return 3221225626LL;
      v22 = *((_DWORD *)v3 + 438);
      if ( (v22 & 4) == 0 )
      {
        v23 = *((_DWORD *)v3 + 359);
        v24 = *((_QWORD *)v3 + 176);
        v25 = (v22 & 0x20000000) != 0 ? *((_DWORD *)v3 + 415) : 0;
        if ( v23 >= 8 )
        {
          v26 = (unsigned __int64)v23 >> 3;
          do
          {
            *(_QWORD *)v3 = 0LL;
            v23 -= 8;
            v3 += 8;
            --v26;
          }
          while ( v26 );
        }
        for ( ; v23; --v23 )
          *v3++ = 0;
        v27 = *((_DWORD *)v21 + 415);
        *((_DWORD *)v21 + 415) = v25;
        if ( v25 == 3 )
        {
          (*((void (__fastcall **)(__int64))v21 + 105))(v24);
        }
        else
        {
          v28 = 0;
          if ( (*((_DWORD *)v21 + 438) & 0x10000000) == 0 )
            v28 = v25;
          if ( v28 )
            (*((void (__fastcall **)(__int64, _QWORD))v21 + 66))(v24 - 8, *(_QWORD *)(v24 - 8));
          else
            (*((void (__fastcall **)(__int64))v21 + 29))(v24);
        }
        *((_DWORD *)v21 + 415) = v27;
      }
      *((_DWORD *)v21 + 438) &= ~4u;
    }
    ++*((_DWORD *)v21 + 369);
    v30 = 48;
    v31 = &v21[v17];
    v194 = v31;
    v32 = v31;
    v33 = 6LL;
    do
    {
      *v32 = 0LL;
      v30 -= 8;
      ++v32;
      --v33;
    }
    while ( v33 );
    for ( ; v30; --v30 )
    {
      *(_BYTE *)v32 = 0;
      v32 = (_QWORD *)((char *)v32 + 1);
    }
    *(_DWORD *)v31 = (v175 != 0) + 33;
    *((_QWORD *)v31 + 1) = 0LL;
    *((_DWORD *)v31 + 4) = 0;
    v34 = *((_QWORD *)v21 + 186);
    for ( i = v34; ; LODWORD(v34) = i ^ v34 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v36 = v31 + 24;
    v195 = v31;
    *((_DWORD *)v31 + 5) = v34 & 0x7FFFFFFF;
    v37 = 3LL;
    v38 = (char *)&v184;
    *(_QWORD *)a1 = v21;
    do
    {
      v10 -= 8;
      *v36 = *(_QWORD *)v38;
      v38 += 8;
      ++v36;
      --v37;
    }
    while ( v37 );
    for ( ; v10; --v10 )
    {
      v39 = *v38++;
      *(_BYTE *)v36 = v39;
      v36 = (_QWORD *)((char *)v36 + 1);
    }
    LOBYTE(v36) = 1;
    v40 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, unsigned int *))v21 + 59))(
            BugCheckParameter2,
            v36,
            12LL,
            &v202);
    v177 = v40;
    v202 &= -(v40 != 0);
    v201 = a3 & 1;
    if ( !v201 )
    {
      v40 = 0LL;
      v202 = 0;
      v177 = 0LL;
    }
    v183 = v31 + 48;
    v173 = v31 + 48;
    v179 = (__int64)&v31[20 * (unsigned int)v178 + 48];
    v41 = v31 + 48;
    if ( v19 >= 8 )
    {
      v42 = (unsigned __int64)v19 >> 3;
      do
      {
        *v41 = -1LL;
        v19 -= 8;
        ++v41;
        --v42;
      }
      while ( v42 );
    }
    for ( ; v19; --v19 )
    {
      *(_BYTE *)v41 = -1;
      v41 = (_QWORD *)((char *)v41 + 1);
    }
    v43 = 0;
    v44 = (_DWORD *)(*(unsigned __int16 *)(v180 + 20) + v180 + 24);
    v178 = (unsigned __int64)&v44[10 * v170];
    if ( (v44[9] & 0x2000000) != 0
      || (v45 = *v44, *v44 == 1414090313) && v44[1] == 1195525195
      || v45 == 1162297680 && ((v46 = *((_WORD *)v44 + 2), v46 == 30583) || v46 == 29303 || v46 == 30839)
      || v45 == 1095914053 && *((_WORD *)v44 + 2) == 16724 )
    {
LABEL_82:
      v43 = 1;
    }
    else
    {
      v47 = (char *)*((_QWORD *)v21 + 209);
      v48 = 7;
      v187 = (__int64 *)*((_QWORD *)v21 + 210);
      v49 = (char *)v44 - v47;
      v188 = (char *)*((_QWORD *)v21 + 211);
      v189 = (char *)*((_QWORD *)v21 + 212);
      v186 = v47;
      while ( 1 )
      {
        v50 = (unsigned __int8)v47[v49];
        v51 = (unsigned __int8)*v47++;
        if ( v50 != v51 )
          break;
        if ( !--v48 )
        {
LABEL_81:
          v40 = v177;
          goto LABEL_82;
        }
      }
      v52 = v187;
      v53 = 8;
      v54 = (__int64 *)v44;
      while ( 1 )
      {
        v55 = *v54++;
        v56 = *v52++;
        if ( v55 != v56 )
          break;
        v53 -= 8;
        if ( v53 < 8 )
        {
          if ( !v53 )
            goto LABEL_81;
          while ( 1 )
          {
            v57 = *(unsigned __int8 *)v54;
            v54 = (__int64 *)((char *)v54 + 1);
            v58 = *(unsigned __int8 *)v52;
            v52 = (__int64 *)((char *)v52 + 1);
            if ( v57 != v58 )
              goto LABEL_74;
            if ( !--v53 )
              goto LABEL_81;
          }
        }
      }
LABEL_74:
      v59 = v188;
      v60 = 4;
      while ( 1 )
      {
        v61 = (unsigned __int8)v59[(char *)v44 - v188];
        v62 = (unsigned __int8)*v59++;
        if ( v61 != v62 )
          break;
        if ( !--v60 )
          goto LABEL_81;
      }
      v63 = v189;
      v64 = 6;
      while ( 1 )
      {
        v65 = (unsigned __int8)v63[(char *)v44 - v189];
        v66 = (unsigned __int8)*v63++;
        if ( v65 != v66 )
          break;
        if ( !--v64 )
          goto LABEL_81;
      }
      v40 = v177;
    }
    if ( (int)v44[9] < 0 )
      v43 = 1;
    if ( v43 && *v44 == 1414090313 && v44[1] == 1195525195 && (*((_DWORD *)v21 + 438) & 0x10000000) != 0 )
      v43 = 0;
    v67 = v44[2];
    v68 = v43 == 0;
    v168 = v44[3];
    if ( v44[4] > v67 )
      v67 = v44[4];
    v69 = (v67 + v44[3] + 4095) & 0xFFFFF000;
    v70 = MmImageSectionPagable((__int64)v44);
    v71 = BugCheckParameter2;
    v72 = 0;
    v73 = v173;
    v74 = v179;
    v75 = v70 != 0;
    v171 = BugCheckParameter2;
    v76 = BugCheckParameter2;
    v77 = 0;
    if ( v173 != (_BYTE *)v179 )
    {
      v78 = v44 + 1;
      while ( 1 )
      {
        if ( v77 < v168 )
        {
LABEL_138:
          v108 = &v177;
          v109 = 0;
          v110 = &v202;
          while ( 1 )
          {
            v111 = *v108;
            if ( *v110 )
            {
              if ( v171 >= v111 && v171 <= v111 + *v110 - 1LL )
                break;
            }
            ++v109;
            ++v110;
            ++v108;
            if ( v109 )
            {
              if ( v77 >= v168 && v75 )
              {
                v112 = v173;
              }
              else
              {
                v112 = v173;
                *((_DWORD *)v173 + 4) &= ~0x80000000;
              }
              v112[15] &= ~0x80u;
              break;
            }
          }
          v73 = v173;
          v76 = v171;
          v74 = v179;
          goto LABEL_151;
        }
        if ( v77 >= v69 )
        {
          if ( v78 - 1 == (_DWORD *)v178 )
          {
            if ( (*((_DWORD *)v21 + 438) & 0x200000) == 0 )
            {
              v181 = 649216;
              KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, BugCheckParameter2, 5uLL, 0LL);
            }
            if ( !*((_DWORD *)v21 + 404) )
            {
              *((_QWORD *)v21 + 204) = 0LL;
              *((_QWORD *)v21 + 205) = 271LL;
              *((_QWORD *)v21 + 203) = v21 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v21 + 206) = BugCheckParameter2;
              *((_DWORD *)v21 + 404) = 1;
            }
            return 3221225595LL;
          }
          if ( v78[12] < v77 )
          {
            v76 = v171;
            goto LABEL_151;
          }
          v79 = v78[18];
          v78 += 10;
          v80 = 0;
          if ( (v79 & 0x2000000) != 0
            || (v81 = (char *)(v78 - 1), v82 = *(v78 - 1), v82 == 1414090313) && *v78 == 1195525195
            || v82 == 1162297680 && ((v83 = *(_WORD *)v78, *(_WORD *)v78 == 30583) || v83 == 29303 || v83 == 30839)
            || v82 == 1095914053 && *(_WORD *)v78 == 16724 )
          {
            v80 = 1;
          }
          else
          {
            v84 = (char *)*((_QWORD *)v21 + 209);
            v85 = 7;
            v191 = (__int64 *)*((_QWORD *)v21 + 210);
            v86 = v81 - v84;
            v192 = (char *)*((_QWORD *)v21 + 211);
            v193 = (char *)*((_QWORD *)v21 + 212);
            v190 = v84;
            while ( 1 )
            {
              v87 = (unsigned __int8)v84[v86];
              v88 = (unsigned __int8)*v84++;
              if ( v87 != v88 )
                break;
              if ( !--v85 )
              {
LABEL_126:
                v80 = 1;
                goto LABEL_127;
              }
            }
            v89 = v191;
            v90 = 8;
            v91 = (__int64 *)(v78 - 1);
            while ( 1 )
            {
              v92 = *v91++;
              v93 = *v89++;
              if ( v92 != v93 )
                break;
              v90 -= 8;
              if ( v90 < 8 )
              {
                if ( !v90 )
                  goto LABEL_126;
                while ( 1 )
                {
                  v94 = *(unsigned __int8 *)v91;
                  v91 = (__int64 *)((char *)v91 + 1);
                  v95 = *(unsigned __int8 *)v89;
                  v89 = (__int64 *)((char *)v89 + 1);
                  if ( v94 != v95 )
                    goto LABEL_119;
                  if ( !--v90 )
                    goto LABEL_126;
                }
              }
            }
LABEL_119:
            v96 = v192;
            v97 = 4;
            while ( 1 )
            {
              v98 = (unsigned __int8)v96[v81 - v192];
              v99 = (unsigned __int8)*v96++;
              if ( v98 != v99 )
                break;
              if ( !--v97 )
                goto LABEL_126;
            }
            v100 = v193;
            v101 = 6;
            v102 = v81 - v193;
            while ( 1 )
            {
              v103 = (unsigned __int8)v100[v102];
              v104 = (unsigned __int8)*v100++;
              if ( v103 != v104 )
                break;
              if ( !--v101 )
                goto LABEL_126;
            }
          }
LABEL_127:
          if ( (int)v78[8] < 0 )
            v80 = 1;
          if ( v80 && *(v78 - 1) == 1414090313 && *v78 == 1195525195 && (*((_DWORD *)v21 + 438) & 0x10000000) != 0 )
            v80 = 0;
          v105 = v78[1];
          v68 = v80 == 0;
          if ( v78[3] > v105 )
            v105 = v78[3];
          v69 = (v105 + 4095 + v78[2]) & 0xFFFFF000;
          v106 = MmImageSectionPagable((__int64)(v78 - 1));
          v73 = v173;
          v74 = v179;
          v107 = v106 == 0;
          v76 = v171;
          v75 = !v107;
        }
        if ( v68 )
          goto LABEL_138;
LABEL_151:
        v76 += 4096LL;
        v73 += 20;
        v77 += 4096;
        v171 = v76;
        v72 = 0;
        v173 = v73;
        if ( v73 == (_BYTE *)v74 )
        {
          v40 = v177;
          v71 = BugCheckParameter2;
          break;
        }
      }
    }
    v113 = (__int64)v183;
    if ( v183 != (_BYTE *)v74 )
    {
      do
      {
        LODWORD(v114) = 0;
        if ( v113 != v74 )
        {
          v115 = v113;
          do
          {
            if ( *(char *)(v115 + 15) < 0 )
              break;
            v114 = (unsigned int)(v114 + 1);
            v115 = v113 + 20 * v114;
          }
          while ( v115 != v74 );
          v172 = v114;
          if ( (_DWORD)v114 )
          {
            v116 = *((_QWORD *)v21 + 241);
            v117 = v114;
            v169 = v114;
            v178 = v116;
            v180 = v113;
            v174 = v71;
            do
            {
              v118 = 8LL;
              if ( v117 < 8 )
                v118 = v117;
              v119 = (_QWORD *)v116;
              v120 = v198;
              do
              {
                v121 = 4096;
                v119[1] = 4096LL;
                v122 = (_QWORD *)(v174 + (v72 << 12));
                *v119 = v122;
                v123 = (const char *)v122;
                *((_DWORD *)v21 + 376) += 4096;
                v124 = *((_DWORD *)v21 + 371);
                v125 = *((_QWORD *)v21 + 186);
                if ( v122 < v122 + 512 )
                {
                  do
                  {
                    _mm_prefetch(v123, 0);
                    v123 += 64;
                  }
                  while ( v123 < (const char *)v122 + 4096 );
                }
                v126 = 512LL;
                do
                {
                  v125 = __ROL8__(*v122++ ^ v125, v124);
                  v121 -= 8;
                  --v126;
                }
                while ( v126 );
                for ( ; v121; --v121 )
                {
                  v127 = *(unsigned __int8 *)v122;
                  v122 = (_QWORD *)((char *)v122 + 1);
                  v125 = __ROL8__(v127 ^ v125, v124);
                }
                for ( j = v125; ; LODWORD(v125) = j ^ v125 )
                {
                  j >>= 31;
                  if ( !j )
                    break;
                }
                ++v72;
                *v120 = v125 & 0x7FFFFFFF;
                v119 += 6;
                ++v120;
              }
              while ( v72 < (unsigned int)v118 );
              v129 = v180;
              v130 = v178;
              sub_14015891C((__int64)v21, v178, v118);
              v131 = (char *)(v130 + 16);
              v132 = (_QWORD *)v129;
              v133 = (unsigned int)v118;
              v134 = v198;
              v135 = (_DWORD *)(v129 + 16);
              do
              {
                v136 = 16;
                v137 = v131;
                v138 = v132;
                v139 = 2LL;
                do
                {
                  v136 -= 8;
                  *v138 = *(_QWORD *)v137;
                  v137 += 8;
                  ++v138;
                  --v139;
                }
                while ( v139 );
                for ( ; v136; --v136 )
                {
                  v140 = *v137++;
                  *(_BYTE *)v138 = v140;
                  v138 = (_QWORD *)((char *)v138 + 1);
                }
                v131 += 48;
                v132 = (_QWORD *)((char *)v132 + 20);
                v141 = (*v135 ^ *v134++) & 0x7FFFFFFF;
                *v135 ^= v141;
                v135 += 5;
                --v133;
              }
              while ( v133 );
              v72 = 0;
              v116 = v178;
              v174 += (unsigned int)((_DWORD)v118 << 12);
              v117 = v169 - v118;
              v180 += 20 * v118;
              *((_DWORD *)v21 + 376) += (_DWORD)v118 << 15;
              v169 = v117;
            }
            while ( v117 );
            LODWORD(v114) = v172;
            v113 = (__int64)v183;
            v74 = v179;
          }
        }
        for ( k = 5LL * (unsigned int)v114; ; k = 5 * v114 )
        {
          v143 = v113 + 4 * k;
          if ( v143 == v74 || *(char *)(v143 + 15) >= 0 )
            break;
          v114 = (unsigned int)(v114 + 1);
        }
        v71 = (unsigned int)((_DWORD)v114 << 12) + BugCheckParameter2;
        BugCheckParameter2 = v71;
        v113 += 20LL * (unsigned int)v114;
        v183 = (_BYTE *)v113;
      }
      while ( v113 != v74 );
      v40 = v177;
    }
    if ( !v201 )
      return 0LL;
    v144 = v202;
    if ( !v202 )
      return 0LL;
    v145 = *((unsigned int *)v21 + 359);
    v146 = *((_DWORD *)v21 + 415);
    v196 = 0LL;
    v147 = v145 + 48;
    if ( (unsigned int)(v145 + 48) <= *((_DWORD *)v21 + 471) )
    {
      v148 = (__int64)v21;
      *((_DWORD *)v21 + 359) = v147;
LABEL_210:
      ++*(_DWORD *)(v148 + 1476);
      v156 = v148 + v145;
      v157 = 48;
      v197 = v148 + v145;
      v158 = (_QWORD *)(v148 + v145);
      v159 = 6LL;
      do
      {
        *v158 = 0LL;
        v157 -= 8;
        ++v158;
        --v159;
      }
      while ( v159 );
      for ( ; v157; --v157 )
      {
        *(_BYTE *)v158 = 0;
        v158 = (_QWORD *)((char *)v158 + 1);
      }
      *(_DWORD *)v156 = (v175 != 0) + 13;
      *(_QWORD *)(v156 + 8) = v40;
      if ( (v175 != 0) == 19 && (_DWORD)v144 )
        sub_1401588B8(v148, v40, v144, v156 + 24);
      *(_DWORD *)(v156 + 16) = v144;
      *(_DWORD *)(v148 + 1504) += v144;
      v160 = (_QWORD *)v40;
      v161 = *(_DWORD *)(v148 + 1484);
      v162 = (const char *)v40;
      v163 = *(_QWORD *)(v148 + 1488);
      if ( v40 < v40 + v144 )
      {
        do
        {
          _mm_prefetch(v162, 0);
          v162 += 64;
        }
        while ( (unsigned __int64)v162 < v40 + v144 );
      }
      v164 = v144;
      if ( (unsigned int)v144 >= 8 )
      {
        v165 = v144 >> 3;
        do
        {
          v163 = __ROL8__(*v160++ ^ v163, v161);
          v164 -= 8;
          --v165;
        }
        while ( v165 );
      }
      for ( ; v164; --v164 )
      {
        v166 = *(unsigned __int8 *)v160;
        v160 = (_QWORD *)((char *)v160 + 1);
        v163 = __ROL8__(v166 ^ v163, v161);
      }
      for ( m = v163; ; LODWORD(v163) = m ^ v163 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      *(_DWORD *)(v156 + 20) = v163 & 0x7FFFFFFF;
      *(_DWORD *)(v148 + 1504) += v144;
      if ( (*(_DWORD *)(v148 + 1752) & 0x40000000) != 0 )
      {
        if ( (_DWORD)v144 )
          sub_1401588B8(v148, v40, v144, v156 + 28);
      }
      *(_DWORD *)(v156 + 24) = 1;
      *(_QWORD *)a1 = v148;
      return 0LL;
    }
    v148 = sub_140251E08(v21, v147, v146);
    if ( v148 )
    {
      v149 = *((_DWORD *)v21 + 438);
      if ( (v149 & 4) == 0 )
      {
        v150 = *((_DWORD *)v21 + 359);
        v151 = *((_QWORD *)v21 + 176);
        v152 = (v149 & 0x20000000) != 0 ? *((_DWORD *)v21 + 415) : 0;
        if ( v150 >= 8 )
        {
          v153 = (unsigned __int64)v150 >> 3;
          do
          {
            *(_QWORD *)v21 = 0LL;
            v150 -= 8;
            v21 += 8;
            --v153;
          }
          while ( v153 );
        }
        for ( ; v150; --v150 )
          *v21++ = 0;
        v154 = *(_DWORD *)(v148 + 1660);
        *(_DWORD *)(v148 + 1660) = v152;
        if ( v152 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v148 + 840))(v151);
        }
        else
        {
          v155 = 0;
          if ( (*(_DWORD *)(v148 + 1752) & 0x10000000) == 0 )
            v155 = v152;
          if ( v155 )
            (*(void (__fastcall **)(__int64, _QWORD))(v148 + 528))(v151 - 8, *(_QWORD *)(v151 - 8));
          else
            (*(void (__fastcall **)(__int64))(v148 + 232))(v151);
        }
        *(_DWORD *)(v148 + 1660) = v154;
      }
      *(_DWORD *)(v148 + 1752) &= ~4u;
      goto LABEL_210;
    }
    return 3221225626LL;
  }
  if ( (*((_DWORD *)v3 + 438) & 0x200000) == 0 )
  {
    v182 = 649216;
    KeBugCheckEx(__ROR4__(649216, 11), 0xAuLL, a2, 4uLL, 0LL);
  }
  if ( !*((_DWORD *)v3 + 404) )
  {
    *((_QWORD *)v3 + 204) = 0LL;
    *((_QWORD *)v3 + 205) = 271LL;
    *((_QWORD *)v3 + 203) = v3 - 0x5C5FC0A76E374B18LL;
    *((_QWORD *)v3 + 206) = a2;
    *((_DWORD *)v3 + 404) = 1;
  }
  return 3221225595LL;
}
