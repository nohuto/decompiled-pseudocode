/*
 * XREFs of InitMessageTables @ 0x1403FA7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

__int64 __fastcall InitMessageTables(__int64 a1, __int64 a2)
{
  struct MOVESIZEDATA *v2; // rcx
  char v3; // bl
  bool v4; // di
  unsigned __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int16 v8; // dx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int16 v17; // di
  __int64 v18; // r8
  __int64 v19; // rbx
  unsigned __int16 v20; // dx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  unsigned __int16 v29; // di
  __int64 v30; // r8
  __int64 v31; // rbx
  unsigned __int16 v32; // dx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int16 v42; // dx
  __int64 v43; // rbx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r9
  unsigned __int16 v50; // ax
  unsigned __int64 v51; // r8
  __int64 v52; // rax
  unsigned __int16 v53; // di
  __int64 v54; // r8
  __int64 v55; // rbx
  unsigned __int16 v56; // dx
  unsigned int v57; // eax
  unsigned int v58; // ecx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r9
  unsigned __int64 v63; // r8
  __int64 v64; // rax
  unsigned __int16 v65; // di
  __int64 v66; // r8
  __int64 v67; // rbx
  unsigned __int16 v68; // dx
  unsigned int v69; // eax
  unsigned int v70; // ecx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r9
  unsigned __int64 v75; // r8
  __int64 v76; // rax
  unsigned __int16 v77; // di
  __int64 v78; // r8
  __int64 v79; // rbx
  unsigned __int16 v80; // dx
  unsigned int v81; // eax
  unsigned int v82; // ecx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r9
  unsigned __int64 v87; // r8
  __int64 v88; // rax
  unsigned __int16 v89; // di
  __int64 v90; // r8
  __int64 v91; // rbx
  unsigned __int16 v92; // dx
  unsigned int v93; // eax
  unsigned int v94; // ecx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r9
  unsigned __int64 v99; // r8
  __int64 v100; // rax
  unsigned __int16 v101; // si
  __int64 v102; // r8
  __int64 v103; // rbx
  unsigned __int16 v104; // dx
  unsigned int v105; // eax
  unsigned int v106; // ecx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r9
  unsigned __int16 v111; // ax
  unsigned __int64 v112; // r8
  __int64 v113; // rax
  unsigned __int16 v114; // di
  __int64 v115; // r8
  __int64 v116; // rbx
  unsigned __int16 v117; // dx
  unsigned int v118; // eax
  unsigned int v119; // ecx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r9
  unsigned __int64 v124; // r8
  __int64 v125; // rax
  __int64 v126; // r8
  unsigned __int16 v127; // dx
  __int64 v128; // rbx
  unsigned int v129; // eax
  unsigned int v130; // ecx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r9
  unsigned __int64 v135; // r8
  __int64 v136; // rax
  unsigned __int16 v137; // di
  __int64 v138; // r8
  __int64 v139; // rbx
  unsigned __int16 v140; // dx
  unsigned int v141; // eax
  unsigned int v142; // ecx
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r9
  unsigned __int64 v147; // r8
  __int64 v148; // rax
  unsigned __int16 v149; // di
  __int64 v150; // r8
  __int64 v151; // rbx
  unsigned __int16 v152; // dx
  unsigned int v153; // eax
  unsigned int v154; // ecx
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r9
  unsigned __int64 v159; // r8
  __int64 v160; // rax
  unsigned __int16 v161; // di
  __int64 v162; // r8
  __int64 v163; // rbx
  unsigned __int16 v164; // dx
  unsigned int v165; // eax
  unsigned int v166; // ecx
  __int64 result; // rax
  __int64 v168; // r9
  __int64 UserSessionState; // rax
  int v170; // r8d
  int v171; // edx

  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
    || (v3 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v3 = 0;
  }
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v170) = v4;
    LOBYTE(v171) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v171,
      v170,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      12,
      (__int64)&WPP_9b0ffd12fc44339632c358433cbe781e_Traceguids);
  }
  v5 = 51;
  v6 = W32GetUserSessionState(v2, a2);
  LODWORD(v7) = 0;
  v8 = 51;
  *(_DWORD *)(v6 + 20448) = 0;
  v9 = 0;
  do
  {
    v10 = v9;
    if ( v8 > v9 )
    {
      *(_DWORD *)(v6 + 20448) = v8;
      v10 = v8;
    }
    v7 = (unsigned int)(v7 + 1);
    v9 = v10;
    v8 = word_140368350[v7];
  }
  while ( v8 );
  v11 = SharedAlloc((v10 >> 3) + 1);
  *(_QWORD *)(v6 + 20456) = v11;
  if ( v11 )
  {
    LODWORD(v14) = 0;
    do
    {
      v12 = *(_QWORD *)(v6 + 20456);
      v14 = (unsigned int)(v14 + 1);
      v15 = (unsigned __int64)v5 >> 3;
      v13 = *(unsigned __int8 *)(v15 + v12);
      LODWORD(v13) = v13 | (1 << (v5 & 7));
      *(_BYTE *)(v15 + v12) = v13;
      v5 = word_140368350[v14];
    }
    while ( v5 );
  }
  v16 = W32GetUserSessionState(v13, v12);
  v17 = 6;
  LODWORD(v18) = 0;
  v19 = v16;
  v20 = 6;
  *(_DWORD *)(v16 + 20464) = 0;
  v21 = 0;
  do
  {
    v22 = v21;
    if ( v20 > v21 )
    {
      *(_DWORD *)(v19 + 20464) = v20;
      v22 = v20;
    }
    v18 = (unsigned int)(v18 + 1);
    v21 = v22;
    v20 = word_1403683B0[v18];
  }
  while ( v20 );
  v23 = SharedAlloc((v22 >> 3) + 1);
  *(_QWORD *)(v19 + 20472) = v23;
  if ( v23 )
  {
    LODWORD(v26) = 0;
    do
    {
      v24 = *(_QWORD *)(v19 + 20472);
      v26 = (unsigned int)(v26 + 1);
      v27 = (unsigned __int64)v17 >> 3;
      v25 = *(unsigned __int8 *)(v27 + v24);
      LODWORD(v25) = v25 | (1 << (v17 & 7));
      *(_BYTE *)(v27 + v24) = v25;
      v17 = word_1403683B0[v26];
    }
    while ( v17 );
  }
  v28 = W32GetUserSessionState(v25, v24);
  v29 = 57;
  LODWORD(v30) = 0;
  v31 = v28;
  v32 = 57;
  *(_DWORD *)(v28 + 20112) = 0;
  v33 = 0;
  do
  {
    v34 = v33;
    if ( v32 > v33 )
    {
      *(_DWORD *)(v31 + 20112) = v32;
      v34 = v32;
    }
    v30 = (unsigned int)(v30 + 1);
    v33 = v34;
    v32 = word_1403687D0[v30];
  }
  while ( v32 );
  v35 = SharedAlloc((v34 >> 3) + 1);
  *(_QWORD *)(v31 + 20120) = v35;
  if ( v35 )
  {
    LODWORD(v38) = 0;
    do
    {
      v36 = *(_QWORD *)(v31 + 20120);
      v38 = (unsigned int)(v38 + 1);
      v39 = (unsigned __int64)v29 >> 3;
      v37 = *(unsigned __int8 *)(v39 + v36);
      LODWORD(v37) = v37 | (1 << (v29 & 7));
      *(_BYTE *)(v39 + v36) = v37;
      v29 = word_1403687D0[v38];
    }
    while ( v29 );
  }
  v40 = W32GetUserSessionState(v37, v36);
  LODWORD(v41) = 0;
  v42 = 1;
  v43 = v40;
  *(_DWORD *)(v40 + 19952) = 0;
  v44 = 0;
  do
  {
    v45 = v44;
    if ( v42 > v44 )
    {
      *(_DWORD *)(v43 + 19952) = v42;
      v45 = v42;
    }
    v41 = (unsigned int)(v41 + 1);
    v44 = v45;
    v42 = word_140368708[v41];
  }
  while ( v42 );
  v46 = SharedAlloc((v45 >> 3) + 1);
  *(_QWORD *)(v43 + 19960) = v46;
  if ( v46 )
  {
    LODWORD(v49) = 0;
    v50 = 1;
    do
    {
      v47 = *(_QWORD *)(v43 + 19960);
      v49 = (unsigned int)(v49 + 1);
      v51 = (unsigned __int64)v50 >> 3;
      v48 = *(unsigned __int8 *)(v51 + v47);
      LODWORD(v48) = v48 | (1 << (v50 & 7));
      *(_BYTE *)(v51 + v47) = v48;
      v50 = word_140368708[v49];
    }
    while ( v50 );
  }
  v52 = W32GetUserSessionState(v48, v47);
  v53 = 129;
  LODWORD(v54) = 0;
  v55 = v52;
  v56 = 129;
  *(_DWORD *)(v52 + 19984) = 0;
  v57 = 0;
  do
  {
    v58 = v57;
    if ( v56 > v57 )
    {
      *(_DWORD *)(v55 + 19984) = v56;
      v58 = v56;
    }
    v54 = (unsigned int)(v54 + 1);
    v57 = v58;
    v56 = word_140368770[v54];
  }
  while ( v56 );
  v59 = SharedAlloc((v58 >> 3) + 1);
  *(_QWORD *)(v55 + 19992) = v59;
  if ( v59 )
  {
    LODWORD(v62) = 0;
    do
    {
      v60 = *(_QWORD *)(v55 + 19992);
      v62 = (unsigned int)(v62 + 1);
      v63 = (unsigned __int64)v53 >> 3;
      v61 = *(unsigned __int8 *)(v63 + v60);
      LODWORD(v61) = v61 | (1 << (v53 & 7));
      *(_BYTE *)(v63 + v60) = v61;
      v53 = word_140368770[v62];
    }
    while ( v53 );
  }
  v64 = W32GetUserSessionState(v61, v60);
  v65 = 15;
  LODWORD(v66) = 0;
  v67 = v64;
  v68 = 15;
  *(_DWORD *)(v64 + 20000) = 0;
  v69 = 0;
  do
  {
    v70 = v69;
    if ( v68 > v69 )
    {
      *(_DWORD *)(v67 + 20000) = v68;
      v70 = v68;
    }
    v66 = (unsigned int)(v66 + 1);
    v69 = v70;
    v68 = word_1403687C0[v66];
  }
  while ( v68 );
  v71 = SharedAlloc((v70 >> 3) + 1);
  *(_QWORD *)(v67 + 20008) = v71;
  if ( v71 )
  {
    LODWORD(v74) = 0;
    do
    {
      v72 = *(_QWORD *)(v67 + 20008);
      v74 = (unsigned int)(v74 + 1);
      v75 = (unsigned __int64)v65 >> 3;
      v73 = *(unsigned __int8 *)(v75 + v72);
      LODWORD(v73) = v73 | (1 << (v65 & 7));
      *(_BYTE *)(v75 + v72) = v73;
      v65 = word_1403687C0[v74];
    }
    while ( v65 );
  }
  v76 = W32GetUserSessionState(v73, v72);
  v77 = 369;
  LODWORD(v78) = 0;
  v79 = v76;
  v80 = 369;
  *(_DWORD *)(v76 + 20176) = 0;
  v81 = 0;
  do
  {
    v82 = v81;
    if ( v80 > v81 )
    {
      *(_DWORD *)(v79 + 20176) = v80;
      v82 = v80;
    }
    v78 = (unsigned int)(v78 + 1);
    v81 = v82;
    v80 = word_140368738[v78];
  }
  while ( v80 );
  v83 = SharedAlloc((v82 >> 3) + 1);
  *(_QWORD *)(v79 + 20184) = v83;
  if ( v83 )
  {
    LODWORD(v86) = 0;
    do
    {
      v84 = *(_QWORD *)(v79 + 20184);
      v86 = (unsigned int)(v86 + 1);
      v87 = (unsigned __int64)v77 >> 3;
      v85 = *(unsigned __int8 *)(v87 + v84);
      LODWORD(v85) = v85 | (1 << (v77 & 7));
      *(_BYTE *)(v87 + v84) = v85;
      v77 = word_140368738[v86];
    }
    while ( v77 );
  }
  v88 = W32GetUserSessionState(v85, v84);
  v89 = 132;
  LODWORD(v90) = 0;
  v91 = v88;
  v92 = 132;
  *(_DWORD *)(v88 + 20064) = 0;
  v93 = 0;
  do
  {
    v94 = v93;
    if ( v92 > v93 )
    {
      *(_DWORD *)(v91 + 20064) = v92;
      v94 = v92;
    }
    v90 = (unsigned int)(v90 + 1);
    v93 = v94;
    v92 = word_140368600[v90];
  }
  while ( v92 );
  v95 = SharedAlloc((v94 >> 3) + 1);
  *(_QWORD *)(v91 + 20072) = v95;
  if ( v95 )
  {
    LODWORD(v98) = 0;
    do
    {
      v96 = *(_QWORD *)(v91 + 20072);
      v98 = (unsigned int)(v98 + 1);
      v99 = (unsigned __int64)v89 >> 3;
      v97 = *(unsigned __int8 *)(v99 + v96);
      LODWORD(v97) = v97 | (1 << (v89 & 7));
      *(_BYTE *)(v99 + v96) = v97;
      v89 = word_140368600[v98];
    }
    while ( v89 );
  }
  v100 = W32GetUserSessionState(v97, v96);
  v101 = 398;
  LODWORD(v102) = 0;
  v103 = v100;
  v104 = 398;
  *(_DWORD *)(v100 + 20144) = 0;
  v105 = 0;
  do
  {
    v106 = v105;
    if ( v104 > v105 )
    {
      *(_DWORD *)(v103 + 20144) = v104;
      v106 = v104;
    }
    v102 = (unsigned int)(v102 + 1);
    v105 = v106;
    v104 = word_140368650[v102];
  }
  while ( v104 );
  v107 = SharedAlloc((v106 >> 3) + 1);
  *(_QWORD *)(v103 + 20152) = v107;
  if ( v107 )
  {
    LODWORD(v110) = 0;
    v111 = 398;
    do
    {
      v108 = *(_QWORD *)(v103 + 20152);
      v110 = (unsigned int)(v110 + 1);
      v112 = (unsigned __int64)v111 >> 3;
      v109 = *(unsigned __int8 *)(v112 + v108);
      LODWORD(v109) = v109 | (1 << (v111 & 7));
      *(_BYTE *)(v112 + v108) = v109;
      v111 = word_140368650[v110];
    }
    while ( v111 );
  }
  v113 = W32GetUserSessionState(v109, v108);
  v114 = 359;
  LODWORD(v115) = 0;
  v116 = v113;
  v117 = 359;
  *(_DWORD *)(v113 + 20080) = 0;
  v118 = 0;
  do
  {
    v119 = v118;
    if ( v117 > v118 )
    {
      *(_DWORD *)(v116 + 20080) = v117;
      v119 = v117;
    }
    v115 = (unsigned int)(v115 + 1);
    v118 = v119;
    v117 = word_140368490[v115];
  }
  while ( v117 );
  v120 = SharedAlloc((v119 >> 3) + 1);
  *(_QWORD *)(v116 + 20088) = v120;
  if ( v120 )
  {
    LODWORD(v123) = 0;
    do
    {
      v121 = *(_QWORD *)(v116 + 20088);
      v123 = (unsigned int)(v123 + 1);
      v124 = (unsigned __int64)v114 >> 3;
      v122 = *(unsigned __int8 *)(v124 + v121);
      LODWORD(v122) = v122 | (1 << (v114 & 7));
      *(_BYTE *)(v124 + v121) = v122;
      v114 = word_140368490[v123];
    }
    while ( v114 );
  }
  v125 = W32GetUserSessionState(v122, v121);
  LODWORD(v126) = 0;
  v127 = 398;
  v128 = v125;
  *(_DWORD *)(v125 + 20096) = 0;
  v129 = 0;
  do
  {
    v130 = v129;
    if ( v127 > v129 )
    {
      *(_DWORD *)(v128 + 20096) = v127;
      v130 = v127;
    }
    v126 = (unsigned int)(v126 + 1);
    v129 = v130;
    v127 = word_140368650[v126];
  }
  while ( v127 );
  v131 = SharedAlloc((v130 >> 3) + 1);
  *(_QWORD *)(v128 + 20104) = v131;
  if ( v131 )
  {
    LODWORD(v134) = 0;
    do
    {
      v132 = *(_QWORD *)(v128 + 20104);
      v134 = (unsigned int)(v134 + 1);
      v135 = (unsigned __int64)v101 >> 3;
      v133 = *(unsigned __int8 *)(v135 + v132);
      LODWORD(v133) = v133 | (1 << (v101 & 7));
      *(_BYTE *)(v135 + v132) = v133;
      v101 = word_140368650[v134];
    }
    while ( v101 );
  }
  v136 = W32GetUserSessionState(v133, v132);
  v137 = 198;
  LODWORD(v138) = 0;
  v139 = v136;
  v140 = 198;
  *(_DWORD *)(v136 + 20128) = 0;
  v141 = 0;
  do
  {
    v142 = v141;
    if ( v140 > v141 )
    {
      *(_DWORD *)(v139 + 20128) = v140;
      v142 = v140;
    }
    v138 = (unsigned int)(v138 + 1);
    v141 = v142;
    v140 = word_140368540[v138];
  }
  while ( v140 );
  v143 = SharedAlloc((v142 >> 3) + 1);
  *(_QWORD *)(v139 + 20136) = v143;
  if ( v143 )
  {
    LODWORD(v146) = 0;
    do
    {
      v144 = *(_QWORD *)(v139 + 20136);
      v146 = (unsigned int)(v146 + 1);
      v147 = (unsigned __int64)v137 >> 3;
      v145 = *(unsigned __int8 *)(v147 + v144);
      LODWORD(v145) = v145 | (1 << (v137 & 7));
      *(_BYTE *)(v147 + v144) = v145;
      v137 = word_140368540[v146];
    }
    while ( v137 );
  }
  v148 = W32GetUserSessionState(v145, v144);
  v149 = 20;
  LODWORD(v150) = 0;
  v151 = v148;
  v152 = 20;
  *(_DWORD *)(v148 + 20192) = 0;
  v153 = 0;
  do
  {
    v154 = v153;
    if ( v152 > v153 )
    {
      *(_DWORD *)(v151 + 20192) = v152;
      v154 = v152;
    }
    v150 = (unsigned int)(v150 + 1);
    v153 = v154;
    v152 = word_140368450[v150];
  }
  while ( v152 );
  v155 = SharedAlloc((v154 >> 3) + 1);
  *(_QWORD *)(v151 + 20200) = v155;
  if ( v155 )
  {
    LODWORD(v158) = 0;
    do
    {
      v156 = *(_QWORD *)(v151 + 20200);
      v158 = (unsigned int)(v158 + 1);
      v159 = (unsigned __int64)v149 >> 3;
      v157 = *(unsigned __int8 *)(v159 + v156);
      LODWORD(v157) = v157 | (1 << (v149 & 7));
      *(_BYTE *)(v159 + v156) = v157;
      v149 = word_140368450[v158];
    }
    while ( v149 );
  }
  v160 = W32GetUserSessionState(v157, v156);
  v161 = 2;
  LODWORD(v162) = 0;
  v163 = v160;
  v164 = 2;
  *(_DWORD *)(v160 + 20208) = 0;
  v165 = 0;
  do
  {
    v166 = v165;
    if ( v164 > v165 )
    {
      *(_DWORD *)(v163 + 20208) = v164;
      v166 = v164;
    }
    v162 = (unsigned int)(v162 + 1);
    v165 = v166;
    v164 = word_140368478[v162];
  }
  while ( v164 );
  result = SharedAlloc((v166 >> 3) + 1);
  *(_QWORD *)(v163 + 20216) = result;
  if ( result )
  {
    LODWORD(v168) = 0;
    do
    {
      v168 = (unsigned int)(v168 + 1);
      result = v161 & 7;
      *(_BYTE *)(((unsigned __int64)v161 >> 3) + *(_QWORD *)(v163 + 20216)) |= 1 << result;
      v161 = word_140368478[v168];
    }
    while ( v161 );
  }
  return result;
}
