/*
 * XREFs of ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x180050F7C
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18004F62C (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x180050EC0 (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCSpatialGestureRecognizerHandler::FeedRecognizer(
        MPCSpatialGestureRecognizerHandler *this,
        struct InputInfo *a2)
{
  _OWORD *v3; // rbx
  int v4; // r14d
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 *v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rax
  __int128 v23; // xmm0
  __int64 (__fastcall *v24)(__int64 *, __int128 *, _BYTE *, __int128 *); // rax
  __int128 v25; // xmm1
  int v26; // eax
  _OWORD *v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 *v38; // rcx
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 (__fastcall *v45)(__int64 *, __int128 *, _BYTE *, __int128 *); // rax
  __int128 v46; // xmm1
  int v47; // eax
  _OWORD *v48; // rax
  __int64 v49; // rcx
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int64 *v59; // rcx
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int64 v64; // rax
  __int128 v65; // xmm0
  __int64 (__fastcall *v66)(__int64 *, __int128 *, _BYTE *, __int128 *); // rax
  __int128 v67; // xmm1
  int v68; // eax
  _OWORD *v69; // rax
  __int64 v70; // rcx
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int64 *v80; // rcx
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  __int128 v84; // xmm0
  __int64 v85; // rax
  __int128 v86; // xmm0
  __int64 (__fastcall *v87)(__int64 *, __int128 *, _BYTE *, __int128 *); // rax
  __int128 v88; // xmm1
  int v89; // eax
  __int64 v90; // r8
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  __int128 v94; // xmm0
  __int128 v95; // xmm1
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int128 v104; // xmm0
  int v105; // eax
  int v106; // eax
  __int64 v107; // r8
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int128 v113; // xmm0
  __int128 v114; // xmm1
  __int128 v115; // xmm0
  __int128 v116; // xmm1
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int128 v119; // xmm0
  __int128 v120; // xmm1
  __int128 v121; // xmm0
  int v122; // eax
  int v123; // eax
  __int64 v124; // r8
  __int128 v125; // xmm1
  __int128 v126; // xmm0
  __int128 v127; // xmm1
  __int128 v128; // xmm0
  __int128 v129; // xmm1
  __int128 v130; // xmm0
  __int128 v131; // xmm1
  __int128 v132; // xmm0
  __int128 v133; // xmm1
  __int128 v134; // xmm0
  __int128 v135; // xmm1
  __int128 v136; // xmm0
  __int128 v137; // xmm1
  __int128 v138; // xmm0
  int v139; // eax
  int v140; // eax
  int v141; // edx
  __int64 v142; // r8
  __int128 v143; // xmm1
  __int128 v144; // xmm0
  __int128 v145; // xmm1
  __int128 v146; // xmm0
  __int128 v147; // xmm1
  __int128 v148; // xmm0
  __int128 v149; // xmm1
  __int128 v150; // xmm0
  __int128 v151; // xmm1
  __int128 v152; // xmm0
  __int128 v153; // xmm1
  __int128 v154; // xmm0
  __int128 v155; // xmm1
  __int128 v156; // xmm0
  int v157; // eax
  int v158; // eax
  __int128 v159; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v160; // [rsp+48h] [rbp-C0h]
  __int128 v161; // [rsp+58h] [rbp-B0h]
  __int128 v162; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v163; // [rsp+78h] [rbp-90h]
  __int128 v164; // [rsp+88h] [rbp-80h]
  __int128 v165; // [rsp+98h] [rbp-70h]
  __int64 v166; // [rsp+A8h] [rbp-60h]
  int v167; // [rsp+B0h] [rbp-58h]
  __int128 v168; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v169; // [rsp+C8h] [rbp-40h]
  __int128 v170; // [rsp+D8h] [rbp-30h]
  __int128 v171; // [rsp+E8h] [rbp-20h]
  __int128 v172; // [rsp+F8h] [rbp-10h]
  __int128 v173; // [rsp+108h] [rbp+0h]
  __int128 v174; // [rsp+118h] [rbp+10h]
  __int128 v175; // [rsp+128h] [rbp+20h]
  __int128 v176; // [rsp+138h] [rbp+30h]
  __int128 v177; // [rsp+148h] [rbp+40h]
  __int128 v178; // [rsp+158h] [rbp+50h]
  __int128 v179; // [rsp+168h] [rbp+60h]
  __int128 v180; // [rsp+178h] [rbp+70h]
  int v181; // [rsp+188h] [rbp+80h]
  _BYTE v182[432]; // [rsp+198h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+360h] [rbp+258h]

  v3 = (_OWORD *)((char *)a2 + 1376);
  v4 = 0;
  *((_DWORD *)this + 10) = (int)*((float *)a2 + 316);
  *((_DWORD *)this + 11) = (int)*((float *)a2 + 317);
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 172);
  switch ( *((_DWORD *)a2 + 176) )
  {
    case 2:
      MPCSpatialGestureRecognizerHandler::SetMode((__int64)this, *((_DWORD *)a2 + 203));
      v69 = v182;
      v70 = 3LL;
      v71 = *((_OWORD *)a2 + 54);
      v159 = *((_OWORD *)a2 + 53);
      v72 = *((_OWORD *)a2 + 55);
      v160 = v71;
      v161 = v72;
      do
      {
        v73 = v3[1];
        *v69 = *v3;
        v74 = v3[2];
        v69[1] = v73;
        v75 = v3[3];
        v69[2] = v74;
        v76 = v3[4];
        v69[3] = v75;
        v77 = v3[5];
        v69[4] = v76;
        v78 = v3[6];
        v69[5] = v77;
        v79 = v3[7];
        v3 += 8;
        v69[6] = v78;
        v69 += 8;
        *(v69 - 1) = v79;
        --v70;
      }
      while ( v70 );
      v80 = (__int64 *)*((_QWORD *)this + 4);
      v81 = v3[1];
      *v69 = *v3;
      v82 = v3[2];
      v69[1] = v81;
      v83 = *((_OWORD *)a2 + 82);
      v69[2] = v82;
      v84 = *((_OWORD *)a2 + 81);
      v167 = *((_DWORD *)a2 + 342);
      v85 = *v80;
      v162 = v84;
      v86 = *((_OWORD *)a2 + 83);
      v87 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _BYTE *, __int128 *))(v85 + 48);
      v163 = v83;
      v88 = *((_OWORD *)a2 + 84);
      v164 = v86;
      v166 = *((_QWORD *)a2 + 170);
      v165 = v88;
      v89 = v87(v80, &v162, v182, &v159);
      if ( v89 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xB1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v89);
        __debugbreak();
      }
      break;
    case 3:
      v48 = v182;
      v49 = 3LL;
      v50 = *((_OWORD *)a2 + 54);
      v159 = *((_OWORD *)a2 + 53);
      v51 = *((_OWORD *)a2 + 55);
      v160 = v50;
      v161 = v51;
      do
      {
        v52 = v3[1];
        *v48 = *v3;
        v53 = v3[2];
        v48[1] = v52;
        v54 = v3[3];
        v48[2] = v53;
        v55 = v3[4];
        v48[3] = v54;
        v56 = v3[5];
        v48[4] = v55;
        v57 = v3[6];
        v48[5] = v56;
        v58 = v3[7];
        v3 += 8;
        v48[6] = v57;
        v48 += 8;
        *(v48 - 1) = v58;
        --v49;
      }
      while ( v49 );
      v59 = (__int64 *)*((_QWORD *)this + 4);
      v60 = v3[1];
      *v48 = *v3;
      v61 = v3[2];
      v48[1] = v60;
      v62 = *((_OWORD *)a2 + 82);
      v48[2] = v61;
      v63 = *((_OWORD *)a2 + 81);
      v167 = *((_DWORD *)a2 + 342);
      v64 = *v59;
      v162 = v63;
      v65 = *((_OWORD *)a2 + 83);
      v66 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _BYTE *, __int128 *))(v64 + 64);
      v163 = v62;
      v67 = *((_OWORD *)a2 + 84);
      v164 = v65;
      v166 = *((_QWORD *)a2 + 170);
      v165 = v67;
      v68 = v66(v59, &v162, v182, &v159);
      if ( v68 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xC3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v68);
        __debugbreak();
      }
      break;
    case 4:
      v27 = v182;
      v28 = 3LL;
      v29 = *((_OWORD *)a2 + 54);
      v159 = *((_OWORD *)a2 + 53);
      v30 = *((_OWORD *)a2 + 55);
      v160 = v29;
      v161 = v30;
      do
      {
        v31 = v3[1];
        *v27 = *v3;
        v32 = v3[2];
        v27[1] = v31;
        v33 = v3[3];
        v27[2] = v32;
        v34 = v3[4];
        v27[3] = v33;
        v35 = v3[5];
        v27[4] = v34;
        v36 = v3[6];
        v27[5] = v35;
        v37 = v3[7];
        v3 += 8;
        v27[6] = v36;
        v27 += 8;
        *(v27 - 1) = v37;
        --v28;
      }
      while ( v28 );
      v38 = (__int64 *)*((_QWORD *)this + 4);
      v39 = v3[1];
      *v27 = *v3;
      v40 = v3[2];
      v27[1] = v39;
      v41 = *((_OWORD *)a2 + 82);
      v27[2] = v40;
      v42 = *((_OWORD *)a2 + 81);
      v167 = *((_DWORD *)a2 + 342);
      v43 = *v38;
      v162 = v42;
      v44 = *((_OWORD *)a2 + 83);
      v45 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _BYTE *, __int128 *))(v43 + 72);
      v163 = v41;
      v46 = *((_OWORD *)a2 + 84);
      v164 = v44;
      v166 = *((_QWORD *)a2 + 170);
      v165 = v46;
      v47 = v45(v38, &v162, v182, &v159);
      if ( v47 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xCC,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v47);
        __debugbreak();
      }
      break;
    case 6:
      v6 = v182;
      v7 = *((_OWORD *)a2 + 54);
      v8 = 3LL;
      v159 = *((_OWORD *)a2 + 53);
      v9 = *((_OWORD *)a2 + 55);
      v160 = v7;
      v161 = v9;
      do
      {
        v10 = v3[1];
        *v6 = *v3;
        v11 = v3[2];
        v6[1] = v10;
        v12 = v3[3];
        v6[2] = v11;
        v13 = v3[4];
        v6[3] = v12;
        v14 = v3[5];
        v6[4] = v13;
        v15 = v3[6];
        v6[5] = v14;
        v16 = v3[7];
        v3 += 8;
        v6[6] = v15;
        v6 += 8;
        *(v6 - 1) = v16;
        --v8;
      }
      while ( v8 );
      v17 = (__int64 *)*((_QWORD *)this + 4);
      v18 = v3[1];
      *v6 = *v3;
      v19 = v3[2];
      v6[1] = v18;
      v20 = *((_OWORD *)a2 + 82);
      v6[2] = v19;
      v21 = *((_OWORD *)a2 + 81);
      v167 = *((_DWORD *)a2 + 342);
      v22 = *v17;
      v162 = v21;
      v23 = *((_OWORD *)a2 + 83);
      v24 = *(__int64 (__fastcall **)(__int64 *, __int128 *, _BYTE *, __int128 *))(v22 + 56);
      v163 = v20;
      v25 = *((_OWORD *)a2 + 84);
      v164 = v23;
      v166 = *((_QWORD *)a2 + 170);
      v165 = v25;
      v26 = v24(v17, &v162, v182, &v159);
      if ( v26 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0xBA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v26);
        __debugbreak();
      }
      break;
  }
  if ( *((_DWORD *)a2 + 177) == 2 )
  {
    if ( *(_DWORD *)a2 == 0x2000 )
      v141 = 0;
    else
      v141 = *((_DWORD *)a2 + 203);
    MPCSpatialGestureRecognizerHandler::SetMode((__int64)this, v141);
    v142 = *((_QWORD *)a2 + 2);
    v143 = *((_OWORD *)a2 + 54);
    v159 = *((_OWORD *)a2 + 53);
    v144 = *((_OWORD *)a2 + 55);
    v160 = v143;
    v145 = *((_OWORD *)a2 + 82);
    v161 = v144;
    v168 = *((_OWORD *)a2 + 81);
    v146 = *((_OWORD *)a2 + 83);
    v169 = v145;
    v147 = *((_OWORD *)a2 + 84);
    v170 = v146;
    v148 = *((_OWORD *)a2 + 85);
    v171 = v147;
    v149 = *((_OWORD *)a2 + 86);
    v172 = v148;
    v150 = *((_OWORD *)a2 + 87);
    v173 = v149;
    v151 = *((_OWORD *)a2 + 88);
    v174 = v150;
    v152 = *((_OWORD *)a2 + 89);
    v175 = v151;
    v153 = *((_OWORD *)a2 + 90);
    v176 = v152;
    v154 = *((_OWORD *)a2 + 91);
    v177 = v153;
    v155 = *((_OWORD *)a2 + 92);
    v178 = v154;
    v156 = *((_OWORD *)a2 + 93);
    v157 = *((_DWORD *)a2 + 376);
    v179 = v155;
    v180 = v156;
    v181 = v157;
    v158 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 4) + 80LL))(
             *((_QWORD *)this + 4),
             &v168,
             v142,
             &v159);
    if ( v158 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v158);
      JUMPOUT(0x18005189BLL);
    }
  }
  else
  {
    switch ( *((_DWORD *)a2 + 177) )
    {
      case 3:
LABEL_31:
        v124 = *((_QWORD *)a2 + 2);
        v125 = *((_OWORD *)a2 + 54);
        v159 = *((_OWORD *)a2 + 53);
        v126 = *((_OWORD *)a2 + 55);
        v160 = v125;
        v127 = *((_OWORD *)a2 + 82);
        v161 = v126;
        v168 = *((_OWORD *)a2 + 81);
        v128 = *((_OWORD *)a2 + 83);
        v169 = v127;
        v129 = *((_OWORD *)a2 + 84);
        v170 = v128;
        v130 = *((_OWORD *)a2 + 85);
        v171 = v129;
        v131 = *((_OWORD *)a2 + 86);
        v172 = v130;
        v132 = *((_OWORD *)a2 + 87);
        v173 = v131;
        v133 = *((_OWORD *)a2 + 88);
        v174 = v132;
        v134 = *((_OWORD *)a2 + 89);
        v175 = v133;
        v135 = *((_OWORD *)a2 + 90);
        v176 = v134;
        v136 = *((_OWORD *)a2 + 91);
        v177 = v135;
        v137 = *((_OWORD *)a2 + 92);
        v178 = v136;
        v138 = *((_OWORD *)a2 + 93);
        v139 = *((_DWORD *)a2 + 376);
        v179 = v137;
        v180 = v138;
        v181 = v139;
        v140 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 4) + 88LL))(
                 *((_QWORD *)this + 4),
                 &v168,
                 v124,
                 &v159);
        if ( v140 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xF1,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v140);
          __debugbreak();
        }
        goto LABEL_25;
      case 4:
        v90 = *((_QWORD *)a2 + 2);
        v91 = *((_OWORD *)a2 + 54);
        v159 = *((_OWORD *)a2 + 53);
        v92 = *((_OWORD *)a2 + 55);
        v160 = v91;
        v93 = *((_OWORD *)a2 + 82);
        v161 = v92;
        v168 = *((_OWORD *)a2 + 81);
        v94 = *((_OWORD *)a2 + 83);
        v169 = v93;
        v95 = *((_OWORD *)a2 + 84);
        v170 = v94;
        v96 = *((_OWORD *)a2 + 85);
        v171 = v95;
        v97 = *((_OWORD *)a2 + 86);
        v172 = v96;
        v98 = *((_OWORD *)a2 + 87);
        v173 = v97;
        v99 = *((_OWORD *)a2 + 88);
        v174 = v98;
        v100 = *((_OWORD *)a2 + 89);
        v175 = v99;
        v101 = *((_OWORD *)a2 + 90);
        v176 = v100;
        v102 = *((_OWORD *)a2 + 91);
        v177 = v101;
        v103 = *((_OWORD *)a2 + 92);
        v178 = v102;
        v104 = *((_OWORD *)a2 + 93);
        v105 = *((_DWORD *)a2 + 376);
        v179 = v103;
        v180 = v104;
        v181 = v105;
        v106 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 4) + 96LL))(
                 *((_QWORD *)this + 4),
                 &v168,
                 v90,
                 &v159);
        if ( v106 < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xFA,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturereco"
                     "gnizerhandler.cpp",
            (const char *)(unsigned int)v106);
          __debugbreak();
        }
        break;
      case 5:
        break;
      case 6:
        goto LABEL_31;
      default:
        goto LABEL_25;
    }
    v107 = *((_QWORD *)a2 + 2);
    v108 = *((_OWORD *)a2 + 54);
    v159 = *((_OWORD *)a2 + 53);
    v109 = *((_OWORD *)a2 + 55);
    v160 = v108;
    v110 = *((_OWORD *)a2 + 82);
    v161 = v109;
    v168 = *((_OWORD *)a2 + 81);
    v111 = *((_OWORD *)a2 + 83);
    v169 = v110;
    v112 = *((_OWORD *)a2 + 84);
    v170 = v111;
    v113 = *((_OWORD *)a2 + 85);
    v171 = v112;
    v114 = *((_OWORD *)a2 + 86);
    v172 = v113;
    v115 = *((_OWORD *)a2 + 87);
    v173 = v114;
    v116 = *((_OWORD *)a2 + 88);
    v174 = v115;
    v117 = *((_OWORD *)a2 + 89);
    v175 = v116;
    v118 = *((_OWORD *)a2 + 90);
    v176 = v117;
    v119 = *((_OWORD *)a2 + 91);
    v177 = v118;
    v120 = *((_OWORD *)a2 + 92);
    v178 = v119;
    v121 = *((_OWORD *)a2 + 93);
    v122 = *((_DWORD *)a2 + 376);
    v179 = v120;
    v180 = v121;
    v181 = v122;
    v123 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, __int128 *))(**((_QWORD **)this + 4) + 104LL))(
             *((_QWORD *)this + 4),
             &v168,
             v107,
             &v159);
    if ( v123 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x102,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v123);
      __debugbreak();
    }
  }
LABEL_25:
  if ( *((_BYTE *)this + 108) )
    v4 = *((_DWORD *)this + 26);
  *((_DWORD *)a2 + 305) = v4;
  *((_DWORD *)a2 + 306) = *((_DWORD *)this + 28);
  *((_DWORD *)a2 + 307) = *((_DWORD *)this + 29);
}
