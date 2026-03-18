/*
 * XREFs of NtGdiAlphaBlend @ 0x1C00423F0
 * Callers:
 *     BltIcon @ 0x1C00B0F38 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0235F40 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0001FC0 (EngPlgBlt.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C003A36C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C003A654 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C003A910 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     EngCopyBits @ 0x1C0040D90 (EngCopyBits.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0046614 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0046720 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004694C (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004698C (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C011327C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C01132B8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1C012D2B0 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C013AFB8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C013B00C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C01BF4D0 (--1CAutoTGO@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0257CE4 (--0SURFREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C025B160 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025B244 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C02616A4 (-bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C026175C (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        POINTL a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        XLATEOBJ *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v14; // r14d
  unsigned int v15; // ebx
  int v16; // r15d
  __int64 v17; // rdi
  int v18; // esi
  __int64 v19; // rcx
  int v20; // r8d
  float v21; // xmm4_4
  int left; // edx
  int top; // r10d
  int right; // eax
  int bottom; // r9d
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // edi
  int v31; // r8d
  int v32; // eax
  FIX v33; // r8d
  FIX x; // eax
  FIX y; // r10d
  FIX v36; // ecx
  int v37; // r9d
  int v38; // r8d
  int v39; // edx
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // r13
  __int64 v46; // r12
  __int64 v47; // rdi
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __int64 v52; // rax
  int v53; // ecx
  _DWORD *v54; // rcx
  int *v55; // rcx
  __int64 v56; // r11
  __int64 v57; // r10
  int *v58; // rcx
  __int64 v59; // r11
  __int64 v60; // r10
  __int64 v61; // r10
  int v62; // edx
  LONG v63; // r8d
  LONG v64; // edi
  LONG v65; // r9d
  _DWORD *v66; // rax
  int v67; // ecx
  LONG v68; // edx
  bool v69; // cc
  int v70; // edi
  int v71; // edx
  HDC v72; // rcx
  __int64 v73; // rax
  char v74; // di
  int v75; // eax
  __int64 v76; // rdi
  _DWORD *v77; // rax
  __int64 v78; // r14
  int v79; // ecx
  __int64 v80; // rax
  XLATEOBJ *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // edx
  __int64 v85; // rax
  int v86; // ecx
  int v87; // eax
  __int64 v88; // rax
  struct _XLATETABLE near *v89; // r11
  unsigned int v90; // r10d
  int v91; // eax
  int v92; // eax
  __int64 v93; // r8
  int v94; // eax
  __int64 v95; // r8
  _DWORD *v96; // rdx
  int v97; // r9d
  int v98; // eax
  __int64 v99; // r8
  __int64 XlateObject; // rax
  __int64 v101; // rcx
  __int64 v102; // rax
  XLATEOBJ *v103; // r12
  int v104; // eax
  __int64 v105; // rax
  __int64 v106; // rax
  int v107; // edx
  __int64 v108; // rax
  int v109; // ecx
  unsigned int v110; // r13d
  struct _XLATETABLE near *v111; // r10
  unsigned int v112; // r11d
  __int64 v113; // r12
  int v114; // eax
  int v115; // eax
  __int64 v116; // r8
  int v117; // eax
  __int64 v118; // r8
  _DWORD *v119; // rdx
  int v120; // r9d
  int v121; // eax
  __int64 v122; // r8
  __int64 v123; // rax
  __int64 v124; // r14
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdi
  __int64 v129; // r13
  int v130; // eax
  __int64 v131; // rcx
  __int64 v132; // rcx
  int v133; // edi
  __int64 v134; // rcx
  int v135; // edx
  unsigned int v136; // esi
  struct _XLATETABLE near *v137; // r10
  unsigned int v138; // r11d
  __int64 v139; // r13
  int v140; // eax
  int v141; // eax
  __int64 v142; // r8
  int v143; // eax
  __int64 v144; // r8
  _DWORD *v145; // rdx
  int v146; // r9d
  int v147; // eax
  __int64 v148; // r8
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rax
  int v152; // eax
  __int64 v153; // rax
  __int64 v154; // rax
  int v155; // edx
  __int64 v156; // rax
  int v157; // ecx
  unsigned int v158; // esi
  __int64 v159; // rax
  unsigned int v160; // r11d
  struct _XLATETABLE near *v161; // r10
  int v162; // eax
  int v163; // eax
  __int64 v164; // r8
  int v165; // eax
  __int64 v166; // r8
  _DWORD *v167; // rdx
  int v168; // r9d
  int v169; // eax
  __int64 v170; // r8
  __int64 v171; // rdi
  __int64 v172; // rax
  int inited; // edi
  struct REGION *v174; // rdx
  __int64 v175; // r15
  int v176; // eax
  _DWORD *v177; // rdi
  int v178; // eax
  int v179; // eax
  _QWORD *v180; // rax
  bool v181; // zf
  BOOL (__stdcall *v182)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned int v183; // edx
  int v184; // edi
  int v185; // r8d
  int v186; // r9d
  LONG v187; // edi
  ULONG v188; // ecx
  SURFOBJ *v189; // rcx
  LONG v190; // r10d
  unsigned __int64 v191; // r9
  unsigned __int64 v192; // r11
  __int64 v193; // r15
  _DWORD *v194; // rdx
  __int64 v195; // rdi
  LONG v196; // eax
  unsigned __int64 v197; // r8
  _DWORD *v198; // r8
  unsigned __int64 v199; // rdx
  SURFOBJ *v200; // rdx
  SURFOBJ *v201; // rcx
  XLATEOBJ *v202; // r14
  __int64 v203; // r9
  __int64 v204; // r8
  struct ECLIPOBJ *v205; // rdx
  struct ECLIPOBJ **v206; // rdi
  ULONG v207; // ecx
  BOOL (__stdcall *v208)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v209; // rdx
  __int64 cEntries; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rcx
  ULONG v215; // ecx
  int v216; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v218; // rdx
  __int64 v219; // rax
  __int64 v220; // rdx
  HSURF v221; // rdi
  char v222; // di
  __int64 v223; // rax
  DCVISRGNSHARELOCK *v224; // rcx
  __int64 v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rax
  __int64 v228; // rdx
  HSURF v229; // rdi
  char v230; // di
  __int64 v231; // rax
  DCVISRGNSHARELOCK *v232; // rcx
  __int64 v233; // rax
  signed __int32 v235[8]; // [rsp+0h] [rbp-100h] BYREF
  RECTL *prclDest; // [rsp+20h] [rbp-E0h]
  POINTL *pptlSrc; // [rsp+28h] [rbp-D8h]
  POINTL *pptlBrushOrg; // [rsp+30h] [rbp-D0h]
  POINTFIX *pptfx; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  POINTL *pptl; // [rsp+48h] [rbp-B8h]
  ULONG iMode; // [rsp+50h] [rbp-B0h]
  int v243; // [rsp+60h] [rbp-A0h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v245; // [rsp+74h] [rbp-8Ch]
  int v246; // [rsp+78h] [rbp-88h]
  int v247; // [rsp+7Ch] [rbp-84h]
  int v248[2]; // [rsp+80h] [rbp-80h] BYREF
  int v249[2]; // [rsp+88h] [rbp-78h] BYREF
  int v250[2]; // [rsp+90h] [rbp-70h] BYREF
  POINTFIX v251; // [rsp+98h] [rbp-68h]
  _DWORD *p_iUniq; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v253; // [rsp+A8h] [rbp-58h]
  __int64 v254; // [rsp+B0h] [rbp-50h]
  __int128 v255; // [rsp+C0h] [rbp-40h] BYREF
  char v256; // [rsp+D0h] [rbp-30h] BYREF
  char v257[7]; // [rsp+D1h] [rbp-2Fh] BYREF
  POINTL v258; // [rsp+D8h] [rbp-28h] BYREF
  XLATEOBJ *pxlo; // [rsp+E0h] [rbp-20h]
  __int64 v260; // [rsp+E8h] [rbp-18h] BYREF
  int v261; // [rsp+F0h] [rbp-10h]
  __int64 v262; // [rsp+F8h] [rbp-8h]
  __int64 v263; // [rsp+100h] [rbp+0h]
  __int64 v264; // [rsp+108h] [rbp+8h] BYREF
  int v265; // [rsp+110h] [rbp+10h]
  int v266; // [rsp+114h] [rbp+14h]
  __int64 v267; // [rsp+118h] [rbp+18h] BYREF
  char v268; // [rsp+120h] [rbp+20h]
  int v269; // [rsp+124h] [rbp+24h]
  __int64 v270; // [rsp+128h] [rbp+28h] BYREF
  char v271; // [rsp+130h] [rbp+30h]
  int v272; // [rsp+134h] [rbp+34h]
  _QWORD v273[2]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v274[32]; // [rsp+148h] [rbp+48h] BYREF
  __int64 i; // [rsp+168h] [rbp+68h]
  _QWORD v276[2]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v277[32]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v278; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v279; // [rsp+1A8h] [rbp+A8h]
  __int64 v280; // [rsp+1B0h] [rbp+B0h] BYREF
  int v281; // [rsp+1B8h] [rbp+B8h]
  int v282; // [rsp+1BCh] [rbp+BCh]
  int v283; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v284; // [rsp+1C4h] [rbp+C4h]
  _BYTE v285[12]; // [rsp+1CCh] [rbp+CCh]
  __int64 v286; // [rsp+1D8h] [rbp+D8h]
  _DWORD v287[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v288; // [rsp+1E8h] [rbp+E8h]
  __int128 v289; // [rsp+1F0h] [rbp+F0h]
  _DWORD v290[2]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v291; // [rsp+208h] [rbp+108h]
  __int64 v292; // [rsp+218h] [rbp+118h]
  __int64 v293; // [rsp+220h] [rbp+120h] BYREF
  __int64 v294; // [rsp+228h] [rbp+128h] BYREF
  __int64 v295; // [rsp+230h] [rbp+130h] BYREF
  __int64 v296; // [rsp+238h] [rbp+138h] BYREF
  __int64 v297; // [rsp+240h] [rbp+140h] BYREF
  __int64 v298; // [rsp+248h] [rbp+148h] BYREF
  _DWORD *v299; // [rsp+250h] [rbp+150h]
  __int64 v300; // [rsp+258h] [rbp+158h] BYREF
  __int64 v301; // [rsp+260h] [rbp+160h] BYREF
  __int64 v302; // [rsp+268h] [rbp+168h] BYREF
  __int64 v303; // [rsp+270h] [rbp+170h] BYREF
  struct PALETTE *v304; // [rsp+278h] [rbp+178h] BYREF
  __int64 v305; // [rsp+280h] [rbp+180h] BYREF
  __int64 v306; // [rsp+288h] [rbp+188h] BYREF
  struct PALETTE *v307; // [rsp+290h] [rbp+190h] BYREF
  __int64 v308; // [rsp+298h] [rbp+198h] BYREF
  __int64 v309; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v310; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int128 v311; // [rsp+2C0h] [rbp+1C0h]
  __int64 v312; // [rsp+2D0h] [rbp+1D0h]
  __int64 v313; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v314; // [rsp+2E0h] [rbp+1E0h]
  int v315; // [rsp+2E4h] [rbp+1E4h]
  _BYTE v316[32]; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v317; // [rsp+308h] [rbp+208h]
  __int128 v318; // [rsp+310h] [rbp+210h]
  int v319; // [rsp+320h] [rbp+220h]
  _QWORD v320[6]; // [rsp+328h] [rbp+228h] BYREF
  _QWORD v321[7]; // [rsp+358h] [rbp+258h] BYREF
  __int128 v322; // [rsp+390h] [rbp+290h]
  HDC v323; // [rsp+3A0h] [rbp+2A0h]
  int v324; // [rsp+3A8h] [rbp+2A8h]
  __int128 v325; // [rsp+3B0h] [rbp+2B0h]
  HDC v326; // [rsp+3C0h] [rbp+2C0h]
  __int128 v327; // [rsp+3D0h] [rbp+2D0h]
  int v328; // [rsp+3E0h] [rbp+2E0h] BYREF
  XLATEOBJ *v329; // [rsp+3E8h] [rbp+2E8h]
  __int64 v330; // [rsp+3F0h] [rbp+2F0h]
  XLATEOBJ *v331; // [rsp+3F8h] [rbp+2F8h]
  RECTL v332; // [rsp+400h] [rbp+300h] BYREF
  DC *v333[6]; // [rsp+410h] [rbp+310h] BYREF
  _BYTE v334[32]; // [rsp+440h] [rbp+340h] BYREF
  HSURF *v335; // [rsp+460h] [rbp+360h]
  _BYTE v336[32]; // [rsp+468h] [rbp+368h] BYREF
  HSURF *v337; // [rsp+488h] [rbp+388h]
  DC *v338[6]; // [rsp+490h] [rbp+390h] BYREF
  __int128 v339; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int64 v340; // [rsp+4D0h] [rbp+3D0h]
  _BYTE v341[32]; // [rsp+4D8h] [rbp+3D8h] BYREF
  __int64 v342; // [rsp+4F8h] [rbp+3F8h]
  _BYTE v343[32]; // [rsp+500h] [rbp+400h] BYREF
  __int64 v344; // [rsp+520h] [rbp+420h]
  RECTL v345; // [rsp+530h] [rbp+430h] BYREF
  __int128 v346; // [rsp+540h] [rbp+440h] BYREF
  __int64 v347; // [rsp+550h] [rbp+450h] BYREF
  int v348; // [rsp+558h] [rbp+458h]
  int v349; // [rsp+55Ch] [rbp+45Ch]
  _BYTE v350[4]; // [rsp+560h] [rbp+460h] BYREF
  int v351; // [rsp+564h] [rbp+464h]
  int v352; // [rsp+568h] [rbp+468h]
  int v353; // [rsp+56Ch] [rbp+46Ch]
  int v354; // [rsp+570h] [rbp+470h]
  __int64 v355; // [rsp+598h] [rbp+498h]
  __int64 v356; // [rsp+5B0h] [rbp+4B0h]
  int v357; // [rsp+5B8h] [rbp+4B8h]
  int v358; // [rsp+5E0h] [rbp+4E0h]
  __int64 v359; // [rsp+5F0h] [rbp+4F0h]
  struct _POINTFIX v360; // [rsp+600h] [rbp+500h] BYREF
  FIX v361; // [rsp+608h] [rbp+508h]
  int v362; // [rsp+60Ch] [rbp+50Ch]
  int v363; // [rsp+610h] [rbp+510h]
  FIX v364; // [rsp+614h] [rbp+514h]
  FIX v365; // [rsp+618h] [rbp+518h]
  int v366; // [rsp+61Ch] [rbp+51Ch]
  struct _POINTL v367; // [rsp+620h] [rbp+520h] BYREF
  int v368; // [rsp+628h] [rbp+528h]
  LONG v369; // [rsp+62Ch] [rbp+52Ch]
  LONG v370; // [rsp+630h] [rbp+530h]
  int v371; // [rsp+634h] [rbp+534h]
  POINTFIX v372; // [rsp+638h] [rbp+538h] BYREF
  POINTFIX v373; // [rsp+640h] [rbp+540h]
  POINTFIX v374; // [rsp+648h] [rbp+548h]

  v14 = 1;
  pxlo = a6;
  v249[0] = a7;
  v248[0] = a2;
  v250[0] = a8;
  v245 = a4;
  LODWORD(p_iUniq) = a3;
  v258 = a1;
  DIB = a5;
  v247 = a9;
  v246 = a10;
  if ( !(_BYTE)a11 && (a11 & 0xFE000000) == 0 )
  {
    if ( !a9 || !a10 )
      return 1LL;
    if ( a4 >= 0 && a5 >= 0 && a9 >= 0 && a10 >= 0 )
    {
      v251.x = BYTE1(a11) & 0x80;
      v15 = 0;
      BYTE1(a11) &= ~0x80u;
      v273[0] = 0LL;
      v273[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v274);
      XDCOBJ::vLock((XDCOBJ *)v273, *(HDC *)&v258);
      if ( !v273[0] || (*(_DWORD *)(v273[0] + 36LL) & 0x10000) != 0 )
      {
        EngSetLastError(6u);
        goto LABEL_476;
      }
      v276[0] = 0LL;
      v276[1] = 0LL;
      UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v277);
      XDCOBJ::vLock((XDCOBJ *)v276, (HDC)pxlo);
      if ( !v276[0] )
        goto LABEL_472;
      bSpDwmValidateSurface((struct XDCOBJ *)v276, v249[0], v250[0], a9, a10);
      bSpDwmValidateSurface((struct XDCOBJ *)v273, a2, a3, a4, DIB);
      v265 = *(_DWORD *)(*(_QWORD *)(v273[0] + 80LL) + 68LL);
      v16 = *(_DWORD *)(*(_QWORD *)(v273[0] + 80LL) + 312LL) & 1;
      v266 = v16;
      if ( (*(_DWORD *)(*(_QWORD *)(v273[0] + 80LL) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v264, (struct XDCOBJ *)v273, 0x204u, 0);
        v16 = v266;
        v17 = v264;
      }
      else
      {
        v17 = v273[0] + 336LL;
        v264 = v273[0] + 336LL;
      }
      v281 = *(_DWORD *)(*(_QWORD *)(v276[0] + 80LL) + 68LL);
      v18 = *(_DWORD *)(*(_QWORD *)(v276[0] + 80LL) + 312LL) & 1;
      v282 = v18;
      if ( (*(_DWORD *)(*(_QWORD *)(v276[0] + 80LL) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v280, (struct XDCOBJ *)v276, 0x204u, 0);
        v19 = v280;
        v16 = v266;
        v17 = v264;
        v18 = v282;
      }
      else
      {
        v19 = v276[0] + 336LL;
        v280 = v276[0] + 336LL;
      }
      v20 = *(_DWORD *)(v19 + 32);
      if ( (v20 & 1) == 0 || (v21 = 0.0, !v18) && (*(float *)v19 < 0.0 || *(float *)(v19 + 12) < 0.0) )
      {
LABEL_472:
        v14 = 0;
        EngSetLastError(0x57u);
LABEL_473:
        v15 = v14;
        goto LABEL_474;
      }
      left = v249[0];
      top = v250[0];
      right = v249[0] + v247;
      bottom = v250[0] + v246;
      v345.left = v249[0];
      v345.top = v250[0];
      v345.right = v249[0] + v247;
      v345.bottom = v250[0] + v246;
      if ( (v20 & 0x43) != 0x43 )
      {
        bCvtPts1(v19, &v345.left, 2LL);
        bottom = v345.bottom;
        right = v345.right;
        top = v345.top;
        left = v345.left;
      }
      if ( v18 )
      {
        ++left;
        ++right;
        v345.left = left;
        v345.right = right;
      }
      if ( left > right )
      {
        v345.left = right;
        v345.right = left;
      }
      if ( top > bottom )
      {
        v345.top = bottom;
        v345.bottom = top;
      }
      if ( (*(_DWORD *)(v17 + 32) & 1) != 0 && (v16 || v21 <= *(float *)v17 && v21 <= *(float *)(v17 + 12)) )
      {
        *(_QWORD *)&v255 = __PAIR64__(a3, a2);
        DWORD2(v255) = a2 + v245;
        HIDWORD(v255) = a3 + DIB;
        v346 = v255;
        v26 = *(_DWORD *)(v17 + 32) & 0x43;
        v261 = 0;
        if ( (_BYTE)v26 != 67 )
          bCvtPts1(v17, (int *)&v346, 2LL);
        v27 = v346;
        v28 = DWORD2(v346);
        if ( v16 )
        {
          v27 = v346 + 1;
          v28 = DWORD2(v346) + 1;
          LODWORD(v346) = v346 + 1;
          ++DWORD2(v346);
        }
        if ( v27 > v28 )
        {
          v29 = v27;
          LODWORD(v346) = v28;
          v27 = v28;
          DWORD2(v346) = v29;
          v28 = v29;
        }
        v30 = DWORD1(v346);
        v31 = HIDWORD(v346);
        if ( SDWORD1(v346) > SHIDWORD(v346) )
        {
          v32 = DWORD1(v346);
          DWORD1(v346) = HIDWORD(v346);
          v30 = HIDWORD(v346);
          HIDWORD(v346) = v32;
          v31 = v32;
        }
      }
      else
      {
        v261 = 1;
        v367.x = a2;
        v367.y = a3;
        v369 = a3;
        v368 = v245 + a2;
        v370 = a2;
        v371 = a3 + DIB;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v264, &v367, &v360, 3uLL);
        v33 = v361;
        x = v360.x;
        if ( (*(_DWORD *)(v264 + 32) & 1) != 0 )
        {
          if ( v360.x > v361 )
          {
            x = v360.x + 16;
            v33 = v361 + 16;
            v363 += 16;
            v360.x += 16;
            v361 += 16;
          }
          y = v360.y;
          v36 = v364;
          v37 = v362;
          if ( v360.y > v364 )
          {
            y = v360.y + 16;
            v37 = v362 + 16;
            v36 = v364 + 16;
            v360.y += 16;
            v364 += 16;
            v362 += 16;
          }
        }
        else
        {
          v36 = v364;
          v37 = v362;
          y = v360.y;
        }
        v365 = v33 + v363 - x;
        v366 = v36 + v37 - y;
        v38 = v33 > x == v33 > v365;
        v39 = v37 > y == v37 > v366;
        if ( *(&v360.x + 2 * v38) > *(&v360.x + 2 * (v38 ^ 3LL)) )
          v38 ^= 3u;
        if ( *(&v360.y + 2 * v39) > *(&v360.y + 2 * (v39 ^ 3LL)) )
          v39 ^= 3u;
        LODWORD(v255) = (*(&v360.x + 2 * v38) + 15) >> 4;
        DWORD1(v255) = (*(&v360.y + 2 * v39) + 15) >> 4;
        DWORD2(v255) = (*(&v360.x + 2 * (v38 ^ 3LL)) + 15) >> 4;
        HIDWORD(v255) = (*(&v360.y + 2 * (v39 ^ 3LL)) + 15) >> 4;
        v346 = v255;
        v31 = HIDWORD(v255);
        v28 = DWORD2(v255);
        v30 = DWORD1(v255);
        v27 = v255;
      }
      if ( v27 == v28 || v30 == v31 )
        goto LABEL_473;
      if ( (*(_DWORD *)(v273[0] + 36LL) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)v273, (struct ERECTL *)&v346);
      v313 = 0LL;
      v314 = 0;
      v315 = 0;
      v317 = 0;
      DCOBJ::DCOBJ((DCOBJ *)v320);
      DCOBJ::DCOBJ((DCOBJ *)v321);
      v312 = 0LL;
      v310 = 0LL;
      v311 = 0LL;
      v318 = 0LL;
      v322 = 0LL;
      v325 = 0LL;
      v319 = 0;
      v321[6] = 0LL;
      v323 = 0LL;
      v326 = 0LL;
      v320[0] = 0LL;
      v321[0] = 0LL;
      if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                            (DEVLOCKBLTOBJ *)&v310,
                            (struct XDCOBJ *)v273,
                            (struct XDCOBJ *)v276,
                            v40) )
      {
        v216 = XDCOBJ::bFullScreen((XDCOBJ *)v276);
        v14 = XDCOBJ::bFullScreen((XDCOBJ *)v273) | v216;
        goto LABEL_424;
      }
      v43 = v273[0];
      v44 = *(_QWORD *)(v273[0] + 512LL);
      v262 = v44;
      if ( !v44 )
        goto LABEL_424;
      v45 = *(_QWORD *)(v44 + 120);
      v46 = *(_QWORD *)(v273[0] + 96LL);
      v279 = v45;
      v47 = *(_QWORD *)(v276[0] + 512LL);
      v254 = v46;
      v253 = v47;
      if ( !v47 )
        goto LABEL_424;
      if ( *(_DWORD *)(v47 + 608) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v47 + 608) )
        goto LABEL_432;
      v48 = *(_DWORD *)(v47 + 112);
      if ( (v48 & 0x800) != 0 )
      {
        v49 = UserSurfaceAccessCheck(*(_QWORD *)(v47 + 600));
      }
      else
      {
        if ( (v48 & 0x10000000) == 0 )
        {
LABEL_67:
          if ( (*(_DWORD *)(v44 + 116) & 8) == 0 && !*(_QWORD *)(v44 + 224)
            || (v43 = 512LL, (*(_WORD *)(v44 + 102) & 0x200) == 0) )
          {
            v50 = *(_DWORD *)(v44 + 112);
            if ( (v50 & 0x800) != 0 )
            {
              v51 = UserSurfaceAccessCheck(*(_QWORD *)(v44 + 600));
            }
            else
            {
              if ( (v50 & 0x10000000) == 0 )
              {
LABEL_75:
                if ( (a11 & 0x1000000) != 0 )
                {
                  v52 = *(_QWORD *)(v47 + 120);
                  if ( *(_DWORD *)(v47 + 96) != 6
                    || !v52
                    || (v53 = *(_DWORD *)(v52 + 24), (v53 & 8) == 0)
                    && ((v53 & 2) == 0
                     || (v54 = *(_DWORD **)(v52 + 120), *v54 != 16711680)
                     || v54[1] != 65280
                     || v54[2] != 255) )
                  {
                    EngSetLastError(0x57u);
                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v310);
LABEL_474:
                    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v276);
                    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v277);
LABEL_476:
                    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v273);
                    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v274);
                    return v15;
                  }
                }
                v327 = v346;
                if ( (*(_DWORD *)(v273[0] + 40LL) & 1) != 0 )
                  v55 = (int *)(v273[0] + 1416LL);
                else
                  v55 = (int *)(v273[0] + 1408LL);
                v56 = *v55;
                if ( (unsigned __int64)(v56 + (int)v346 + 0x80000000LL) > 0xFFFFFFFF )
                  goto LABEL_431;
                if ( (unsigned __int64)(v56 + SDWORD2(v346) + 0x80000000LL) > 0xFFFFFFFF )
                  goto LABEL_431;
                v57 = v55[1];
                if ( (unsigned __int64)(v57 + SDWORD1(v346) + 0x80000000LL) > 0xFFFFFFFF
                  || (unsigned __int64)(v57 + SHIDWORD(v346) + 0x80000000LL) > 0xFFFFFFFF )
                {
                  goto LABEL_431;
                }
                LODWORD(v346) = v56 + v346;
                DWORD2(v346) += *v55;
                DWORD1(v346) += v55[1];
                HIDWORD(v346) += v55[1];
                v58 = (int *)((*(_DWORD *)(v276[0] + 40LL) & 1) != 0 ? v276[0] + 1416LL : v276[0] + 1408LL);
                v59 = *v58;
                if ( (unsigned __int64)(v59 + v345.left + 0x80000000LL) > 0xFFFFFFFF
                  || (unsigned __int64)(v59 + v345.right + 0x80000000LL) > 0xFFFFFFFF
                  || (v60 = v58[1], (unsigned __int64)(v60 + v345.top + 0x80000000LL) > 0xFFFFFFFF)
                  || (unsigned __int64)(v60 + v345.bottom + 0x80000000LL) > 0xFFFFFFFF )
                {
LABEL_431:
                  EngSetLastError(0x216u);
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v310);
                  goto LABEL_474;
                }
                v61 = v253;
                v62 = v59 + v345.left;
                v345.left += v59;
                v63 = *v58 + v345.right;
                v345.right = v63;
                v64 = v58[1] + v345.top;
                v345.top = v64;
                v65 = v58[1] + v345.bottom;
                v345.bottom = v65;
                v66 = *(_DWORD **)(v253 + 48);
                v299 = v66;
                if ( *(_WORD *)(v253 + 100) == 1 && v66 && (v66[14] & 0x20000) != 0 )
                {
                  v67 = v66[652];
                  if ( v62 < v67 )
                    goto LABEL_110;
                  v68 = v66[653];
                  if ( v64 < v68 || v63 > *(_DWORD *)(v253 + 56) + v67 )
                    goto LABEL_110;
                  v69 = v65 <= v68 + *(_DWORD *)(v253 + 60);
                }
                else
                {
                  if ( v62 < 0 || v64 < 0 || v63 > *(_DWORD *)(v253 + 56) )
                    goto LABEL_110;
                  v69 = v65 <= *(_DWORD *)(v253 + 60);
                }
                v70 = 0;
                if ( v69 )
                {
LABEL_111:
                  if ( v253 != v262 || (v332 = v345, ERECTL::operator*=(&v332, &v346), ERECTL::bEmpty((ERECTL *)&v332)) )
                  {
                    if ( !v70 )
                    {
                      if ( BYTE2(a11) != 0xFF || (a11 & 0x1000000) != 0 || (a11 & 0x100) != 0 )
                      {
                        v75 = 1;
                      }
                      else
                      {
                        v71 = v248[0];
                        v72 = (HDC)v258;
                        v73 = *(_QWORD *)(v273[0] + 80LL);
                        v243 = 0;
                        v74 = *(_BYTE *)(v73 + 75);
                        *(_BYTE *)(v73 + 75) = 3;
                        v14 = GreStretchBltInternal(
                                v72,
                                v71,
                                DIB,
                                (HDC)pxlo,
                                v249[0],
                                v250[0],
                                v247,
                                v246,
                                13369376,
                                -1,
                                v243);
                        v61 = v253;
                        v75 = 0;
                        *(_BYTE *)(*(_QWORD *)(v273[0] + 80LL) + 75LL) = v74;
                      }
                      if ( (v75 & v14) != 0 )
                      {
                        v76 = *(_QWORD *)(v61 + 120);
                        v260 = 0LL;
                        v77 = *(_DWORD **)(v276[0] + 80LL);
                        v78 = *(_QWORD *)(v276[0] + 96LL);
                        v245 = v77[9];
                        v79 = v77[8];
                        v249[0] = v77[10];
                        v246 = v79;
                        if ( (v76
                           || v45
                           && ((*(_DWORD *)(v45 + 24) & 0x800) == 0
                            || (v80 = *(_QWORD *)(v46 + 80)) != 0 && v80 != *(_QWORD *)(v46 + 72)))
                          && (v45
                           || (*(_DWORD *)(v76 + 24) & 0x800) == 0
                           || (v82 = *(_QWORD *)(v46 + 80)) != 0 && v82 != *(_QWORD *)(v46 + 72)) )
                        {
                          if ( !v76 || !v45 )
                          {
LABEL_160:
                            XlateObject = CreateXlateObject(0LL, 0LL, v76, v45, v78, v46, v249[0], v246, v245, 0);
                            *(_QWORD *)v250 = XlateObject;
                            if ( XlateObject )
                            {
                              if ( v76 && v45 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                                EXLATEOBJ::vAddToCache((__int64)v250, v76, v45, v78, v46);
                              DIB = 1;
                            }
                            else
                            {
                              DIB = 0;
                            }
LABEL_167:
                            v81 = xloIdent;
                            goto LABEL_168;
                          }
                          v83 = *(_QWORD *)(v76 + 128);
                          if ( v83 == v76 )
                            v84 = *(_DWORD *)(v76 + 32);
                          else
                            v84 = *(_DWORD *)(v83 + 32);
                          v85 = *(_QWORD *)(v45 + 128);
                          if ( v85 == v45 )
                            v86 = *(_DWORD *)(v45 + 32);
                          else
                            v86 = *(_DWORD *)(v85 + 32);
                          if ( v84 != v86 )
                          {
                            v87 = *(_DWORD *)(v76 + 56);
                            v301 = v46;
                            v302 = v78;
                            v297 = v45;
                            v248[0] = v87;
                            v303 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v88 = *(_QWORD *)(v76 + 128);
                            v89 = xlateTable;
                            v90 = v248[0];
                            v263 = v88;
                            v247 = 0;
                            while ( 1 )
                            {
                              if ( v88 == v76 )
                                v91 = *(_DWORD *)(v76 + 32);
                              else
                                v91 = *(_DWORD *)(v88 + 32);
                              if ( *((_DWORD *)v89 + 8 * v90 + 4) == v91 )
                              {
                                v92 = XEPALOBJ::ulTime((XEPALOBJ *)&v297);
                                if ( *(_DWORD *)((char *)v89 + v93 + 20) == v92 )
                                {
                                  v94 = XEPALOBJ::ulTime((XEPALOBJ *)&v301);
                                  if ( *(_DWORD *)((char *)v89 + v95 + 28) == v94 )
                                  {
                                    v96 = *(_DWORD **)((char *)v89 + v95 + 8);
                                    *(_QWORD *)v250 = v96;
                                    v97 = v96[19];
                                    if ( (v97 & 0x6000) == 0 )
                                    {
                                      if ( (v96[1] & 4) == 0 && (v97 & 0x100) == 0
                                        || (v96[1] & 4) != 0
                                        && v245 == v96[6]
                                        && (v98 = XEPALOBJ::ulTime((XEPALOBJ *)&v302),
                                            *(_DWORD *)((char *)v89 + v99 + 24) == v98)
                                        || (v97 & 0x100) != 0 && v249[0] == v96[7] && v246 == v96[8] )
                                      {
                                        _InterlockedIncrement((volatile signed __int32 *)v89 + 8 * v90);
                                        *(_DWORD *)(v76 + 56) = v90;
                                        SEMOBJ::~SEMOBJ((SEMOBJ *)&v303);
                                        DIB = 1;
                                        goto LABEL_167;
                                      }
                                    }
                                  }
                                }
                              }
                              v90 = ((_BYTE)v90 + 1) & 7;
                              if ( (unsigned int)++v247 >= 8 )
                                break;
                              v88 = v263;
                            }
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                            goto LABEL_160;
                          }
                        }
                        v81 = xloIdent;
                        *(_QWORD *)v250 = xloIdent;
                        DIB = 1;
LABEL_168:
                        v263 = *(_QWORD *)v250;
                        v101 = *(_QWORD *)(v276[0] + 80LL);
                        v247 = *(_DWORD *)(v101 + 32);
                        v246 = *(_DWORD *)(v101 + 40);
                        if ( !v76 )
                        {
                          if ( !gppalRGB )
                            goto LABEL_173;
                          if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                          {
                            v102 = *(_QWORD *)(v78 + 80);
                            if ( !v102 || v102 == *(_QWORD *)(v78 + 72) )
                              goto LABEL_173;
                          }
                        }
                        if ( !gppalRGB && (*(_DWORD *)(v76 + 24) & 0x800) != 0 )
                        {
                          v105 = *(_QWORD *)(v78 + 80);
                          if ( !v105 )
                          {
LABEL_173:
                            v103 = v81;
                            *(_QWORD *)v248 = v81;
                            v104 = 1;
                            goto LABEL_218;
                          }
                          if ( v105 == *(_QWORD *)(v78 + 72) )
                          {
                            v103 = v81;
                            *(_QWORD *)v248 = v81;
                            v104 = (_DWORD)gppalRGB + 1;
                            goto LABEL_218;
                          }
                        }
                        if ( v76 && gppalRGB )
                        {
                          v106 = *(_QWORD *)(v76 + 128);
                          if ( v106 == v76 )
                            v107 = *(_DWORD *)(v76 + 32);
                          else
                            v107 = *(_DWORD *)(v106 + 32);
                          v108 = *((_QWORD *)gppalRGB + 16);
                          if ( (struct PALETTE *)v108 == gppalRGB )
                            v109 = *((_DWORD *)gppalRGB + 8);
                          else
                            v109 = *(_DWORD *)(v108 + 32);
                          if ( v107 == v109 )
                          {
                            v103 = v81;
                            *(_QWORD *)v248 = v81;
                            v104 = 1;
                            goto LABEL_218;
                          }
                          if ( gppalRGB )
                          {
                            v110 = *(_DWORD *)(v76 + 56);
                            v295 = v78;
                            v305 = v78;
                            v304 = gppalRGB;
                            v306 = ghsemPalette;
                            GreAcquireSemaphore(ghsemPalette);
                            v111 = xlateTable;
                            v112 = 0;
                            v113 = *(_QWORD *)(v76 + 128);
                            do
                            {
                              if ( v113 == v76 )
                                v114 = *(_DWORD *)(v76 + 32);
                              else
                                v114 = *(_DWORD *)(v113 + 32);
                              if ( *((_DWORD *)v111 + 8 * v110 + 4) == v114 )
                              {
                                v115 = XEPALOBJ::ulTime((XEPALOBJ *)&v304);
                                if ( *(_DWORD *)((char *)v111 + v116 + 20) == v115 )
                                {
                                  v117 = XEPALOBJ::ulTime((XEPALOBJ *)&v295);
                                  if ( *(_DWORD *)((char *)v111 + v118 + 28) == v117 )
                                  {
                                    v119 = *(_DWORD **)((char *)v111 + v118 + 8);
                                    *(_QWORD *)v248 = v119;
                                    v120 = v119[19];
                                    if ( (v120 & 0x6000) == 0 )
                                    {
                                      if ( (v119[1] & 4) == 0 && (v120 & 0x100) == 0
                                        || (v119[1] & 4) != 0
                                        && v245 == v119[6]
                                        && (v121 = XEPALOBJ::ulTime((XEPALOBJ *)&v305),
                                            *(_DWORD *)((char *)v111 + v122 + 24) == v121)
                                        || (v120 & 0x100) != 0 && v246 == v119[7] && v247 == v119[8] )
                                      {
                                        _InterlockedIncrement((volatile signed __int32 *)v111 + 8 * v110);
                                        *(_DWORD *)(v76 + 56) = v110;
                                        SEMOBJ::~SEMOBJ((SEMOBJ *)&v306);
                                        v103 = *(XLATEOBJ **)v248;
                                        v104 = 1;
                                        goto LABEL_217;
                                      }
                                    }
                                  }
                                }
                              }
                              ++v112;
                              v110 = ((_BYTE)v110 + 1) & 7;
                            }
                            while ( v112 < 8 );
                            if ( ghsemPalette )
                            {
                              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                              GreReleaseSemaphoreInternal(ghsemPalette);
                            }
                          }
                        }
                        v123 = CreateXlateObject(0LL, 0LL, v76, gppalRGB, v78, v78, v246, v247, v245, 0);
                        *(_QWORD *)v248 = v123;
                        v103 = (XLATEOBJ *)v123;
                        if ( v123 )
                        {
                          if ( v76 && gppalRGB && (*(_DWORD *)(v123 + 76) & 0x200) == 0 )
                            EXLATEOBJ::vAddToCache((__int64)v248, v76, gppalRGB, v78, v78);
                          v104 = 1;
                        }
                        else
                        {
                          v104 = 0;
                        }
LABEL_217:
                        v81 = xloIdent;
LABEL_218:
                        DIB &= v104;
                        v124 = v279;
                        pxlo = v103;
                        v125 = *(_QWORD *)(v276[0] + 80LL);
                        v247 = *(_DWORD *)(v125 + 32);
                        v246 = *(_DWORD *)(v125 + 40);
                        if ( v279 )
                        {
                          v126 = v254;
                        }
                        else
                        {
                          if ( !gppalRGB )
                            goto LABEL_223;
                          v126 = v254;
                          if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                          {
                            v127 = *(_QWORD *)(v254 + 80);
                            if ( !v127 || v127 == *(_QWORD *)(v254 + 72) )
                              goto LABEL_223;
                          }
                        }
                        if ( gppalRGB
                          || (*(_DWORD *)(v279 + 24) & 0x800) == 0
                          || (v131 = *(_QWORD *)(v126 + 80)) != 0 && v131 != *(_QWORD *)(v126 + 72) )
                        {
                          if ( v279 && gppalRGB )
                          {
                            v132 = *(_QWORD *)(v279 + 128);
                            if ( v132 == v279 )
                              v133 = *(_DWORD *)(v279 + 32);
                            else
                              v133 = *(_DWORD *)(v132 + 32);
                            v134 = *((_QWORD *)gppalRGB + 16);
                            if ( (struct PALETTE *)v134 == gppalRGB )
                              v135 = *((_DWORD *)gppalRGB + 8);
                            else
                              v135 = *(_DWORD *)(v134 + 32);
                            if ( v133 == v135 )
                              goto LABEL_223;
                            if ( gppalRGB )
                            {
                              v136 = *(_DWORD *)(v279 + 56);
                              v308 = v126;
                              v309 = v126;
                              v307 = gppalRGB;
                              v293 = ghsemPalette;
                              GreAcquireSemaphore(ghsemPalette);
                              v137 = xlateTable;
                              v138 = 0;
                              v139 = *(_QWORD *)(v124 + 128);
                              do
                              {
                                if ( v139 == v124 )
                                  v140 = *(_DWORD *)(v124 + 32);
                                else
                                  v140 = *(_DWORD *)(v139 + 32);
                                if ( *((_DWORD *)v137 + 8 * v136 + 4) == v140 )
                                {
                                  v141 = XEPALOBJ::ulTime((XEPALOBJ *)&v307);
                                  if ( *(_DWORD *)((char *)v137 + v142 + 20) == v141 )
                                  {
                                    v143 = XEPALOBJ::ulTime((XEPALOBJ *)&v308);
                                    if ( *(_DWORD *)((char *)v137 + v144 + 28) == v143 )
                                    {
                                      v145 = *(_DWORD **)((char *)v137 + v144 + 8);
                                      p_iUniq = v145;
                                      v146 = v145[19];
                                      if ( (v146 & 0x6000) == 0 )
                                      {
                                        if ( (v145[1] & 4) == 0 && (v146 & 0x100) == 0
                                          || (v145[1] & 4) != 0
                                          && v245 == v145[6]
                                          && (v147 = XEPALOBJ::ulTime((XEPALOBJ *)&v309),
                                              *(_DWORD *)((char *)v137 + v148 + 24) == v147)
                                          || (v146 & 0x100) != 0 && v246 == v145[7] && v247 == v145[8] )
                                        {
                                          _InterlockedIncrement((volatile signed __int32 *)v137 + 8 * v136);
                                          *(_DWORD *)(v124 + 56) = v136;
                                          SEMOBJ::~SEMOBJ((SEMOBJ *)&v293);
                                          v103 = *(XLATEOBJ **)v248;
                                          v130 = 1;
                                          v129 = (__int64)p_iUniq;
                                          v128 = v254;
                                          goto LABEL_266;
                                        }
                                      }
                                    }
                                  }
                                }
                                ++v138;
                                v136 = ((_BYTE)v136 + 1) & 7;
                              }
                              while ( v138 < 8 );
                              if ( ghsemPalette )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                GreReleaseSemaphoreInternal(ghsemPalette);
                              }
                            }
                          }
                          v128 = v254;
                          v149 = CreateXlateObject(0LL, 0LL, v124, gppalRGB, v254, v254, v246, v247, v245, 0);
                          p_iUniq = (_DWORD *)v149;
                          v129 = v149;
                          if ( v149 )
                          {
                            if ( v124 && gppalRGB && (*(_DWORD *)(v149 + 76) & 0x200) == 0 )
                              EXLATEOBJ::vAddToCache((__int64)&p_iUniq, v124, gppalRGB, v128, v128);
                            v130 = 1;
                          }
                          else
                          {
                            v130 = 0;
                          }
LABEL_266:
                          v81 = xloIdent;
                          goto LABEL_267;
                        }
LABEL_223:
                        v128 = v254;
                        v129 = (__int64)v81;
                        p_iUniq = &v81->iUniq;
                        v130 = 1;
LABEL_267:
                        DIB &= v130;
                        v150 = *(_QWORD *)(v276[0] + 80LL);
                        v247 = *(_DWORD *)(v150 + 32);
                        v246 = *(_DWORD *)(v150 + 40);
                        if ( !gppalRGB )
                        {
                          if ( !v124 )
                            goto LABEL_272;
                          if ( (*(_DWORD *)(v124 + 24) & 0x800) != 0 )
                          {
                            v151 = *(_QWORD *)(v128 + 80);
                            if ( !v151 || v151 == *(_QWORD *)(v128 + 72) )
                              goto LABEL_272;
                          }
                        }
                        if ( !v124 && (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                        {
                          v153 = *(_QWORD *)(v128 + 80);
                          if ( !v153 )
                          {
LABEL_272:
                            *(_QWORD *)v249 = v81;
                            v152 = 1;
                            goto LABEL_316;
                          }
                          if ( v153 == *(_QWORD *)(v128 + 72) )
                          {
                            *(_QWORD *)v249 = v81;
                            v152 = 1;
                            goto LABEL_316;
                          }
                        }
                        if ( gppalRGB && v124 )
                        {
                          v154 = *((_QWORD *)gppalRGB + 16);
                          if ( (struct PALETTE *)v154 == gppalRGB )
                            v155 = *((_DWORD *)gppalRGB + 8);
                          else
                            v155 = *(_DWORD *)(v154 + 32);
                          v156 = *(_QWORD *)(v124 + 128);
                          if ( v156 == v124 )
                            v157 = *(_DWORD *)(v124 + 32);
                          else
                            v157 = *(_DWORD *)(v156 + 32);
                          if ( v155 == v157 )
                          {
                            *(_QWORD *)v249 = v81;
                            v152 = 1;
                            goto LABEL_316;
                          }
                          v158 = *((_DWORD *)gppalRGB + 14);
                          v300 = v128;
                          v296 = v128;
                          v294 = v124;
                          v298 = ghsemPalette;
                          GreAcquireSemaphore(ghsemPalette);
                          v159 = *((_QWORD *)gppalRGB + 16);
                          v160 = 0;
                          v161 = xlateTable;
                          for ( i = v159; ; v159 = i )
                          {
                            if ( (struct PALETTE *)v159 == gppalRGB )
                              v162 = *((_DWORD *)gppalRGB + 8);
                            else
                              v162 = *(_DWORD *)(v159 + 32);
                            if ( *((_DWORD *)v161 + 8 * v158 + 4) == v162 )
                            {
                              v163 = XEPALOBJ::ulTime((XEPALOBJ *)&v294);
                              if ( *(_DWORD *)((char *)v161 + v164 + 20) == v163 )
                              {
                                v165 = XEPALOBJ::ulTime((XEPALOBJ *)&v300);
                                if ( *(_DWORD *)((char *)v161 + v166 + 28) == v165 )
                                {
                                  v167 = *(_DWORD **)((char *)v161 + v166 + 8);
                                  *(_QWORD *)v249 = v167;
                                  v168 = v167[19];
                                  if ( (v168 & 0x6000) == 0 )
                                  {
                                    if ( (v167[1] & 4) == 0 && (v168 & 0x100) == 0
                                      || (v167[1] & 4) != 0
                                      && v245 == v167[6]
                                      && (v169 = XEPALOBJ::ulTime((XEPALOBJ *)&v296),
                                          *(_DWORD *)((char *)v161 + v170 + 24) == v169)
                                      || (v168 & 0x100) != 0 && v246 == v167[7] && v247 == v167[8] )
                                    {
                                      _InterlockedIncrement((volatile signed __int32 *)v161 + 8 * v158);
                                      *((_DWORD *)gppalRGB + 14) = v158;
                                      SEMOBJ::~SEMOBJ((SEMOBJ *)&v298);
                                      v103 = *(XLATEOBJ **)v248;
                                      v152 = 1;
                                      v129 = (__int64)p_iUniq;
                                      v81 = *(XLATEOBJ **)v249;
                                      goto LABEL_316;
                                    }
                                  }
                                }
                              }
                            }
                            ++v160;
                            v158 = ((_BYTE)v158 + 1) & 7;
                            if ( v160 >= 8 )
                              break;
                          }
                          if ( ghsemPalette )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                            GreReleaseSemaphoreInternal(ghsemPalette);
                          }
                        }
                        v171 = v254;
                        v172 = CreateXlateObject(0LL, 0LL, gppalRGB, v124, v254, v254, v246, v247, v245, 0);
                        *(_QWORD *)v249 = v172;
                        v81 = (XLATEOBJ *)v172;
                        if ( v172 )
                        {
                          if ( gppalRGB && v124 && (*(_DWORD *)(v172 + 76) & 0x200) == 0 )
                            EXLATEOBJ::vAddToCache((__int64)v249, gppalRGB, v124, v171, v171);
                          v152 = 1;
                        }
                        else
                        {
                          v152 = 0;
                        }
LABEL_316:
                        inited = v152 & DIB;
                        DIB &= v152;
                        v174 = *(struct REGION **)(v273[0] + 1552LL);
                        if ( !v174 )
                          v174 = *(struct REGION **)(v273[0] + 1544LL);
                        v355 = 0LL;
                        v356 = 0LL;
                        v357 = 0;
                        v358 = 1;
                        v359 = 0LL;
                        XCLIPOBJ::vSetup((XCLIPOBJ *)v350, v174, (struct ERECTL *)&v346, 0);
                        if ( v351 == v353 || v352 == v354 )
                        {
                          v15 = 1;
                          goto LABEL_421;
                        }
                        *(_QWORD *)&v255 = 0LL;
                        BYTE8(v255) = 0;
                        HIDWORD(v255) = 0;
                        v175 = *(_QWORD *)(v262 + 48);
                        i = v175;
                        if ( v251.x )
                        {
                          v176 = *(_DWORD *)(*(_QWORD *)(v273[0] + 80LL) + 312LL);
                          if ( (v176 & 1) != 0 && (v176 & 9) != 9 )
                          {
                            v177 = (_DWORD *)v253;
                            iMode = 0;
                            *(_DWORD *)&v285[8] = 0;
                            v284 = 0LL;
                            *(_QWORD *)v285 = 0LL;
                            v286 = 0LL;
                            LODWORD(v284) = *(_DWORD *)(v253 + 56);
                            v178 = *(_DWORD *)(v253 + 60);
                            LODWORD(pptl) = 0;
                            HIDWORD(v284) = v178;
                            v179 = *(_DWORD *)(v253 + 96);
                            LODWORD(prcl) = 1;
                            v283 = v179;
                            v180 = *(_QWORD **)(v253 + 120);
                            LODWORD(pptfx) = 0;
                            pptlBrushOrg = 0LL;
                            pptlSrc = 0LL;
                            *(_QWORD *)&v285[4] = *v180;
                            SURFMEM::bCreateDIB(
                              (SURFMEM *)&v255,
                              (struct _DEVBITMAPINFO *)&v283,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0);
                            if ( !(_QWORD)v255 )
                              goto LABEL_374;
                            v181 = (v177[28] & 0x400) == 0;
                            v348 = v177[14];
                            v349 = v177[15];
                            v347 = 0LL;
                            v278 = 0LL;
                            v182 = v181
                                 ? EngCopyBits
                                 : (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v299 + 358);
                            if ( !((unsigned int (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))v182)(
                                    v255 + 24,
                                    v177 + 6,
                                    0LL,
                                    0LL,
                                    &v347,
                                    &v278) )
                              goto LABEL_374;
                            v183 = *(_DWORD *)(v255 + 96);
                            if ( v183 - 1 > 5 )
                              goto LABEL_374;
                            qword_1C02E5460[v183]();
                            v253 = v255;
                            inited = DIB;
                          }
                        }
                        v270 = 0LL;
                        v271 = 0;
                        v272 = 0;
                        v267 = 0LL;
                        v268 = 0;
                        v269 = 0;
                        if ( !v261 )
                        {
                          v202 = pxlo;
                          goto LABEL_376;
                        }
                        iMode = 0;
                        *(_QWORD *)&v289 = 0LL;
                        LODWORD(pptl) = 0;
                        v287[1] = DWORD2(v346) - v346;
                        LODWORD(prcl) = 1;
                        LODWORD(pptfx) = 0;
                        v288 = (unsigned int)(HIDWORD(v346) - DWORD1(v346));
                        v287[0] = 6;
                        v289 = *(unsigned __int64 *)gppalRGB;
                        v184 = SURFMEM::bCreateDIB(
                                 (SURFMEM *)&v270,
                                 (struct _DEVBITMAPINFO *)v287,
                                 0LL,
                                 0LL,
                                 0,
                                 0LL,
                                 0LL,
                                 0,
                                 1,
                                 0,
                                 0) & inited;
                        if ( !v184 )
                        {
LABEL_372:
                          v188 = 8;
                          goto LABEL_373;
                        }
                        if ( (a11 & 0x1000000) != 0 )
                        {
                          v186 = v184;
                        }
                        else
                        {
                          iMode = 0;
                          v292 = 0LL;
                          v290[1] = v345.right - v345.left;
                          LODWORD(pptl) = 0;
                          LODWORD(prcl) = 1;
                          v291 = (unsigned int)(v345.bottom - v345.top);
                          LODWORD(pptfx) = 0;
                          v290[0] = 6;
                          pptlBrushOrg = 0LL;
                          pptlSrc = 0LL;
                          LODWORD(prclDest) = 0;
                          *((_QWORD *)&v291 + 1) = *(_QWORD *)gppalRGB;
                          DIB = SURFMEM::bCreateDIB(
                                  (SURFMEM *)&v267,
                                  (struct _DEVBITMAPINFO *)v290,
                                  0LL,
                                  0LL,
                                  0,
                                  0LL,
                                  0LL,
                                  0,
                                  1,
                                  0,
                                  0);
                          v186 = DIB;
                          if ( DIB )
                          {
                            v187 = v345.left;
                            v258.x = v345.left;
                            v251.x = v345.top;
                            v258.y = v345.top;
                            if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&v345, &v258, v185) )
                            {
                              v188 = 87;
LABEL_373:
                              EngSetLastError(v188);
                              SURFMEM::~SURFMEM((SURFMEM *)&v267);
                              SURFMEM::~SURFMEM((SURFMEM *)&v270);
LABEL_374:
                              SURFMEM::~SURFMEM((SURFMEM *)&v255);
LABEL_421:
                              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v249);
                              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&p_iUniq);
                              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v248);
                              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v260);
                              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v250);
                              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)&v310);
                              goto LABEL_474;
                            }
                            if ( v345.right > v345.left
                              && v345.bottom > v345.top
                              && v187 <= *(_DWORD *)(v253 + 56)
                              && v251.x <= *(_DWORD *)(v253 + 60) )
                            {
                              v189 = 0LL;
                              if ( v267 )
                                v189 = (SURFOBJ *)(v267 + 24);
                              EngCopyBits(v189, (SURFOBJ *)(v253 + 24), 0LL, v103, &v345, &v258);
                            }
                            v190 = 0;
                            v253 = v267;
                            v191 = *(_QWORD *)(v267 + 80);
                            v192 = v191 + *(_DWORD *)(v267 + 60) * *(_DWORD *)(v267 + 88);
                            if ( v191 != v192 )
                            {
                              v193 = v267;
                              do
                              {
                                if ( v190 >= v345.top && v190 < v345.bottom )
                                {
                                  v194 = (_DWORD *)v191;
                                  v195 = 0LL;
                                  v196 = 0;
                                  v197 = (unsigned __int64)(4LL * *(int *)(v193 + 56) + 3) >> 2;
                                  if ( v191 > v191 + 4LL * *(int *)(v193 + 56) )
                                    v197 = 0LL;
                                  if ( v197 )
                                  {
                                    do
                                    {
                                      if ( v196 >= v345.left && v196 < v345.right )
                                        *v194 |= 0xFF000000;
                                      ++v196;
                                      ++v194;
                                      ++v195;
                                    }
                                    while ( v195 != v197 );
                                    v193 = v267;
                                  }
                                }
                                ++v190;
                                v191 += *(int *)(v193 + 88);
                              }
                              while ( v191 != v192 );
                              v253 = v193;
                              v175 = i;
                            }
                            HIBYTE(a11) |= 1u;
                            v186 = DIB;
                            pxlo = xloIdent;
                          }
                        }
                        v198 = *(_DWORD **)(v270 + 72);
                        v199 = (unsigned __int64)*(unsigned int *)(v270 + 64) >> 2;
                        if ( v199 )
                        {
                          if ( ((unsigned __int8)v198 & 4) != 0 )
                          {
                            *v198 = 0;
                            if ( !--v199 )
                              goto LABEL_365;
                            ++v198;
                          }
                          memset(v198, 0, 8 * (v199 >> 1));
                          if ( (v199 & 1) != 0 )
                            v198[v199 - 1] = 0;
                        }
LABEL_365:
                        if ( v186 )
                        {
                          `vector constructor iterator'(&v372, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                          v251.x = v360.x - 16 * v327;
                          v251.y = v360.y - 16 * DWORD1(v327);
                          v372 = v251;
                          v251.x = v361 - 16 * v327;
                          v251.y = v362 - 16 * DWORD1(v327);
                          v373 = v251;
                          v251.x = v363 - 16 * v327;
                          v251.y = v364 - 16 * DWORD1(v327);
                          v374 = v251;
                          if ( v253 )
                            v200 = (SURFOBJ *)(v253 + 24);
                          else
                            v200 = 0LL;
                          v201 = 0LL;
                          if ( v270 )
                            v201 = (SURFOBJ *)(v270 + 24);
                          EngPlgBlt(v201, v200, 0LL, 0LL, pxlo, 0LL, 0LL, &v372, &v345, 0LL, 3u);
                          v340 = 0LL;
                          v202 = xloIdent;
                          inited = EXLATEOBJ::bInitXlateObj(
                                     &v260,
                                     0LL,
                                     0,
                                     (__int64)gppalRGB,
                                     v279,
                                     0LL,
                                     v254,
                                     *(_DWORD *)(*(_QWORD *)(v276[0] + 80LL) + 40LL),
                                     *(_DWORD *)(*(_QWORD *)(v276[0] + 80LL) + 32LL),
                                     v245,
                                     0);
                          *(_QWORD *)&v345.left = 0LL;
                          v263 = v260;
                          v253 = v270;
                          v345.right = DWORD2(v346) - v346;
                          v345.bottom = HIDWORD(v346) - DWORD1(v346);
                          `vector destructor iterator'(&v372, 8uLL, 3uLL, Scale_None);
LABEL_376:
                          if ( inited )
                          {
                            v203 = v262;
                            ++*(_DWORD *)(v262 + 92);
                            v204 = v273[0];
                            v205 = *(struct ECLIPOBJ **)(v276[0] + 48LL);
                            v206 = *(struct ECLIPOBJ ***)(v273[0] + 48LL);
                            if ( v206 == (struct ECLIPOBJ **)v205
                              || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v273) && v206[442] == v205 )
                            {
                              if ( (*(_DWORD *)(v204 + 36) & 0xE0) != 0 )
                              {
                                v339 = v346;
                                XDCOBJ::vAccumulateTight((XDCOBJ *)v273, v205, (struct ERECTL *)&v339);
                                v203 = v262;
                              }
                              v328 = a11;
                              v329 = v202;
                              v330 = v129;
                              v331 = v81;
                              if ( DWORD2(v346) - (_DWORD)v346 == v345.right - v345.left
                                && HIDWORD(v346) - DWORD1(v346) == v345.bottom - v345.top )
                              {
                                BYTE1(v328) = BYTE1(a11) & 0xFE;
                              }
                              if ( (*(_DWORD *)(v203 + 112) & 0x10000) != 0 )
                                v208 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v175 + 3280);
                              else
                                v208 = EngAlphaBlend;
                              if ( v253 )
                                v209 = v253 + 24;
                              else
                                v209 = 0LL;
                              v14 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, __int128 *, RECTL *, int *))v208)(
                                      v203 + 24,
                                      v209,
                                      v350,
                                      v263,
                                      &v346,
                                      &v345,
                                      &v328);
                              goto LABEL_395;
                            }
                            v207 = 87;
                          }
                          else
                          {
                            v207 = 6;
                          }
                          EngSetLastError(v207);
                          v14 = 0;
LABEL_395:
                          SURFMEM::~SURFMEM((SURFMEM *)&v267);
                          SURFMEM::~SURFMEM((SURFMEM *)&v270);
                          SURFMEM::~SURFMEM((SURFMEM *)&v255);
                          if ( v81 )
                          {
                            cEntries = (int)v81[1].cEntries;
                            if ( (int)cEntries < 0 )
                            {
                              if ( (_DWORD)cEntries == -1 )
                                FreeThreadBufferWithTag(v81);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                              v103 = *(XLATEOBJ **)v248;
                              v129 = (__int64)p_iUniq;
                            }
                          }
                          if ( v129 )
                          {
                            v211 = *(int *)(v129 + 36);
                            if ( (int)v211 < 0 )
                            {
                              if ( (_DWORD)v211 == -1 )
                                FreeThreadBufferWithTag(v129);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v211);
                              v103 = *(XLATEOBJ **)v248;
                            }
                          }
                          if ( v103 )
                          {
                            v212 = (int)v103[1].cEntries;
                            if ( (int)v212 < 0 )
                            {
                              if ( (_DWORD)v212 == -1 )
                                FreeThreadBufferWithTag(v103);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v212);
                            }
                          }
                          if ( v260 )
                          {
                            v213 = *(int *)(v260 + 36);
                            if ( (int)v213 < 0 )
                            {
                              if ( (_DWORD)v213 == -1 )
                                FreeThreadBufferWithTag(v260);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v213);
                            }
                          }
                          if ( *(_QWORD *)v250 )
                          {
                            v214 = *(int *)(*(_QWORD *)v250 + 36LL);
                            if ( (int)v214 < 0 )
                            {
                              if ( (_DWORD)v214 == -1 )
                                FreeThreadBufferWithTag(*(_QWORD *)v250);
                            }
                            else
                            {
                              _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v214);
                            }
                          }
                          goto LABEL_424;
                        }
                        goto LABEL_372;
                      }
LABEL_424:
                      if ( (v319 & 0x1000) != 0 )
                      {
                        DEVLOCKBLTOBJ::vUnMap((DEVLOCKBLTOBJ *)&v310);
                        DEVLOCKBLTOBJ::vFlushSpriteUpdates((DEVLOCKBLTOBJ *)&v310);
                      }
                      if ( v313 )
                      {
                        CAutoTGO::vUnguard((CAutoTGO *)v316);
                        DEVLOCKBLTOBJ::TmpSrcCleanup((DEVLOCKBLTOBJ *)&v310);
                      }
                      if ( (v319 & 0x1000) != 0 )
                      {
                        if ( (v319 & 0x8000) != 0 )
                        {
                          DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)&v310);
                          _InterlockedOr(v235, 0);
                          DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)&v310);
                          v319 &= ~0x8000u;
                        }
                        else
                        {
                          DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)&v310);
                          _InterlockedOr(v235, 0);
                          DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)&v310);
                        }
                        GreDecLockCount();
                        v319 &= ~0x1000u;
                        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                        if ( ThreadWin32Thread )
                        {
                          *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
                          *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
                        }
                      }
                      if ( (_QWORD)v310 )
                      {
                        EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v310);
                        GreReleaseSemaphoreInternal(v310);
                      }
                      if ( *((_QWORD *)&v310 + 1) )
                      {
                        EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)&v310 + 1));
                        GreReleaseSemaphoreInternal(*((_QWORD *)&v310 + 1));
                      }
                      if ( (v319 & 8) != 0 )
                        v319 &= ~8u;
                      if ( (_QWORD)v311 )
                      {
                        EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v311);
                        GreReleaseSemaphoreInternal(v311);
                      }
                      if ( *((_QWORD *)&v322 + 1) )
                      {
                        DCOBJ::DCOBJ((DCOBJ *)v333, v323);
                        SURFREF::SURFREF((SURFREF *)v334);
                        SURFREF::SURFREF((SURFREF *)v341);
                        LOBYTE(v218) = 5;
                        v219 = HmgShareLock(v322, v218);
                        LOBYTE(v220) = 5;
                        v335 = (HSURF *)v219;
                        v342 = HmgShareLock(*((_QWORD *)&v322 + 1), v220);
                        v221 = *v335;
                        *((_QWORD *)v333[0] + 64) = v342;
                        DEC_SHARE_REF_CNT(v335);
                        v335 = 0LL;
                        DEC_SHARE_REF_CNT(v342);
                        v342 = 0LL;
                        GreDereferenceObject(v221);
                        v323 = 0LL;
                        *(_QWORD *)&v322 = 0LL;
                        *((_DWORD *)v333[0] + 9) |= v324;
                        if ( (*((_DWORD *)v333[0] + 9) & 0x200) != 0 )
                        {
                          v222 = 0;
                          if ( !(unsigned int)GreGetLockCount()
                            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                          {
                            GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                            v222 = 1;
                          }
                          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v256);
                          LOBYTE(prclDest) = 5;
                          v223 = HmgShareUnlockRemoveObject(*((_QWORD *)&v322 + 1), 0LL, 0LL, 0LL, (_DWORD)prclDest);
                          if ( v223 )
                            SURFACE::bDeleteSurface(v223, 0LL, 1LL);
                          *((_QWORD *)v333[0] + 65) = 0LL;
                          DC::vClearRendering(v333[0]);
                          *((_QWORD *)&v322 + 1) = 0LL;
                          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v224);
                          if ( v222 )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                            GreReleaseSemaphoreInternal(ghsemGreLock);
                          }
                        }
                        else
                        {
                          LOBYTE(prclDest) = 5;
                          v225 = HmgShareUnlockRemoveObject(*((_QWORD *)&v322 + 1), 0LL, 0LL, 0LL, (_DWORD)prclDest);
                          if ( v225 )
                            SURFACE::bDeleteSurface(v225, 0LL, 1LL);
                          *((_QWORD *)v333[0] + 65) = 0LL;
                          *((_QWORD *)&v322 + 1) = 0LL;
                        }
                        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v341);
                        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v334);
                        DCOBJ::~DCOBJ((DCOBJ *)v333);
                      }
                      if ( *((_QWORD *)&v325 + 1) )
                      {
                        DCOBJ::DCOBJ((DCOBJ *)v338, v326);
                        SURFREF::SURFREF((SURFREF *)v336);
                        SURFREF::SURFREF((SURFREF *)v343);
                        LOBYTE(v226) = 5;
                        v227 = HmgShareLock(v325, v226);
                        LOBYTE(v228) = 5;
                        v337 = (HSURF *)v227;
                        v344 = HmgShareLock(*((_QWORD *)&v325 + 1), v228);
                        v229 = *v337;
                        *((_QWORD *)v338[0] + 64) = v344;
                        DEC_SHARE_REF_CNT(v337);
                        v337 = 0LL;
                        DEC_SHARE_REF_CNT(v344);
                        v344 = 0LL;
                        GreDereferenceObject(v229);
                        v326 = 0LL;
                        *(_QWORD *)&v325 = 0LL;
                        if ( (*((_DWORD *)v338[0] + 9) & 0x200) != 0 )
                        {
                          v230 = 0;
                          if ( !(unsigned int)GreGetLockCount()
                            && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                          {
                            GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                            v230 = 1;
                          }
                          DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v257);
                          LOBYTE(prclDest) = 5;
                          v231 = HmgShareUnlockRemoveObject(*((_QWORD *)&v325 + 1), 0LL, 0LL, 0LL, (_DWORD)prclDest);
                          if ( v231 )
                            SURFACE::bDeleteSurface(v231, 0LL, 1LL);
                          *((_QWORD *)v338[0] + 65) = 0LL;
                          DC::vClearRendering(v338[0]);
                          *((_QWORD *)&v325 + 1) = 0LL;
                          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v232);
                          if ( v230 )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                            GreReleaseSemaphoreInternal(ghsemGreLock);
                          }
                        }
                        else
                        {
                          LOBYTE(prclDest) = 5;
                          v233 = HmgShareUnlockRemoveObject(*((_QWORD *)&v325 + 1), 0LL, 0LL, 0LL, (_DWORD)prclDest);
                          if ( v233 )
                            SURFACE::bDeleteSurface(v233, 0LL, 1LL);
                          *((_QWORD *)v338[0] + 65) = 0LL;
                          *((_QWORD *)&v325 + 1) = 0LL;
                        }
                        EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                        GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v343);
                        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v336);
                        DCOBJ::~DCOBJ((DCOBJ *)v338);
                      }
                      DCOBJ::~DCOBJ((DCOBJ *)v321);
                      DCOBJ::~DCOBJ((DCOBJ *)v320);
                      CAutoTGO::~CAutoTGO((CAutoTGO *)v316);
                      SURFMEM::~SURFMEM((SURFMEM *)&v313);
                      goto LABEL_473;
                    }
                  }
                  v215 = 87;
LABEL_423:
                  EngSetLastError(v215);
                  v14 = 0;
                  goto LABEL_424;
                }
LABEL_110:
                v70 = 1;
                goto LABEL_111;
              }
              v51 = UserScreenAccessCheck(v43, v41, v42);
            }
            if ( v51 )
              goto LABEL_75;
          }
LABEL_432:
          v215 = 6;
          goto LABEL_423;
        }
        v49 = UserScreenAccessCheck(v43, v41, v42);
      }
      if ( !v49 )
        goto LABEL_432;
      goto LABEL_67;
    }
  }
  EngSetLastError(0x57u);
  return 0LL;
}
