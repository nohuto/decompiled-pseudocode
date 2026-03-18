/*
 * XREFs of fsg_CheckOutlineOrientation @ 0x1C00C5A70
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     Misoriented @ 0x1C00C65A0 (Misoriented.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall fsg_CheckOutlineOrientation(__int64 a1)
{
  __int64 v1; // r9
  int v2; // r14d
  __int64 v3; // rcx
  __int16 v4; // r8
  __int16 v5; // cx
  int v6; // edi
  signed int v7; // esi
  int v8; // r12d
  signed int v9; // r15d
  __int16 v10; // r10
  __int64 v11; // r13
  __int64 v12; // r14
  int v13; // edx
  __int64 v14; // rbx
  int v15; // r11d
  int v16; // ecx
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r10d
  __int64 v21; // r8
  int v22; // r11d
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  int v26; // r10d
  int v27; // eax
  int v28; // r11d
  int v29; // r9d
  int v30; // edx
  int v31; // ecx
  unsigned __int16 v32; // si
  unsigned __int16 v33; // bx
  int v34; // edi
  __int16 v35; // cx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rax
  __int16 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // r9
  __int16 v47; // cx
  __int64 v48; // rax
  __int64 v49; // r8
  int v50; // eax
  __int16 v51; // ax
  __int64 v52; // rcx
  int v53; // r9d
  int v54; // r13d
  __int64 v55; // rax
  int v56; // edx
  int v57; // ecx
  int v58; // ecx
  int v59; // r9d
  int v60; // r13d
  int v61; // r8d
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r13
  __int64 v66; // rcx
  __int16 v67; // r8
  __int16 v68; // ax
  int v69; // r11d
  int v70; // r9d
  int v71; // ebx
  int v72; // ecx
  int v73; // ecx
  int v74; // ebx
  int v75; // edx
  int v76; // r11d
  int v77; // ecx
  int v78; // eax
  int v79; // r13d
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // r9
  __int64 v83; // r13
  __int64 v84; // rax
  __int64 v85; // rcx
  __int16 v86; // r8
  __int16 v87; // ax
  int v88; // r9d
  int v89; // edx
  __int64 v90; // rax
  int v91; // r8d
  int v92; // r8d
  int v93; // edx
  int v94; // eax
  __int64 v95; // r9
  __int64 v96; // r8
  __int64 v97; // r13
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int16 v102; // ax
  __int16 v103; // dx
  __int64 v104; // rcx
  int v105; // r13d
  int v106; // r8d
  __int64 v107; // rax
  int v108; // ecx
  int v109; // edx
  int v110; // edx
  int v111; // ecx
  int v112; // ecx
  int v113; // eax
  __int64 v114; // r8
  __int64 v115; // rcx
  __int64 v116; // r9
  __int64 v117; // rcx
  int v118; // eax
  int v119; // eax
  __int16 v120; // [rsp+30h] [rbp-59h]
  __int16 v121; // [rsp+34h] [rbp-55h]
  int v122; // [rsp+34h] [rbp-55h]
  int v123; // [rsp+34h] [rbp-55h]
  int v124; // [rsp+34h] [rbp-55h]
  int v125; // [rsp+34h] [rbp-55h]
  int v126; // [rsp+34h] [rbp-55h]
  __int16 v127; // [rsp+38h] [rbp-51h]
  int v128; // [rsp+3Ch] [rbp-4Dh]
  int v129; // [rsp+3Ch] [rbp-4Dh]
  int v130; // [rsp+3Ch] [rbp-4Dh]
  int v131; // [rsp+3Ch] [rbp-4Dh]
  int v132; // [rsp+3Ch] [rbp-4Dh]
  int v133; // [rsp+40h] [rbp-49h]
  int v134; // [rsp+40h] [rbp-49h]
  int v135; // [rsp+40h] [rbp-49h]
  int v136; // [rsp+40h] [rbp-49h]
  __int16 v137; // [rsp+44h] [rbp-45h]
  int v138; // [rsp+48h] [rbp-41h]
  int v139; // [rsp+48h] [rbp-41h]
  int v140; // [rsp+50h] [rbp-39h]
  int v141; // [rsp+50h] [rbp-39h]
  int v142; // [rsp+50h] [rbp-39h]
  int v143; // [rsp+50h] [rbp-39h]
  __int64 v144; // [rsp+50h] [rbp-39h]
  int v145; // [rsp+50h] [rbp-39h]
  __int64 v146; // [rsp+58h] [rbp-31h]
  __int64 v147; // [rsp+58h] [rbp-31h]
  __int16 v148; // [rsp+60h] [rbp-29h]
  __int16 v149; // [rsp+62h] [rbp-27h]
  __int16 v150; // [rsp+64h] [rbp-25h]
  __int16 v152; // [rsp+70h] [rbp-19h]
  __int64 v153; // [rsp+78h] [rbp-11h]
  int v154; // [rsp+80h] [rbp-9h]
  int v155; // [rsp+84h] [rbp-5h]
  __int64 v156; // [rsp+88h] [rbp-1h]
  _DWORD v157[2]; // [rsp+90h] [rbp+7h]
  int v158; // [rsp+98h] [rbp+Fh]
  int v159; // [rsp+9Ch] [rbp+13h]
  int v160; // [rsp+A0h] [rbp+17h]
  int v161; // [rsp+A4h] [rbp+1Bh]
  int v162; // [rsp+A8h] [rbp+1Fh]
  int v163; // [rsp+ACh] [rbp+23h]
  __int16 v164; // [rsp+B0h] [rbp+27h]
  __int16 v165; // [rsp+B2h] [rbp+29h]
  __int16 v166; // [rsp+B4h] [rbp+2Bh]
  __int16 v167; // [rsp+B6h] [rbp+2Dh]

  v1 = a1;
  v2 = 0;
  v154 = 0;
  if ( *(__int16 *)(a1 + 80) <= 0 )
    return;
  v3 = 0LL;
  v156 = 0LL;
  do
  {
    *(_BYTE *)(v3 + *(_QWORD *)(v1 + 88)) = 0;
    v4 = *(_WORD *)(*(_QWORD *)(v1 + 56) + 2 * v3);
    v120 = v4;
    v127 = *(_WORD *)(*(_QWORD *)(v1 + 64) + 2 * v3);
    v152 = v127 - v4 + 1;
    if ( v152 <= 2 )
      goto LABEL_33;
    v137 = -1;
    v5 = -1;
    v166 = -1;
    v150 = -1;
    v164 = -1;
    v6 = 0x7FFFFFFF;
    v149 = -1;
    v7 = 0x80000000;
    v165 = -1;
    v148 = -1;
    v8 = 0x7FFFFFFF;
    v167 = -1;
    v9 = 0x80000000;
    v10 = 0;
    v11 = *(_QWORD *)(v1 + 40);
    v12 = *(_QWORD *)(v1 + 32);
    v13 = v4;
    v153 = v11;
    v155 = v4;
    do
    {
      v14 = v13 + v10;
      v15 = *(_DWORD *)(v12 + 4 * v14);
      if ( v15 < v8
        || v15 == v8
        && ((v100 = v5, v101 = *(_QWORD *)(v1 + 48), !*(_BYTE *)(v101 + v100))
         || *(_BYTE *)(v101 + v14)
         && *(_DWORD *)(*(_QWORD *)(v1 + 40) + 4 * v14) < *(_DWORD *)(*(_QWORD *)(v1 + 40) + 4 * v100)) )
      {
        v35 = v4 + v10;
        v36 = *(_QWORD *)(v1 + 48);
        v150 = v35;
        v164 = v35;
        v37 = 4LL * v35;
        v8 = *(_DWORD *)(v37 + v12);
        if ( *(_BYTE *)(v36 + v35) )
        {
          v157[0] = 2 * v8;
          LODWORD(v38) = 2 * *(_DWORD *)(v37 + v11);
        }
        else
        {
          v51 = v120;
          if ( v35 == v120 )
          {
            v121 = v127;
          }
          else
          {
            v121 = v35 - 1;
            v51 = v120;
          }
          if ( v35 != v127 )
            v51 = v35 + 1;
          v140 = *(_BYTE *)(v36 + v51) & 1;
          v52 = *(_QWORD *)(v1 + 40);
          v53 = *(_DWORD *)(v12 + 4LL * v51);
          v54 = *(_DWORD *)(v52 + 4LL * v51);
          v55 = v121;
          v56 = *(_DWORD *)(v52 + v37);
          v122 = *(_DWORD *)(v52 + 4LL * v121);
          v57 = *(_DWORD *)(v12 + 4 * v55);
          if ( (*(_BYTE *)(v36 + v55) & 1) != 0 )
          {
            v58 = 2 * v57;
            v123 = 2 * v122;
          }
          else
          {
            v58 = v8 + v57;
            v123 = v56 + v122;
          }
          v138 = v58;
          if ( v140 )
          {
            v59 = 2 * v53;
            v60 = 2 * v54;
          }
          else
          {
            v59 = v8 + v53;
            v60 = v56 + v54;
          }
          v128 = v60;
          v133 = 2 * v56;
          v61 = 2 * v8;
          v62 = v59 + v58 - 4 * v8;
          if ( v62 )
          {
            v63 = v58 - v61;
            v64 = v59 - v61;
            v65 = v62 * (__int64)v62;
            v66 = v63 * v63 * v128 + v64 * (v64 * v123 + v63 * 2 * v133);
            v157[0] = (v64 * v64 * v138 + v63 * v64 * 4 * v8 + v63 * v63 * v59) / v65;
            if ( v66 < 0 )
            {
              v1 = a1;
              v118 = (v65 - v66) / v65;
              v11 = v153;
              LODWORD(v38) = -v118;
              goto LABEL_37;
            }
            v38 = (v66 + v65) / v65;
          }
          else
          {
            LODWORD(v38) = 2 * v56;
            v157[0] = 2 * v8;
          }
          v1 = a1;
          v11 = v153;
        }
LABEL_37:
        v4 = v120;
        v157[1] = v38;
      }
      if ( v15 > v7
        || v15 == v7
        && ((v117 = *(_QWORD *)(v1 + 48), !*(_BYTE *)(v117 + v149))
         || *(_BYTE *)(v117 + v14)
         && *(_DWORD *)(*(_QWORD *)(v1 + 40) + 4 * v14) > *(_DWORD *)(*(_QWORD *)(v1 + 40) + 4LL * v149)) )
      {
        v46 = *(_QWORD *)(v1 + 48);
        v47 = v4 + v10;
        v48 = (__int16)(v4 + v10);
        v149 = v4 + v10;
        v165 = v4 + v10;
        v49 = 4 * v48;
        v7 = *(_DWORD *)(4 * v48 + v12);
        if ( *(_BYTE *)(v46 + v48) )
        {
          v158 = 2 * v7;
          v50 = 2 * *(_DWORD *)(v49 + v11);
LABEL_45:
          v159 = v50;
          goto LABEL_9;
        }
        v102 = v120;
        if ( v47 == v120 )
          v103 = v127;
        else
          v103 = v47 - 1;
        if ( v47 != v127 )
          v102 = v47 + 1;
        v145 = *(_BYTE *)(v46 + v102) & 1;
        v104 = *(_QWORD *)(a1 + 40);
        v105 = *(_DWORD *)(v104 + 4LL * v102);
        v106 = *(_DWORD *)(v104 + v49);
        v131 = *(_DWORD *)(v12 + 4LL * v102);
        v107 = v103;
        v108 = *(_DWORD *)(v104 + 4LL * v103);
        v109 = *(_DWORD *)(v12 + 4LL * v103);
        if ( (*(_BYTE *)(v46 + v107) & 1) != 0 )
        {
          v110 = 2 * v109;
          v111 = 2 * v108;
        }
        else
        {
          v110 = v7 + v109;
          v111 = v106 + v108;
        }
        v136 = v111;
        if ( v145 )
        {
          v112 = 2 * v131;
          v126 = 2 * v105;
        }
        else
        {
          v112 = v7 + v131;
          v126 = v106 + v105;
        }
        v11 = v153;
        v132 = v112;
        v139 = 2 * v106;
        v113 = v112 + v110 - 4 * v7;
        if ( !v113 )
        {
          v158 = 2 * v7;
          v50 = 2 * v106;
          goto LABEL_45;
        }
        v114 = v110 - 2 * v7;
        v115 = v112 - 2 * v7;
        v116 = v113 * (__int64)v113;
        v147 = v114 * v114 * v126 + v115 * (v115 * v136 + v114 * 2 * v139);
        v158 = (v114 * v114 * v132 - 1 + v116 + v115 * (v115 * v110 + v114 * 4 * v7)) / v116;
        if ( v147 < 0 )
          v159 = -(int)((v116 - v147) / v116);
        else
          v159 = (v147 + v116) / v116;
      }
LABEL_9:
      v16 = *(_DWORD *)(v11 + 4 * v14);
      if ( v16 < v6
        || v16 == v6
        && ((v99 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v99 + v137))
         || *(_BYTE *)(v99 + v14) && v15 > *(_DWORD *)(v12 + 4LL * v137)) )
      {
        v43 = *(_QWORD *)(a1 + 48);
        v137 = v120 + v10;
        v166 = v120 + v10;
        v44 = (__int16)(v120 + v10);
        v146 = v43;
        v45 = 4 * v44;
        v6 = *(_DWORD *)(4 * v44 + v11);
        if ( *(_BYTE *)(v43 + v44) )
        {
          v160 = 2 * *(_DWORD *)(v12 + 4 * v44);
          v161 = 2 * v6;
        }
        else
        {
          if ( v137 == v120 )
            v86 = v127;
          else
            v86 = v137 - 1;
          if ( v137 == v127 )
            v87 = v120;
          else
            v87 = v137 + 1;
          v88 = *(_DWORD *)(v12 + v45);
          v142 = *(_BYTE *)(v43 + v87) & 1;
          v89 = *(_DWORD *)(v11 + 4LL * v87);
          v124 = *(_DWORD *)(v12 + 4LL * v87);
          v90 = v86;
          v91 = *(_DWORD *)(v11 + 4LL * v86);
          v129 = *(_DWORD *)(v12 + 4 * v90);
          if ( (*(_BYTE *)(v90 + v146) & 1) != 0 )
          {
            v130 = 2 * v129;
            v92 = 2 * v91;
          }
          else
          {
            v130 = v88 + v129;
            v92 = v6 + v91;
          }
          v135 = v92;
          if ( v142 )
          {
            v125 = 2 * v124;
            v93 = 2 * v89;
          }
          else
          {
            v125 = v88 + v124;
            v93 = v6 + v89;
          }
          v143 = 2 * v88;
          v94 = v93 + v92 - 4 * v6;
          if ( v94 )
          {
            v95 = v92 - 2 * v6;
            v96 = v93 - 2 * v6;
            v97 = v94 * (__int64)v94;
            v144 = v95 * v95 * v125 + v96 * (v96 * v130 + v95 * 2 * v143);
            v161 = (v95 * v95 * v93 + v96 * (v95 * 4 * v6 + v96 * v135)) / v97;
            if ( v144 < 0 )
            {
              v119 = (v97 - v144) / v97;
              v11 = v153;
              v160 = -v119;
              goto LABEL_11;
            }
            v98 = (v144 + v97) / v97;
          }
          else
          {
            LODWORD(v98) = 2 * v88;
            v161 = 2 * v6;
          }
          v11 = v153;
          v160 = v98;
        }
      }
LABEL_11:
      if ( v16 > v9
        || v16 == v9
        && ((v85 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v85 + v148))
         || *(_BYTE *)(v85 + v14) && v15 < *(_DWORD *)(v12 + 4LL * v148)) )
      {
        v39 = v120 + v10;
        v40 = *(_QWORD *)(a1 + 48);
        v41 = (__int16)(v120 + v10);
        v148 = v120 + v10;
        v167 = v120 + v10;
        v42 = 4 * v41;
        v9 = *(_DWORD *)(4 * v41 + v11);
        if ( *(_BYTE *)(v40 + v41) )
        {
          v162 = 2 * *(_DWORD *)(v12 + 4 * v41);
          v163 = 2 * v9;
        }
        else
        {
          if ( v39 == v120 )
            v67 = v127;
          else
            v67 = v39 - 1;
          if ( v39 == v127 )
            v68 = v120;
          else
            v68 = v39 + 1;
          v69 = *(_DWORD *)(v11 + 4LL * v68);
          v141 = *(_DWORD *)(v12 + 4LL * v68);
          v70 = *(_DWORD *)(v12 + v42);
          v71 = *(_DWORD *)(v11 + 4LL * v67);
          v72 = *(_DWORD *)(v12 + 4LL * v67);
          if ( (*(_BYTE *)(v40 + v67) & 1) != 0 )
          {
            v73 = 2 * v72;
            v74 = 2 * v71;
          }
          else
          {
            v73 = v70 + v72;
            v74 = v9 + v71;
          }
          v134 = v73;
          if ( (*(_BYTE *)(v40 + v68) & 1) != 0 )
          {
            v75 = 2 * v141;
            v76 = 2 * v69;
          }
          else
          {
            v75 = v70 + v141;
            v76 = v9 + v69;
          }
          v77 = 2 * v9;
          v78 = v76 + v74 - 4 * v9;
          v79 = 2 * v70;
          if ( v78 )
          {
            v80 = v74 - v77;
            v81 = v76 - v77;
            v82 = v78 * (__int64)v78;
            v83 = v80 * v80 * v75 + v81 * (v81 * v134 + v80 * 2 * v79);
            v163 = (v80 * v80 * v76 + v82 + v81 * (v81 * v74 + v80 * 4 * v9) - 1) / v82;
            if ( v83 < 0 )
              LODWORD(v84) = -(int)((v82 - v83) / v82);
            else
              v84 = (v82 + v83) / v82;
            v162 = v84;
          }
          else
          {
            v162 = 2 * v70;
            v163 = 2 * v9;
          }
        }
      }
      v11 = v153;
      ++v10;
      v5 = v150;
      v1 = a1;
      v13 = v155;
      v4 = v120;
    }
    while ( v10 < v152 );
    v17 = *(_QWORD *)(a1 + 32);
    v18 = *(_DWORD *)(v17 + 4LL * v150);
    v19 = 4LL * v149;
    v20 = *(_DWORD *)(v19 + v17) - v18;
    if ( v20 < 0 )
      v20 = v18 - *(_DWORD *)(v19 + v17);
    v21 = *(_QWORD *)(a1 + 40);
    v22 = *(_DWORD *)(v19 + v21);
    v23 = *(_DWORD *)(v21 + 4LL * v150);
    v24 = v22 - v23;
    if ( v22 - v23 < 0 )
      v24 = v23 - v22;
    v25 = v24 + v20;
    v26 = *(_DWORD *)(v17 + 4LL * v137) - v18;
    if ( v26 < 0 )
      v26 = v18 - *(_DWORD *)(v17 + 4LL * v137);
    v27 = *(_DWORD *)(v21 + 4LL * v137) - v23;
    if ( v27 < 0 )
      v27 = v23 - *(_DWORD *)(v21 + 4LL * v137);
    v28 = v26 + v27;
    v29 = *(_DWORD *)(v17 + 4LL * v148);
    if ( v29 - v18 < 0 )
      v30 = v18 - v29;
    else
      v30 = v29 - v18;
    if ( *(_DWORD *)(v21 + 4LL * v148) - v23 < 0 )
      v31 = v23 - *(_DWORD *)(v21 + 4LL * v148);
    else
      v31 = *(_DWORD *)(v21 + 4LL * v148) - v23;
    if ( v28 > v31 + v30 )
    {
      v33 = 2;
      if ( v31 + v30 > v25 )
        v32 = 3;
      else
        v32 = 1;
    }
    else
    {
      v32 = 1;
      v33 = 3;
      if ( v28 > v25 )
        v32 = 2;
    }
    v2 = v154;
    v34 = Misoriented(v154, 0, (unsigned __int16)v150, v157[0], a1);
    if ( v34 != (unsigned int)Misoriented(v154, v33, (unsigned __int16)*(&v164 + v33), *(_QWORD *)&v157[2 * v33], a1) )
      v34 = Misoriented(v154, v32, (unsigned __int16)*(&v164 + v32), *(_QWORD *)&v157[2 * v32], a1);
    v3 = v156;
    v1 = a1;
    if ( v34 )
      *(_BYTE *)(v156 + *(_QWORD *)(a1 + 88)) |= 1u;
LABEL_33:
    ++v2;
    ++v3;
    v154 = v2;
    v156 = v3;
  }
  while ( v2 < *(__int16 *)(v1 + 80) );
}
