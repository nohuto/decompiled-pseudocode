/*
 * XREFs of ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200
 * Callers:
 *     ?GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1C0033EB0 (-GreBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C003FDF8 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GreExtTextOutWInternal @ 0x1C0040128 (GreExtTextOutWInternal.c)
 *     GrePolyTextOutW @ 0x1C0152640 (GrePolyTextOutW.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C0026AEC (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0027B7C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0028120 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00291E0 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C0038D78 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ??YERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0041CE8 (--YERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0041E20 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0102FFC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C010F4B8 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C027AD5C (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C027AEC4 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027B338 (-bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIP.c)
 *     ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C027B48C (-bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_C.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C0291B14 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1C0291B74 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A26E4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A2964 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B5130 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B56DC (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
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
  struct tagRECT *v12; // r15
  unsigned int v13; // ecx
  unsigned int v14; // r14d
  __int64 v15; // rcx
  unsigned int v17; // r13d
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  struct _SURFOBJ *v21; // rbx
  struct _SURFOBJ **v22; // rbx
  int v23; // ebx
  _DWORD *v24; // rdi
  struct XDCOBJ *v25; // rsi
  int v26; // eax
  int left; // r11d
  int v28; // edi
  int v29; // r15d
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // edi
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
  struct EXFORMOBJ *v47; // rdx
  int v48; // r9d
  __int64 v49; // rcx
  LONG v50; // eax
  LONG v51; // eax
  LONG v52; // eax
  LONG v53; // ecx
  LONG v54; // r8d
  struct _RECTL *v55; // r15
  ERECTL *v56; // rdi
  struct DC *v57; // r8
  __int64 v58; // rcx
  __int64 v59; // rax
  bool v60; // cf
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned int v63; // r11d
  int v64; // r8d
  __int64 v65; // rcx
  _DWORD *v66; // r15
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // r8
  _DWORD *v70; // r15
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  int v75; // eax
  int v76; // r15d
  int v77; // edx
  int v78; // ecx
  LONG v79; // eax
  LONG v80; // r9d
  LONG v81; // r10d
  LONG v82; // r8d
  BOOL v83; // eax
  LONG v84; // ebx
  __int64 v85; // rdx
  LONG v86; // eax
  bool v87; // cc
  struct EXFORMOBJ *v88; // rdx
  struct XDCOBJ *v89; // r8
  int v90; // r9d
  unsigned int v91; // ebx
  _DWORD *v92; // r8
  __int64 v93; // r10
  int v94; // r9d
  int *v95; // rdx
  int v96; // eax
  int v97; // ecx
  int v98; // eax
  int v99; // r9d
  struct REGION *v100; // rdx
  RECTL rclBounds; // xmm6
  _DWORD *v102; // rcx
  int v103; // r10d
  _DWORD *v104; // rax
  LONG v105; // edx
  struct _RECTL *v106; // rcx
  LONG v107; // r8d
  LONG v108; // r9d
  __int64 v109; // r15
  int v110; // eax
  int v111; // eax
  __int64 v112; // rbx
  int v113; // r9d
  __int64 v114; // rax
  unsigned int v115; // r11d
  struct _BRUSHOBJ *v116; // r10
  __int64 v117; // rdi
  __int64 v118; // r13
  __int64 v119; // rax
  struct _POINTL *v120; // rdi
  __m128i si128; // xmm1
  LONG v122; // ecx
  int v123; // eax
  int v124; // edx
  __m128i v125; // xmm0
  int v126; // r8d
  LONG v127; // eax
  LONG v128; // edx
  __m128i v129; // xmm1
  int v130; // r9d
  LONG v131; // r8d
  int *v132; // rbx
  __int64 v133; // rax
  int v134; // ecx
  int v135; // eax
  BOOL (__stdcall *v136)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  struct EXFORMOBJ *v137; // rdx
  int v138; // r9d
  __int16 v139; // dx
  int v140; // eax
  struct _SURFOBJ *v141; // r9
  LONG dhsurf; // ecx
  LONG hsurf; // eax
  int dhsurf_high; // edx
  unsigned __int64 hsurf_high; // r8
  struct _BRUSHOBJ *v146; // rax
  struct _RECTL *v147; // rbx
  struct XDCOBJ *v148; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  BOOL (__stdcall *v152)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rdx
  FLOATL eYY; // ecx
  __int64 v154; // rax
  bool v155; // zf
  __int64 *v156; // rax
  __int64 v157; // rax
  int v158; // eax
  struct XDCOBJ *v159; // r8
  int v160; // eax
  __int64 i; // rdx
  __int64 j; // rdx
  int v163; // eax
  __int64 *v164; // rax
  __int64 v165; // rax
  ERECTL *v166; // rcx
  RECTL v167; // xmm6
  __int64 v168; // rcx
  struct _SURFOBJ *v169; // r8
  LONG *v170; // rbx
  LONG v171; // edx
  struct _SURFOBJ *v172; // r9
  LONG v173; // eax
  LONG v174; // ecx
  LONG v175; // eax
  LONG v176; // ecx
  LONG v177; // eax
  __int64 v178; // rcx
  __int64 v179; // rax
  struct _XLATEOBJ *p_rclBounds; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v181; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v182; // [rsp+40h] [rbp-D0h]
  unsigned int v183; // [rsp+48h] [rbp-C8h]
  unsigned int v184; // [rsp+58h] [rbp-B8h]
  struct _FD_XFORM *v185; // [rsp+90h] [rbp-80h] BYREF
  struct _SURFOBJ *v186; // [rsp+98h] [rbp-78h]
  unsigned int v187[2]; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v188; // [rsp+A8h] [rbp-68h] BYREF
  int v189; // [rsp+ACh] [rbp-64h] BYREF
  int v190; // [rsp+B0h] [rbp-60h] BYREF
  unsigned int v191; // [rsp+B4h] [rbp-5Ch] BYREF
  struct tagRECT *v192; // [rsp+B8h] [rbp-58h] BYREF
  unsigned int v193; // [rsp+C0h] [rbp-50h] BYREF
  unsigned int v194; // [rsp+C4h] [rbp-4Ch] BYREF
  struct _BRUSHOBJ *v195; // [rsp+C8h] [rbp-48h]
  struct _SURFOBJ *v196[2]; // [rsp+D0h] [rbp-40h] BYREF
  __int64 (__usercall *v197)@<rax>(struct _SURFOBJ *@<rcx>, struct _STROBJ *@<rdx>, struct _FONTOBJ *@<r8>, struct _CLIPOBJ *@<r9>, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // [rsp+E0h] [rbp-30h]
  struct _RECTL *v198; // [rsp+E8h] [rbp-28h] BYREF
  _DWORD *v199; // [rsp+F0h] [rbp-20h] BYREF
  int v200; // [rsp+F8h] [rbp-18h]
  int v201; // [rsp+FCh] [rbp-14h]
  int v202; // [rsp+100h] [rbp-10h] BYREF
  int v203; // [rsp+104h] [rbp-Ch] BYREF
  unsigned __int16 *v204; // [rsp+108h] [rbp-8h] BYREF
  int v205; // [rsp+110h] [rbp+0h] BYREF
  ERECTL *v206; // [rsp+118h] [rbp+8h]
  int *v207; // [rsp+120h] [rbp+10h] BYREF
  _QWORD v208[2]; // [rsp+128h] [rbp+18h] BYREF
  __int64 v209; // [rsp+138h] [rbp+28h] BYREF
  int v210; // [rsp+140h] [rbp+30h]
  _QWORD v211[2]; // [rsp+148h] [rbp+38h] BYREF
  __int64 v212; // [rsp+158h] [rbp+48h] BYREF
  __int64 v213; // [rsp+160h] [rbp+50h] BYREF
  __int64 v214; // [rsp+168h] [rbp+58h] BYREF
  _BYTE v215[8]; // [rsp+170h] [rbp+60h] BYREF
  __int64 v216; // [rsp+178h] [rbp+68h]
  PATHOBJ ppo; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 v218; // [rsp+1F8h] [rbp+E8h]
  PATHOBJ v219; // [rsp+270h] [rbp+160h] BYREF
  __int64 v220; // [rsp+278h] [rbp+168h]
  PATHOBJ v221; // [rsp+2F0h] [rbp+1E0h] BYREF
  __int64 v222; // [rsp+2F8h] [rbp+1E8h]
  _BYTE v223[8]; // [rsp+370h] [rbp+260h] BYREF
  __int64 v224; // [rsp+378h] [rbp+268h]
  PATHOBJ v225; // [rsp+3F0h] [rbp+2E0h] BYREF
  __int64 v226; // [rsp+3F8h] [rbp+2E8h]
  PATHOBJ v227; // [rsp+470h] [rbp+360h] BYREF
  __int64 v228; // [rsp+478h] [rbp+368h]
  struct _RECTL v229; // [rsp+4F0h] [rbp+3E0h] BYREF
  struct _RECTL v230; // [rsp+500h] [rbp+3F0h] BYREF
  RECTL v231; // [rsp+510h] [rbp+400h] BYREF
  struct _CLIPOBJ v232; // [rsp+520h] [rbp+410h] BYREF
  __int64 v233; // [rsp+570h] [rbp+460h]
  int v234; // [rsp+578h] [rbp+468h]
  int v235; // [rsp+5A0h] [rbp+490h]
  __int64 v236; // [rsp+5B0h] [rbp+4A0h]
  struct _RECTL v237; // [rsp+5C0h] [rbp+4B0h] BYREF
  _BYTE v238[12]; // [rsp+5D0h] [rbp+4C0h] BYREF
  struct _RECTL v239; // [rsp+5DCh] [rbp+4CCh] BYREF
  int v240; // [rsp+610h] [rbp+500h]
  __int64 v241; // [rsp+618h] [rbp+508h]
  int v242; // [rsp+628h] [rbp+518h]
  int v243; // [rsp+62Ch] [rbp+51Ch]
  int v244; // [rsp+658h] [rbp+548h]
  _BYTE v245[132]; // [rsp+65Ch] [rbp+54Ch] BYREF
  __int64 v246; // [rsp+6E0h] [rbp+5D0h]
  struct _POINTL v247; // [rsp+710h] [rbp+600h] BYREF
  LONG x; // [rsp+718h] [rbp+608h]
  LONG top; // [rsp+71Ch] [rbp+60Ch]
  LONG right; // [rsp+720h] [rbp+610h]
  LONG v251; // [rsp+724h] [rbp+614h]
  int v252; // [rsp+728h] [rbp+618h]
  int v253; // [rsp+72Ch] [rbp+61Ch]
  struct _POINTL v254; // [rsp+730h] [rbp+620h] BYREF
  int v255[10]; // [rsp+750h] [rbp+640h] BYREF

  v12 = a5;
  v13 = 2;
  v204 = a6;
  v14 = 128;
  v206 = a10;
  v194 = 0;
  LODWORD(v197) = 0;
  v188 = a3;
  v193 = a2;
  if ( (a4 & 0x10) != 0 )
    v13 = 4;
  v192 = a5;
  v187[0] = v13;
  v15 = *(_QWORD *)a1;
  v207 = a8;
  if ( (*(_DWORD *)(v15 + 176) & 1) != 0 && (a4 & 4) != 0 )
    goto LABEL_5;
  if ( (*(_DWORD *)(v15 + 36) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  LODWORD(v195) = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 && !a8 )
  {
LABEL_5:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v17 = a4 & 0xFFFFC36F;
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
        v12 = 0LL;
        v192 = 0LL;
        v17 = a4 & 0xFFFFC36D;
      }
    }
  }
  else
  {
    v17 = a4 & 0xFFFFC369;
  }
  v18 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 && (!v17 || v12 && (v17 & 0xFFFFFFF9) == 0) )
  {
    v19 = *(_DWORD *)(v18 + 176) & 1;
    if ( !v19 || (v17 & 4) == 0 )
    {
      v229 = 0LL;
      v191 = 0;
      if ( v19 )
      {
        v186 = 0LL;
        v20 = 0;
        HIDWORD(v21) = 0;
      }
      else
      {
        v22 = (struct _SURFOBJ **)(v18 + 1416);
        if ( (*(_DWORD *)(v18 + 40) & 1) == 0 )
          v22 = (struct _SURFOBJ **)(v18 + 1408);
        v21 = *v22;
        v186 = v21;
        v20 = (int)v21;
      }
      v190 = 16 * v20;
      v23 = 16 * HIDWORD(v21);
      v200 = *(_DWORD *)(*(_QWORD *)(v18 + 80) + 68LL);
      v201 = *(_DWORD *)(*(_QWORD *)(v18 + 80) + 312LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 80) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v199, a1, 0x204u, 0);
        v20 = (int)v186;
        v24 = v199;
      }
      else
      {
        v24 = (_DWORD *)(v18 + 336);
        v199 = (_DWORD *)(v18 + 336);
      }
      v25 = 0LL;
      if ( v12 )
      {
        v189 = v17 & 2;
        v26 = v24[8];
        if ( (v17 & 2) != 0 )
          v14 = 136;
        if ( (v26 & 2) != 0 )
        {
          left = v20 + v12->left + ((v24[6] + 8) >> 4);
          v230.left = left;
          v28 = v20 + v12->right + ((v24[6] + 8) >> 4);
          v230.right = v28;
          v29 = HIDWORD(v186) + v192->top + ((v199[7] + 8) >> 4);
          v230.top = v29;
          v30 = HIDWORD(v186) + v192->bottom + ((v199[7] + 8) >> 4);
          v230.bottom = v30;
        }
        else if ( (v26 & 1) != 0 )
        {
          v203 = 0;
          bFToL(136LL, &v203, 0LL);
          v230.left = (_DWORD)v186 + ((v24[6] + v203 + 8) >> 4);
          v202 = 0;
          bFToL(v31, &v202, v32);
          v33 = v24[6] + v202 + 8;
          v205 = 0;
          v28 = (_DWORD)v186 + (v33 >> 4);
          v230.right = v28;
          bFToL(v34, &v205, v35);
          LODWORD(v198) = 0;
          v29 = HIDWORD(v186) + ((v199[7] + v205 + 8) >> 4);
          v230.top = v29;
          bFToL(v36, &v198, v37);
          v30 = HIDWORD(v186) + (((int)v198 + 8 + v199[7]) >> 4);
          v230.bottom = v30;
        }
        else
        {
          bottom = v12->bottom;
          v247.x = v12->left;
          x = v247.x;
          top = v12->top;
          v251 = top;
          v247.y = bottom;
          right = v12->right;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v199, &v247, (struct _POINTFIX *)&v247, 3uLL);
          v39 = v247.x + right - x;
          v252 = v39;
          v40 = v247.y + v251 - top;
          v253 = v40;
          v41 = x > v247.x == x > right;
          v42 = *(&v247.x + 2 * v41);
          v43 = *(&right + 2 * v41);
          if ( v42 > v43 )
            v42 += 15;
          else
            v43 += 15;
          left = (_DWORD)v186 + (v42 >> 4);
          v28 = (_DWORD)v186 + (v43 >> 4);
          v230.right = v28;
          v230.left = left;
          v44 = top > v247.y == top > v251;
          v45 = *(&v247.y + 2 * v44);
          v46 = *(&v251 + 2 * v44);
          if ( v45 > v46 )
            v45 += 15;
          else
            v46 += 15;
          v29 = HIDWORD(v186) + (v45 >> 4);
          v30 = HIDWORD(v186) + (v46 >> 4);
          v230.bottom = v30;
          v230.top = v29;
          if ( (v17 & 4) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v223);
            if ( v224 && (unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v223, v47, &v247, v48) )
            {
              v49 = *(_QWORD *)a1;
              v237.top = 16 * (*(_DWORD *)(*(_QWORD *)a1 + 1396LL) - HIDWORD(v186));
              v237.bottom = 16 * (*(_DWORD *)(v49 + 1404) - HIDWORD(v186));
              v210 = 0;
              RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v209, (struct EPATHOBJ *)v223, 1u, &v237);
              if ( v209 )
              {
                v25 = a1;
                *(_QWORD *)(*(_QWORD *)a1 + 1504LL) = v209;
                if ( (unsigned int)DC::bTightenRao(*(DC **)a1) )
                  LOBYTE(v17) = v17 & 0xFB;
              }
              if ( v210 == 1 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v209);
            }
            if ( (v17 & 4) != 0 )
            {
              LOBYTE(v17) = 0;
              a7 = 0;
              v14 = 0;
            }
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v223);
            v30 = v230.bottom;
            left = v230.left;
            v28 = v230.right;
            v29 = v230.top;
          }
          else if ( v189 )
          {
            v247.x += v190;
            v247.y += v23;
            x += v190;
            v14 = v14 & 0xFFFFFFF5 | 2;
            right += v190;
            v251 += v23;
            top += v23;
            v253 = v23 + v40;
            v252 = v190 + v39;
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 312LL) & 1) != 0 )
        {
          ++left;
          ++v28;
          v230.left = left;
          v230.right = v28;
        }
        if ( left > v28 )
        {
          v50 = left;
          v230.left = v28;
          left = v28;
          v230.right = v50;
          v28 = v50;
        }
        if ( v29 > v30 )
        {
          v51 = v29;
          v230.top = v30;
          v29 = v30;
          v230.bottom = v51;
          v30 = v51;
        }
        if ( (v14 & 0xA) != 0 )
        {
          v52 = v229.left;
          v53 = v229.right;
          if ( v229.left == v229.right || (v54 = v229.top, v229.top == v229.bottom) )
          {
            v229 = v230;
          }
          else
          {
            if ( left < v229.left )
              v52 = left;
            v229.left = v52;
            if ( v29 < v229.top )
              v54 = v29;
            v229.top = v54;
            if ( v28 > v229.right )
              v53 = v28;
            v229.right = v53;
            if ( v30 > v229.bottom )
              v229.bottom = v30;
          }
        }
      }
      v55 = 0LL;
      v186 = 0LL;
      v56 = 0LL;
      v198 = 0LL;
      v185 = 0LL;
      v240 = 0;
      if ( !a7 )
        goto LABEL_152;
      v57 = *(struct DC **)a1;
      v155 = (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) == 0;
      v189 = *(_BYTE *)(*(_QWORD *)a1 + 176LL) & 1;
      if ( !v155 )
      {
        v55 = (struct _RECTL *)*((_QWORD *)v57 + 64);
        SURFACE::bUnMap((SURFACE *)v55, 0LL, v57);
      }
      if ( (unsigned int)RFONTOBJ::bInit(&v185, a1, v189, v187[0]) )
        GreAcquireSemaphore(*(_QWORD *)&v185[33].eXX);
      if ( v55 )
        SURFACE::Map(v55, 0LL, *(_QWORD *)a1);
      if ( !v185 )
        goto LABEL_174;
      LODWORD(v197) = LODWORD(v185[4].eYX) & 2;
      v194 = (_DWORD)v197 && (LODWORD(v185[30].eYX) & 0x8000) == 0;
      v58 = *(_QWORD *)a1;
      v59 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
      v191 = *(_DWORD *)(*(_QWORD *)a1 + 2144LL) | *(_DWORD *)(v59 + 152) & 0x11F;
      if ( (v191 & 1) != 0 )
      {
        v60 = (*(_DWORD *)(v59 + 8) & 0x200) != 0;
        v61 = *(_QWORD *)(v58 + 80);
        if ( !v60 )
        {
          *(_DWORD *)(v61 + 8) |= 0x100u;
          v62 = *(_QWORD *)a1;
          v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) + v190;
          v187[0] = v63;
          v64 = *(_DWORD *)(*(_QWORD *)(v62 + 80) + 88LL);
          goto LABEL_101;
        }
        *(_DWORD *)(v61 + 8) &= ~0x200u;
        v65 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
        *(_DWORD *)(v65 + 8) |= 0x100u;
        v66 = v199;
        v67 = v199[8];
        if ( (v67 & 2) != 0 )
        {
          v68 = *(_QWORD *)a1;
          v187[0] = v199[6] + 16 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 76LL);
          v187[1] = v199[7] + 16 * *(_DWORD *)(*(_QWORD *)(v68 + 80) + 80LL);
        }
        else if ( (v67 & 1) != 0 )
        {
          v188 = 0;
          bFToL(v65, &v188, 0LL);
          v187[0] = v66[6] + v188;
          v193 = 0;
          bFToL(v187[0], &v193, v69);
          v187[1] = v66[7] + v193;
        }
        else
        {
          EXFORMOBJ::bXform(
            (EXFORMOBJ *)&v199,
            (struct _POINTL *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 76LL),
            (struct _POINTFIX *)v187,
            1uLL);
        }
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) = *(_QWORD *)v187;
      }
      else
      {
        v70 = v199;
        v71 = v199[8];
        if ( (v71 & 2) != 0 )
        {
          v63 = v190 + 16 * v193 + v199[6];
          v187[0] = v63;
          v64 = 16 * v188 + v199[7];
          goto LABEL_101;
        }
        if ( (v71 & 1) != 0 )
        {
          v189 = 0;
          bFToL(v58, &v189, 0LL);
          v187[0] = v190 + v189 + v70[6];
          v190 = 0;
          bFToL(v72, &v190, v73);
          v64 = v190 + v70[7];
          goto LABEL_101;
        }
        v187[0] = v193;
        v187[1] = v188;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v199, (struct _POINTL *)v187, (struct _POINTFIX *)v187, 1uLL);
      }
      v63 = v190 + v187[0];
      v64 = v187[1];
      v187[0] += v190;
LABEL_101:
      v74 = *(_QWORD *)a1;
      v187[1] = v23 + v64;
      ESTROBJ::vInit(
        (ESTROBJ *)v238,
        v204,
        a7,
        a1,
        (struct RFONTOBJ *)&v185,
        (struct EXFORMOBJ *)&v199,
        (__m128i *)v207,
        (int)v195,
        *(_DWORD *)(v74 + 2148),
        *(_DWORD *)(*(_QWORD *)(v74 + 80) + 160LL),
        *(_DWORD *)(*(_QWORD *)(v74 + 80) + 168LL),
        *(_DWORD *)(*(_QWORD *)(v74 + 80) + 172LL),
        v63,
        v23 + v64,
        v191,
        0LL,
        v206,
        a11);
      if ( (v240 & 4) != 0 )
      {
        v75 = ESTROBJ::bOpaqueArea((ESTROBJ *)v238, (struct _POINTFIX *)&v254, &v239);
        v76 = v75;
        v77 = v239.right;
        v78 = v239.left;
        if ( (LODWORD(v185->eYY) & 0x10000000) != 0 )
        {
          v78 = v239.left - 1;
          v77 = v239.right + 1;
          --v239.left;
          ++v239.right;
        }
        if ( (v240 & 0x1400) != 0 )
        {
          ESTROBJ::vEudcOpaqueArea((ESTROBJ *)v238, (struct _POINTFIX *)&v254, v75);
          v77 = v239.right;
          v78 = v239.left;
        }
        v79 = v229.left;
        v80 = v229.right;
        if ( v229.left == v229.right || (v81 = v229.top, v82 = v229.bottom, v229.top == v229.bottom) )
        {
          v229 = v239;
          v82 = v239.bottom;
          v80 = v239.right;
          v81 = v239.top;
        }
        else
        {
          if ( v78 < v229.left )
            v79 = v78;
          v229.left = v79;
          if ( v239.top < v229.top )
            v81 = v239.top;
          v229.top = v81;
          if ( v77 > v229.right )
            v80 = v77;
          v229.right = v80;
          if ( v239.bottom > v229.bottom )
          {
            v82 = v239.bottom;
            v229.bottom = v239.bottom;
          }
        }
        if ( a9 == 2 )
        {
          if ( !v76 )
          {
            v55 = &v239;
            v186 = (struct _SURFOBJ *)&v239;
            goto LABEL_121;
          }
          v14 |= 0x10u;
        }
        v55 = 0LL;
LABEL_121:
        v83 = v78 >= v77 || v239.top >= v239.bottom;
        if ( (v14 & 8) != 0 && v230.left <= v78 && v230.right >= v77 )
        {
          v84 = v230.bottom;
          if ( v230.top <= v239.top && v230.bottom >= v239.bottom && !v83 )
          {
            v55 = &v230;
            v14 &= ~8u;
            v186 = (struct _SURFOBJ *)&v230;
            goto LABEL_135;
          }
        }
        else
        {
          v84 = v230.bottom;
        }
        if ( !v55 )
        {
          if ( v83 )
            goto LABEL_140;
          goto LABEL_139;
        }
LABEL_135:
        if ( v55->left >= v55->right || v55->top >= v55->bottom )
        {
LABEL_140:
          if ( (v191 & 0xA0) != 0 )
          {
            if ( v244 )
            {
              v56 = (ERECTL *)v245;
              v198 = (struct _RECTL *)v245;
              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v245) )
              {
                do
                  ERECTL::operator+=(&v229);
                while ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v85 + 16)) );
                v82 = v229.bottom;
                v80 = v229.right;
                v81 = v229.top;
              }
            }
            else
            {
              v56 = 0LL;
              v198 = 0LL;
              v14 |= 4u;
            }
          }
          if ( (v17 & 4) != 0 )
          {
            if ( v230.left > v229.left )
            {
              v229.left = v230.left;
              v86 = v230.top;
            }
            else
            {
              v86 = v230.top;
              if ( v230.right >= v80 )
              {
                v87 = v230.top <= v81;
                if ( v230.top > v81 )
                {
LABEL_164:
                  if ( !v87 )
                    v81 = v86;
                  v229.top = v81;
                  if ( v230.right < v80 )
                    v80 = v230.right;
                  v229.right = v80;
                  if ( v84 < v82 )
                    v82 = v84;
                  v229.bottom = v82;
                  if ( v80 >= v229.left )
                  {
                    if ( v82 < v81 )
                      v229.top = v82;
                  }
                  else
                  {
                    v229.left = v80;
                  }
                  goto LABEL_152;
                }
                if ( v84 >= v82 )
                {
                  LOBYTE(v17) = v17 & 0xFB;
                  goto LABEL_152;
                }
              }
            }
            v87 = v86 <= v81;
            goto LABEL_164;
          }
LABEL_152:
          if ( (v191 & 1) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 84LL) += v242;
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 88LL) += v243;
          }
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 176LL) & 1) != 0 )
          {
            if ( (v17 & 4) != 0 )
              v14 = 0;
            XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v215, a1);
            if ( !v216 )
              goto LABEL_194;
            if ( (v14 & 8) != 0 && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)v215, &v230) )
              v14 = 0;
            if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v215, v88, &v247, v90) )
              v14 = 0;
            if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)v215, v88, &v254, v90) )
              v14 = 0;
            if ( (v14 & 1) != 0 && (!v55 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)v215, v55)) )
            {
              if ( !(unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)v238, (struct EPATHOBJ *)v215, v89) )
              {
LABEL_190:
                v14 = 0;
                goto LABEL_191;
              }
              if ( v56 && !(unsigned int)ERECTL::bEmpty(v56) )
              {
                while ( (unsigned int)bAddRectToPath((struct EPATHOBJ *)v215, (struct _RECTL *)v56) )
                {
                  v56 = (ERECTL *)((char *)v56 + 16);
                  if ( (unsigned int)ERECTL::bEmpty(v56) )
                    goto LABEL_191;
                }
                goto LABEL_190;
              }
            }
LABEL_191:
            if ( (v14 & 4) != 0 && !ESTROBJ::bExtraRectsToPath((ESTROBJ *)v238, (struct EPATHOBJ *)v215) )
              v14 = 0;
LABEL_194:
            XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v215);
LABEL_195:
            v91 = 1;
            goto LABEL_404;
          }
          if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v229) )
            goto LABEL_195;
          v94 = v92[9];
          if ( (v94 & 0xE0) != 0 )
          {
            v95 = v92 + 354;
            v96 = v92[10];
            *(struct _RECTL *)v196 = v229;
            if ( (v96 & 1) == 0 )
              v95 = v92 + 352;
            v97 = *v95;
            LODWORD(v196[1]) -= *v95;
            LODWORD(v196[0]) = v229.left - v97;
            v98 = v95[1];
            HIDWORD(v196[0]) -= v98;
            HIDWORD(v196[1]) -= v98;
            if ( (v94 & 0x20) != 0 )
              ERECTL::operator|=(v92 + 364, v196);
            if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x80u) != 0 )
              ERECTL::operator|=(*(_QWORD *)a1 + 1488LL, v196);
          }
          if ( (_DWORD)v197 || (v17 & 4) != 0 )
          {
            v91 = 1;
            v99 = 1;
          }
          else
          {
            v99 = v93;
            v91 = 1;
          }
          v100 = *(struct REGION **)(*(_QWORD *)a1 + 1528LL);
          if ( !v100 )
            v100 = *(struct REGION **)(*(_QWORD *)a1 + 1520LL);
          v233 = v93;
          v234 = v93;
          v235 = 1;
          v236 = v93;
          XCLIPOBJ::vSetup((XCLIPOBJ *)&v232, v100, (struct ERECTL *)&v229, v99);
          rclBounds = v232.rclBounds;
          v229 = v232.rclBounds;
          if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v232.rclBounds) )
            goto LABEL_404;
          v102 = *(_DWORD **)a1;
          v103 = *(_DWORD *)(*(_QWORD *)a1 + 36LL);
          if ( (v103 & 0xE0) != 0 )
          {
            v231 = rclBounds;
            v104 = v102 + 354;
            if ( (v102[10] & 1) == 0 )
              v104 = v102 + 352;
            v231.left = v232.rclBounds.left - *v104;
            v231.right -= *v104;
            v231.top -= v104[1];
            v231.bottom -= v104[1];
            if ( (v103 & 0x40) != 0 )
            {
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)(v102 + 368)) )
              {
                *v106 = v231;
              }
              else
              {
                if ( v108 < v106->left )
                {
                  v106->left = v108;
                  v105 = v231.right;
                  v107 = v231.top;
                }
                if ( v107 < v106->top )
                {
                  v106->top = v107;
                  v105 = v231.right;
                }
                if ( v105 > v106->right )
                  v106->right = v105;
                if ( v231.bottom > v106->bottom )
                  v106->bottom = v231.bottom;
              }
              v204 = *(unsigned __int16 **)(*(_QWORD *)a1 + 1544LL);
              if ( v204 )
              {
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v208);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v211);
                if ( v208[0] )
                {
                  if ( v211[0] )
                  {
                    RGNOBJ::vSet((RGNOBJ *)v211, &v231);
                    if ( RGNOBJ::bMerge((RGNOBJ *)v208, (struct RGNOBJ *)&v204, (struct RGNOBJ *)v211, BYTE2(gafjRgnOp)) )
                    {
                      RGNOBJ::bSwap((RGNOBJ *)&v204, (struct RGNOBJ *)v208);
                      *(_QWORD *)(*(_QWORD *)a1 + 1544LL) = v204;
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v211);
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v208);
              }
            }
          }
          v109 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
          if ( !v109
            || ((*(_DWORD *)(v109 + 116) & 8) != 0 || *(_QWORD *)(v109 + 216)) && (*(_WORD *)(v109 + 102) & 0x200) != 0 )
          {
LABEL_404:
            if ( (v240 & 0x801) != 0 )
            {
              if ( (v240 & 1) != 0 )
                FreeTmpBuffer(v241);
              if ( (v240 & 0x800) != 0 )
                Win32FreePool(v246);
            }
            if ( v185 )
            {
              if ( (LODWORD(v185[45].eXX) & 0x81) != 0 )
                RFONTOBJ::dtHelper((RFONTOBJ *)&v185, 1);
              v178 = *(_QWORD *)&v185[39].eYX;
              if ( v178 )
              {
                Win32FreePool(v178);
                *(_QWORD *)&v185[40].eXX = 0LL;
                *(_QWORD *)&v185[39].eYX = 0LL;
              }
              EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)&v185[33].eXX);
              GreReleaseSemaphoreInternal(*(_QWORD *)&v185[33].eXX);
            }
            if ( v25 )
            {
              v212 = *(_QWORD *)(*(_QWORD *)v25 + 1504LL);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v212);
              v179 = *(_QWORD *)v25;
              *(_DWORD *)(v179 + 36) |= 0x10u;
              *(_QWORD *)(v179 + 1504) = 0LL;
            }
            if ( v14 )
              return v91;
            return 0;
          }
          v110 = *(_DWORD *)(v109 + 112);
          if ( (v110 & 0x800) != 0 )
          {
            v111 = UserSurfaceAccessCheck(*(_QWORD *)(v109 + 584));
          }
          else
          {
            if ( (v110 & 0x10000000) == 0 )
              goto LABEL_240;
            v111 = UserScreenAccessCheck();
          }
          if ( !v111 )
            goto LABEL_404;
LABEL_240:
          v112 = *(_QWORD *)(v109 + 120);
          v113 = 0;
          v192 = *(struct tagRECT **)(v109 + 48);
          v114 = *(_QWORD *)a1;
          v115 = *(_DWORD *)(*(_QWORD *)a1 + 72LL);
          v116 = (struct _BRUSHOBJ *)(*(_QWORD *)a1 + 1992LL);
          v117 = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
          v118 = *(_QWORD *)a1 + 1848LL;
          v195 = v116;
          v188 = v115;
          if ( (v115 & 0x10000000) != 0 )
          {
            LOBYTE(v113) = v194 == 0;
            *(_DWORD *)(*(_QWORD *)(v114 + 80) + 8LL) |= 4u;
            --*(_DWORD *)(v118 + 132);
          }
          v119 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
          if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v119 + 8)) & 0xC) != 0 )
          {
            if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(v119 + 8)) & 4) != 0 )
            {
              EBRUSHOBJ::vInitBrush(v118, *(_QWORD *)a1, gpbrText, v117, v112, v109, v113);
              v116 = v195;
              v115 = v188;
            }
            if ( ((*(_BYTE *)(*(_QWORD *)a1 + 332LL) | *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL)) & 8) != 0 )
              EBRUSHOBJ::vInitBrush(v116, *(_QWORD *)a1, gpbrBackground, v117, v112, v109, (v115 >> 15) & 1);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) &= 0xFFFFFFF3;
            *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= 0xFFFFFFF3;
          }
          v120 = (struct _POINTL *)(*(_QWORD *)a1 + 1552LL);
          if ( (v14 & 0x1A) != 0 )
          {
            if ( (v14 & 8) != 0 && !(unsigned int)ERECTL::bEmpty((ERECTL *)&v230) )
            {
              si128 = _mm_load_si128((const __m128i *)&v229);
              v122 = v230.left;
              v123 = _mm_cvtsi128_si32(si128);
              v124 = _mm_cvtsi128_si32(_mm_srli_si128(si128, 8));
              v229.left = v123;
              v125 = _mm_srli_si128(si128, 4);
              if ( v123 > v230.left )
                v122 = v123;
              v126 = _mm_cvtsi128_si32(v125);
              v127 = v230.right;
              v229.right = v124;
              if ( v124 < v230.right )
                v127 = v124;
              v229.top = v126;
              v128 = v230.top;
              v129 = _mm_srli_si128(si128, 12);
              if ( v126 > v230.top )
                v128 = v126;
              v130 = _mm_cvtsi128_si32(v129);
              v131 = v230.bottom;
              v232.rclBounds.left = v122;
              v232.rclBounds.right = v127;
              v232.rclBounds.top = v128;
              if ( v130 < v230.bottom )
                v131 = v130;
              v229.bottom = v130;
              v232.rclBounds.bottom = v131;
              if ( v122 < v127 && v128 < v131 )
              {
                ++*(_DWORD *)(v109 + 92);
                v132 = v255;
                v133 = *(_QWORD *)(v109 + 48);
                v189 = 0;
                v191 = 0;
                v194 = 0;
                v134 = *(_DWORD *)(v133 + 56) & 0x8080;
                v207 = v255;
                if ( v134 == 32896 && v185 )
                {
                  v135 = UMPDReleaseRFONTSem((struct RFONTOBJ *)&v185, 0LL, &v191, &v194, &v207);
                  v132 = v207;
                  v189 = v135;
                }
                if ( (*(_DWORD *)(v109 + 112) & 1) != 0 )
                  v136 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(v109 + 48) + 2864LL);
                else
                  v136 = EngBitBlt;
                v183 = (unsigned int)v120;
                v182 = (struct _POINTL *)v195;
                v181 = 0LL;
                p_rclBounds = (struct _XLATEOBJ *)&v232.rclBounds;
                ((void (__fastcall *)(__int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD))v136)(
                  v109 + 24,
                  0LL,
                  0LL,
                  &v232,
                  0LL);
                if ( v189 )
                {
                  UMPDAcquireRFONTSem((struct RFONTOBJ *)&v185, 0LL, v191, v194, v132);
                  if ( v132 )
                  {
                    if ( v132 != v255 )
                      Win32FreePool(v132);
                  }
                }
              }
              v232.rclBounds = v229;
            }
            if ( (v14 & 0x12) != 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
              if ( v218 )
              {
                if ( (v14 & 2) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v137, &v247, v138) )
                  v14 = 0;
                if ( (v14 & 0x10) != 0 && !(unsigned int)EPATHOBJ::bAddPolygon((EPATHOBJ *)&ppo, v137, &v254, v138) )
                  v14 = 0;
                if ( (v14 & 0x12) != 0
                  && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                      &ppo,
                                      a1,
                                      (struct RFONTOBJ *)&v185,
                                      (struct PDEVOBJ *)&v192,
                                      (struct SURFACE *)v109,
                                      &v232,
                                      v195,
                                      v120,
                                      (unsigned int)v182,
                                      v183) )
                {
                  v14 = 0;
                }
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
            }
          }
          if ( (v14 & 1) == 0 )
            goto LABEL_397;
          v139 = v188;
          v206 = 0LL;
          if ( (_DWORD)v197 )
          {
            v139 = v188 & 0xFEFF;
            v140 = 32;
            if ( (LODWORD(v185[30].eYX) & 0x8000) != 0 )
              v140 = 64;
            v14 |= v140;
          }
          v141 = v186;
          if ( v186 && (v139 & 0x100) == 0 )
          {
            dhsurf = (LONG)v186->dhsurf;
            hsurf = (LONG)v186->hsurf;
            if ( v229.left > SLODWORD(v186->dhsurf) )
              dhsurf = v229.left;
            dhsurf_high = HIDWORD(v186->dhsurf);
            if ( v229.right < hsurf )
              hsurf = v229.right;
            hsurf_high = HIDWORD(v186->hsurf);
            if ( v229.top > dhsurf_high )
              dhsurf_high = v229.top;
            v232.rclBounds.left = dhsurf;
            if ( v229.bottom < (int)hsurf_high )
              hsurf_high = (unsigned int)v229.bottom;
            v232.rclBounds.bottom = hsurf_high;
            v232.rclBounds.right = hsurf;
            v232.rclBounds.top = dhsurf_high;
            if ( dhsurf < hsurf && dhsurf_high < (int)hsurf_high )
            {
              v146 = v195;
              ++*(_DWORD *)(v109 + 92);
              TextOutBitBlt(
                (struct SURFACE *)v109,
                (struct RFONTOBJ *)&v185,
                (struct _SURFOBJ *)hsurf_high,
                v141,
                &v232,
                p_rclBounds,
                &v232.rclBounds,
                v181,
                v182,
                v146,
                v120,
                v184);
            }
            v232.rclBounds = v229;
            v186 = 0LL;
          }
          v147 = v198;
          if ( v198 && v192[135].top != 4 )
          {
            v206 = (ERECTL *)v198;
            v147 = 0LL;
          }
          if ( (v14 & 0x20) != 0 )
          {
            if ( (v240 & 0x1400) != 0 )
            {
              if ( !bProxyDrvTextOut(
                      a1,
                      (struct SURFACE *)v109,
                      (struct ESTROBJ *)v238,
                      (struct ECLIPOBJ *)&v232,
                      0LL,
                      0LL,
                      (struct _BRUSHOBJ *)v118,
                      v195,
                      v120,
                      (struct RFONTOBJ *)&v185,
                      (struct PDEVOBJ *)&v192,
                      *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                      &v229) )
                v14 = 0;
            }
            else
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v227);
              if ( !v228
                || !(unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)v238, (struct EPATHOBJ *)&v227, v148)
                || !(unsigned int)EPATHOBJ::bTextOutSimpleStroke1(
                                    &v227,
                                    a1,
                                    (struct RFONTOBJ *)&v185,
                                    (struct PDEVOBJ *)&v192,
                                    (struct SURFACE *)v109,
                                    &v232,
                                    (struct _BRUSHOBJ *)v118,
                                    v120,
                                    (unsigned int)v182) )
              {
                v14 = 0;
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v227);
            }
LABEL_381:
            v166 = v206;
            if ( v206 )
            {
              v167 = v232.rclBounds;
              ++*(_DWORD *)(v109 + 92);
              *(RECTL *)v196 = v167;
              if ( !(unsigned int)ERECTL::bEmpty(v166) )
              {
                v169 = (struct _SURFOBJ *)HIDWORD(v196[1]);
                v170 = (LONG *)(v168 + 4);
                v171 = (LONG)v196[1];
                v172 = (struct _SURFOBJ *)HIDWORD(v196[0]);
                v173 = (LONG)v196[0];
                do
                {
                  v174 = *(v170 - 1);
                  if ( v173 > v174 )
                    v174 = v173;
                  v175 = v170[1];
                  v232.rclBounds.left = v174;
                  if ( v171 < v175 )
                    v175 = v171;
                  v232.rclBounds.right = v175;
                  if ( v174 < v175 )
                  {
                    v176 = *v170;
                    v177 = v170[2];
                    if ( (int)v172 > *v170 )
                      v176 = (int)v172;
                    v232.rclBounds.top = v176;
                    if ( (int)v169 < v177 )
                      v177 = (int)v169;
                    v232.rclBounds.bottom = v177;
                    if ( v176 < v177 )
                      TextOutBitBlt(
                        (struct SURFACE *)v109,
                        (struct RFONTOBJ *)&v185,
                        v169,
                        v172,
                        &v232,
                        p_rclBounds,
                        &v232.rclBounds,
                        v181,
                        v182,
                        (struct _BRUSHOBJ *)v118,
                        v120,
                        v184);
                  }
                  v170 += 4;
                  v155 = (unsigned int)ERECTL::bEmpty((ERECTL *)(v170 - 1)) == 0;
                  v173 = (LONG)v196[0];
                }
                while ( v155 );
              }
              v232.rclBounds = v167;
            }
LABEL_397:
            if ( (v14 & 4) != 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v221);
              if ( !v222
                || !ESTROBJ::bExtraRectsToPath((ESTROBJ *)v238, (struct EPATHOBJ *)&v221)
                || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                    &v221,
                                    a1,
                                    (struct RFONTOBJ *)&v185,
                                    (struct PDEVOBJ *)&v192,
                                    (struct SURFACE *)v109,
                                    &v232,
                                    (struct _BRUSHOBJ *)v118,
                                    v120,
                                    (unsigned int)v182,
                                    v183) )
              {
                v14 = 0;
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v221);
            }
            v91 = 1;
            goto LABEL_404;
          }
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( ThreadWin32Thread && (v150 = *ThreadWin32Thread) != 0 )
            v151 = *(_QWORD *)(v150 + 304);
          else
            v151 = *(_QWORD *)(v109 + 104);
          if ( v151 )
            SURFACE::pdcoAA((SURFACE *)v109, 0LL);
          if ( (*(_DWORD *)(v109 + 112) & 8) != 0 )
            v152 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v109 + 48) + 2904LL);
          else
            v152 = EngTextOut;
          v197 = (__int64 (__usercall *)@<rax>(struct _SURFOBJ *@<rcx>, struct _STROBJ *@<rdx>, struct _FONTOBJ *@<r8>, struct _CLIPOBJ *@<r9>, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v152;
          if ( (char *)v152 == (char *)SpTextOut || (char *)v152 == (char *)BmpDevTextOut )
          {
            if ( (LODWORD(v185->eYY) & 0x10010000) != 0 )
            {
              *(_QWORD *)(v109 + 104) = a1;
              v156 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v156 )
              {
                v157 = *v156;
                if ( v157 )
                  *(_QWORD *)(v157 + 304) = a1;
              }
            }
          }
          else
          {
            eYY = v185->eYY;
            if ( (LODWORD(eYY) & 0x10000) != 0 )
            {
              v154 = *(_QWORD *)a1;
              v155 = (LODWORD(eYY) & 0x10000000) != 0
                   ? (*(_DWORD *)(v154 + 76) & 0x4000) == 0
                   : (*(_DWORD *)(v154 + 72) & 0x1000000) == 0;
              if ( v155 )
              {
                if ( v152 != EngTextOut )
                  SURFACE::pdcoAA((SURFACE *)v109, a1);
                v197 = SpTextOut;
              }
            }
          }
          if ( (v14 & 0x40) != 0 )
          {
            if ( (v240 & 0x1400) == 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v219);
              if ( !v220
                || !(unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)v238, (struct EPATHOBJ *)&v219, v159)
                || v219.cCurves > 1
                && !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                    &v219,
                                    a1,
                                    (struct RFONTOBJ *)&v185,
                                    (struct PDEVOBJ *)&v192,
                                    (struct SURFACE *)v109,
                                    &v232,
                                    (struct _BRUSHOBJ *)v118,
                                    v120,
                                    (unsigned int)v182,
                                    v183) )
              {
                v14 = 0;
              }
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v219);
              goto LABEL_378;
            }
            v158 = bProxyDrvTextOut(
                     a1,
                     (struct SURFACE *)v109,
                     (struct ESTROBJ *)v238,
                     (struct ECLIPOBJ *)&v232,
                     0LL,
                     0LL,
                     (struct _BRUSHOBJ *)v118,
                     v195,
                     v120,
                     (struct RFONTOBJ *)&v185,
                     (struct PDEVOBJ *)&v192,
                     *(_DWORD *)(*(_QWORD *)a1 + 72LL),
                     &v229);
          }
          else
          {
            ++*(_DWORD *)(v109 + 92);
            if ( (v14 & 4) != 0 )
            {
              PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v225);
              if ( !v226
                || !ESTROBJ::bExtraRectsToPath((ESTROBJ *)v238, (struct EPATHOBJ *)&v225)
                || ((v240 & 0x1400) == 0
                  ? (v183 = 3341,
                     v182 = v120,
                     v181 = (struct _POINTL *)v195,
                     p_rclBounds = (struct _XLATEOBJ *)v186,
                     v160 = ((__int64 (__fastcall *)(__int64, _BYTE *, struct _FD_XFORM *, struct _CLIPOBJ *, struct _RECTL *))v197)(
                              v109 + 24,
                              v238,
                              v185,
                              &v232,
                              v147))
                  : (v160 = bProxyDrvTextOut(
                              a1,
                              (struct SURFACE *)v109,
                              (struct ESTROBJ *)v238,
                              (struct ECLIPOBJ *)&v232,
                              v147,
                              (struct _RECTL *)v186,
                              (struct _BRUSHOBJ *)v118,
                              v195,
                              v120,
                              (struct RFONTOBJ *)&v185,
                              0LL,
                              0,
                              &v229)),
                    !v160
                 || !(unsigned int)EPATHOBJ::bTextOutSimpleFill(
                                     &v225,
                                     a1,
                                     (struct RFONTOBJ *)&v185,
                                     (struct PDEVOBJ *)&v192,
                                     (struct SURFACE *)v109,
                                     &v232,
                                     (struct _BRUSHOBJ *)v118,
                                     v120,
                                     (unsigned int)v182,
                                     v183)) )
              {
                v14 = 0;
              }
              v14 &= ~4u;
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v225);
              goto LABEL_378;
            }
            if ( (v240 & 0x1400) == 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8080) == 0x80 && !LODWORD(v185[5].eYX) )
              {
                v214 = ghsemPrintKView;
                GreAcquireSemaphore(ghsemPrintKView);
                for ( i = gpPrintKViewList; i; i = *(_QWORD *)(i + 32) )
                {
                  if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)&v185[7].eYX + 80LL) )
                    ++*(_DWORD *)(i + 12);
                }
                SEMOBJ::vUnlock((SEMOBJ *)&v214);
              }
              v183 = 3341;
              v182 = v120;
              v181 = (struct _POINTL *)v195;
              p_rclBounds = (struct _XLATEOBJ *)v186;
              if ( !((unsigned int (__fastcall *)(__int64, _BYTE *, struct _FD_XFORM *, struct _CLIPOBJ *, struct _RECTL *))v197)(
                      v109 + 24,
                      v238,
                      v185,
                      &v232,
                      v147) )
                v14 = 0;
              if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 56LL) & 0x8080) == 0x80 && !LODWORD(v185[5].eYX) )
              {
                v213 = ghsemPrintKView;
                GreAcquireSemaphore(ghsemPrintKView);
                for ( j = gpPrintKViewList; j; j = *(_QWORD *)(j + 32) )
                {
                  if ( *(_QWORD *)j == *(_QWORD *)(*(_QWORD *)&v185[7].eYX + 80LL) )
                  {
                    v163 = *(_DWORD *)(j + 12);
                    if ( v163 )
                      *(_DWORD *)(j + 12) = v163 - 1;
                  }
                }
                SEMOBJ::vUnlock((SEMOBJ *)&v213);
              }
              goto LABEL_378;
            }
            v158 = bProxyDrvTextOut(
                     a1,
                     (struct SURFACE *)v109,
                     (struct ESTROBJ *)v238,
                     (struct ECLIPOBJ *)&v232,
                     v147,
                     (struct _RECTL *)v186,
                     (struct _BRUSHOBJ *)v118,
                     v195,
                     v120,
                     (struct RFONTOBJ *)&v185,
                     (struct PDEVOBJ *)&v192,
                     0,
                     &v229);
          }
          if ( !v158 )
            v14 = 0;
LABEL_378:
          *(_QWORD *)(v109 + 104) = 0LL;
          v164 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v164 )
          {
            v165 = *v164;
            if ( v165 )
              *(_QWORD *)(v165 + 304) = 0LL;
          }
          goto LABEL_381;
        }
LABEL_139:
        v14 |= 1u;
        goto LABEL_140;
      }
LABEL_174:
      v55 = 0LL;
      v14 = 0;
      goto LABEL_152;
    }
  }
  return 0;
}
