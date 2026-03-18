/*
 * XREFs of fsg_CheckOutlineOrientation @ 0x1C00B1330
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 * Callees:
 *     Misoriented @ 0x1C00B1E70 (Misoriented.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall fsg_CheckOutlineOrientation(__int64 a1)
{
  __int64 v1; // r9
  int v2; // r14d
  __int64 v3; // rcx
  __int16 v4; // r8
  __int16 v5; // cx
  int v6; // ebx
  signed int v7; // esi
  int v8; // r13d
  signed int v9; // r15d
  __int16 v10; // r10
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rdi
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
  __int16 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int16 v48; // cx
  __int64 v49; // rax
  __int64 v50; // r8
  int v51; // eax
  __int16 v52; // ax
  __int64 v53; // rcx
  int v54; // r9d
  int v55; // ecx
  int v56; // edx
  int v57; // edx
  int v58; // ecx
  int v59; // r9d
  int v60; // r8d
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rcx
  __int16 v65; // r8
  __int16 v66; // ax
  int v67; // r11d
  int v68; // r9d
  int v69; // edi
  int v70; // ecx
  int v71; // ecx
  int v72; // edi
  int v73; // r11d
  int v74; // ecx
  int v75; // eax
  __int64 v76; // r8
  __int64 v77; // rcx
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int16 v83; // ax
  int v84; // r9d
  int v85; // edx
  int v86; // eax
  int v87; // edx
  int v88; // r9d
  int v89; // r8d
  int v90; // eax
  bool v91; // zf
  int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // r9
  __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int16 v102; // ax
  __int16 v103; // dx
  __int64 v104; // rcx
  int v105; // r12d
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
  __int16 v118; // [rsp+30h] [rbp-69h]
  __int16 v119; // [rsp+34h] [rbp-65h]
  int v120; // [rsp+34h] [rbp-65h]
  __int16 v121; // [rsp+34h] [rbp-65h]
  int v122; // [rsp+34h] [rbp-65h]
  int v123; // [rsp+34h] [rbp-65h]
  int v124; // [rsp+34h] [rbp-65h]
  int v125; // [rsp+38h] [rbp-61h]
  int v126; // [rsp+38h] [rbp-61h]
  int v127; // [rsp+38h] [rbp-61h]
  int v128; // [rsp+38h] [rbp-61h]
  int v129; // [rsp+38h] [rbp-61h]
  __int16 v130; // [rsp+3Ch] [rbp-5Dh]
  int v131; // [rsp+40h] [rbp-59h]
  int v132; // [rsp+40h] [rbp-59h]
  int v133; // [rsp+40h] [rbp-59h]
  int v134; // [rsp+40h] [rbp-59h]
  int v135; // [rsp+40h] [rbp-59h]
  int v136; // [rsp+48h] [rbp-51h]
  int v137; // [rsp+48h] [rbp-51h]
  __int64 v138; // [rsp+48h] [rbp-51h]
  int v139; // [rsp+48h] [rbp-51h]
  int v140; // [rsp+48h] [rbp-51h]
  int v141; // [rsp+48h] [rbp-51h]
  int v142; // [rsp+50h] [rbp-49h]
  int v143; // [rsp+50h] [rbp-49h]
  int v144; // [rsp+50h] [rbp-49h]
  __int64 v145; // [rsp+50h] [rbp-49h]
  int v146; // [rsp+50h] [rbp-49h]
  int v147; // [rsp+58h] [rbp-41h]
  __int64 v148; // [rsp+58h] [rbp-41h]
  __int16 v149; // [rsp+60h] [rbp-39h]
  __int16 v150; // [rsp+62h] [rbp-37h]
  __int16 v151; // [rsp+64h] [rbp-35h]
  __int16 v152; // [rsp+66h] [rbp-33h]
  __int16 v154; // [rsp+70h] [rbp-29h]
  __int64 v155; // [rsp+78h] [rbp-21h]
  int v156; // [rsp+80h] [rbp-19h]
  __int64 v157; // [rsp+88h] [rbp-11h]
  __int64 v158; // [rsp+90h] [rbp-9h]
  _DWORD v159[2]; // [rsp+98h] [rbp-1h]
  int v160; // [rsp+A0h] [rbp+7h]
  int v161; // [rsp+A4h] [rbp+Bh]
  int v162; // [rsp+A8h] [rbp+Fh]
  int v163; // [rsp+ACh] [rbp+13h]
  int v164; // [rsp+B0h] [rbp+17h]
  int v165; // [rsp+B4h] [rbp+1Bh]
  __int16 v166; // [rsp+B8h] [rbp+1Fh]
  __int16 v167; // [rsp+BAh] [rbp+21h]
  __int16 v168; // [rsp+BCh] [rbp+23h]
  __int16 v169; // [rsp+BEh] [rbp+25h]

  v1 = a1;
  v2 = 0;
  v156 = 0;
  if ( *(__int16 *)(a1 + 80) <= 0 )
    return;
  v3 = 0LL;
  v157 = 0LL;
  do
  {
    *(_BYTE *)(v3 + *(_QWORD *)(v1 + 88)) = 0;
    v4 = *(_WORD *)(*(_QWORD *)(v1 + 56) + 2 * v3);
    v118 = v4;
    v130 = *(_WORD *)(*(_QWORD *)(v1 + 64) + 2 * v3);
    v154 = v130 - v4 + 1;
    if ( v154 <= 2 )
      goto LABEL_33;
    v152 = -1;
    v5 = -1;
    v168 = -1;
    v150 = -1;
    v6 = 0x7FFFFFFF;
    v169 = -1;
    v7 = 0x80000000;
    v151 = -1;
    v166 = -1;
    v149 = -1;
    v8 = 0x7FFFFFFF;
    v167 = -1;
    v9 = 0x80000000;
    v10 = 0;
    v11 = *(_QWORD *)(v1 + 40);
    v12 = *(_QWORD *)(v1 + 32);
    v155 = v11;
    v13 = v4;
    do
    {
      v14 = v10 + v13;
      v15 = *(_DWORD *)(v12 + 4 * v14);
      if ( v15 < v8
        || v15 == v8
        && ((v100 = v5, v101 = *(_QWORD *)(v1 + 48), !*(_BYTE *)(v100 + v101))
         || *(_BYTE *)(v14 + v101)
         && *(_DWORD *)(*(_QWORD *)(v1 + 40) + 4 * v14) < *(_DWORD *)(*(_QWORD *)(v1 + 40) + 4 * v100)) )
      {
        v35 = v4 + v10;
        v36 = *(_QWORD *)(v1 + 48);
        v151 = v35;
        v166 = v35;
        v37 = 4LL * v35;
        v8 = *(_DWORD *)(v37 + v12);
        if ( *(_BYTE *)(v35 + v36) )
        {
          v159[0] = 2 * v8;
          LODWORD(v38) = 2 * *(_DWORD *)(v37 + v11);
        }
        else
        {
          v52 = v118;
          if ( v35 == v118 )
          {
            v119 = v130;
          }
          else
          {
            v119 = v35 - 1;
            v52 = v118;
          }
          if ( v35 != v130 )
            v52 = v35 + 1;
          v53 = *(_QWORD *)(v1 + 40);
          v131 = *(_DWORD *)(v53 + 4LL * v52);
          v54 = *(_DWORD *)(v12 + 4LL * v52);
          v136 = *(_DWORD *)(v53 + v37);
          v55 = *(_DWORD *)(v53 + 4LL * v119);
          v56 = *(_DWORD *)(v12 + 4LL * v119);
          if ( (*(_BYTE *)(v119 + v36) & 1) != 0 )
          {
            v57 = 2 * v56;
            v58 = 2 * v55;
          }
          else
          {
            v57 = v8 + v56;
            v58 = v136 + v55;
          }
          v120 = v57;
          if ( (*(_BYTE *)(v52 + v36) & 1) != 0 )
          {
            v59 = 2 * v54;
            v132 = 2 * v131;
          }
          else
          {
            v59 = v8 + v54;
            v132 = v136 + v131;
          }
          v11 = v155;
          v60 = 2 * v8;
          v137 = 2 * v136;
          v61 = v59 + v57 - 4 * v8;
          if ( v61 )
          {
            v62 = v57 - v60;
            v63 = v59 - v60;
            v138 = v62 * v62 * v132 + v63 * (v63 * v58 + v62 * 2 * v137);
            v64 = v61 * (__int64)v61;
            v159[0] = (v63 * v63 * v120 + v62 * v63 * 4 * v8 + v62 * v62 * v59) / v64;
            if ( v138 < 0 )
            {
              v1 = a1;
              LODWORD(v38) = -(int)((v64 - v138) / v64);
              goto LABEL_37;
            }
            v38 = (v138 + v64) / v64;
          }
          else
          {
            LODWORD(v38) = v137;
            v159[0] = 2 * v8;
          }
          v1 = a1;
        }
LABEL_37:
        v4 = v118;
        v159[1] = v38;
      }
      if ( v15 > v7
        || v15 == v7
        && ((v117 = *(_QWORD *)(v1 + 48), !*(_BYTE *)(v149 + v117))
         || *(_BYTE *)(v14 + v117)
         && *(_DWORD *)(*(_QWORD *)(v1 + 40) + 4 * v14) > *(_DWORD *)(*(_QWORD *)(v1 + 40) + 4LL * v149)) )
      {
        v47 = *(_QWORD *)(v1 + 48);
        v48 = v4 + v10;
        v49 = (__int16)(v4 + v10);
        v149 = v4 + v10;
        v167 = v4 + v10;
        v50 = 4 * v49;
        v7 = *(_DWORD *)(4 * v49 + v12);
        if ( *(_BYTE *)(v49 + v47) )
        {
          v160 = 2 * v7;
          v51 = 2 * *(_DWORD *)(v50 + v11);
LABEL_45:
          v161 = v51;
          goto LABEL_9;
        }
        v102 = v118;
        if ( v48 == v118 )
          v103 = v130;
        else
          v103 = v48 - 1;
        if ( v48 != v130 )
          v102 = v48 + 1;
        v146 = *(_BYTE *)(v102 + v47) & 1;
        v104 = *(_QWORD *)(a1 + 40);
        v105 = *(_DWORD *)(v104 + 4LL * v102);
        v106 = *(_DWORD *)(v50 + v104);
        v123 = *(_DWORD *)(v12 + 4LL * v102);
        v107 = v103;
        v108 = *(_DWORD *)(v104 + 4LL * v103);
        v109 = *(_DWORD *)(v12 + 4LL * v103);
        if ( (*(_BYTE *)(v107 + v47) & 1) != 0 )
        {
          v110 = 2 * v109;
          v111 = 2 * v108;
        }
        else
        {
          v110 = v7 + v109;
          v111 = v106 + v108;
        }
        v141 = v111;
        if ( v146 )
        {
          v112 = 2 * v123;
          v135 = 2 * v105;
        }
        else
        {
          v112 = v7 + v123;
          v135 = v106 + v105;
        }
        v11 = v155;
        v124 = v112;
        v129 = 2 * v106;
        v113 = v112 + v110 - 4 * v7;
        if ( !v113 )
        {
          v160 = 2 * v7;
          v51 = 2 * v106;
          goto LABEL_45;
        }
        v114 = v110 - 2 * v7;
        v115 = v112 - 2 * v7;
        v116 = v113 * (__int64)v113;
        v148 = v114 * v114 * v135 + v115 * (v115 * v141 + v114 * 2 * v129);
        v160 = (v114 * v114 * v124 - 1 + v116 + v115 * (v115 * v110 + v114 * 4 * v7)) / v116;
        if ( v148 < 0 )
          v161 = -(int)((v116 - v148) / v116);
        else
          v161 = (v148 + v116) / v116;
      }
LABEL_9:
      v16 = *(_DWORD *)(v11 + 4 * v14);
      if ( v16 < v6
        || v16 == v6
        && ((v99 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v152 + v99))
         || *(_BYTE *)(v14 + v99) && v15 > *(_DWORD *)(v12 + 4LL * v152)) )
      {
        v43 = v118 + v10;
        v44 = (__int16)(v118 + v10);
        v6 = *(_DWORD *)(v11 + 4 * v44);
        v45 = 4 * v44;
        v46 = *(_QWORD *)(a1 + 48);
        v152 = v118 + v10;
        v168 = v118 + v10;
        if ( *(_BYTE *)(v44 + v46) )
        {
          v162 = 2 * *(_DWORD *)(v12 + 4 * v44);
          v163 = 2 * v6;
        }
        else
        {
          v83 = v118;
          if ( v43 == v118 )
          {
            v121 = v130;
            v11 = v155;
          }
          else
          {
            v121 = v43 - 1;
            v83 = v118;
          }
          if ( v43 != v130 )
            v83 = v43 + 1;
          v143 = *(_BYTE *)(v83 + v46) & 1;
          v84 = *(_DWORD *)(v11 + 4LL * v83);
          v127 = *(_DWORD *)(v12 + 4LL * v83);
          v139 = *(_DWORD *)(v12 + v45);
          v85 = *(_DWORD *)(v11 + 4LL * v121);
          v133 = *(_DWORD *)(v12 + 4LL * v121);
          v86 = v139;
          if ( (*(_BYTE *)(v121 + v46) & 1) != 0 )
          {
            v134 = 2 * v133;
            v87 = 2 * v85;
          }
          else
          {
            v134 = v139 + v133;
            v87 = v6 + v85;
          }
          v122 = v87;
          if ( v143 )
          {
            v128 = 2 * v127;
            v88 = 2 * v84;
          }
          else
          {
            v128 = v139 + v127;
            v88 = v6 + v84;
          }
          v140 = v88;
          v144 = 2 * v86;
          v89 = 2 * v6;
          v90 = v87 - 4 * v6;
          v11 = v155;
          v91 = v88 + v90 == 0;
          v92 = v88 + v90;
          v93 = v92;
          if ( v91 )
          {
            LODWORD(v98) = v144;
            v163 = 2 * v6;
          }
          else
          {
            v94 = v122 - v89;
            v95 = v140 - v89;
            v158 = v92 * (__int64)v92;
            v145 = v94 * v94 * v128 + v95 * (v95 * v134 + v94 * 2 * v144);
            v96 = v95 * (v94 * 4 * v6 + v95 * v122);
            v97 = v93 * v93;
            v163 = (v94 * v94 * v140 + v96) / v158;
            if ( v145 < 0 )
            {
              v162 = -(int)((v97 - v145) / v97);
              goto LABEL_11;
            }
            v98 = (v145 + v97) / v97;
          }
          v162 = v98;
        }
      }
LABEL_11:
      if ( v16 > v9
        || v16 == v9
        && ((v82 = *(_QWORD *)(a1 + 48), !*(_BYTE *)(v150 + v82))
         || *(_BYTE *)(v14 + v82) && v15 < *(_DWORD *)(v12 + 4LL * v150)) )
      {
        v39 = v118 + v10;
        v40 = *(_QWORD *)(a1 + 48);
        v41 = (__int16)(v118 + v10);
        v9 = *(_DWORD *)(v11 + 4 * v41);
        v42 = 4 * v41;
        v150 = v118 + v10;
        v169 = v118 + v10;
        if ( *(_BYTE *)(v41 + v40) )
        {
          v164 = 2 * *(_DWORD *)(v12 + 4 * v41);
          v165 = 2 * v9;
        }
        else
        {
          if ( v39 == v118 )
            v65 = v130;
          else
            v65 = v39 - 1;
          if ( v39 == v130 )
            v66 = v118;
          else
            v66 = v39 + 1;
          v67 = *(_DWORD *)(v11 + 4LL * v66);
          v125 = *(_DWORD *)(v12 + 4LL * v66);
          v68 = *(_DWORD *)(v12 + v42);
          v69 = *(_DWORD *)(v11 + 4LL * v65);
          v70 = *(_DWORD *)(v12 + 4LL * v65);
          if ( (*(_BYTE *)(v65 + v40) & 1) != 0 )
          {
            v71 = 2 * v70;
            v72 = 2 * v69;
          }
          else
          {
            v71 = v68 + v70;
            v72 = v9 + v69;
          }
          v142 = v71;
          if ( (*(_BYTE *)(v66 + v40) & 1) != 0 )
          {
            v126 = 2 * v125;
            v73 = 2 * v67;
          }
          else
          {
            v126 = v68 + v125;
            v73 = v9 + v67;
          }
          v74 = 2 * v9;
          v147 = 2 * v68;
          v75 = v73 + v72 - 4 * v9;
          if ( v75 )
          {
            v76 = v72 - v74;
            v77 = v73 - v74;
            v78 = v75 * (__int64)v75;
            v79 = v76 * v76 * v73 - 1 + v78 + v77 * (v77 * v72 + v76 * 4 * v9);
            v80 = v76 * v76 * v126 + v77 * (v77 * v142 + v76 * 2 * v147);
            v165 = v79 / v78;
            if ( v80 < 0 )
              LODWORD(v81) = -(int)((v78 - v80) / v78);
            else
              v81 = (v80 + v78) / v78;
            v164 = v81;
          }
          else
          {
            v164 = 2 * v68;
            v165 = 2 * v9;
          }
        }
      }
      v4 = v118;
      ++v10;
      v13 = v118;
      v5 = v151;
      v1 = a1;
    }
    while ( v10 < v154 );
    v17 = *(_QWORD *)(a1 + 32);
    v18 = *(_DWORD *)(v17 + 4LL * v151);
    v19 = 4LL * v149;
    v20 = *(_DWORD *)(v19 + v17) - v18;
    if ( v20 < 0 )
      v20 = v18 - *(_DWORD *)(v19 + v17);
    v21 = *(_QWORD *)(a1 + 40);
    v22 = *(_DWORD *)(v19 + v21);
    v23 = *(_DWORD *)(v21 + 4LL * v151);
    v24 = v22 - v23;
    if ( v22 - v23 < 0 )
      v24 = v23 - v22;
    v25 = v24 + v20;
    v26 = *(_DWORD *)(v17 + 4LL * v152) - v18;
    if ( v26 < 0 )
      v26 = v18 - *(_DWORD *)(v17 + 4LL * v152);
    v27 = *(_DWORD *)(v21 + 4LL * v152) - v23;
    if ( v27 < 0 )
      v27 = v23 - *(_DWORD *)(v21 + 4LL * v152);
    v28 = v26 + v27;
    v29 = *(_DWORD *)(v17 + 4LL * v150);
    if ( v29 - v18 < 0 )
      v30 = v18 - v29;
    else
      v30 = v29 - v18;
    if ( *(_DWORD *)(v21 + 4LL * v150) - v23 < 0 )
      v31 = v23 - *(_DWORD *)(v21 + 4LL * v150);
    else
      v31 = *(_DWORD *)(v21 + 4LL * v150) - v23;
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
    v2 = v156;
    v34 = Misoriented(v156, 0, (unsigned __int16)v151, v159[0], a1);
    if ( v34 != (unsigned int)Misoriented(v156, v33, (unsigned __int16)*(&v166 + v33), *(_QWORD *)&v159[2 * v33], a1) )
      v34 = Misoriented(v156, v32, (unsigned __int16)*(&v166 + v32), *(_QWORD *)&v159[2 * v32], a1);
    v3 = v157;
    v1 = a1;
    if ( v34 )
      *(_BYTE *)(v157 + *(_QWORD *)(a1 + 88)) |= 1u;
LABEL_33:
    ++v2;
    ++v3;
    v156 = v2;
    v157 = v3;
  }
  while ( v2 < *(__int16 *)(v1 + 80) );
}
