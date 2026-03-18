/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0
 * Callers:
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C001DA60 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009A640 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreExtTextOutWInternal @ 0x1C00EA458 (GreExtTextOutWInternal.c)
 *     GrePolyTextOutW @ 0x1C015CE5C (GrePolyTextOutW.c)
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0005F34 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C001D448 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0022264 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00225B0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00230F0 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002E718 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C009CDD8 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C009DAE4 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C009DBE0 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E1794 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00FE334 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027BDF0 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C027BF44 (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C0291FCC (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C029202C (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B5C70 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B62C8 (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreExtTextOutWLocked(
        struct XDCOBJ *a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
        struct _BRUSHOBJ *a8,
        unsigned int a9,
        void *a10,
        unsigned int a11)
{
  struct tagRECT *v12; // r13
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  unsigned int v16; // edi
  __int64 v17; // rdx
  int v18; // eax
  int v19; // r15d
  struct _XLATEOBJ *v20; // rbx
  struct _XLATEOBJ **v21; // rbx
  int v22; // ebx
  _DWORD *v23; // rcx
  struct XDCOBJ *v24; // rsi
  int v25; // eax
  LONG left; // r11d
  LONG v27; // edi
  int v28; // r15d
  int v29; // edx
  _DWORD *v30; // rdi
  LONG v31; // r11d
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  LONG bottom; // eax
  int v39; // r9d
  int v40; // r10d
  _BOOL8 v41; // rax
  int v42; // r11d
  int v43; // edi
  _BOOL8 v44; // rax
  int v45; // r15d
  int v46; // edx
  unsigned int v47; // r13d
  struct EXFORMOBJ *v48; // rdx
  int v49; // r9d
  __int64 v50; // rcx
  LONG v51; // eax
  LONG v52; // eax
  LONG v53; // eax
  LONG v54; // ecx
  LONG v55; // r8d
  struct tagRECT *v56; // r15
  ERECTL *v57; // r13
  struct DC *v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rax
  bool v61; // cf
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // r11d
  int v65; // r8d
  __int64 v66; // rcx
  _DWORD *v67; // r15
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // r8
  _DWORD *v71; // r15
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rdx
  int v76; // eax
  int v77; // r15d
  LONG v78; // edx
  LONG v79; // r8d
  LONG v80; // eax
  LONG v81; // ecx
  LONG v82; // ebx
  LONG v83; // r10d
  int v84; // eax
  LONG v85; // edx
  LONG v86; // r8d
  LONG v87; // r9d
  LONG v88; // r11d
  LONG v89; // r10d
  __int64 v90; // rdx
  struct EXFORMOBJ *v91; // rdx
  struct XDCOBJ *v92; // r8
  int v93; // r9d
  __int64 v94; // rdx
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // r9
  unsigned int v97; // ebx
  __int64 v98; // r10
  LONG v99; // r9d
  int *v100; // rdx
  ULONG v101; // eax
  int v102; // ecx
  int v103; // eax
  int v104; // r9d
  struct REGION *v105; // rdx
  RECTL rclBounds; // xmm6
  _DWORD *v107; // rcx
  int v108; // r10d
  _DWORD *v109; // rax
  struct _RECTL *v110; // rcx
  __int64 v111; // r15
  int v112; // eax
  int v113; // eax
  __int64 v114; // rbx
  __int64 v115; // rax
  unsigned int v116; // ecx
  __int64 v117; // r10
  __int64 v118; // rdi
  struct _BRUSHOBJ *v119; // r11
  __int64 v120; // rax
  struct _POINTL *v121; // rdi
  __m128i si128; // xmm1
  LONG v123; // ecx
  LONG v124; // eax
  int v125; // ebx
  LONG v126; // r11d
  int v127; // r10d
  struct _BRUSHOBJ *v128; // r11
  struct EXFORMOBJ *v129; // rdx
  int v130; // r9d
  struct _BRUSHOBJ *v131; // rbx
  __int16 v132; // r11
  int v133; // eax
  LONG iUniq; // ecx
  LONG v135; // eax
  LONG flXlate; // edx
  unsigned __int64 cEntries; // r8
  struct _BRUSHOBJ *v138; // r13
  struct XDCOBJ *v139; // r8
  int v140; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v142; // rax
  __int64 v143; // rax
  BOOL (__stdcall *v144)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rbx
  int v145; // ecx
  __int64 v146; // rax
  bool v147; // zf
  __int64 *v148; // rax
  __int64 v149; // rax
  struct XDCOBJ *v150; // r8
  int v151; // eax
  int v152; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v155; // eax
  __int64 *v156; // rax
  __int64 v157; // rax
  ERECTL *v158; // rcx
  RECTL v159; // xmm6
  __int64 v160; // rcx
  LONG *v161; // rbx
  LONG v162; // eax
  LONG v163; // ecx
  LONG v164; // eax
  LONG v165; // ecx
  LONG v166; // eax
  __int64 v167; // rcx
  __int64 v168; // rax
  struct _XLATEOBJ *v169; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v170; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v171; // [rsp+40h] [rbp-D0h]
  unsigned int v172; // [rsp+48h] [rbp-C8h]
  unsigned int v173; // [rsp+58h] [rbp-B8h]
  __int64 v174; // [rsp+90h] [rbp-80h] BYREF
  struct _BRUSHOBJ *v175; // [rsp+98h] [rbp-78h]
  unsigned int v176[2]; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v177; // [rsp+A8h] [rbp-68h] BYREF
  struct _XLATEOBJ *v178; // [rsp+B0h] [rbp-60h]
  unsigned int v179; // [rsp+B8h] [rbp-58h] BYREF
  int v180; // [rsp+BCh] [rbp-54h] BYREF
  struct _BRUSHOBJ *v181; // [rsp+C0h] [rbp-50h]
  int v182; // [rsp+C8h] [rbp-48h] BYREF
  unsigned int v183; // [rsp+CCh] [rbp-44h] BYREF
  void *v184; // [rsp+D0h] [rbp-40h] BYREF
  struct _POINTL *v185; // [rsp+D8h] [rbp-38h] BYREF
  struct _SURFOBJ *v186[2]; // [rsp+E0h] [rbp-30h] BYREF
  _DWORD *v187; // [rsp+F0h] [rbp-20h] BYREF
  int v188; // [rsp+F8h] [rbp-18h]
  int v189; // [rsp+FCh] [rbp-14h]
  ERECTL *v190; // [rsp+100h] [rbp-10h]
  int v191; // [rsp+108h] [rbp-8h] BYREF
  __int64 v192; // [rsp+110h] [rbp+0h] BYREF
  int v193; // [rsp+118h] [rbp+8h] BYREF
  int v194; // [rsp+11Ch] [rbp+Ch] BYREF
  unsigned __int16 *v195; // [rsp+120h] [rbp+10h] BYREF
  __int64 v196; // [rsp+128h] [rbp+18h] BYREF
  int v197; // [rsp+130h] [rbp+20h]
  _QWORD v198[2]; // [rsp+138h] [rbp+28h] BYREF
  _QWORD v199[2]; // [rsp+148h] [rbp+38h] BYREF
  __int64 v200; // [rsp+158h] [rbp+48h] BYREF
  _BYTE v201[8]; // [rsp+160h] [rbp+50h] BYREF
  __int64 v202; // [rsp+168h] [rbp+58h]
  PATHOBJ v203; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v204; // [rsp+1E8h] [rbp+D8h]
  PATHOBJ ppo; // [rsp+260h] [rbp+150h] BYREF
  __int64 v206; // [rsp+268h] [rbp+158h]
  _BYTE v207[8]; // [rsp+2E0h] [rbp+1D0h] BYREF
  __int64 v208; // [rsp+2E8h] [rbp+1D8h]
  PATHOBJ v209; // [rsp+360h] [rbp+250h] BYREF
  __int64 v210; // [rsp+368h] [rbp+258h]
  PATHOBJ v211; // [rsp+3E0h] [rbp+2D0h] BYREF
  __int64 v212; // [rsp+3E8h] [rbp+2D8h]
  PATHOBJ v213; // [rsp+460h] [rbp+350h] BYREF
  __int64 v214; // [rsp+468h] [rbp+358h]
  struct _RECTL v215; // [rsp+4E0h] [rbp+3D0h] BYREF
  struct tagRECT v216; // [rsp+4F0h] [rbp+3E0h] BYREF
  RECTL v217; // [rsp+500h] [rbp+3F0h] BYREF
  struct _CLIPOBJ v218; // [rsp+510h] [rbp+400h] BYREF
  __int64 v219; // [rsp+548h] [rbp+438h]
  __int64 v220; // [rsp+560h] [rbp+450h]
  int v221; // [rsp+568h] [rbp+458h]
  int v222; // [rsp+590h] [rbp+480h]
  __int64 v223; // [rsp+5A0h] [rbp+490h]
  struct _RECTL v224; // [rsp+5B0h] [rbp+4A0h] BYREF
  _BYTE v225[12]; // [rsp+5C0h] [rbp+4B0h] BYREF
  struct tagRECT v226; // [rsp+5CCh] [rbp+4BCh] BYREF
  int v227; // [rsp+600h] [rbp+4F0h]
  __int64 v228; // [rsp+608h] [rbp+4F8h]
  int v229; // [rsp+618h] [rbp+508h]
  int v230; // [rsp+61Ch] [rbp+50Ch]
  int v231; // [rsp+648h] [rbp+538h]
  _BYTE v232[132]; // [rsp+64Ch] [rbp+53Ch] BYREF
  __int64 v233; // [rsp+6D0h] [rbp+5C0h]
  struct _POINTL v234; // [rsp+700h] [rbp+5F0h] BYREF
  LONG x; // [rsp+708h] [rbp+5F8h]
  LONG top; // [rsp+70Ch] [rbp+5FCh]
  LONG right; // [rsp+710h] [rbp+600h]
  LONG v238; // [rsp+714h] [rbp+604h]
  int v239; // [rsp+718h] [rbp+608h]
  int v240; // [rsp+71Ch] [rbp+60Ch]
  struct _POINTL v241; // [rsp+720h] [rbp+610h] BYREF

  v12 = a5;
  v13 = 2;
  v195 = a6;
  v14 = 128;
  v184 = a10;
  LODWORD(v190) = 0;
  LODWORD(v192) = 0;
  v179 = a3;
  v183 = a2;
  if ( (a4 & 0x10) != 0 )
    v13 = 4;
  v181 = a8;
  v176[0] = v13;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 176LL) & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_5;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  LODWORD(v185) = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_5:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v16 = a4 & 0xFFFFC36F;
  v177 = a4 & 0xFFFFC36F;
  if ( a5 )
  {
    if ( a5->left == a5->right || a5->top == a5->bottom )
    {
      a5->right = a2;
      a5->left = a2;
      a5->bottom = a3;
      a5->top = a3;
      if ( (a4 & 6) == 2 )
      {
        v16 = a4 & 0xFFFFC36D;
        v12 = 0LL;
        v177 = a4 & 0xFFFFC36D;
      }
    }
  }
  else
  {
    v16 = a4 & 0xFFFFC369;
    v177 = a4 & 0xFFFFC369;
  }
  v17 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && (!v16 || v12 && (v16 & 0xFFFFFFF9) == 0) )
  {
    v18 = *(_DWORD *)(v17 + 176) & 1;
    if ( !v18 || (v16 & 4) == 0 )
    {
      v215 = 0LL;
      LODWORD(v175) = 0;
      if ( v18 )
      {
        v178 = 0LL;
        v19 = 0;
        HIDWORD(v20) = 0;
      }
      else
      {
        v21 = (struct _XLATEOBJ **)(v17 + 1416);
        if ( (*(_DWORD *)(v17 + 40) & 1) == 0 )
          v21 = (struct _XLATEOBJ **)(v17 + 1408);
        v20 = *v21;
        v178 = v20;
        v19 = (int)v20;
      }
      v180 = 16 * v19;
      v22 = 16 * HIDWORD(v20);
      v188 = *(_DWORD *)(*(_QWORD *)(v17 + 80) + 68LL);
      v189 = *(_DWORD *)(*(_QWORD *)(v17 + 80) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v17 + 80) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v187, a1, 0x204u, 0);
        v23 = v187;
      }
      else
      {
        v23 = (_DWORD *)(v17 + 336);
        v187 = (_DWORD *)(v17 + 336);
      }
      v24 = 0LL;
      if ( v12 )
      {
        v182 = v16 & 2;
        v25 = v23[8];
        if ( (v16 & 2) != 0 )
          v14 = 136;
        if ( (v25 & 2) != 0 )
        {
          left = v19 + v12->left + ((v23[6] + 8) >> 4);
          v216.left = left;
          v27 = v19 + v12->right + ((v23[6] + 8) >> 4);
          v216.right = v27;
          v28 = HIDWORD(v178) + v12->top + ((v23[7] + 8) >> 4);
          v216.top = v28;
          v29 = HIDWORD(v178) + v12->bottom + ((v23[7] + 8) >> 4);
          v216.bottom = v29;
        }
        else if ( (v25 & 1) != 0 )
        {
          v191 = 0;
          bFToL(v23, &v191, 0LL);
          v30 = v187;
          v31 = v19 + ((v187[6] + v191 + 8) >> 4);
          v193 = 0;
          v216.left = v31;
          bFToL(v32, &v193, v33);
          LODWORD(v30) = v30[6] + v193 + 8;
          v194 = 0;
          v27 = v19 + ((int)v30 >> 4);
          v216.right = v27;
          bFToL(v34, &v194, v35);
          v28 = HIDWORD(v178) + ((v187[7] + v194 + 8) >> 4);
          v216.top = v28;
          v182 = 0;
          bFToL(v36, &v182, v37);
          v29 = HIDWORD(v178) + ((v182 + 8 + v187[7]) >> 4);
          v216.bottom = v29;
        }
        else
        {
          bottom = v12->bottom;
          v234.x = v12->left;
          x = v234.x;
          top = v12->top;
          v238 = top;
          v234.y = bottom;
          right = v12->right;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v187, &v234, (struct _POINTFIX *)&v234, 3uLL);
          v39 = v234.x + right - x;
          v239 = v39;
          v40 = v234.y + v238 - top;
          v240 = v40;
          v41 = x > v234.x == x > right;
          v42 = *(&v234.x + 2 * v41);
          v43 = *(&right + 2 * v41);
          if ( v42 > v43 )
            v42 += 15;
          else
            v43 += 15;
          left = v19 + (v42 >> 4);
          v27 = v19 + (v43 >> 4);
          v216.left = left;
          v216.right = v27;
          v44 = top > v234.y == top > v238;
          v45 = *(&v234.y + 2 * v44);
          v46 = *(&v238 + 2 * v44);
          if ( v45 > v46 )
            v45 += 15;
          else
            v46 += 15;
          v47 = v177;
          v28 = HIDWORD(v178) + (v45 >> 4);
          v29 = HIDWORD(v178) + (v46 >> 4);
          v216.bottom = v29;
          v216.top = v28;
          if ( (v177 & 4) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v207);
            if ( v208 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v207, v48, &v234, v49) )
            {
              v50 = *(_QWORD *)a1;
              v224.top = 16 * (*(_DWORD *)(*(_QWORD *)a1 + 1396LL) - HIDWORD(v178));
              v224.bottom = 16 * (*(_DWORD *)(v50 + 1404) - HIDWORD(v178));
              v196 = 0LL;
              v197 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v196, (struct EPATHOBJ *)v207, 1u, &v224);
              if ( v196 )
              {
                v24 = a1;
                *(_QWORD *)(*(_QWORD *)a1 + 1528LL) = v196;
                if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
                {
                  v47 &= ~4u;
                  v177 = v47;
                }
              }
              if ( v197 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v196);
            }
            if ( (v47 & 4) != 0 )
            {
              v177 = 0;
              v14 = 0;
              a7 = 0;
            }
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v207);
            v29 = v216.bottom;
            left = v216.left;
            v27 = v216.right;
            v28 = v216.top;
          }
          else if ( v182 )
          {
            v234.x += v180;
            v234.y += v22;
            x += v180;
            v14 = v14 & 0xFFFFFFF5 | 2;
            right += v180;
            v238 += v22;
            top += v22;
            v240 = v22 + v40;
            v239 = v180 + v39;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 312LL) & 1) != 0 )
        {
          ++left;
          ++v27;
          v216.left = left;
          v216.right = v27;
        }
        if ( left > v27 )
        {
          v51 = left;
          v216.left = v27;
          left = v27;
          v216.right = v51;
          v27 = v51;
        }
        if ( v28 > v29 )
        {
          v52 = v28;
          v216.top = v29;
          v28 = v29;
          v216.bottom = v52;
          v29 = v52;
        }
        if ( (v14 & 0xA) != 0 )
        {
          v53 = v215.left;
          v54 = v215.right;
          if ( v215.left != v215.right )
          {
            v55 = v215.top;
            if ( v215.top != v215.bottom )
            {
              if ( left < v215.left )
                v53 = left;
              v215.left = v53;
              if ( v28 < v215.top )
                v55 = v28;
              v215.top = v55;
              if ( v27 > v215.right )
                v54 = v27;
              LOBYTE(v16) = v177;
              v215.right = v54;
              if ( v29 > v215.bottom )
                v215.bottom = v29;
              goto LABEL_75;
            }
          }
          v215 = (struct _RECTL)v216;
        }
        LOBYTE(v16) = v177;
      }
LABEL_75:
      v56 = 0LL;
      v178 = 0LL;
      v57 = 0LL;
      v174 = 0LL;
      v227 = 0;
      if ( !a7 )
        goto LABEL_147;
      v58 = *(struct DC **)a1;
      v147 = (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) == 0;
      v182 = *(_BYTE *)(*(_QWORD *)a1 + 176LL) & 1;
      if ( !v147 )
      {
        v56 = (struct tagRECT *)*((_QWORD *)v58 + 64);
        SURFACE::bUnMap((SURFACE *)v56, 0LL, v58);
      }
      if ( RFONTOBJ::bInit((RFONTOBJ *)&v174, a1, v182, v176[0]) )
        GreAcquireSemaphore(*(_QWORD *)(v174 + 528));
      if ( v56 )
        SURFACE::Map(v56, 0LL, *(_QWORD *)a1);
      if ( !v174 )
        goto LABEL_158;
      LODWORD(v192) = *(_DWORD *)(v174 + 72) & 2;
      LODWORD(v190) = (_DWORD)v192 && (*(_DWORD *)(v174 + 488) & 0x8000) == 0;
      v59 = *(_QWORD *)a1;
      v60 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
      LODWORD(v175) = *(_DWORD *)(*(_QWORD *)a1 + 2168LL) | *(_DWORD *)(v60 + 152) & 0x11F;
      if ( ((unsigned __int8)v175 & 1) != 0 )
      {
        v61 = (*(_DWORD *)(v60 + 8) & 0x200) != 0;
        v62 = *(_QWORD *)(v59 + 80);
        if ( !v61 )
        {
          *(_DWORD *)(v62 + 8) |= 0x100u;
          v63 = *(_QWORD *)a1;
          v64 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) + v180;
          v176[0] = v64;
          v65 = *(_DWORD *)(*(_QWORD *)(v63 + 80) + 88LL);
          goto LABEL_102;
        }
        *(_DWORD *)(v62 + 8) &= ~0x200u;
        v66 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
        *(_DWORD *)(v66 + 8) |= 0x100u;
        v67 = v187;
        v68 = v187[8];
        if ( (v68 & 2) != 0 )
        {
          v69 = *(_QWORD *)a1;
          v176[0] = v187[6] + 16 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 76LL);
          v176[1] = v187[7] + 16 * *(_DWORD *)(*(_QWORD *)(v69 + 80) + 80LL);
        }
        else if ( (v68 & 1) != 0 )
        {
          v179 = 0;
          bFToL(v66, &v179, 0LL);
          v176[0] = v67[6] + v179;
          v183 = 0;
          bFToL(v176[0], &v183, v70);
          v176[1] = v67[7] + v183;
        }
        else
        {
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)&v187,
            (struct _POINTL *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 76LL),
            (struct _POINTFIX *)v176,
            1uLL);
        }
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) = *(_QWORD *)v176;
      }
      else
      {
        v71 = v187;
        v72 = v187[8];
        if ( (v72 & 2) != 0 )
        {
          v64 = v180 + 16 * v183 + v187[6];
          v176[0] = v64;
          v65 = 16 * v179 + v187[7];
          goto LABEL_102;
        }
        if ( (v72 & 1) != 0 )
        {
          v177 = 0;
          bFToL(v59, &v177, 0LL);
          v176[0] = v180 + v177 + v71[6];
          v180 = 0;
          bFToL(v73, &v180, v74);
          v65 = v180 + v71[7];
          goto LABEL_102;
        }
        v176[0] = v183;
        v176[1] = v179;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v187, (struct _POINTL *)v176, (struct _POINTFIX *)v176, 1uLL);
      }
      v64 = v180 + v176[0];
      v65 = v176[1];
      v176[0] += v180;
LABEL_102:
      v75 = *(_QWORD *)a1;
      v176[1] = v22 + v65;
      ESTROBJ::vInit(
        (ESTROBJ *)v225,
        v195,
        a7,
        a1,
        (struct RFONTOBJ *)&v174,
        (struct EXFORMOBJ *)&v187,
        (int *)v181,
        (int)v185,
        *(_DWORD *)(v75 + 2172),
        *(_DWORD *)(*(_QWORD *)(v75 + 80) + 160LL),
        *(_DWORD *)(*(_QWORD *)(v75 + 80) + 168LL),
        *(_DWORD *)(*(_QWORD *)(v75 + 80) + 172LL),
        v64,
        v22 + v65,
        (unsigned int)v175,
        0LL,
        v184,
        a11);
      if ( (v227 & 4) != 0 )
      {
        v76 = ESTROBJ::bOpaqueArea((ESTROBJ *)v225, (struct _POINTFIX *)&v241, (struct _RECTL *)&v226);
        v77 = v76;
        v78 = v226.left;
        v79 = v226.right;
        if ( (*(_DWORD *)(v174 + 12) & 0x10000000) != 0 )
        {
          v78 = v226.left - 1;
          v79 = v226.right + 1;
          --v226.left;
          ++v226.right;
        }
        if ( (v227 & 0x1400) != 0 )
        {
          ESTROBJ::vEudcOpaqueArea((ESTROBJ *)v225, (struct _POINTFIX *)&v241, v76);
          v79 = v226.right;
          v78 = v226.left;
        }
        v80 = v215.left;
        v81 = v215.right;
        v82 = v226.top;
        if ( v215.left == v215.right || (v83 = v215.top, v215.top == v215.bottom) )
        {
          v215 = (struct _RECTL)v226;
        }
        else
        {
          if ( v78 < v215.left )
            v80 = v78;
          v215.left = v80;
          if ( v226.top < v215.top )
            v83 = v226.top;
          v215.top = v83;
          if ( v79 > v215.right )
            v81 = v79;
          v215.right = v81;
          if ( v226.bottom > v215.bottom )
            v215.bottom = v226.bottom;
        }
        if ( a9 == 2 )
        {
          if ( !v77 )
          {
            v56 = &v226;
            v178 = (struct _XLATEOBJ *)&v226;
            goto LABEL_122;
          }
          v14 |= 0x10u;
        }
        v56 = 0LL;
LABEL_122:
        v84 = IsRectEmptyInl(&v226);
        v89 = v216.bottom;
        if ( (v14 & 8) == 0 || v216.left > v85 || v216.right < v86 || v216.top > v82 || v216.bottom < v88 || v84 )
        {
          if ( !v56 )
          {
            if ( v84 )
            {
LABEL_135:
              if ( ((unsigned __int8)v175 & 0xA0) != 0 )
              {
                if ( v231 )
                {
                  v57 = (ERECTL *)v232;
                  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v232) )
                  {
                    do
                      ERECTL::operator+=(&v215);
                    while ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v90 + 16)) );
                    v87 = v215.bottom;
                    v89 = v216.bottom;
                  }
                }
                else
                {
                  v57 = 0LL;
                  v14 |= 4u;
                }
              }
              if ( (v16 & 4) != 0 )
              {
                if ( v216.left > v215.left || v216.right < v215.right || v216.top > v215.top || v89 < v87 )
                  ERECTL::operator*=(&v215);
                else
                  LOBYTE(v16) = v16 & 0xFB;
              }
LABEL_147:
              if ( ((unsigned __int8)v175 & 1) != 0 )
              {
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) += v229;
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 88LL) += v230;
              }
              if ( (*(_DWORD *)(*(_QWORD *)a1 + 176LL) & 1) != 0 )
              {
                if ( (v16 & 4) != 0 )
                  v14 = 0;
                XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v201, (DC **)a1);
                if ( !v202 )
                  goto LABEL_178;
                if ( (v14 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v201, (struct _RECTL *)&v216) )
                  v14 = 0;
                if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v201, v91, &v234, v93) )
                  v14 = 0;
                if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v201, v91, &v241, v93) )
                  v14 = 0;
                if ( (v14 & 1) != 0
                  && (!v56 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v201, (struct _RECTL *)v56)) )
                {
                  if ( !(unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)v225, (struct EPATHOBJ *)v201, v92) )
                  {
LABEL_174:
                    v14 = 0;
                    goto LABEL_175;
                  }
                  if ( v57 && !(unsigned int)ERECTL::bEmpty(v57) )
                  {
                    while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v201, (struct _RECTL *)v57) )
                    {
                      v57 = (ERECTL *)((char *)v57 + 16);
                      if ( (unsigned int)ERECTL::bEmpty(v57) )
                        goto LABEL_175;
                    }
                    goto LABEL_174;
                  }
                }
LABEL_175:
                if ( (v14 & 4) != 0
                  && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)v225, (struct EPATHOBJ *)v201) )
                {
                  v14 = 0;
                }
LABEL_178:
                XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v201);
LABEL_179:
                v97 = 1;
                goto LABEL_389;
              }
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v215) )
                goto LABEL_179;
              v99 = *(_DWORD *)(v95 + 36);
              if ( (v99 & 0xE0) != 0 )
              {
                v100 = (int *)(v95 + 1416);
                v101 = *(_DWORD *)(v95 + 40);
                *(struct _RECTL *)v186 = v215;
                if ( (v101 & 1) == 0 )
                  v100 = (int *)(v95 + 1408);
                v102 = *v100;
                LODWORD(v186[1]) -= *v100;
                LODWORD(v186[0]) = v215.left - v102;
                v103 = v100[1];
                HIDWORD(v186[0]) -= v103;
                HIDWORD(v186[1]) -= v103;
                if ( (v99 & 0x20) != 0 )
                  ERECTL::operator|=(v95 + 1456, v186);
                if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x80u) != 0 )
                  ERECTL::operator|=(*(_QWORD *)a1 + 1488LL, v186);
              }
              if ( (_DWORD)v192 || (v16 & 4) != 0 )
              {
                v97 = 1;
                v104 = 1;
              }
              else
              {
                v104 = v98;
                v97 = 1;
              }
              v105 = *(struct REGION **)(*(_QWORD *)a1 + 1552LL);
              if ( !v105 )
                v105 = *(struct REGION **)(*(_QWORD *)a1 + 1544LL);
              v219 = v98;
              v220 = v98;
              v221 = v98;
              v222 = 1;
              v223 = v98;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v218, v105, (struct ERECTL *)&v215, v104);
              rclBounds = v218.rclBounds;
              v215 = v218.rclBounds;
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v218.rclBounds) )
                goto LABEL_389;
              v107 = *(_DWORD **)a1;
              v108 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
              if ( (v108 & 0xE0) != 0 )
              {
                v217 = rclBounds;
                v109 = v107 + 354;
                if ( (v107[10] & 1) == 0 )
                  v109 = v107 + 352;
                v96 = (unsigned int)(v218.rclBounds.left - *v109);
                v217.left = v218.rclBounds.left - *v109;
                v94 = (unsigned int)(v217.right - *v109);
                v217.right -= *v109;
                v95 = (unsigned int)(v217.top - v109[1]);
                v217.top -= v109[1];
                v217.bottom -= v109[1];
                if ( (v108 & 0x40) != 0 )
                {
                  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)(v107 + 368)) )
                  {
                    *v110 = v217;
                  }
                  else
                  {
                    if ( (int)v96 < v110->left )
                    {
                      v110->left = v96;
                      v94 = (unsigned int)v217.right;
                      v95 = (unsigned int)v217.top;
                    }
                    if ( (int)v95 < v110->top )
                    {
                      v110->top = v95;
                      v94 = (unsigned int)v217.right;
                    }
                    if ( (int)v94 > v110->right )
                      v110->right = v94;
                    if ( v217.bottom > v110->bottom )
                      v110->bottom = v217.bottom;
                  }
                  v185 = *(struct _POINTL **)(*(_QWORD *)a1 + 1568LL);
                  if ( v185 )
                  {
                    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v199);
                    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v198);
                    if ( v199[0] )
                    {
                      if ( v198[0] )
                      {
                        RGNOBJ::vSet((RGNOBJ *)v198, &v217);
                        if ( RGNOBJ::bMerge(
                               (RGNOBJ *)v199,
                               (struct RGNOBJ *)&v185,
                               (struct RGNOBJ *)v198,
                               BYTE2(gafjRgnOp)) )
                        {
                          RGNOBJ::bSwap((RGNOBJ *)&v185, (struct RGNOBJ *)v199);
                          *(_QWORD *)(*(_QWORD *)a1 + 1568LL) = v185;
                        }
                      }
                    }
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v198);
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v199);
                  }
                }
              }
              v111 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
              if ( !v111
                || ((*(_DWORD *)(v111 + 116) & 8) != 0 || *(_QWORD *)(v111 + 216))
                && (*(_WORD *)(v111 + 102) & 0x200) != 0 )
              {
LABEL_389:
                if ( (v227 & 0x801) != 0 )
                {
                  if ( (v227 & 1) != 0 )
                    FreeTmpBuffer(v228, v94, v95, v96);
                  if ( (v227 & 0x800) != 0 )
                    Win32FreePool(v233);
                }
                if ( v174 )
                {
                  if ( (*(_DWORD *)(v174 + 720) & 0x81) != 0 )
                    RFONTOBJ::dtHelper((RFONTOBJ *)&v174, 1);
                  v167 = *(_QWORD *)(v174 + 632);
                  if ( v167 )
                  {
                    Win32FreePool(v167);
                    *(_QWORD *)(v174 + 640) = 0LL;
                    *(_QWORD *)(v174 + 632) = 0LL;
                  }
                  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v174 + 528));
                  GreReleaseSemaphoreInternal(*(_QWORD *)(v174 + 528));
                }
                if ( v24 )
                {
                  v200 = *(_QWORD *)(*(_QWORD *)v24 + 1528LL);
                  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v200);
                  v168 = *(_QWORD *)v24;
                  *(_DWORD *)(v168 + 36) |= 0x10u;
                  *(_QWORD *)(v168 + 1528) = 0LL;
                }
                if ( v14 )
                  return v97;
                return 0;
              }
              v112 = *(_DWORD *)(v111 + 112);
              if ( (v112 & 0x800) != 0 )
              {
                v113 = UserSurfaceAccessCheck(*(_QWORD *)(v111 + 592));
              }
              else
              {
                if ( (v112 & 0x10000000) == 0 )
                  goto LABEL_224;
                v113 = UserScreenAccessCheck();
              }
              if ( !v113 )
                goto LABEL_389;
LABEL_224:
              v114 = *(_QWORD *)(v111 + 120);
              v184 = *(void **)(v111 + 48);
              v115 = *(_QWORD *)a1;
              v116 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
              v117 = *(_QWORD *)a1 + 1872LL;
              v118 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
              v119 = (struct _BRUSHOBJ *)(*(_QWORD *)a1 + 2016LL);
              v175 = (struct _BRUSHOBJ *)v117;
              v181 = v119;
              v179 = v116;
              if ( (v116 & 0x10000000) != 0 )
              {
                *(_DWORD *)(*(_QWORD *)(v115 + 80) + 8LL) |= 4u;
                --*(_DWORD *)(v117 + 132);
              }
              v120 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
              if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v120 + 8)) & 0xC) != 0 )
              {
                if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v120 + 8)) & 4) != 0 )
                {
                  v169 = (struct _XLATEOBJ *)v111;
                  EBRUSHOBJ::vInitBrush(v117, *(_QWORD *)a1, gpbrText, v118, v114);
                  v119 = v181;
                }
                if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL)) & 8) != 0 )
                {
                  v169 = (struct _XLATEOBJ *)v111;
                  EBRUSHOBJ::vInitBrush(v119, *(_QWORD *)a1, gpbrBackground, v118, v114);
                }
                *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= 0xFFFFFFF3;
                *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= 0xFFFFFFF3;
              }
              v121 = (struct _POINTL *)(*(_QWORD *)a1 + 1576LL);
              if ( (v14 & 0x1A) != 0 )
              {
                if ( (v14 & 8) == 0 || (unsigned int)ERECTL::bEmpty((ERECTL *)&v216) )
                {
                  v127 = v215.bottom;
                  v95 = (unsigned int)v215.right;
                  v96 = (unsigned int)v215.top;
                  v94 = (unsigned int)v215.left;
                }
                else
                {
                  si128 = _mm_load_si128((const __m128i *)&v215);
                  v123 = v216.left;
                  v124 = v216.right;
                  v125 = v216.top;
                  v126 = v216.bottom;
                  v94 = (unsigned int)_mm_cvtsi128_si32(si128);
                  v95 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
                  v96 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(si128, 4));
                  if ( (int)v94 > v216.left )
                    v123 = v94;
                  v127 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 12));
                  v215.left = v94;
                  if ( (int)v95 < v216.right )
                    v124 = v95;
                  v218.rclBounds.left = v123;
                  v215.right = v95;
                  v218.rclBounds.right = v124;
                  if ( (int)v96 > v216.top )
                    v125 = v96;
                  v215.top = v96;
                  v218.rclBounds.top = v125;
                  if ( v127 < v216.bottom )
                    v126 = v127;
                  v215.bottom = v127;
                  LODWORD(v185) = v126;
                  v218.rclBounds.bottom = v126;
                  v128 = v181;
                  if ( v123 < v124 && v125 < (int)v185 )
                  {
                    ++*(_DWORD *)(v111 + 92);
                    TextOutBitBlt(
                      (struct SURFACE *)v111,
                      (struct RFONTOBJ *)&v174,
                      (struct _SURFOBJ *)v95,
                      (struct _SURFOBJ *)v96,
                      &v218,
                      v169,
                      &v218.rclBounds,
                      v170,
                      v171,
                      v128,
                      v121,
                      v173);
                    v127 = v215.bottom;
                    v95 = (unsigned int)v215.right;
                    v96 = (unsigned int)v215.top;
                    v94 = (unsigned int)v215.left;
                  }
                  v218.rclBounds = v215;
                }
                if ( (v14 & 0x12) != 0 )
                {
                  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                  if ( v206 )
                  {
                    if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v129, &v234, v130) )
                      v14 = 0;
                    if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v129, &v241, v130) )
                      v14 = 0;
                    v131 = v181;
                    if ( (v14 & 0x12) != 0
                      && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                          &ppo,
                                          a1,
                                          (struct RFONTOBJ *)&v174,
                                          (struct PDEVOBJ *)&v184,
                                          (struct SURFACE *)v111,
                                          &v218,
                                          v181,
                                          v121,
                                          (unsigned int)v171,
                                          v172) )
                    {
                      v14 = 0;
                    }
                  }
                  else
                  {
                    v131 = v181;
                  }
                  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
                  v127 = v215.bottom;
                  v95 = (unsigned int)v215.right;
                  v96 = (unsigned int)v215.top;
                  v94 = (unsigned int)v215.left;
LABEL_264:
                  if ( (v14 & 1) == 0 )
                  {
LABEL_382:
                    if ( (v14 & 4) != 0 )
                    {
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v211);
                      if ( !v212
                        || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)v225, (struct EPATHOBJ *)&v211)
                        || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                            &v211,
                                            a1,
                                            (struct RFONTOBJ *)&v174,
                                            (struct PDEVOBJ *)&v184,
                                            (struct SURFACE *)v111,
                                            &v218,
                                            v175,
                                            v121,
                                            (unsigned int)v171,
                                            v172) )
                      {
                        v14 = 0;
                      }
                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v211);
                    }
                    v97 = 1;
                    goto LABEL_389;
                  }
                  v132 = v179;
                  v190 = 0LL;
                  if ( (_DWORD)v192 )
                  {
                    v132 = v179 & 0xFEFF;
                    LODWORD(v185) = 64;
                    v133 = 32;
                    if ( (*(_DWORD *)(v174 + 488) & 0x8000) != 0 )
                      v133 = (int)v185;
                    v14 |= v133;
                  }
                  if ( v178 && (v132 & 0x100) == 0 )
                  {
                    iUniq = v178->iUniq;
                    v135 = *(_DWORD *)&v178->iSrcType;
                    if ( (int)v94 > (signed int)v178->iUniq )
                      iUniq = v94;
                    v218.rclBounds.left = iUniq;
                    if ( (int)v95 < v135 )
                      v135 = v95;
                    v218.rclBounds.right = v135;
                    flXlate = v178->flXlate;
                    cEntries = v178->cEntries;
                    if ( (int)v96 > flXlate )
                      flXlate = v96;
                    v218.rclBounds.top = flXlate;
                    if ( v127 < (int)cEntries )
                      cEntries = (unsigned int)v127;
                    v218.rclBounds.bottom = cEntries;
                    if ( iUniq < v135 && flXlate < (int)cEntries )
                    {
                      ++*(_DWORD *)(v111 + 92);
                      TextOutBitBlt(
                        (struct SURFACE *)v111,
                        (struct RFONTOBJ *)&v174,
                        (struct _SURFOBJ *)cEntries,
                        (struct _SURFOBJ *)v96,
                        &v218,
                        v169,
                        &v218.rclBounds,
                        v170,
                        v171,
                        v131,
                        v121,
                        v173);
                    }
                    v218.rclBounds = v215;
                    v178 = 0LL;
                  }
                  if ( v57 && *((_DWORD *)v184 + 541) != 4 )
                  {
                    v190 = v57;
                    v57 = 0LL;
                  }
                  if ( (v14 & 0x20) != 0 )
                  {
                    if ( (v227 & 0x1400) != 0 )
                    {
                      v138 = v175;
                      if ( !bProxyDrvTextOut(
                              a1,
                              (struct SURFACE *)v111,
                              (struct ESTROBJ *)v225,
                              (struct ECLIPOBJ *)&v218,
                              0LL,
                              0LL,
                              v175,
                              v131,
                              v121,
                              (struct RFONTOBJ *)&v174,
                              (struct PDEVOBJ *)&v184,
                              *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                              &v215) )
                        v14 = 0;
                      goto LABEL_366;
                    }
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v209);
                    if ( v210 )
                    {
                      v140 = ESTROBJ::bTextToPath((ESTROBJ *)v225, (struct EPATHOBJ *)&v209, v139);
                      v138 = v175;
                      if ( v140
                        && (unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                           &v209,
                                           a1,
                                           (struct RFONTOBJ *)&v174,
                                           (struct PDEVOBJ *)&v184,
                                           (struct SURFACE *)v111,
                                           &v218,
                                           v175,
                                           v121,
                                           (unsigned int)v171) )
                      {
                        goto LABEL_296;
                      }
                    }
                    else
                    {
                      v138 = v175;
                    }
                    v14 = 0;
LABEL_296:
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v209);
LABEL_366:
                    v158 = v190;
                    if ( v190 )
                    {
                      v159 = v218.rclBounds;
                      ++*(_DWORD *)(v111 + 92);
                      *(RECTL *)v186 = v159;
                      if ( !(unsigned int)ERECTL::bEmpty(v158) )
                      {
                        v95 = HIDWORD(v186[1]);
                        v161 = (LONG *)(v160 + 4);
                        LODWORD(v94) = v186[1];
                        v96 = HIDWORD(v186[0]);
                        v162 = (LONG)v186[0];
                        do
                        {
                          v163 = *(v161 - 1);
                          if ( v162 > v163 )
                            v163 = v162;
                          v164 = v161[1];
                          v218.rclBounds.left = v163;
                          if ( (int)v94 < v164 )
                            v164 = v94;
                          v218.rclBounds.right = v164;
                          if ( v163 < v164 )
                          {
                            v165 = *v161;
                            v166 = v161[2];
                            if ( (int)v96 > *v161 )
                              v165 = v96;
                            v218.rclBounds.top = v165;
                            if ( (int)v95 < v166 )
                              v166 = v95;
                            v218.rclBounds.bottom = v166;
                            if ( v165 < v166 )
                              TextOutBitBlt(
                                (struct SURFACE *)v111,
                                (struct RFONTOBJ *)&v174,
                                (struct _SURFOBJ *)v95,
                                (struct _SURFOBJ *)v96,
                                &v218,
                                v169,
                                &v218.rclBounds,
                                v170,
                                v171,
                                v138,
                                v121,
                                v173);
                          }
                          v161 += 4;
                          v147 = (unsigned int)ERECTL::bEmpty((ERECTL *)(v161 - 1)) == 0;
                          v162 = (LONG)v186[0];
                        }
                        while ( v147 );
                      }
                      v218.rclBounds = v159;
                    }
                    goto LABEL_382;
                  }
                  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                  if ( ThreadWin32Thread && (v142 = *ThreadWin32Thread) != 0 )
                    v143 = *(_QWORD *)(v142 + 304);
                  else
                    v143 = *(_QWORD *)(v111 + 104);
                  if ( v143 )
                    SURFACE::pdcoAA((SURFACE *)v111, 0LL);
                  if ( (*(_DWORD *)(v111 + 112) & 8) != 0 )
                    v144 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v111 + 48) + 2904LL);
                  else
                    v144 = EngTextOut;
                  if ( (char *)v144 == (char *)SpTextOut || (char *)v144 == (char *)BmpDevTextOut )
                  {
                    if ( (*(_DWORD *)(v174 + 12) & 0x10010000) != 0 )
                    {
                      *(_QWORD *)(v111 + 104) = a1;
                      v148 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v148 )
                      {
                        v149 = *v148;
                        if ( v149 )
                          *(_QWORD *)(v149 + 304) = a1;
                      }
                    }
                  }
                  else
                  {
                    v145 = *(_DWORD *)(v174 + 12);
                    if ( (v145 & 0x10000) != 0 )
                    {
                      v146 = *(_QWORD *)a1;
                      v147 = (v145 & 0x10000000) != 0
                           ? (*(_DWORD *)(v146 + 76) & 0x4000) == 0
                           : (*(_DWORD *)(v146 + 72) & 0x1000000) == 0;
                      if ( v147 )
                      {
                        if ( v144 != EngTextOut )
                          SURFACE::pdcoAA((SURFACE *)v111, a1);
                        v144 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                      }
                    }
                  }
                  if ( (v14 & 0x40) != 0 )
                  {
                    if ( (v227 & 0x1400) != 0 )
                    {
                      v138 = v175;
                      if ( !bProxyDrvTextOut(
                              a1,
                              (struct SURFACE *)v111,
                              (struct ESTROBJ *)v225,
                              (struct ECLIPOBJ *)&v218,
                              0LL,
                              0LL,
                              v175,
                              v181,
                              v121,
                              (struct RFONTOBJ *)&v174,
                              (struct PDEVOBJ *)&v184,
                              *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                              &v215) )
                        v14 = 0;
                      goto LABEL_363;
                    }
                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v203);
                    if ( !v204
                      || !(unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)v225, (struct EPATHOBJ *)&v203, v150)
                      || v203.cCurves > 1
                      && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                          &v203,
                                          a1,
                                          (struct RFONTOBJ *)&v174,
                                          (struct PDEVOBJ *)&v184,
                                          (struct SURFACE *)v111,
                                          &v218,
                                          v175,
                                          v121,
                                          (unsigned int)v171,
                                          v172) )
                    {
                      v14 = 0;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v203);
                    goto LABEL_362;
                  }
                  ++*(_DWORD *)(v111 + 92);
                  if ( (v14 & 4) == 0 )
                  {
                    if ( (v227 & 0x1400) != 0 )
                    {
                      v152 = bProxyDrvTextOut(
                               a1,
                               (struct SURFACE *)v111,
                               (struct ESTROBJ *)v225,
                               (struct ECLIPOBJ *)&v218,
                               (struct _RECTL *)v57,
                               (struct _RECTL *)v178,
                               v175,
                               v181,
                               v121,
                               (struct RFONTOBJ *)&v174,
                               (struct PDEVOBJ *)&v184,
                               0,
                               &v215);
                      v138 = v175;
                      if ( !v152 )
                        v14 = 0;
                      goto LABEL_363;
                    }
                    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8080) == 0x80
                      && !*(_DWORD *)(v174 + 88) )
                    {
                      v195 = (unsigned __int16 *)ghsemPrintKView;
                      GreAcquireSemaphore(ghsemPrintKView);
                      for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                      {
                        if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v174 + 120) + 80LL) )
                          ++*(_DWORD *)(i + 12);
                      }
                      SEMOBJ::vUnlock((SEMOBJ *)&v195);
                    }
                    v172 = 3341;
                    v171 = v121;
                    v170 = (struct _POINTL *)v181;
                    v169 = v178;
                    if ( !((unsigned int (__fastcall *)(__int64, _BYTE *, __int64, struct _CLIPOBJ *, ERECTL *))v144)(
                            v111 + 24,
                            v225,
                            v174,
                            &v218,
                            v57) )
                      v14 = 0;
                    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8080) == 0x80
                      && !*(_DWORD *)(v174 + 88) )
                    {
                      v192 = ghsemPrintKView;
                      GreAcquireSemaphore(ghsemPrintKView);
                      for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                      {
                        if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)(v174 + 120) + 80LL) )
                        {
                          v155 = *(_DWORD *)(j + 12);
                          if ( v155 )
                            *(_DWORD *)(j + 12) = v155 - 1;
                        }
                      }
                      SEMOBJ::vUnlock((SEMOBJ *)&v192);
                    }
LABEL_362:
                    v138 = v175;
                    goto LABEL_363;
                  }
                  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v213);
                  if ( v214
                    && (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)v225, (struct EPATHOBJ *)&v213)
                    && ((v227 & 0x1400) == 0
                      ? (v172 = 3341,
                         v171 = v121,
                         v170 = (struct _POINTL *)v181,
                         v169 = v178,
                         v151 = ((__int64 (__fastcall *)(__int64, _BYTE *, __int64, struct _CLIPOBJ *, ERECTL *))v144)(
                                  v111 + 24,
                                  v225,
                                  v174,
                                  &v218,
                                  v57))
                      : (v151 = bProxyDrvTextOut(
                                  a1,
                                  (struct SURFACE *)v111,
                                  (struct ESTROBJ *)v225,
                                  (struct ECLIPOBJ *)&v218,
                                  (struct _RECTL *)v57,
                                  (struct _RECTL *)v178,
                                  v175,
                                  v181,
                                  v121,
                                  (struct RFONTOBJ *)&v174,
                                  0LL,
                                  0,
                                  &v215)),
                        v151) )
                  {
                    v138 = v175;
                    if ( (unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                         &v213,
                                         a1,
                                         (struct RFONTOBJ *)&v174,
                                         (struct PDEVOBJ *)&v184,
                                         (struct SURFACE *)v111,
                                         &v218,
                                         v175,
                                         v121,
                                         (unsigned int)v171,
                                         v172) )
                    {
LABEL_341:
                      v14 &= ~4u;
                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v213);
LABEL_363:
                      *(_QWORD *)(v111 + 104) = 0LL;
                      v156 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                      if ( v156 )
                      {
                        v157 = *v156;
                        if ( v157 )
                          *(_QWORD *)(v157 + 304) = 0LL;
                      }
                      goto LABEL_366;
                    }
                  }
                  else
                  {
                    v138 = v175;
                  }
                  v14 = 0;
                  goto LABEL_341;
                }
              }
              else
              {
                v127 = v215.bottom;
                v95 = (unsigned int)v215.right;
                v96 = (unsigned int)v215.top;
                v94 = (unsigned int)v215.left;
              }
              v131 = v181;
              goto LABEL_264;
            }
LABEL_134:
            v14 |= 1u;
            goto LABEL_135;
          }
        }
        else
        {
          v56 = &v216;
          v14 &= ~8u;
          v178 = (struct _XLATEOBJ *)&v216;
        }
        if ( (unsigned int)IsRectEmptyInl(v56) )
          goto LABEL_135;
        goto LABEL_134;
      }
LABEL_158:
      v56 = 0LL;
      v14 = 0;
      goto LABEL_147;
    }
  }
  return 0;
}
