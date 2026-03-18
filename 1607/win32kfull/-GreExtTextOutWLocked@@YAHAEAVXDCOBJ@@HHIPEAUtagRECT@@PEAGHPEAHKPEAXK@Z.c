/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00391A0 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreExtTextOutWInternal @ 0x1C00399F8 (GreExtTextOutWInternal.c)
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0051B58 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     GrePolyTextOutW @ 0x1C0159D40 (GrePolyTextOutW.c)
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002CCA8 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0031EC0 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C003205C (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0033D88 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C00355B8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0049004 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C004B158 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0101A68 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C01529A0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C02793AC (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0279520 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C0279674 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C0290ADC (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C0290B3C (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B80E8 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B86A8 (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8,
        unsigned int a9,
        ERECTL *a10,
        unsigned int a11)
{
  __int64 v11; // r10
  struct tagRECT *v12; // r13
  int v14; // r15d
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r14d
  int v18; // eax
  unsigned int v20; // edi
  __int64 v21; // rdx
  int v22; // eax
  unsigned __int64 v23; // r8
  struct _XLATEOBJ *v24; // rbx
  struct _XLATEOBJ **v25; // rbx
  int v26; // ebx
  __int64 v27; // rcx
  struct XDCOBJ *v28; // rsi
  int v29; // eax
  int v30; // r11d
  int v31; // edi
  int v32; // r15d
  float left; // xmm0_4
  __int64 v34; // rdi
  float right; // xmm0_4
  int v36; // r8d
  __m128i v37; // xmm0
  int v38; // r8d
  int v39; // r8d
  LONG bottom; // eax
  int v41; // r10d
  BOOL v42; // edx
  int v43; // r11d
  int v44; // edi
  BOOL v45; // edx
  int v46; // r15d
  int v47; // r8d
  unsigned int v48; // r13d
  struct EXFORMOBJ *v49; // rdx
  int v50; // r9d
  __int64 v51; // rcx
  LONG v52; // eax
  unsigned int v53; // eax
  LONG v54; // eax
  LONG v55; // ecx
  LONG v56; // r9d
  unsigned __int64 v57; // rdx
  ERECTL *v58; // r13
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rax
  bool v62; // cf
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // r15d
  int v66; // r8d
  __int64 v67; // r15
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r11
  __int64 v71; // r11
  __int64 v72; // rax
  LONG v73; // r8d
  int v74; // eax
  __int64 v75; // r11
  int v76; // r8d
  __int64 v77; // r11
  __int64 v78; // rdx
  int v79; // eax
  int v80; // r15d
  int v81; // ecx
  LONG v82; // eax
  LONG v83; // r9d
  LONG v84; // r10d
  struct _RECTL *v85; // r15
  BOOL v86; // eax
  LONG v87; // r9d
  ERECTL *v88; // rbx
  struct EXFORMOBJ *v89; // rdx
  struct XDCOBJ *v90; // r8
  int v91; // r9d
  LONG v92; // eax
  LONG v93; // eax
  int v94; // r9d
  unsigned int v95; // ebx
  struct REGION *v96; // rdx
  RECTL rclBounds; // xmm2
  __m128i v98; // xmm0
  __int64 v99; // r15
  int v100; // eax
  int v101; // eax
  __int64 v102; // rbx
  unsigned __int64 cEntries; // r9
  __int64 v104; // rax
  unsigned int v105; // ecx
  __int64 v106; // r10
  __int64 v107; // rdi
  struct _BRUSHOBJ *v108; // r11
  __int64 v109; // rax
  __int64 v110; // rax
  struct _POINTL *v111; // rdi
  LONG v112; // ecx
  LONG v113; // eax
  __m128i si128; // xmm1
  int v115; // r9d
  __m128i v116; // xmm0
  int v117; // r9d
  __m128i v118; // xmm0
  __m128i v119; // xmm1
  int v120; // r10d
  int *v121; // rbx
  __int64 v122; // rax
  int v123; // ecx
  int v124; // eax
  BOOL (__stdcall *v125)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  struct EXFORMOBJ *v126; // rdx
  int v127; // r9d
  unsigned __int64 flXlate; // r8
  int v129; // eax
  struct _XLATEOBJ *v130; // rdx
  LONG iUniq; // ecx
  LONG v132; // eax
  struct _BRUSHOBJ *v133; // rax
  struct _BRUSHOBJ *v134; // r13
  struct XDCOBJ *v135; // r8
  int v136; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  BOOL (__stdcall *v140)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rbx
  FLOATL eYY; // ecx
  __int64 v142; // rax
  bool v143; // zf
  __int64 v144; // rdx
  __int64 v145; // r8
  __int64 v146; // r9
  struct XDCOBJ *v147; // r8
  int v148; // eax
  int v149; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v152; // eax
  __int64 *v153; // rax
  __int64 v154; // rax
  ERECTL *v155; // rcx
  RECTL v156; // xmm6
  __int64 v157; // rcx
  LONG *v158; // rbx
  struct _SURFOBJ *v159; // r9
  LONG v160; // eax
  LONG v161; // ecx
  LONG v162; // eax
  LONG v163; // ecx
  LONG v164; // eax
  __int64 v165; // rcx
  __int64 v166; // rax
  struct _XLATEOBJ *p_rclBounds; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v168; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v169; // [rsp+40h] [rbp-D0h]
  unsigned int v170; // [rsp+48h] [rbp-C8h]
  unsigned int v171; // [rsp+58h] [rbp-B8h]
  struct _FD_XFORM *v172; // [rsp+90h] [rbp-80h] BYREF
  struct _XLATEOBJ *v173; // [rsp+98h] [rbp-78h]
  unsigned int v174; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v175[2]; // [rsp+A8h] [rbp-68h] BYREF
  struct _BRUSHOBJ *v176; // [rsp+B0h] [rbp-60h]
  unsigned int v177; // [rsp+B8h] [rbp-58h] BYREF
  int v178; // [rsp+BCh] [rbp-54h] BYREF
  int v179; // [rsp+C0h] [rbp-50h] BYREF
  LONG v180; // [rsp+C4h] [rbp-4Ch] BYREF
  unsigned int v181; // [rsp+C8h] [rbp-48h] BYREF
  unsigned int v182; // [rsp+CCh] [rbp-44h] BYREF
  struct _BRUSHOBJ *v183; // [rsp+D0h] [rbp-40h]
  SURFACE *v184; // [rsp+D8h] [rbp-38h] BYREF
  int v185; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v186; // [rsp+E8h] [rbp-28h] BYREF
  int v187; // [rsp+F0h] [rbp-20h]
  int v188; // [rsp+F4h] [rbp-1Ch]
  __int64 v189; // [rsp+F8h] [rbp-18h] BYREF
  int v190; // [rsp+100h] [rbp-10h] BYREF
  int v191; // [rsp+104h] [rbp-Ch] BYREF
  struct _SURFOBJ *v192[2]; // [rsp+108h] [rbp-8h] BYREF
  int *v193; // [rsp+118h] [rbp+8h] BYREF
  ERECTL *v194; // [rsp+120h] [rbp+10h]
  __int64 v195; // [rsp+128h] [rbp+18h] BYREF
  int v196; // [rsp+130h] [rbp+20h]
  __int64 v197; // [rsp+138h] [rbp+28h] BYREF
  RECTL v198; // [rsp+140h] [rbp+30h] BYREF
  char v199[8]; // [rsp+150h] [rbp+40h] BYREF
  __int64 v200; // [rsp+158h] [rbp+48h]
  PATHOBJ ppo; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 v202; // [rsp+1D8h] [rbp+C8h]
  PATHOBJ v203; // [rsp+250h] [rbp+140h] BYREF
  __int64 v204; // [rsp+258h] [rbp+148h]
  char v205[8]; // [rsp+2D0h] [rbp+1C0h] BYREF
  __int64 v206; // [rsp+2D8h] [rbp+1C8h]
  PATHOBJ v207; // [rsp+350h] [rbp+240h] BYREF
  __int64 v208; // [rsp+358h] [rbp+248h]
  PATHOBJ v209; // [rsp+3D0h] [rbp+2C0h] BYREF
  __int64 v210; // [rsp+3D8h] [rbp+2C8h]
  PATHOBJ v211; // [rsp+450h] [rbp+340h] BYREF
  __int64 v212; // [rsp+458h] [rbp+348h]
  struct _RECTL v213; // [rsp+4D0h] [rbp+3C0h] BYREF
  struct _RECTL v214; // [rsp+4E0h] [rbp+3D0h] BYREF
  struct _CLIPOBJ v215; // [rsp+4F0h] [rbp+3E0h] BYREF
  __int64 v216; // [rsp+528h] [rbp+418h]
  __int64 v217; // [rsp+540h] [rbp+430h]
  int v218; // [rsp+548h] [rbp+438h]
  int v219; // [rsp+570h] [rbp+460h]
  __int64 v220; // [rsp+580h] [rbp+470h]
  struct _RECTL v221; // [rsp+590h] [rbp+480h] BYREF
  _BYTE v222[12]; // [rsp+5A0h] [rbp+490h] BYREF
  struct _RECTL v223; // [rsp+5ACh] [rbp+49Ch] BYREF
  int v224; // [rsp+5E0h] [rbp+4D0h]
  __int64 v225; // [rsp+5E8h] [rbp+4D8h]
  int v226; // [rsp+5F8h] [rbp+4E8h]
  int v227; // [rsp+5FCh] [rbp+4ECh]
  int v228; // [rsp+628h] [rbp+518h]
  _BYTE v229[132]; // [rsp+62Ch] [rbp+51Ch] BYREF
  __int64 v230; // [rsp+6B0h] [rbp+5A0h]
  struct _POINTL v231; // [rsp+6E0h] [rbp+5D0h] BYREF
  LONG x; // [rsp+6E8h] [rbp+5D8h]
  LONG top; // [rsp+6ECh] [rbp+5DCh]
  LONG v234; // [rsp+6F0h] [rbp+5E0h]
  LONG v235; // [rsp+6F4h] [rbp+5E4h]
  int v236; // [rsp+6F8h] [rbp+5E8h]
  int v237; // [rsp+6FCh] [rbp+5ECh]
  struct _POINTL v238; // [rsp+700h] [rbp+5F0h] BYREF
  int v239[10]; // [rsp+720h] [rbp+610h] BYREF

  v11 = 0LL;
  v12 = a5;
  v183 = (struct _BRUSHOBJ *)a6;
  v194 = a10;
  v14 = a2;
  v15 = 2;
  v180 = a2;
  if ( (a4 & 0x10) != 0 )
    v15 = 4;
  v16 = *(_QWORD *)a1;
  v175[0] = v15;
  v17 = 128;
  v177 = a3;
  v193 = a8;
  v18 = *(_DWORD *)(v16 + 176);
  v182 = 0;
  LODWORD(v189) = 0;
  if ( (v18 & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v16 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  LODWORD(v176) = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_5:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v20 = a4 & 0xFFFFC36F;
  v174 = a4 & 0xFFFFC36F;
  if ( !a5 )
  {
    v20 = a4 & 0xFFFFC369;
LABEL_16:
    v174 = v20;
    goto LABEL_17;
  }
  if ( a5->left == a5->right || a5->top == a5->bottom )
  {
    a5->right = a2;
    a5->left = a2;
    a5->bottom = a3;
    a5->top = a3;
    if ( (a4 & 6) == 2 )
    {
      v12 = 0LL;
      v20 = a4 & 0xFFFFC36D;
      goto LABEL_16;
    }
  }
LABEL_17:
  v21 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && (!v20 || v12 && (v20 & 0xFFFFFFF9) == 0) )
  {
    v22 = *(_DWORD *)(v21 + 176) & 1;
    if ( !v22 || (v20 & 4) == 0 )
    {
      v213 = 0LL;
      v181 = 0;
      if ( v22 )
      {
        v23 = 0LL;
        v173 = 0LL;
        HIDWORD(v24) = 0;
      }
      else
      {
        v25 = (struct _XLATEOBJ **)(v21 + 1416);
        if ( (*(_DWORD *)(v21 + 40) & 1) == 0 )
          v25 = (struct _XLATEOBJ **)(v21 + 1408);
        v24 = *v25;
        v173 = v24;
        v23 = (unsigned int)v24;
      }
      v178 = 16 * v23;
      v26 = 16 * HIDWORD(v24);
      v187 = *(_DWORD *)(*(_QWORD *)(v21 + 80) + 68LL);
      v188 = *(_DWORD *)(*(_QWORD *)(v21 + 80) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v21 + 80) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v186, a1, 0x204u, 0);
        v23 = (unsigned int)v173;
        v11 = 0LL;
        v27 = v186;
      }
      else
      {
        v27 = v21 + 336;
        v186 = v21 + 336;
      }
      v28 = 0LL;
      if ( v12 )
      {
        v179 = v20 & 2;
        if ( (v20 & 2) != 0 )
          v17 = 136;
        v29 = *(_DWORD *)(v27 + 32);
        if ( (v29 & 2) != 0 )
        {
          v30 = v23 + v12->left + ((*(_DWORD *)(v27 + 24) + 8) >> 4);
          v214.left = v30;
          v31 = v23 + v12->right + ((*(_DWORD *)(v27 + 24) + 8) >> 4);
          v214.right = v31;
          v32 = HIDWORD(v173) + v12->top + ((*(_DWORD *)(v27 + 28) + 8) >> 4);
          v214.top = v32;
          v23 = (unsigned int)(HIDWORD(v173) + v12->bottom + ((*(_DWORD *)(v27 + 28) + 8) >> 4));
          v214.bottom = HIDWORD(v173) + v12->bottom + ((*(_DWORD *)(v27 + 28) + 8) >> 4);
        }
        else
        {
          if ( (v29 & 1) != 0 )
          {
            left = (float)v12->left;
            v190 = 0;
            bFToL(left * *(float *)v27, &v190, 0);
            v34 = v186;
            right = (float)v12->right;
            v214.left = (_DWORD)v173 + ((*(_DWORD *)(v186 + 24) + v190 + 8) >> 4);
            v191 = v36;
            bFToL(right * *(float *)v186, &v191, v36);
            v37 = _mm_cvtsi32_si128(v12->top);
            LODWORD(v34) = *(_DWORD *)(v34 + 24) + v191 + 8;
            v185 = v38;
            v31 = (_DWORD)v173 + ((int)v34 >> 4);
            v214.right = v31;
            bFToL(_mm_cvtepi32_ps(v37).m128_f32[0] * *(float *)(v186 + 12), &v185, v38);
            *(float *)v37.m128i_i32 = (float)v12->bottom;
            v32 = HIDWORD(v173) + ((*(_DWORD *)(v186 + 28) + v185 + 8) >> 4);
            v214.top = v32;
            v179 = v39;
            bFToL(*(float *)v37.m128i_i32 * *(float *)(v186 + 12), &v179, v39);
            v23 = (unsigned int)(HIDWORD(v173) + ((*(_DWORD *)(v186 + 28) + v179 + 8) >> 4));
            v214.bottom = HIDWORD(v173) + ((*(_DWORD *)(v186 + 28) + v179 + 8) >> 4);
          }
          else
          {
            bottom = v12->bottom;
            v231.x = v12->left;
            x = v231.x;
            top = v12->top;
            v235 = top;
            v231.y = bottom;
            v234 = v12->right;
            EXFORMOBJ::bXform((EXFORMOBJ *)&v186, &v231, (struct _POINTFIX *)&v231, 3uLL);
            v41 = v231.x + v234 - x;
            v237 = v231.y + v235 - top;
            v185 = v237;
            v42 = x > v231.x;
            v236 = v41;
            v43 = *(&v231.x + 2 * (v42 == x > v234));
            v44 = *((_DWORD *)&v231 + 2 * (v42 == x > v234) + 4);
            if ( v43 > v44 )
              v43 += 15;
            else
              v44 += 15;
            v30 = (_DWORD)v173 + (v43 >> 4);
            v31 = (_DWORD)v173 + (v44 >> 4);
            v214.right = v31;
            v214.left = v30;
            v45 = top > v231.y;
            v46 = *(&v231.y + 2 * (v45 == top > v235));
            v47 = *((_DWORD *)&v231 + 2 * (v45 == top > v235) + 5);
            if ( v46 > v47 )
              v46 += 15;
            else
              v47 += 15;
            v48 = v174;
            v32 = HIDWORD(v173) + (v46 >> 4);
            v23 = (unsigned int)(HIDWORD(v173) + (v47 >> 4));
            v214.bottom = v23;
            v214.top = v32;
            if ( (v174 & 4) != 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v205);
              if ( v206 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v205, v49, &v231, v50) )
              {
                v51 = *(_QWORD *)a1;
                v221.top = 16 * (*(_DWORD *)(*(_QWORD *)a1 + 1396LL) - HIDWORD(v173));
                v221.bottom = 16 * (*(_DWORD *)(v51 + 1404) - HIDWORD(v173));
                v195 = 0LL;
                v196 = 0;
                RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v195, (struct EPATHOBJ *)v205, 1u, &v221);
                if ( v195 )
                {
                  v28 = a1;
                  *(_QWORD *)(*(_QWORD *)a1 + 1528LL) = v195;
                  if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
                  {
                    v48 &= ~4u;
                    v174 = v48;
                  }
                }
                if ( v196 == 1 )
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v195);
              }
              if ( (v48 & 4) != 0 )
              {
                v174 = 0;
                v17 = 0;
                a7 = 0;
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v205);
              v23 = (unsigned int)v214.bottom;
              v30 = v214.left;
              v31 = v214.right;
              v32 = v214.top;
            }
            else if ( v179 )
            {
              v231.x += v178;
              x += v178;
              v234 += v178;
              v17 = v17 & 0xFFFFFFF5 | 2;
              v231.y += v26;
              v235 += v26;
              top += v26;
              v237 = v26 + v185;
              v236 = v178 + v41;
            }
          }
          v11 = 0LL;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 312LL) & 1) != 0 )
        {
          ++v30;
          ++v31;
          v214.left = v30;
          v214.right = v31;
        }
        if ( v30 > v31 )
        {
          v52 = v30;
          v214.left = v31;
          v30 = v31;
          v214.right = v52;
          v31 = v52;
        }
        if ( v32 > (int)v23 )
        {
          v53 = v32;
          v214.top = v23;
          v32 = v23;
          v214.bottom = v53;
          v23 = v53;
        }
        if ( (v17 & 0xA) != 0 )
        {
          v54 = v213.left;
          v55 = v213.right;
          if ( v213.left != v213.right )
          {
            v56 = v213.top;
            v57 = (unsigned int)v213.bottom;
            if ( v213.top != v213.bottom )
            {
              if ( v30 < v213.left )
                v54 = v30;
              v213.left = v54;
              if ( v32 < v213.top )
                v56 = v32;
              v14 = v180;
              v213.top = v56;
              if ( v31 > v213.right )
                v55 = v31;
              LOBYTE(v20) = v174;
              v213.right = v55;
              if ( (int)v23 > v213.bottom )
              {
                v57 = (unsigned int)v23;
                v213.bottom = v23;
              }
LABEL_78:
              v58 = 0LL;
              v173 = 0LL;
              v172 = 0LL;
              v224 = 0;
              if ( !a7 )
              {
                v85 = 0LL;
LABEL_156:
                if ( (v181 & 1) != 0 )
                {
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) += v226;
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 88LL) += v227;
                  v57 = (unsigned int)v213.bottom;
                }
                if ( (*(_DWORD *)(*(_QWORD *)a1 + 176LL) & 1) != 0 )
                {
                  if ( (v20 & 4) != 0 )
                    v17 = 0;
                  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v199, a1);
                  if ( !v200 )
                    goto LABEL_198;
                  if ( (v17 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v199, &v214) )
                    v17 = 0;
                  if ( (v17 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v199, v89, &v231, v91) )
                    v17 = 0;
                  if ( (v17 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v199, v89, &v238, v91) )
                    v17 = 0;
                  if ( (v17 & 1) != 0 && (!v85 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v199, v85)) )
                  {
                    if ( !(unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)v222, (struct EPATHOBJ *)v199, v90) )
                    {
LABEL_194:
                      v17 = 0;
                      goto LABEL_195;
                    }
                    if ( v58 && !(unsigned int)ERECTL::bEmpty(v58) )
                    {
                      while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v199, (struct _RECTL *)v58) )
                      {
                        v58 = (ERECTL *)((char *)v58 + 16);
                        if ( (unsigned int)ERECTL::bEmpty(v58) )
                          goto LABEL_195;
                      }
                      goto LABEL_194;
                    }
                  }
LABEL_195:
                  if ( (v17 & 4) != 0
                    && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)v222, (struct EPATHOBJ *)v199) )
                  {
                    v17 = 0;
                  }
LABEL_198:
                  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v199);
LABEL_389:
                  v95 = 1;
                  goto LABEL_390;
                }
                if ( v213.left == v213.right || v213.top == (_DWORD)v57 )
                  goto LABEL_389;
                if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
                  XDCOBJ::vAccumulate(a1, (struct ECLIPOBJ *)v57, (struct ERECTL *)&v213);
                if ( (_DWORD)v189 || (v20 & 4) != 0 )
                {
                  v95 = 1;
                  v94 = 1;
                }
                else
                {
                  v94 = v11;
                  v95 = 1;
                }
                v96 = *(struct REGION **)(*(_QWORD *)a1 + 1552LL);
                if ( !v96 )
                  v96 = *(struct REGION **)(*(_QWORD *)a1 + 1544LL);
                v216 = v11;
                v217 = v11;
                v218 = v11;
                v219 = 1;
                v220 = v11;
                XCLIPOBJ::vSetup((XCLIPOBJ *)&v215, v96, (struct ERECTL *)&v213, v94);
                rclBounds = v215.rclBounds;
                v98 = _mm_srli_si128((__m128i)v215.rclBounds, 8);
                v213 = v215.rclBounds;
                v215.rclBounds.left = _mm_cvtsi128_si32((__m128i)v215.rclBounds);
                v215.rclBounds.right = _mm_cvtsi128_si32(v98);
                if ( v215.rclBounds.left == v215.rclBounds.right )
                  goto LABEL_390;
                v215.rclBounds.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 4));
                v215.rclBounds.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rclBounds, 12));
                if ( v215.rclBounds.top == v215.rclBounds.bottom )
                  goto LABEL_390;
                if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
                {
                  v198 = rclBounds;
                  XDCOBJ::vAccumulateTight(a1, (struct ECLIPOBJ *)v57, (struct ERECTL *)&v198);
                }
                v99 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
                if ( !v99
                  || ((*(_DWORD *)(v99 + 116) & 8) != 0 || *(_QWORD *)(v99 + 224))
                  && (*(_WORD *)(v99 + 102) & 0x200) != 0 )
                {
LABEL_390:
                  if ( (v224 & 0x801) != 0 )
                  {
                    if ( (v224 & 1) != 0 )
                      FreeTmpBuffer(v225);
                    if ( (v224 & 0x800) != 0 )
                      Win32FreePool(v230, v57, v23);
                  }
                  if ( v172 )
                  {
                    if ( (LODWORD(v172[45].eXX) & 0x81) != 0 )
                      RFONTOBJ::dtHelper((RFONTOBJ *)&v172);
                    v165 = *(_QWORD *)&v172[39].eYX;
                    if ( v165 )
                    {
                      Win32FreePool(v165, v57, v23);
                      *(_QWORD *)&v172[40].eXX = 0LL;
                      *(_QWORD *)&v172[39].eYX = 0LL;
                    }
                    EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)&v172[33].eXX);
                    GreReleaseSemaphoreInternal(*(_QWORD *)&v172[33].eXX);
                  }
                  if ( v28 )
                  {
                    v197 = *(_QWORD *)(*(_QWORD *)v28 + 1528LL);
                    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v197);
                    v166 = *(_QWORD *)v28;
                    *(_DWORD *)(v166 + 36) |= 0x10u;
                    *(_QWORD *)(v166 + 1528) = 0LL;
                  }
                  if ( v17 )
                    return v95;
                  return 0;
                }
                v100 = *(_DWORD *)(v99 + 112);
                if ( (v100 & 0x800) != 0 )
                {
                  v101 = UserSurfaceAccessCheck(*(_QWORD *)(v99 + 600));
                }
                else
                {
                  if ( (v100 & 0x10000000) == 0 )
                    goto LABEL_222;
                  v101 = UserScreenAccessCheck();
                }
                if ( !v101 )
                  goto LABEL_390;
LABEL_222:
                v102 = *(_QWORD *)(v99 + 120);
                cEntries = 0LL;
                v184 = *(SURFACE **)(v99 + 48);
                v104 = *(_QWORD *)a1;
                v105 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
                v106 = *(_QWORD *)a1 + 1872LL;
                v107 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
                v108 = (struct _BRUSHOBJ *)(*(_QWORD *)a1 + 2016LL);
                v176 = (struct _BRUSHOBJ *)v106;
                v183 = v108;
                v177 = v105;
                if ( (v105 & 0x10000000) != 0 )
                {
                  LOBYTE(cEntries) = v182 == 0;
                  *(_DWORD *)(*(_QWORD *)(v104 + 80) + 8LL) |= 4u;
                  --*(_DWORD *)(v106 + 132);
                }
                v57 = *(_QWORD *)a1;
                v109 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
                v23 = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 332LL) | *(_DWORD *)(v109 + 8));
                if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v109 + 8)) & 0xC) != 0 )
                {
                  if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v109 + 8)) & 4) != 0 )
                  {
                    EBRUSHOBJ::vInitBrush(v106, v57, gpbrText, v107, v102, v99, cEntries);
                    v108 = v183;
                  }
                  v57 = *(_QWORD *)a1;
                  v110 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
                  v23 = (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 332LL) | *(_DWORD *)(v110 + 8));
                  if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v110 + 8)) & 8) != 0 )
                    EBRUSHOBJ::vInitBrush(v108, v57, gpbrBackground, v107, v102, v99, (v177 >> 15) & 1);
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= 0xFFFFFFF3;
                  *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= 0xFFFFFFF3;
                }
                v111 = (struct _POINTL *)(*(_QWORD *)a1 + 1576LL);
                if ( (v17 & 0x1A) != 0 )
                {
                  if ( (v17 & 8) != 0 )
                  {
                    v57 = (unsigned int)v214.left;
                    v23 = (unsigned int)v214.right;
                    if ( v214.left != v214.right )
                    {
                      v112 = v214.top;
                      v113 = v214.bottom;
                      if ( v214.top != v214.bottom )
                      {
                        si128 = _mm_load_si128((const __m128i *)&v213);
                        v115 = _mm_cvtsi128_si32(si128);
                        v116 = _mm_srli_si128(si128, 8);
                        v213.left = v115;
                        if ( v115 > v214.left )
                          v57 = (unsigned int)v115;
                        v117 = _mm_cvtsi128_si32(v116);
                        v215.rclBounds.left = v57;
                        v118 = _mm_srli_si128(si128, 4);
                        v213.right = v117;
                        v119 = _mm_srli_si128(si128, 12);
                        if ( v117 < v214.right )
                          v23 = (unsigned int)v117;
                        v120 = _mm_cvtsi128_si32(v119);
                        cEntries = (unsigned int)_mm_cvtsi128_si32(v118);
                        v215.rclBounds.right = v23;
                        v213.bottom = v120;
                        v213.top = cEntries;
                        if ( (int)cEntries > v214.top )
                          v112 = cEntries;
                        v215.rclBounds.top = v112;
                        if ( v120 < v214.bottom )
                          v113 = v120;
                        v215.rclBounds.bottom = v113;
                        if ( (int)v57 < (int)v23 && v112 < v113 )
                        {
                          ++*(_DWORD *)(v99 + 92);
                          v121 = v239;
                          v122 = *(_QWORD *)(v99 + 48);
                          v179 = 0;
                          v181 = 0;
                          v182 = 0;
                          v123 = *(_DWORD *)(v122 + 56) & 0x8080;
                          v193 = v239;
                          if ( v123 == 32896 && v172 )
                          {
                            v124 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v172, 0LL, &v181, &v182, &v193);
                            v121 = v193;
                            v179 = v124;
                          }
                          if ( (*(_DWORD *)(v99 + 112) & 1) != 0 )
                            v125 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v99 + 48) + 2856LL);
                          else
                            v125 = EngBitBlt;
                          v170 = (unsigned int)v111;
                          v169 = (struct _POINTL *)v183;
                          v168 = 0LL;
                          p_rclBounds = (struct _XLATEOBJ *)&v215.rclBounds;
                          ((void (__fastcall *)(__int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD))v125)(
                            v99 + 24,
                            0LL,
                            0LL,
                            &v215,
                            0LL);
                          if ( v179 )
                          {
                            UMPDAcquireRFONTSem((struct RFONTOBJ *)&v172, 0LL, v181, v182, v121);
                            if ( v121 )
                            {
                              if ( v121 != v239 )
                                Win32FreePool(v121, v57, v23);
                            }
                          }
                        }
                        v215.rclBounds = v213;
                      }
                    }
                  }
                  if ( (v17 & 0x12) != 0 )
                  {
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                    if ( v202 )
                    {
                      if ( (v17 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v126, &v231, v127) )
                        v17 = 0;
                      if ( (v17 & 0x10) != 0
                        && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v126, &v238, v127) )
                      {
                        v17 = 0;
                      }
                      if ( (v17 & 0x12) != 0
                        && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                            &ppo,
                                            a1,
                                            (struct RFONTOBJ *)&v172,
                                            (struct PDEVOBJ *)&v184,
                                            (struct SURFACE *)v99,
                                            &v215,
                                            v183,
                                            v111,
                                            (unsigned int)v169,
                                            v170) )
                      {
                        v17 = 0;
                      }
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                  }
                }
                if ( (v17 & 1) == 0 )
                  goto LABEL_383;
                flXlate = v177;
                v194 = 0LL;
                if ( (_DWORD)v189 )
                {
                  LODWORD(flXlate) = v177 & 0xFFFFFEFF;
                  v129 = 32;
                  if ( (LODWORD(v172[30].eYX) & 0x8000) != 0 )
                    v129 = 64;
                  v17 |= v129;
                }
                v130 = v173;
                if ( v173 && (flXlate & 0x100) == 0 )
                {
                  iUniq = v173->iUniq;
                  v132 = *(_DWORD *)&v173->iSrcType;
                  if ( v213.left > (signed int)v173->iUniq )
                    iUniq = v213.left;
                  flXlate = v173->flXlate;
                  if ( v213.right < v132 )
                    v132 = v213.right;
                  cEntries = v173->cEntries;
                  if ( v213.top > (int)flXlate )
                    flXlate = (unsigned int)v213.top;
                  v215.rclBounds.left = iUniq;
                  if ( v213.bottom < (int)cEntries )
                    cEntries = (unsigned int)v213.bottom;
                  v215.rclBounds.bottom = cEntries;
                  v215.rclBounds.right = v132;
                  v215.rclBounds.top = flXlate;
                  if ( iUniq < v132 && (int)flXlate < (int)cEntries )
                  {
                    v133 = v183;
                    ++*(_DWORD *)(v99 + 92);
                    TextOutBitBlt(
                      (struct SURFACE *)v99,
                      (struct RFONTOBJ *)&v172,
                      (struct _SURFOBJ *)flXlate,
                      (struct _SURFOBJ *)cEntries,
                      &v215,
                      p_rclBounds,
                      &v215.rclBounds,
                      v168,
                      v169,
                      v133,
                      v111,
                      v171);
                  }
                  v215.rclBounds = v213;
                  v173 = 0LL;
                }
                if ( v58 && *((_DWORD *)v184 + 541) != 4 )
                {
                  v194 = v58;
                  v58 = 0LL;
                }
                if ( (v17 & 0x20) != 0 )
                {
                  if ( (v224 & 0x1400) != 0 )
                  {
                    v134 = v176;
                    if ( !bProxyDrvTextOut(
                            a1,
                            (struct SURFACE *)v99,
                            (struct ESTROBJ *)v222,
                            (struct ECLIPOBJ *)&v215,
                            0LL,
                            0LL,
                            v176,
                            v183,
                            v111,
                            (struct RFONTOBJ *)&v172,
                            (struct PDEVOBJ *)&v184,
                            *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                            &v213) )
                      v17 = 0;
                    goto LABEL_367;
                  }
                  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v207);
                  if ( v208 )
                  {
                    v136 = ESTROBJ::bTextToPath((ESTROBJ *)v222, (struct EPATHOBJ *)&v207, v135);
                    v134 = v176;
                    if ( v136 )
                    {
                      if ( !(unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                            &v207,
                                            a1,
                                            (struct RFONTOBJ *)&v172,
                                            (struct PDEVOBJ *)&v184,
                                            (struct SURFACE *)v99,
                                            &v215,
                                            v176,
                                            v111,
                                            (unsigned int)v169) )
                      {
                        v17 = 0;
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v207);
                        goto LABEL_367;
                      }
LABEL_299:
                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v207);
LABEL_367:
                      v155 = v194;
                      if ( v194 )
                      {
                        v156 = v215.rclBounds;
                        ++*(_DWORD *)(v99 + 92);
                        *(RECTL *)v192 = v156;
                        if ( !(unsigned int)ERECTL::bEmpty(v155) )
                        {
                          v23 = HIDWORD(v192[1]);
                          v158 = (LONG *)(v157 + 4);
                          LODWORD(v57) = v192[1];
                          v159 = (struct _SURFOBJ *)HIDWORD(v192[0]);
                          v160 = (LONG)v192[0];
                          do
                          {
                            v161 = *(v158 - 1);
                            if ( v160 > v161 )
                              v161 = v160;
                            v162 = v158[1];
                            v215.rclBounds.left = v161;
                            if ( (int)v57 < v162 )
                              v162 = v57;
                            v215.rclBounds.right = v162;
                            if ( v161 < v162 )
                            {
                              v163 = *v158;
                              v164 = v158[2];
                              if ( (int)v159 > *v158 )
                                v163 = (int)v159;
                              v215.rclBounds.top = v163;
                              if ( (int)v23 < v164 )
                                v164 = v23;
                              v215.rclBounds.bottom = v164;
                              if ( v163 < v164 )
                                TextOutBitBlt(
                                  (struct SURFACE *)v99,
                                  (struct RFONTOBJ *)&v172,
                                  (struct _SURFOBJ *)v23,
                                  v159,
                                  &v215,
                                  p_rclBounds,
                                  &v215.rclBounds,
                                  v168,
                                  v169,
                                  v134,
                                  v111,
                                  v171);
                            }
                            v158 += 4;
                            v143 = (unsigned int)ERECTL::bEmpty((ERECTL *)(v158 - 1)) == 0;
                            v160 = (LONG)v192[0];
                          }
                          while ( v143 );
                        }
                        v215.rclBounds = v156;
                      }
LABEL_383:
                      if ( (v17 & 4) != 0 )
                      {
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v211);
                        if ( !v212
                          || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)v222, (struct EPATHOBJ *)&v211)
                          || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                              &v211,
                                              a1,
                                              (struct RFONTOBJ *)&v172,
                                              (struct PDEVOBJ *)&v184,
                                              (struct SURFACE *)v99,
                                              &v215,
                                              v176,
                                              v111,
                                              (unsigned int)v169,
                                              v170) )
                        {
                          v17 = 0;
                        }
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v211);
                      }
                      goto LABEL_389;
                    }
                  }
                  else
                  {
                    v134 = v176;
                  }
                  v17 = 0;
                  goto LABEL_299;
                }
                ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v130, flXlate, cEntries);
                if ( ThreadWin32Thread && (v138 = *ThreadWin32Thread) != 0 )
                  v139 = *(_QWORD *)(v138 + 304);
                else
                  v139 = *(_QWORD *)(v99 + 104);
                if ( v139 )
                  SURFACE::pdcoAA((SURFACE *)v99, 0LL);
                if ( (*(_DWORD *)(v99 + 112) & 8) != 0 )
                  v140 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v99 + 48) + 2896LL);
                else
                  v140 = EngTextOut;
                if ( (char *)v140 == (char *)SpTextOut || (char *)v140 == (char *)BmpDevTextOut )
                {
                  if ( (LODWORD(v172->eYY) & 0x10010000) != 0 )
                    SURFACE::pdcoAA((SURFACE *)v99, a1);
                }
                else
                {
                  eYY = v172->eYY;
                  if ( (LODWORD(eYY) & 0x10000) != 0 )
                  {
                    v142 = *(_QWORD *)a1;
                    v143 = (LODWORD(eYY) & 0x10000000) != 0
                         ? (*(_DWORD *)(v142 + 76) & 0x4000) == 0
                         : (*(_DWORD *)(v142 + 72) & 0x1000000) == 0;
                    if ( v143 )
                    {
                      if ( v140 != EngTextOut )
                        SURFACE::pdcoAA((SURFACE *)v99, a1);
                      v140 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                    }
                  }
                }
                if ( (v17 & 0x40) != 0 )
                {
                  if ( (v224 & 0x1400) != 0 )
                  {
                    v134 = v176;
                    if ( !bProxyDrvTextOut(
                            a1,
                            (struct SURFACE *)v99,
                            (struct ESTROBJ *)v222,
                            (struct ECLIPOBJ *)&v215,
                            0LL,
                            0LL,
                            v176,
                            v183,
                            v111,
                            (struct RFONTOBJ *)&v172,
                            (struct PDEVOBJ *)&v184,
                            *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                            &v213) )
                      v17 = 0;
                    goto LABEL_364;
                  }
                  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v203);
                  if ( v204
                    && (unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)v222, (struct EPATHOBJ *)&v203, v147)
                    && (v203.cCurves <= 1
                     || (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                        &v203,
                                        a1,
                                        (struct RFONTOBJ *)&v172,
                                        (struct PDEVOBJ *)&v184,
                                        (struct SURFACE *)v99,
                                        &v215,
                                        v176,
                                        v111,
                                        (unsigned int)v169,
                                        v170)) )
                  {
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v203);
                  }
                  else
                  {
                    v17 = 0;
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v203);
                  }
                  goto LABEL_363;
                }
                ++*(_DWORD *)(v99 + 92);
                if ( (v17 & 4) == 0 )
                {
                  if ( (v224 & 0x1400) != 0 )
                  {
                    v149 = bProxyDrvTextOut(
                             a1,
                             (struct SURFACE *)v99,
                             (struct ESTROBJ *)v222,
                             (struct ECLIPOBJ *)&v215,
                             (struct _RECTL *)v58,
                             (struct _RECTL *)v173,
                             v176,
                             v183,
                             v111,
                             (struct RFONTOBJ *)&v172,
                             (struct PDEVOBJ *)&v184,
                             0,
                             &v213);
                    v134 = v176;
                    if ( !v149 )
                      v17 = 0;
                    goto LABEL_364;
                  }
                  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8080) == 0x80 && !LODWORD(v172[5].eYX) )
                  {
                    v189 = ghsemPrintKView;
                    GreAcquireSemaphore(ghsemPrintKView);
                    for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                    {
                      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)&v172[7].eYX + 80LL) )
                        ++*(_DWORD *)(i + 12);
                    }
                    SEMOBJ::vUnlock((SEMOBJ *)&v189);
                  }
                  v170 = 3341;
                  v169 = v111;
                  v168 = (struct _POINTL *)v183;
                  p_rclBounds = v173;
                  if ( !((unsigned int (__fastcall *)(__int64, _BYTE *, struct _FD_XFORM *, struct _CLIPOBJ *, ERECTL *))v140)(
                          v99 + 24,
                          v222,
                          v172,
                          &v215,
                          v58) )
                    v17 = 0;
                  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8080) == 0x80 && !LODWORD(v172[5].eYX) )
                  {
                    v192[0] = (struct _SURFOBJ *)ghsemPrintKView;
                    GreAcquireSemaphore(ghsemPrintKView);
                    for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                    {
                      if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)&v172[7].eYX + 80LL) )
                      {
                        v152 = *(_DWORD *)(j + 12);
                        if ( v152 )
                          *(_DWORD *)(j + 12) = v152 - 1;
                      }
                    }
                    SEMOBJ::vUnlock((SEMOBJ *)v192);
                  }
LABEL_363:
                  v134 = v176;
                  goto LABEL_364;
                }
                PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v209);
                if ( v210
                  && (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)v222, (struct EPATHOBJ *)&v209)
                  && ((v224 & 0x1400) == 0
                    ? (v170 = 3341,
                       v169 = v111,
                       v168 = (struct _POINTL *)v183,
                       p_rclBounds = v173,
                       v148 = ((__int64 (__fastcall *)(__int64, _BYTE *, struct _FD_XFORM *, struct _CLIPOBJ *, ERECTL *))v140)(
                                v99 + 24,
                                v222,
                                v172,
                                &v215,
                                v58))
                    : (v148 = bProxyDrvTextOut(
                                a1,
                                (struct SURFACE *)v99,
                                (struct ESTROBJ *)v222,
                                (struct ECLIPOBJ *)&v215,
                                (struct _RECTL *)v58,
                                (struct _RECTL *)v173,
                                v176,
                                v183,
                                v111,
                                (struct RFONTOBJ *)&v172,
                                0LL,
                                0,
                                &v213)),
                      v148) )
                {
                  v134 = v176;
                  if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                       &v209,
                                       a1,
                                       (struct RFONTOBJ *)&v172,
                                       (struct PDEVOBJ *)&v184,
                                       (struct SURFACE *)v99,
                                       &v215,
                                       v176,
                                       v111,
                                       (unsigned int)v169,
                                       v170) )
                  {
LABEL_342:
                    v17 &= ~4u;
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v209);
LABEL_364:
                    *(_QWORD *)(v99 + 104) = 0LL;
                    v153 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v144, v145, v146);
                    if ( v153 )
                    {
                      v154 = *v153;
                      if ( v154 )
                        *(_QWORD *)(v154 + 304) = 0LL;
                    }
                    goto LABEL_367;
                  }
                }
                else
                {
                  v134 = v176;
                }
                v17 = 0;
                goto LABEL_342;
              }
              v59 = *(_QWORD *)a1;
              v184 = 0LL;
              v143 = (*(_DWORD *)(v59 + 36) & 0x4000) == 0;
              v179 = *(_BYTE *)(v59 + 176) & 1;
              if ( !v143 )
              {
                v184 = *(SURFACE **)(v59 + 512);
                SURFACE::bUnMap(v184, 0LL, (struct DC *)v59);
              }
              if ( (unsigned int)RFONTOBJ::bInit(&v172, a1, v179, v175[0]) )
                GreAcquireSemaphore(*(_QWORD *)&v172[33].eXX);
              if ( v184 )
                SURFACE::Map(v184, 0LL, *(_QWORD *)a1);
              if ( !v172 )
              {
LABEL_177:
                v57 = (unsigned int)v213.bottom;
                v11 = 0LL;
                v17 = 0;
                v85 = 0LL;
                goto LABEL_156;
              }
              LODWORD(v189) = LODWORD(v172[4].eYX) & 2;
              v182 = (_DWORD)v189 && (LODWORD(v172[30].eYX) & 0x8000) == 0;
              v60 = *(_QWORD *)a1;
              v61 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
              v181 = *(_DWORD *)(*(_QWORD *)a1 + 2168LL) | *(_DWORD *)(v61 + 152) & 0x11F;
              if ( (v181 & 1) != 0 )
              {
                v62 = (*(_DWORD *)(v61 + 8) & 0x200) != 0;
                v63 = *(_QWORD *)(v60 + 80);
                if ( !v62 )
                {
                  *(_DWORD *)(v63 + 8) |= 0x100u;
                  v64 = *(_QWORD *)a1;
                  v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) + v178;
                  v175[0] = v65;
                  v66 = *(_DWORD *)(*(_QWORD *)(v64 + 80) + 88LL);
                  goto LABEL_105;
                }
                *(_DWORD *)(v63 + 8) &= ~0x200u;
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0x100u;
                v67 = v186;
                v68 = *(_DWORD *)(v186 + 32);
                if ( (v68 & 2) != 0 )
                {
                  v69 = *(_QWORD *)a1;
                  v175[0] = *(_DWORD *)(v186 + 24) + 16 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 76LL);
                  v175[1] = *(_DWORD *)(v186 + 28) + 16 * *(_DWORD *)(*(_QWORD *)(v69 + 80) + 80LL);
                }
                else if ( (v68 & 1) != 0 )
                {
                  v70 = *(_QWORD *)a1;
                  v177 = 0;
                  bFToL((float)*(int *)(*(_QWORD *)(v70 + 80) + 76LL) * *(float *)v186, &v177, 0);
                  v175[0] = *(_DWORD *)(v67 + 24) + v177;
                  v72 = *(_QWORD *)(v71 + 80);
                  v180 = v73;
                  bFToL((float)*(int *)(v72 + 80) * *(float *)(v67 + 12), &v180, v73);
                  v175[1] = *(_DWORD *)(v67 + 28) + v180;
                }
                else
                {
                  EXFORMOBJ::bXform(
                    (EXFORMOBJ *)&v186,
                    (struct _POINTL *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 76LL),
                    (struct _POINTFIX *)v175,
                    1uLL);
                }
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) = *(_QWORD *)v175;
              }
              else
              {
                v74 = *(_DWORD *)(v186 + 32);
                if ( (v74 & 2) != 0 )
                {
                  v65 = v178 + *(_DWORD *)(v186 + 24) + 16 * v14;
                  v175[0] = v65;
                  v66 = *(_DWORD *)(v186 + 28) + 16 * v177;
                  goto LABEL_105;
                }
                if ( (v74 & 1) != 0 )
                {
                  v174 = 0;
                  bFToL((float)v14 * *(float *)v186, &v174, 0);
                  v65 = v178 + v174 + *(_DWORD *)(v75 + 24);
                  v175[0] = v65;
                  v178 = v76;
                  bFToL((float)(int)v177 * *(float *)(v75 + 12), &v178, v76);
                  v66 = v178 + *(_DWORD *)(v77 + 28);
                  goto LABEL_105;
                }
                v175[0] = v14;
                v175[1] = v177;
                EXFORMOBJ::bXform((EXFORMOBJ *)&v186, (struct _POINTL *)v175, (struct _POINTFIX *)v175, 1uLL);
              }
              v65 = v178 + v175[0];
              v66 = v175[1];
              v175[0] += v178;
LABEL_105:
              v78 = *(_QWORD *)a1;
              v175[1] = v26 + v66;
              ESTROBJ::vInit(
                (ESTROBJ *)v222,
                (unsigned __int16 *)v183,
                a7,
                a1,
                (struct RFONTOBJ *)&v172,
                (struct EXFORMOBJ *)&v186,
                v193,
                (int)v176,
                *(_DWORD *)(v78 + 2172),
                *(_DWORD *)(*(_QWORD *)(v78 + 80) + 160LL),
                *(_DWORD *)(*(_QWORD *)(v78 + 80) + 168LL),
                *(_DWORD *)(*(_QWORD *)(v78 + 80) + 172LL),
                v65,
                v26 + v66,
                v181,
                0LL,
                v194,
                a11);
              if ( (v224 & 4) != 0 )
              {
                v79 = ESTROBJ::bOpaqueArea((ESTROBJ *)v222, (struct _POINTFIX *)&v238, &v223);
                v80 = v79;
                v23 = (unsigned int)v223.right;
                v81 = v223.left;
                if ( (LODWORD(v172->eYY) & 0x10000000) != 0 )
                {
                  v81 = v223.left - 1;
                  v23 = (unsigned int)(v223.right + 1);
                  --v223.left;
                  ++v223.right;
                }
                if ( (v224 & 0x1400) != 0 )
                {
                  ESTROBJ::vEudcOpaqueArea((ESTROBJ *)v222, (struct _POINTFIX *)&v238, v79);
                  v23 = (unsigned int)v223.right;
                  v81 = v223.left;
                }
                v82 = v213.left;
                v83 = v213.right;
                if ( v213.left == v213.right
                  || (v84 = v213.top, v57 = (unsigned int)v213.bottom, v213.top == v213.bottom) )
                {
                  v213 = v223;
                  v57 = (unsigned int)v223.bottom;
                }
                else
                {
                  if ( v81 < v213.left )
                    v82 = v81;
                  v213.left = v82;
                  if ( v223.top < v213.top )
                    v84 = v223.top;
                  v213.top = v84;
                  if ( (int)v23 > v213.right )
                    v83 = v23;
                  v213.right = v83;
                  if ( v223.bottom > v213.bottom )
                  {
                    v57 = (unsigned int)v223.bottom;
                    v213.bottom = v223.bottom;
                  }
                }
                if ( a9 == 2 )
                {
                  if ( !v80 )
                  {
                    v85 = &v223;
                    v173 = (struct _XLATEOBJ *)&v223;
                    goto LABEL_125;
                  }
                  v17 |= 0x10u;
                }
                v85 = 0LL;
LABEL_125:
                v86 = v81 >= (int)v23 || v223.top >= v223.bottom;
                v87 = v214.bottom;
                if ( (v17 & 8) == 0
                  || v214.left > v81
                  || v214.right < (int)v23
                  || v214.top > v223.top
                  || v214.bottom < v223.bottom
                  || v86 )
                {
                  if ( !v85 )
                  {
                    if ( v86 )
                      goto LABEL_143;
                    goto LABEL_142;
                  }
                }
                else
                {
                  v85 = &v214;
                  v17 &= ~8u;
                  v173 = (struct _XLATEOBJ *)&v214;
                }
                if ( v85->left >= v85->right || v85->top >= v85->bottom )
                {
LABEL_143:
                  if ( (v181 & 0xA0) != 0 )
                  {
                    if ( v228 )
                    {
                      v58 = (ERECTL *)v229;
                      v88 = (ERECTL *)v229;
                      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v229) )
                      {
                        do
                        {
                          ERECTL::operator+=(&v213, v88);
                          v88 = (ERECTL *)((char *)v88 + 16);
                        }
                        while ( !(unsigned int)ERECTL::bEmpty(v88) );
                        v57 = (unsigned int)v213.bottom;
                        v87 = v214.bottom;
                      }
                    }
                    else
                    {
                      v58 = 0LL;
                      v17 |= 4u;
                    }
                  }
                  if ( (v20 & 4) == 0 )
                    goto LABEL_155;
                  if ( v214.left > v213.left )
                  {
                    v213.left = v214.left;
                  }
                  else if ( v214.right >= v213.right && v214.top <= v213.top && v87 >= (int)v57 )
                  {
                    LOBYTE(v20) = v20 & 0xFB;
LABEL_155:
                    v11 = 0LL;
                    goto LABEL_156;
                  }
                  v92 = v213.top;
                  if ( v214.top > v213.top )
                    v92 = v214.top;
                  v213.top = v92;
                  v93 = v213.right;
                  if ( v214.right < v213.right )
                    v93 = v214.right;
                  v213.right = v93;
                  if ( v87 < (int)v57 )
                    v57 = (unsigned int)v87;
                  v213.bottom = v57;
                  if ( v93 >= v213.left )
                  {
                    if ( (int)v57 < v213.top )
                      v213.top = v57;
                  }
                  else
                  {
                    v213.left = v93;
                  }
                  goto LABEL_155;
                }
LABEL_142:
                v17 |= 1u;
                goto LABEL_143;
              }
              goto LABEL_177;
            }
          }
          v213 = v214;
        }
        LOBYTE(v20) = v174;
        v14 = v180;
      }
      v57 = (unsigned int)v213.bottom;
      goto LABEL_78;
    }
  }
  return 0;
}
