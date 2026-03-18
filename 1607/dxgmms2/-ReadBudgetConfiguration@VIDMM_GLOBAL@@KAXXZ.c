/*
 * XREFs of ?ReadBudgetConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C008DC20
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0072568 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

void VIDMM_GLOBAL::ReadBudgetConfiguration(void)
{
  int v0; // ebx
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // r8d
  unsigned int v4; // edx
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  unsigned int v10; // eax
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-C0h] BYREF
  int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v23; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v27; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v28; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v31; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v32; // [rsp+74h] [rbp-94h] BYREF
  int v33; // [rsp+78h] [rbp-90h] BYREF
  int v34; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v35; // [rsp+80h] [rbp-88h] BYREF
  int v36; // [rsp+84h] [rbp-84h] BYREF
  int v37; // [rsp+88h] [rbp-80h] BYREF
  int v38; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v39; // [rsp+90h] [rbp-78h] BYREF
  int v40; // [rsp+94h] [rbp-74h] BYREF
  int v41; // [rsp+98h] [rbp-70h] BYREF
  int v42; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v43; // [rsp+A0h] [rbp-68h] BYREF
  int v44; // [rsp+A4h] [rbp-64h] BYREF
  int v45; // [rsp+A8h] [rbp-60h] BYREF
  int v46; // [rsp+ACh] [rbp-5Ch] BYREF
  int v47; // [rsp+B0h] [rbp-58h] BYREF
  int v48; // [rsp+B4h] [rbp-54h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D8h] [rbp-30h] BYREF
  int v53; // [rsp+E0h] [rbp-28h]
  const wchar_t *v54; // [rsp+E8h] [rbp-20h]
  __int64 *v55; // [rsp+F0h] [rbp-18h]
  int v56; // [rsp+F8h] [rbp-10h]
  __int64 *v57; // [rsp+100h] [rbp-8h]
  int v58; // [rsp+108h] [rbp+0h]
  __int64 v59; // [rsp+110h] [rbp+8h]
  int v60; // [rsp+118h] [rbp+10h]
  const wchar_t *v61; // [rsp+120h] [rbp+18h]
  int *v62; // [rsp+128h] [rbp+20h]
  int v63; // [rsp+130h] [rbp+28h]
  int *v64; // [rsp+138h] [rbp+30h]
  int v65; // [rsp+140h] [rbp+38h]
  __int64 v66; // [rsp+148h] [rbp+40h]
  int v67; // [rsp+150h] [rbp+48h]
  const wchar_t *v68; // [rsp+158h] [rbp+50h]
  unsigned int *v69; // [rsp+160h] [rbp+58h]
  int v70; // [rsp+168h] [rbp+60h]
  int *v71; // [rsp+170h] [rbp+68h]
  int v72; // [rsp+178h] [rbp+70h]
  __int64 v73; // [rsp+180h] [rbp+78h]
  int v74; // [rsp+188h] [rbp+80h]
  const wchar_t *v75; // [rsp+190h] [rbp+88h]
  unsigned int *v76; // [rsp+198h] [rbp+90h]
  int v77; // [rsp+1A0h] [rbp+98h]
  int *v78; // [rsp+1A8h] [rbp+A0h]
  int v79; // [rsp+1B0h] [rbp+A8h]
  __int64 v80; // [rsp+1B8h] [rbp+B0h]
  int v81; // [rsp+1C0h] [rbp+B8h]
  const wchar_t *v82; // [rsp+1C8h] [rbp+C0h]
  unsigned int *v83; // [rsp+1D0h] [rbp+C8h]
  int v84; // [rsp+1D8h] [rbp+D0h]
  int *v85; // [rsp+1E0h] [rbp+D8h]
  int v86; // [rsp+1E8h] [rbp+E0h]
  __int64 v87; // [rsp+1F0h] [rbp+E8h]
  int v88; // [rsp+1F8h] [rbp+F0h]
  const wchar_t *v89; // [rsp+200h] [rbp+F8h]
  unsigned int *v90; // [rsp+208h] [rbp+100h]
  int v91; // [rsp+210h] [rbp+108h]
  int *v92; // [rsp+218h] [rbp+110h]
  int v93; // [rsp+220h] [rbp+118h]
  __int64 v94; // [rsp+228h] [rbp+120h]
  int v95; // [rsp+230h] [rbp+128h]
  const wchar_t *v96; // [rsp+238h] [rbp+130h]
  unsigned int *v97; // [rsp+240h] [rbp+138h]
  int v98; // [rsp+248h] [rbp+140h]
  int *v99; // [rsp+250h] [rbp+148h]
  int v100; // [rsp+258h] [rbp+150h]
  __int64 v101; // [rsp+260h] [rbp+158h]
  int v102; // [rsp+268h] [rbp+160h]
  const wchar_t *v103; // [rsp+270h] [rbp+168h]
  int *v104; // [rsp+278h] [rbp+170h]
  int v105; // [rsp+280h] [rbp+178h]
  int *v106; // [rsp+288h] [rbp+180h]
  int v107; // [rsp+290h] [rbp+188h]
  __int64 v108; // [rsp+298h] [rbp+190h]
  int v109; // [rsp+2A0h] [rbp+198h]
  const wchar_t *v110; // [rsp+2A8h] [rbp+1A0h]
  unsigned int *v111; // [rsp+2B0h] [rbp+1A8h]
  int v112; // [rsp+2B8h] [rbp+1B0h]
  int *v113; // [rsp+2C0h] [rbp+1B8h]
  int v114; // [rsp+2C8h] [rbp+1C0h]
  __int64 v115; // [rsp+2D0h] [rbp+1C8h]
  int v116; // [rsp+2D8h] [rbp+1D0h]
  const wchar_t *v117; // [rsp+2E0h] [rbp+1D8h]
  unsigned int *v118; // [rsp+2E8h] [rbp+1E0h]
  int v119; // [rsp+2F0h] [rbp+1E8h]
  int *v120; // [rsp+2F8h] [rbp+1F0h]
  int v121; // [rsp+300h] [rbp+1F8h]
  __int64 v122; // [rsp+308h] [rbp+200h]
  int v123; // [rsp+310h] [rbp+208h]
  const wchar_t *v124; // [rsp+318h] [rbp+210h]
  unsigned int *v125; // [rsp+320h] [rbp+218h]
  int v126; // [rsp+328h] [rbp+220h]
  int *v127; // [rsp+330h] [rbp+228h]
  int v128; // [rsp+338h] [rbp+230h]
  __int64 v129; // [rsp+340h] [rbp+238h]
  int v130; // [rsp+348h] [rbp+240h]
  const wchar_t *v131; // [rsp+350h] [rbp+248h]
  unsigned int *v132; // [rsp+358h] [rbp+250h]
  int v133; // [rsp+360h] [rbp+258h]
  int *v134; // [rsp+368h] [rbp+260h]
  int v135; // [rsp+370h] [rbp+268h]
  __int64 v136; // [rsp+378h] [rbp+270h]
  int v137; // [rsp+380h] [rbp+278h]
  const wchar_t *v138; // [rsp+388h] [rbp+280h]
  unsigned int *v139; // [rsp+390h] [rbp+288h]
  int v140; // [rsp+398h] [rbp+290h]
  int *v141; // [rsp+3A0h] [rbp+298h]
  int v142; // [rsp+3A8h] [rbp+2A0h]
  __int64 v143; // [rsp+3B0h] [rbp+2A8h]
  int v144; // [rsp+3B8h] [rbp+2B0h]
  const wchar_t *v145; // [rsp+3C0h] [rbp+2B8h]
  unsigned int *v146; // [rsp+3C8h] [rbp+2C0h]
  int v147; // [rsp+3D0h] [rbp+2C8h]
  int *v148; // [rsp+3D8h] [rbp+2D0h]
  int v149; // [rsp+3E0h] [rbp+2D8h]
  __int64 v150; // [rsp+3E8h] [rbp+2E0h]
  int v151; // [rsp+3F0h] [rbp+2E8h]
  const wchar_t *v152; // [rsp+3F8h] [rbp+2F0h]
  unsigned int *v153; // [rsp+400h] [rbp+2F8h]
  int v154; // [rsp+408h] [rbp+300h]
  int *v155; // [rsp+410h] [rbp+308h]
  int v156; // [rsp+418h] [rbp+310h]
  __int64 v157; // [rsp+420h] [rbp+318h]
  int v158; // [rsp+428h] [rbp+320h]
  const wchar_t *v159; // [rsp+430h] [rbp+328h]
  unsigned int *v160; // [rsp+438h] [rbp+330h]
  int v161; // [rsp+440h] [rbp+338h]
  int *v162; // [rsp+448h] [rbp+340h]
  int v163; // [rsp+450h] [rbp+348h]
  __int64 v164; // [rsp+458h] [rbp+350h]
  int v165; // [rsp+460h] [rbp+358h]
  const wchar_t *v166; // [rsp+468h] [rbp+360h]
  unsigned int *v167; // [rsp+470h] [rbp+368h]
  int v168; // [rsp+478h] [rbp+370h]
  int *v169; // [rsp+480h] [rbp+378h]
  int v170; // [rsp+488h] [rbp+380h]
  _BYTE v171[56]; // [rsp+490h] [rbp+388h] BYREF

  v56 = 184549387;
  v49 = 0LL;
  v50 = 16LL;
  v0 = 50;
  v51 = 0LL;
  v37 = 60000;
  v33 = 1;
  v22 = 1;
  v35 = 10;
  v34 = 40;
  v17 = 40;
  v38 = 10000;
  v24 = 10000;
  v39 = 2000;
  v26 = 2000;
  v43 = 30;
  v28 = 30;
  v45 = 30;
  v30 = 30;
  v47 = 30;
  v32 = 30;
  v54 = L"GlobalCommitmentBudget";
  v55 = &v50;
  v57 = &v49;
  v61 = L"EnableTrimWnfCallback";
  v62 = &v22;
  v64 = &v33;
  v68 = L"StartPeriodicTrimThreshold";
  v69 = &v17;
  v18 = 10;
  v40 = 10;
  v19 = 10;
  v71 = &v34;
  v25 = 60000;
  v36 = 60000;
  v23 = 60000;
  v41 = 5;
  v20 = 5;
  v42 = 5;
  v21 = 5;
  v44 = 50;
  v27 = 50;
  v46 = 50;
  v29 = 50;
  v48 = 50;
  v31 = 50;
  v52 = 0LL;
  v53 = 288;
  v58 = 8;
  v59 = 0LL;
  v60 = 288;
  v63 = 67108868;
  v65 = 4;
  v66 = 0LL;
  v67 = 288;
  v70 = 67108868;
  v72 = 4;
  v73 = 0LL;
  v74 = 288;
  v75 = L"CriticalPeriodicTrimThreshold";
  v76 = &v18;
  v78 = &v35;
  v82 = L"IdleTrimInterval";
  v83 = &v23;
  v85 = &v36;
  v89 = L"ForegroundTrimInterval";
  v90 = &v25;
  v92 = &v37;
  v96 = L"MaximumTrimInterval";
  v97 = &v24;
  v99 = &v38;
  v103 = L"MinimumTrimInterval";
  v104 = &v26;
  v106 = &v39;
  v110 = L"VideoMemoryFragmentationBuffer";
  v111 = &v19;
  v113 = &v40;
  v117 = L"SystemMemoryFragmentationBuffer";
  v118 = &v20;
  v120 = &v41;
  v124 = L"ProcessBudgetCapBuffer";
  v125 = &v21;
  v127 = &v42;
  v77 = 67108868;
  v79 = 4;
  v80 = 0LL;
  v81 = 288;
  v84 = 67108868;
  v86 = 4;
  v87 = 0LL;
  v88 = 288;
  v91 = 67108868;
  v93 = 4;
  v94 = 0LL;
  v95 = 288;
  v98 = 67108868;
  v100 = 4;
  v101 = 0LL;
  v102 = 288;
  v105 = 67108868;
  v107 = 4;
  v108 = 0LL;
  v109 = 288;
  v112 = 67108868;
  v114 = 4;
  v115 = 0LL;
  v116 = 288;
  v119 = 67108868;
  v121 = 4;
  v122 = 0LL;
  v123 = 288;
  v126 = 67108868;
  v128 = 4;
  v129 = 0LL;
  v130 = 288;
  v133 = 67108868;
  v131 = L"L_LocalMemoryBudgetDWMTarget";
  v137 = 288;
  v132 = &v28;
  v134 = &v43;
  v138 = L"L_LocalMemoryBudgetFocusTarget";
  v139 = &v27;
  v141 = &v44;
  v145 = L"LNL_LocalMemoryBudgetDWMTarget";
  v146 = &v30;
  v148 = &v45;
  v152 = L"LNL_LocalMemoryBudgetFocusTarget";
  v153 = &v29;
  v155 = &v46;
  v159 = L"LNL_NonLocalMemoryBudgetDWMTarget";
  v160 = &v32;
  v162 = &v47;
  v166 = L"LNL_NonLocalMemoryBudgetFocusTarget";
  v167 = &v31;
  v140 = 67108868;
  v144 = 288;
  v147 = 67108868;
  v151 = 288;
  v154 = 67108868;
  v158 = 288;
  v161 = 67108868;
  v165 = 288;
  v168 = 67108868;
  v169 = &v48;
  v135 = 4;
  v136 = 0LL;
  v142 = 4;
  v143 = 0LL;
  v149 = 4;
  v150 = 0LL;
  v156 = 4;
  v157 = 0LL;
  v163 = 4;
  v164 = 0LL;
  v170 = 4;
  memset(v171, 0, sizeof(v171));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v52, 0LL, 0LL);
  qword_1C0035328 = v51;
  dword_1C0035360 = v22;
  v1 = 100;
  if ( v17 < 0x64 )
    v1 = v17;
  dword_1C0035364 = v1;
  if ( v18 < v1 )
    v1 = v18;
  dword_1C0035368 = v1;
  v2 = v23;
  v3 = v25;
  if ( v24 > v23 )
    v2 = v24;
  if ( v2 > v25 )
    v3 = v2;
  if ( v2 >= 0x124F80 )
    v2 = 1200000;
  if ( v3 >= 0x124F80 )
    v3 = 1200000;
  v4 = 10000 * v26;
  v5 = 10000 * v24;
  dword_1C0035378 = 10000 * v26;
  dword_1C003536C = 10000 * v2;
  dword_1C0035374 = 10000 * v24;
  dword_1C0035370 = 10000 * v3;
  if ( 10000 * v24 <= 0xEA60 )
  {
    if ( v5 >= 0x10 )
      goto LABEL_18;
    v5 = 16;
  }
  else
  {
    v5 = 60000;
  }
  dword_1C0035374 = v5;
LABEL_18:
  if ( v4 >= 0x10 )
  {
    if ( v4 >= v5 )
      dword_1C0035378 = v5;
  }
  else
  {
    dword_1C0035378 = 16;
  }
  v6 = 50;
  if ( v19 < 0x32 )
    v6 = v19;
  dword_1C003537C = v6;
  v7 = 50;
  if ( v20 < 0x32 )
    v7 = v20;
  dword_1C0035380 = v7;
  if ( v21 < 0x32 )
    v0 = v21;
  dword_1C0035384 = v0;
  if ( v27 > 4 )
  {
    v8 = v27;
    if ( v27 > 0x5A )
      v8 = 90;
    dword_1C003542C = v8;
  }
  else
  {
    dword_1C003542C = 5;
  }
  v9 = v28;
  v10 = v28;
  if ( 95 - v27 < v28 )
    v10 = 95 - v27;
  if ( v10 >= 5 )
  {
    if ( 95 - v27 < v28 )
      v9 = 95 - v27;
    dword_1C0035428 = v9;
  }
  else
  {
    dword_1C0035428 = 5;
  }
  if ( v29 > 4 )
  {
    v11 = v29;
    if ( v29 > 0x5A )
      v11 = 90;
    dword_1C0035434 = v11;
  }
  else
  {
    dword_1C0035434 = 5;
  }
  v12 = v30;
  v13 = v30;
  if ( 95 - v29 < v30 )
    v13 = 95 - v29;
  if ( v13 >= 5 )
  {
    if ( 95 - v29 < v30 )
      v12 = 95 - v29;
    dword_1C0035430 = v12;
  }
  else
  {
    dword_1C0035430 = 5;
  }
  if ( v31 > 4 )
  {
    v14 = v31;
    if ( v31 > 0x5A )
      v14 = 90;
    dword_1C003543C = v14;
  }
  else
  {
    dword_1C003543C = 5;
  }
  v15 = v32;
  v16 = v32;
  if ( 95 - v31 < v32 )
    v16 = 95 - v31;
  if ( v16 >= 5 )
  {
    if ( 95 - v31 < v32 )
      v15 = 95 - v31;
    dword_1C0035438 = v15;
  }
  else
  {
    dword_1C0035438 = 5;
  }
}
