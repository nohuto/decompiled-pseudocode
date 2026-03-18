/*
 * XREFs of GreAlphaBlend @ 0x1400B0E88
 * Callers:
 *     BltIcon @ 0x140027954 (BltIcon.c)
 *     NtGdiAlphaBlend @ 0x1401C2BF0 (NtGdiAlphaBlend.c)
 *     xxxRealDrawMenuItem @ 0x1401F9D14 (xxxRealDrawMenuItem.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402F9E30 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x140073214 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400ABEE8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1MAPIDCOBJ@@QEAA@XZ @ 0x1400B4334 (--1MAPIDCOBJ@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0N@@@YAXXZ @ 0x1400B438C (--$GrepAcquireLockValidate@$0N@@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400B4420 (--$GreAcquireSemaphoreCommon@$0N@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     ?SaveAttributes@DCOBJ@@AEAAHXZ @ 0x1400B5C90 (-SaveAttributes@DCOBJ@@AEAAHXZ.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z @ 0x1400BA570 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0@Z.c)
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x1400E38E4 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z @ 0x1401589A0 (-vStrMirror32@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ??0EPOINTFIX@@QEAA@XZ @ 0x14016D620 (--0EPOINTFIX@@QEAA@XZ.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14016D630 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x1401B7E00 (-vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1402524D8 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z @ 0x140337F40 (-vStrMirror04@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z @ 0x140338160 (-vStrMirror08@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z @ 0x1403381E0 (-vStrMirror16@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     ?vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z @ 0x140338270 (-vStrMirror24@stretch@@YAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreAlphaBlend(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // ebx
  unsigned __int8 v16; // ah
  struct Gre::Base::SESSION_GLOBALS *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  DC *v21; // rsi
  float v22; // xmm4_4
  LONG left; // edi
  LONG top; // r9d
  LONG bottom; // r8d
  LONG right; // edx
  int v27; // eax
  BOOL v28; // edi
  int v29; // edx
  DC *v30; // rsi
  int v31; // edi
  int v32; // r8d
  int v33; // eax
  __int32 v34; // eax
  int v35; // eax
  DC *v36; // rcx
  int v37; // eax
  DC *v38; // rcx
  Gre::Base *v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  Gre::Base *v42; // r14
  __int64 v44; // rdx
  Gre::Base *v45; // rcx
  __int64 v46; // r8
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned int v52; // edi
  struct Gre::Base::SESSION_GLOBALS *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  DC *v56; // r12
  stretch *v57; // r13
  int v58; // eax
  int v59; // eax
  DC *v60; // r15
  int v61; // r9d
  __int64 v62; // rcx
  __int64 v63; // r11
  __int64 v64; // r10
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rdi
  int v68; // edi
  LONG v69; // r9d
  LONG v70; // r8d
  LONG v71; // edx
  _DWORD *v72; // rax
  bool v73; // cc
  int v74; // edi
  int v75; // eax
  __int64 v76; // rdi
  unsigned int *v77; // rax
  __int64 v78; // r15
  Gre::Base *v79; // rcx
  __int64 v80; // rcx
  int v81; // edx
  bool v82; // zf
  unsigned int v83; // r8d
  unsigned int v84; // eax
  __int64 v85; // rdx
  ULONG v86; // ecx
  struct Gre::Base::SESSION_GLOBALS *v87; // r12
  struct Gre::Base::SESSION_GLOBALS *XlateObject; // rax
  Gre::Base *v89; // rcx
  XLATEOBJ *v90; // rcx
  __int64 i; // rdx
  ULONG iUniq; // r9d
  __int64 v93; // rax
  __int64 v94; // r8
  XLATEOBJ *v95; // r8
  __int64 v96; // rdx
  ULONG v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rdx
  int v100; // eax
  Gre::Base *v101; // rdx
  Gre::Base *v102; // rcx
  __int64 v103; // rcx
  int v104; // edx
  unsigned int v105; // r8d
  unsigned int v106; // eax
  __int64 v107; // rdx
  HSEMAPHORE v108; // r13
  __int64 v109; // rax
  HSEMAPHORE v110; // rax
  Gre::Base *v111; // rcx
  int v112; // eax
  Gre::Base *v113; // rcx
  __int64 v114; // rcx
  int v115; // edx
  unsigned int v116; // r8d
  unsigned int v117; // eax
  HSEMAPHORE v118; // r9
  __int64 v119; // rdx
  _DWORD *v120; // r14
  int v121; // edi
  _DWORD *v122; // rax
  Gre::Base *v123; // rcx
  int v124; // eax
  Gre::Base *v125; // rcx
  __int64 v126; // rcx
  int v127; // edx
  unsigned int v128; // r9d
  unsigned int v129; // eax
  __int64 v130; // rdx
  Gre::Base *v131; // rdi
  HSEMAPHORE v132; // rsi
  HSEMAPHORE v133; // rax
  Gre::Base *v134; // rcx
  __int64 v135; // rdi
  __int64 jj; // rdx
  unsigned int v137; // r9d
  __int64 v138; // rax
  __int64 v139; // r8
  __int64 v140; // rdx
  int v141; // eax
  __int64 v142; // rdx
  __int64 v143; // rax
  Gre::Base *v144; // rdi
  int v145; // eax
  Gre::Base *v146; // rdx
  int v147; // eax
  Gre::Base *v148; // rdx
  int v149; // eax
  struct REGION *v150; // rax
  __int64 v151; // rdx
  __int64 v152; // r8
  __int64 v153; // rdi
  Gre::Base *v154; // r15
  DC *v155; // r8
  int v156; // ecx
  __int64 v157; // rax
  LONG v158; // r10d
  __int32 v159; // edx
  __int32 v160; // r9d
  struct _RECTL *v161; // rcx
  LONG v162; // r11d
  BOOL (__stdcall *v163)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rdi
  char *v164; // rdx
  bool v165; // zf
  bool v166; // zf
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  int v171; // r8d
  int v172; // edx
  char v173; // di
  XLATEOBJ *v174; // rcx
  __int64 k; // rdx
  ULONG v176; // r9d
  __int64 v177; // rax
  __int64 v178; // r8
  XLATEOBJ *v179; // r8
  __int64 v180; // r9
  __int64 v181; // rdx
  ULONG v182; // eax
  __int64 v183; // rdx
  FLONG v184; // eax
  __int64 v185; // rdx
  struct Gre::Base::SESSION_GLOBALS *v186; // rdi
  unsigned int n; // ecx
  __int64 v188; // r8
  __int64 v189; // rax
  __int64 v190; // rdx
  struct Gre::Base::SESSION_GLOBALS *v191; // r8
  __int64 v192; // rdx
  int v193; // eax
  __int64 v194; // rdx
  Gre::Base *v195; // rax
  Gre::Base *v196; // rdi
  Gre::Base *v197; // rdx
  int v198; // eax
  __int64 *v199; // rax
  __int64 v200; // rdx
  __int64 v201; // r8
  __int64 v202; // rdx
  __int64 v203; // r8
  __int64 v204; // rdx
  __int64 v205; // r8
  __int64 v206; // rdx
  __int64 v207; // r8
  __int64 v208; // rdx
  __int64 v209; // r8
  __int64 v210; // rdx
  __int64 v211; // r8
  __int64 v212; // rdx
  __int64 v213; // r8
  __int64 v214; // rdx
  __int64 v215; // r8
  __int64 v216; // rdx
  __int64 v217; // r8
  ULONG v218; // ecx
  __int64 v219; // rax
  __int64 v220; // r12
  Gre::Base *v221; // rcx
  int v222; // r10d
  __int64 v223; // rdx
  __int64 v224; // rax
  __int64 v225; // r9
  stretch *v226; // r10
  __int64 v227; // rax
  __int64 v228; // r11
  int v229; // r9d
  __int64 v230; // rax
  __int64 v231; // rax
  __int64 v232; // r10
  Gre::Base *v233; // rcx
  Gre::Base *v234; // rax
  int v235; // r9d
  Gre::Base *v236; // rdx
  __int64 v237; // rax
  __int64 v238; // r10
  Gre::Base *v239; // rax
  Gre::Base *v240; // rcx
  int v241; // r8d
  Gre::Base *v242; // rax
  FIX x; // r9d
  FIX v244; // edi
  FIX v245; // r11d
  int v246; // r8d
  FIX y; // r10d
  int v248; // r9d
  int v249; // edi
  __int64 v250; // rcx
  int v251; // eax
  int v253; // edx
  __int64 v254; // rax
  __int64 v255; // rax
  __int64 *v256; // r15
  int v257; // r9d
  _QWORD *v258; // rax
  LONG v259; // r10d
  LONG v260; // r9d
  int v261; // r8d
  int v262; // edx
  int *v263; // rcx
  LONG v264; // r10d
  XLATEOBJ *v265; // rdx
  XLATEOBJ *v266; // r11
  _DWORD *v267; // r8
  unsigned __int64 v268; // rdx
  POINTFIX *v269; // rdi
  __int64 v270; // r15
  SURFOBJ *v271; // rdx
  SURFOBJ *v272; // rcx
  __int64 v273; // r12
  int inited; // eax
  struct BLTINFO *v275; // r15
  XLATEOBJ *v276; // rcx
  LONG v277; // eax
  XLATEOBJ *v278; // r9
  int v279; // ecx
  LONG v280; // edi
  SURFOBJ *v281; // rcx
  ULONG v282; // ecx
  int v283; // eax
  int v284; // edx
  POINTL *pptlBrushOrg; // [rsp+30h] [rbp-D0h]
  POINTFIX *pptfx; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  POINTL *pptl; // [rsp+48h] [rbp-B8h]
  stretch *v289; // [rsp+70h] [rbp-90h]
  int v290; // [rsp+78h] [rbp-88h]
  int v291; // [rsp+78h] [rbp-88h]
  int v292; // [rsp+7Ch] [rbp-84h]
  int v293; // [rsp+7Ch] [rbp-84h]
  int v294; // [rsp+7Ch] [rbp-84h]
  int v295; // [rsp+7Ch] [rbp-84h]
  int DIB; // [rsp+7Ch] [rbp-84h]
  int v297; // [rsp+80h] [rbp-80h]
  int v298; // [rsp+80h] [rbp-80h]
  int v299; // [rsp+80h] [rbp-80h]
  int v300; // [rsp+80h] [rbp-80h]
  int v302; // [rsp+88h] [rbp-78h]
  int v303; // [rsp+88h] [rbp-78h]
  int j; // [rsp+88h] [rbp-78h]
  int v305; // [rsp+88h] [rbp-78h]
  int m; // [rsp+88h] [rbp-78h]
  int ii; // [rsp+88h] [rbp-78h]
  int v308; // [rsp+88h] [rbp-78h]
  struct Gre::Base::SESSION_GLOBALS *v309; // [rsp+88h] [rbp-78h]
  int v310[2]; // [rsp+88h] [rbp-78h]
  int v311[2]; // [rsp+90h] [rbp-70h] BYREF
  int v312[2]; // [rsp+98h] [rbp-68h] BYREF
  HSEMAPHORE v313; // [rsp+A0h] [rbp-60h] BYREF
  int v314[2]; // [rsp+A8h] [rbp-58h] BYREF
  XLATEOBJ *pxlo; // [rsp+B0h] [rbp-50h] BYREF
  char v316; // [rsp+B8h] [rbp-48h]
  Gre::Base *v317; // [rsp+C0h] [rbp-40h]
  __int64 v318; // [rsp+C8h] [rbp-38h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v319; // [rsp+D0h] [rbp-30h] BYREF
  int v320[2]; // [rsp+D8h] [rbp-28h] BYREF
  int v321[2]; // [rsp+E0h] [rbp-20h] BYREF
  Gre::Base *v322; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v323; // [rsp+F0h] [rbp-10h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v324; // [rsp+F8h] [rbp-8h] BYREF
  RECTL v325; // [rsp+100h] [rbp+0h] BYREF
  BOOL v326; // [rsp+110h] [rbp+10h]
  POINTL pptlSrc; // [rsp+118h] [rbp+18h] BYREF
  stretch *v328; // [rsp+120h] [rbp+20h] BYREF
  char v329; // [rsp+128h] [rbp+28h]
  int v330; // [rsp+12Ch] [rbp+2Ch]
  __int64 v331; // [rsp+130h] [rbp+30h]
  __int64 v332; // [rsp+138h] [rbp+38h] BYREF
  char v333; // [rsp+140h] [rbp+40h]
  int v334; // [rsp+144h] [rbp+44h]
  struct Gre::Base::SESSION_GLOBALS *v335; // [rsp+148h] [rbp+48h]
  __int64 v336; // [rsp+150h] [rbp+50h] BYREF
  int v337; // [rsp+158h] [rbp+58h] BYREF
  int v338; // [rsp+15Ch] [rbp+5Ch]
  XLATEOBJ *v339; // [rsp+160h] [rbp+60h]
  _DWORD *v340; // [rsp+168h] [rbp+68h]
  HSEMAPHORE v341; // [rsp+170h] [rbp+70h]
  HSEMAPHORE v342; // [rsp+178h] [rbp+78h] BYREF
  DC *v343; // [rsp+180h] [rbp+80h] BYREF
  int v344; // [rsp+188h] [rbp+88h]
  struct Gre::Base::SESSION_GLOBALS *v345; // [rsp+190h] [rbp+90h]
  __int64 v346; // [rsp+198h] [rbp+98h]
  _OWORD v347[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _OWORD v348[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v349; // [rsp+1E0h] [rbp+E0h]
  DC *v350; // [rsp+1E8h] [rbp+E8h] BYREF
  int v351; // [rsp+1F0h] [rbp+F0h]
  struct Gre::Base::SESSION_GLOBALS *v352; // [rsp+1F8h] [rbp+F8h]
  __int64 v353; // [rsp+200h] [rbp+100h]
  _OWORD v354[2]; // [rsp+208h] [rbp+108h] BYREF
  _OWORD v355[2]; // [rsp+228h] [rbp+128h] BYREF
  __int64 v356; // [rsp+248h] [rbp+148h]
  __int16 v357; // [rsp+250h] [rbp+150h]
  DC *v358; // [rsp+260h] [rbp+160h] BYREF
  int v359; // [rsp+268h] [rbp+168h]
  struct Gre::Base::SESSION_GLOBALS *v360; // [rsp+270h] [rbp+170h]
  stretch *v361; // [rsp+278h] [rbp+178h]
  _OWORD v362[2]; // [rsp+280h] [rbp+180h] BYREF
  _OWORD v363[2]; // [rsp+2A0h] [rbp+1A0h] BYREF
  char v364; // [rsp+2C0h] [rbp+1C0h]
  __int64 v365; // [rsp+2D0h] [rbp+1D0h] BYREF
  _DWORD v366[4]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v367; // [rsp+2E8h] [rbp+1E8h]
  __int64 v368; // [rsp+2F0h] [rbp+1F0h]
  _DWORD v369[4]; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 v370; // [rsp+308h] [rbp+208h]
  __int64 v371; // [rsp+310h] [rbp+210h]
  _BYTE v372[72]; // [rsp+320h] [rbp+220h] BYREF
  int v373; // [rsp+368h] [rbp+268h]
  RECTL prclDest; // [rsp+480h] [rbp+380h] BYREF
  __m128i v375; // [rsp+490h] [rbp+390h] BYREF
  struct _RECTL v376; // [rsp+4A0h] [rbp+3A0h] BYREF
  HSEMAPHORE v377; // [rsp+4B0h] [rbp+3B0h] BYREF
  int v378; // [rsp+4B8h] [rbp+3B8h]
  int v379; // [rsp+4BCh] [rbp+3BCh]
  _BYTE v380[4]; // [rsp+4C0h] [rbp+3C0h] BYREF
  int v381; // [rsp+4C4h] [rbp+3C4h]
  int v382; // [rsp+4C8h] [rbp+3C8h]
  int v383; // [rsp+4CCh] [rbp+3CCh]
  int v384; // [rsp+4D0h] [rbp+3D0h]
  __int64 v385; // [rsp+4F8h] [rbp+3F8h]
  __int64 v386; // [rsp+510h] [rbp+410h]
  int v387; // [rsp+518h] [rbp+418h]
  int v388; // [rsp+540h] [rbp+440h]
  __int64 v389; // [rsp+550h] [rbp+450h]
  struct _POINTFIX v390; // [rsp+560h] [rbp+460h] BYREF
  FIX v391; // [rsp+568h] [rbp+468h]
  int v392; // [rsp+56Ch] [rbp+46Ch]
  int v393; // [rsp+570h] [rbp+470h]
  FIX v394; // [rsp+574h] [rbp+474h]
  FIX v395; // [rsp+578h] [rbp+478h]
  int v396; // [rsp+57Ch] [rbp+47Ch]
  __m128i v397; // [rsp+580h] [rbp+480h] BYREF
  int v398; // [rsp+590h] [rbp+490h]
  int v399; // [rsp+594h] [rbp+494h]
  POINTFIX v400; // [rsp+5A0h] [rbp+4A0h] BYREF
  POINTFIX v401; // [rsp+5A8h] [rbp+4A8h]
  POINTFIX v402; // [rsp+5B0h] [rbp+4B0h]
  __int64 v403; // [rsp+5B8h] [rbp+4B8h] BYREF

  v12 = 0;
  v311[0] = a2;
  v290 = 1;
  v312[0] = a3;
  v314[0] = a5;
  v321[0] = a9;
  v320[0] = a10;
  if ( (_BYTE)a11 )
    goto LABEL_548;
  v16 = BYTE1(a11);
  if ( (a11 & 0xFE000000) != 0 )
    goto LABEL_548;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_548:
    EngSetLastError(0x57u);
    return 0LL;
  }
  LODWORD(v322) = BYTE1(a11);
  pptlSrc.x = BYTE1(a11) & 0x80;
  BYTE1(a11) &= ~0x80u;
  v17 = Gre::Base::Globals((Gre::Base *)(v16 & 0x80));
  v346 = 0LL;
  v345 = v17;
  v343 = 0LL;
  v344 = 0;
  memset(v347, 0, sizeof(v347));
  PushThreadGuardedObject(
    v347,
    &v343,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  v18 = HmgLock(v345, a1, 1LL, 0LL);
  v343 = (DC *)v18;
  if ( v18 )
  {
    if ( *(_DWORD *)(v18 + 2136) )
    {
      _InterlockedAdd16((volatile signed __int16 *)(v18 + 12), 0xFFFFu);
      v343 = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(0xFFFFFFFFLL) != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( v343 )
  {
    if ( (unsigned int)DCOBJ::SaveAttributes((DCOBJ *)&v343) )
    {
      if ( (*((_DWORD *)v343 + 130) & 4) != 0 )
        DC::vMarkTransformDirty(v343);
    }
    else
    {
      _InterlockedAdd16((volatile signed __int16 *)v343 + 6, 0xFFFFu);
      v343 = 0LL;
    }
  }
  memset(v348, 0, sizeof(v348));
  PushThreadGuardedObject(
    v348,
    &v343,
    UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v349 = 1;
  if ( v343 )
  {
    if ( *((_WORD *)v343 + 6) != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
    if ( *((_WORD *)v343 + 6) != 1 )
      DCOBJ::vUnlock((DCOBJ *)&v343);
  }
  v352 = v345;
  v353 = 0LL;
  v350 = 0LL;
  memset(v354, 0, sizeof(v354));
  v351 = 0;
  PushThreadGuardedObject(
    v354,
    &v350,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  memset(v355, 0, sizeof(v355));
  PushThreadGuardedObject(
    v355,
    &v350,
    UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v356 = a6;
  v357 = 1;
  if ( !v343 )
    goto LABEL_78;
  if ( a6 == *(_QWORD *)v343 )
  {
    v357 = 256;
    v350 = v343;
  }
  if ( (*((_DWORD *)v343 + 9) & 0x10000) != 0 )
  {
LABEL_78:
    EngSetLastError(6u);
LABEL_79:
    MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)&v343);
    return 0LL;
  }
  v324 = v345;
  if ( !OPTAPIDCOBJ::bValid((OPTAPIDCOBJ *)&v350) )
  {
    v52 = 0;
    EngSetLastError(0x57u);
    goto LABEL_106;
  }
  v360 = v352;
  v361 = 0LL;
  v358 = 0LL;
  memset(v362, 0, sizeof(v362));
  v359 = 0;
  PushThreadGuardedObject(
    v362,
    &v358,
    UnexpectedThreadTerminationHandler<HmgLockResult<META>>::OnUnexpectedThreadTerminationStatic);
  memset(v363, 0, sizeof(v363));
  PushThreadGuardedObject(
    v363,
    &v358,
    UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic);
  v358 = v350;
  v364 = 0;
  bSpDwmValidateSurface((struct XDCOBJ *)&v358, a7, a8, a9, a10);
  bSpDwmValidateSurface((struct XDCOBJ *)&v343, a2, a3, a4, v314[0]);
  DC::QuickInitXform(v343, &v336, 516LL);
  DC::QuickInitXform(v358, &v365, 516LL);
  if ( (*(_BYTE *)(v365 + 32) & 1) == 0
    || (v21 = v358, v22 = 0.0, (*(_DWORD *)(*((_QWORD *)v358 + 122) + 108LL) & 1) == 0)
    && (*(float *)v365 < 0.0 || *(float *)(v365 + 12) < 0.0) )
  {
    v52 = 0;
    EngSetLastError(0x57u);
    goto LABEL_105;
  }
  left = a7;
  top = a8;
  prclDest.top = a8;
  bottom = a10 + a8;
  prclDest.left = a7;
  right = a9 + a7;
  prclDest.bottom = a10 + a8;
  prclDest.right = a9 + a7;
  if ( (*(_BYTE *)(v365 + 32) & 0x43) == 0x43
    || (v27 = bCvtPts1(v365, (__int64)&prclDest, 2LL),
        bottom = prclDest.bottom,
        right = prclDest.right,
        top = prclDest.top,
        left = prclDest.left,
        v27) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v21 + 122) + 108LL) & 1) != 0 )
    {
      ++left;
      ++right;
      prclDest.left = left;
      prclDest.right = right;
    }
  }
  if ( left > right )
  {
    prclDest.left = right;
    prclDest.right = left;
  }
  if ( top > bottom )
  {
    prclDest.top = bottom;
    prclDest.bottom = top;
  }
  v28 = (*(_BYTE *)(v336 + 32) & 1) == 0
     || (*(_DWORD *)(*((_QWORD *)v343 + 122) + 108LL) & 1) == 0 && (v22 > *(float *)v336 || v22 > *(float *)(v336 + 12));
  v29 = a2 + a4;
  v326 = v28;
  if ( v28 )
  {
    v397.m128i_i32[2] = a2 + a4;
    v397.m128i_i64[0] = __PAIR64__(a3, a2);
    v397.m128i_i32[3] = a3;
    v398 = a2;
    v399 = a3 + v314[0];
    EXFORMOBJ::bXform((EXFORMOBJ *)&v336, (const struct _POINTL *)&v397, &v390, 3uLL);
    x = v390.x;
    v244 = v391;
    if ( (*(_BYTE *)(v336 + 32) & 1) != 0 )
    {
      if ( v390.x > v391 )
      {
        x = v390.x + 16;
        v244 = v391 + 16;
        v393 += 16;
        v390.x += 16;
        v391 += 16;
      }
      y = v390.y;
      v245 = v394;
      v246 = v392;
      if ( v390.y > v394 )
      {
        y = v390.y + 16;
        v246 = v392 + 16;
        v245 = v394 + 16;
        v390.y += 16;
        v394 += 16;
        v392 += 16;
      }
    }
    else
    {
      v245 = v394;
      v246 = v392;
      y = v390.y;
    }
    v395 = v244 + v393 - x;
    v396 = v245 + v246 - y;
    v248 = (v244 > x) ^ (v244 <= v395);
    v249 = (v246 <= v396) ^ (v246 > y);
    if ( *(&v390.x + 2 * v248) > *(&v390.x + 2 * (v248 ^ 3LL)) )
      v248 ^= 3u;
    if ( *(&v390.y + 2 * v249) > *(&v390.y + 2 * (v249 ^ 3LL)) )
      v249 ^= 3u;
    v250 = v249 ^ 3LL;
    v32 = (*(&v390.y + 2 * v249) + 15) >> 4;
    v31 = (*(&v390.x + 2 * v248) + 15) >> 4;
    v375.m128i_i64[0] = __PAIR64__(v32, v31);
    v29 = (*(&v390.x + 2 * (v248 ^ 3LL)) + 15) >> 4;
    v251 = *(&v390.y + 2 * v250) + 15;
    v375.m128i_i32[2] = v29;
    v35 = v251 >> 4;
    goto LABEL_52;
  }
  v30 = v343;
  v31 = a2;
  v375.m128i_i32[3] = a3 + v314[0];
  v32 = a3;
  v375.m128i_i64[0] = __PAIR64__(a3, a2);
  v375.m128i_i32[2] = a2 + a4;
  if ( (*(_BYTE *)(v336 + 32) & 0x43) == 0x43
    || (v33 = bCvtPts1(v336, (__int64)&v375, 2LL),
        v29 = v375.m128i_i32[2],
        v32 = v375.m128i_i32[1],
        v31 = v375.m128i_i32[0],
        v33) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v30 + 122) + 108LL) & 1) != 0 )
    {
      ++v31;
      ++v29;
      v375.m128i_i32[0] = v31;
      v375.m128i_i32[2] = v29;
    }
  }
  if ( v31 > v29 )
  {
    v34 = v31;
    v375.m128i_i32[0] = v29;
    v31 = v29;
    v375.m128i_i32[2] = v34;
    v29 = v34;
  }
  if ( v32 > v375.m128i_i32[3] )
  {
    v35 = v32;
    v375.m128i_i32[1] = v375.m128i_i32[3];
    v32 = v375.m128i_i32[3];
LABEL_52:
    v375.m128i_i32[3] = v35;
  }
  if ( v32 == v375.m128i_i32[3] || v31 == v29 )
  {
    v52 = 1;
    goto LABEL_105;
  }
  v36 = v343;
  v37 = *((_DWORD *)v343 + 9);
  if ( (v37 & 0xE0) != 0 )
  {
    if ( (v37 & 0x20) != 0 )
    {
      if ( v31 < *((_DWORD *)v343 + 266) )
      {
        *((_DWORD *)v343 + 266) = v31;
        v29 = v375.m128i_i32[2];
        v32 = v375.m128i_i32[1];
        v31 = v375.m128i_i32[0];
      }
      if ( v32 < *((_DWORD *)v36 + 267) )
      {
        *((_DWORD *)v36 + 267) = v32;
        v29 = v375.m128i_i32[2];
        v32 = v375.m128i_i32[1];
        v31 = v375.m128i_i32[0];
      }
      if ( v29 > *((_DWORD *)v36 + 268) )
      {
        *((_DWORD *)v36 + 268) = v29;
        v29 = v375.m128i_i32[2];
        v32 = v375.m128i_i32[1];
        v31 = v375.m128i_i32[0];
      }
      if ( v375.m128i_i32[3] > *((_DWORD *)v36 + 269) )
      {
        *((_DWORD *)v36 + 269) = v375.m128i_i32[3];
        v29 = v375.m128i_i32[2];
        v32 = v375.m128i_i32[1];
        v31 = v375.m128i_i32[0];
      }
    }
    v38 = v343;
    if ( (*((_DWORD *)v343 + 9) & 0x80u) != 0 )
    {
      if ( v31 < *((_DWORD *)v343 + 274) )
      {
        *((_DWORD *)v343 + 274) = v31;
        v29 = v375.m128i_i32[2];
        v32 = v375.m128i_i32[1];
      }
      if ( v32 < *((_DWORD *)v38 + 275) )
      {
        *((_DWORD *)v38 + 275) = v32;
        v29 = v375.m128i_i32[2];
      }
      if ( v29 > *((_DWORD *)v38 + 276) )
        *((_DWORD *)v38 + 276) = v29;
      if ( v375.m128i_i32[3] > *((_DWORD *)v38 + 277) )
        *((_DWORD *)v38 + 277) = v375.m128i_i32[3];
    }
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v372);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v372, (struct XDCOBJ *)&v343, (struct XDCOBJ *)&v358) )
  {
    XDCOBJ::bFullScreen((XDCOBJ *)&v358);
    v283 = XDCOBJ::bFullScreen((XDCOBJ *)&v343);
    v290 = v284 | v283;
    goto LABEL_104;
  }
  v40 = *((_QWORD *)v343 + 62);
  v331 = v40;
  if ( v40 )
  {
    v41 = *(_QWORD *)(v40 + 128);
    v42 = (Gre::Base *)*((_QWORD *)v343 + 11);
    v318 = v41;
    v317 = v42;
    if ( *((_QWORD *)v358 + 62) )
    {
      v53 = Gre::Base::Globals(v39);
      v56 = v358;
      v57 = (stretch *)*((_QWORD *)v358 + 62);
      if ( v57 )
      {
        if ( v361 )
          v57 = v361;
      }
      else
      {
        v57 = (stretch *)*((_QWORD *)v53 + 547);
      }
      v289 = v57;
      if ( v57 )
      {
        if ( (v373 & 0x400000) == 0
          || ((*(_DWORD *)(v40 + 116) & 8) != 0 || *(_QWORD *)(v40 + 224))
          && _bittest16((const signed __int16 *)(v40 + 102), 9u) )
        {
          goto LABEL_155;
        }
        v58 = *(_DWORD *)(v40 + 112);
        if ( (v58 & 0x800) != 0 )
        {
          v59 = UserSurfaceAccessCheck(*(_QWORD *)(v40 + 648));
        }
        else
        {
          if ( (v58 & 0x10000000) == 0 )
            goto LABEL_120;
          v59 = UserScreenAccessCheck(v55, v54);
        }
        if ( !v59 )
        {
LABEL_155:
          v86 = 6;
LABEL_156:
          EngSetLastError(v86);
          v290 = 0;
          goto LABEL_104;
        }
        v56 = v358;
LABEL_120:
        v316 = HIBYTE(a11) & 1;
        if ( (a11 & 0x1000000) != 0 && !(unsigned int)bIsSourceBGRA(v57) )
        {
          EngSetLastError(0x57u);
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v372);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v358);
          goto LABEL_79;
        }
        v60 = v343;
        v61 = _mm_cvtsi128_si32(v375);
        v397 = v375;
        v62 = *((_DWORD *)v343 + 10) & 1LL;
        v63 = *((int *)v343 + 2 * v62 + 254);
        if ( (unsigned __int64)(v63 + v61 + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_81;
        if ( (unsigned __int64)(v63 + v375.m128i_i32[2] + 0x80000000LL) > 0xFFFFFFFF )
          goto LABEL_81;
        v64 = *((int *)v343 + 2 * v62 + 255);
        if ( (unsigned __int64)(v64 + v375.m128i_i32[1] + 0x80000000LL) > 0xFFFFFFFF
          || (unsigned __int64)(v64 + v375.m128i_i32[3] + 0x80000000LL) > 0xFFFFFFFF
          || (v375.m128i_i32[0] = v63 + v61,
              v375.m128i_i32[2] += *((_DWORD *)v343 + 2 * v62 + 254),
              v375.m128i_i32[1] += *((_DWORD *)v343 + 2 * v62 + 255),
              v375.m128i_i32[3] += *((_DWORD *)v343 + 2 * v62 + 255),
              v65 = *((_DWORD *)v56 + 10) & 1LL,
              v66 = *((int *)v56 + 2 * v65 + 254),
              (unsigned __int64)(v66 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF)
          || (unsigned __int64)(v66 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
          || (v67 = *((int *)v56 + 2 * v65 + 255), (unsigned __int64)(v67 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
          || (unsigned __int64)(v67 + prclDest.bottom + 0x80000000LL) > 0xFFFFFFFF )
        {
LABEL_81:
          EngSetLastError(0x216u);
LABEL_82:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v372);
          APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v358);
          MAPIDCOBJ::~MAPIDCOBJ((MAPIDCOBJ *)&v343);
          return v12;
        }
        v68 = v66 + prclDest.left;
        prclDest.left += v66;
        v69 = prclDest.right + *((_DWORD *)v56 + 2 * v65 + 254);
        prclDest.right = v69;
        v70 = prclDest.top + *((_DWORD *)v56 + 2 * v65 + 255);
        prclDest.top = v70;
        v71 = *((_DWORD *)v56 + 2 * v65 + 255) + prclDest.bottom;
        prclDest.bottom = v71;
        v72 = (_DWORD *)*((_QWORD *)v57 + 6);
        *(_QWORD *)&v376.left = v72;
        if ( *((_WORD *)v57 + 50) == 1 && v72 && (v72[10] & 0x20000) != 0 )
        {
          v279 = v72[644];
          if ( v68 >= v279 )
          {
            v280 = v72[645];
            if ( v70 >= v280 && v69 <= *((_DWORD *)v57 + 14) + v279 )
            {
              v73 = v71 <= v280 + *((_DWORD *)v57 + 15);
LABEL_134:
              v74 = 0;
              if ( v73 )
                goto LABEL_136;
            }
          }
        }
        else if ( v68 >= 0 && v70 >= 0 && v69 <= *((_DWORD *)v57 + 14) )
        {
          v73 = v71 <= *((_DWORD *)v57 + 15);
          goto LABEL_134;
        }
        v74 = 1;
LABEL_136:
        if ( v57 == (stretch *)v331
          && (v325 = prclDest, ERECTL::operator*=(&v325, &v375), !ERECTL::bEmpty((ERECTL *)&v325))
          || v74 )
        {
          v86 = 87;
          goto LABEL_156;
        }
        v75 = 1;
        if ( !v316 && BYTE2(a11) == 0xFF && ((unsigned __int8)v322 & 1) == 0 )
        {
          v170 = *((_QWORD *)v60 + 122);
          v171 = v312[0];
          v172 = v311[0];
          v173 = *(_BYTE *)(v170 + 215);
          *(_BYTE *)(v170 + 215) = 3;
          v290 = GrepStretchBlt(
                   (struct XDCOBJ *)&v343,
                   v172,
                   v171,
                   a4,
                   v314[0],
                   (struct OPTAPIDCOBJ *)&v350,
                   a7,
                   a8,
                   v321[0],
                   v320[0],
                   0xCC0020u,
                   0xFFFFFFFF,
                   0);
          v75 = 0;
          *(_BYTE *)(*((_QWORD *)v343 + 122) + 215LL) = v173;
          v56 = v358;
        }
        if ( (v75 & v290) == 0 )
          goto LABEL_104;
        v76 = *((_QWORD *)v57 + 16);
        *(_QWORD *)v312 = *((_QWORD *)v56 + 11);
        v77 = (unsigned int *)*((_QWORD *)v56 + 122);
        v78 = *((_QWORD *)v324 + 485);
        v322 = 0LL;
        v291 = v77[45];
        v79 = (Gre::Base *)v77[44];
        v297 = v77[46];
        v314[0] = v77[44];
        if ( !v76 )
        {
          if ( v41 )
          {
            if ( (*(_DWORD *)(v41 + 24) & 0x800) == 0
              || (v255 = *((_QWORD *)v42 + 10)) != 0 && v255 != *((_QWORD *)v42 + 9) )
            {
              v289 = v57;
              goto LABEL_164;
            }
          }
          goto LABEL_296;
        }
        if ( v41 )
        {
          v80 = v76;
          if ( *(_QWORD *)(v76 + 120) != v76 )
            v80 = *(_QWORD *)(v76 + 120);
          v81 = *(_DWORD *)(v80 + 32);
          v79 = (Gre::Base *)v41;
          if ( *(_QWORD *)(v41 + 120) != v41 )
            v79 = *(Gre::Base **)(v41 + 120);
          v82 = v81 == *((_DWORD *)v79 + 8);
        }
        else
        {
          if ( (*(_DWORD *)(v76 + 24) & 0x800) == 0 )
          {
LABEL_148:
            if ( !v41 )
              goto LABEL_164;
            v311[0] = *(_DWORD *)(v76 + 56);
            v335 = Gre::Base::Globals(v79);
            pxlo = (XLATEOBJ *)(*(_QWORD *)v335 + 312LL);
            GreAcquireSemaphoreInternal((HSEMAPHORE)pxlo);
            GrepAcquireLockValidate<13>();
            v83 = v311[0];
            v84 = 0;
            v302 = 0;
            v289 = v57;
            while ( 1 )
            {
              if ( v84 >= 8 )
              {
                v87 = 0LL;
                v319 = 0LL;
                *(_QWORD *)v320 = 0LL;
                v303 = 0;
                goto LABEL_163;
              }
              v85 = v76;
              v289 = v57;
              if ( *(_QWORD *)(v76 + 120) != v76 )
                v85 = *(_QWORD *)(v76 + 120);
              if ( *((_DWORD *)v335 + 8 * v83 + 1104) != *(_DWORD *)(v85 + 32) )
                goto LABEL_154;
              v219 = *(_QWORD *)(v41 + 120);
              v289 = v57;
              if ( v219 == v41 )
                v219 = v41;
              v220 = 32LL * v83;
              if ( *(_DWORD *)((char *)v335 + v220 + 4420) != *(_DWORD *)(v219 + 32) )
                goto LABEL_154;
              v221 = v42;
              v289 = v57;
              if ( *((Gre::Base **)v42 + 15) != v42 )
                v221 = (Gre::Base *)*((_QWORD *)v42 + 15);
              if ( *(_DWORD *)((char *)v335 + v220 + 4428) != *((_DWORD *)v221 + 8) )
                goto LABEL_154;
              v87 = *(struct Gre::Base::SESSION_GLOBALS **)((char *)v335 + v220 + 4408);
              v319 = v87;
              *(_QWORD *)v320 = v87;
              v289 = v57;
              if ( (*((_DWORD *)v87 + 19) & 0x6000) != 0 )
                goto LABEL_154;
              v222 = *((_DWORD *)v87 + 19) & 0x100;
              if ( (*((_DWORD *)v87 + 1) & 4) != 0 )
                break;
              if ( !v222 )
                goto LABEL_376;
LABEL_374:
              v289 = v57;
              if ( v297 == *((_DWORD *)v87 + 7) )
              {
                v289 = v57;
                if ( v314[0] == *((_DWORD *)v87 + 8) )
                  goto LABEL_376;
              }
LABEL_154:
              v83 = ((_BYTE)v83 + 1) & 7;
              v84 = ++v302;
            }
            if ( v291 != *((_DWORD *)v87 + 6) )
              goto LABEL_373;
            v223 = *(_QWORD *)v312;
            if ( *(_QWORD *)(*(_QWORD *)v312 + 120LL) != *(_QWORD *)v312 )
              v223 = *(_QWORD *)(*(_QWORD *)v312 + 120LL);
            if ( *((_DWORD *)v335 + 8 * v83 + 1106) != *(_DWORD *)(v223 + 32) )
            {
LABEL_373:
              v289 = v57;
              if ( !v222 )
                goto LABEL_154;
              goto LABEL_374;
            }
LABEL_376:
            _InterlockedAdd((volatile signed __int32 *)v335 + 8 * v83 + 1100, 1u);
            *(_DWORD *)(v76 + 56) = v83;
            v303 = 1;
            v289 = v57;
LABEL_163:
            SEMOBJ<13>::vUnlock((HSEMAPHORE *)&pxlo);
            if ( v303 )
            {
LABEL_183:
              v292 = 1;
            }
            else
            {
LABEL_164:
              LODWORD(pptl) = 0;
              LODWORD(prcl) = v291;
              LODWORD(pptfx) = v314[0];
              LODWORD(pptlBrushOrg) = v297;
              XlateObject = (struct Gre::Base::SESSION_GLOBALS *)CreateXlateObject(
                                                                   0LL,
                                                                   0,
                                                                   v76,
                                                                   v41,
                                                                   *(_QWORD *)v312,
                                                                   v42,
                                                                   pptlBrushOrg,
                                                                   pptfx,
                                                                   prcl,
                                                                   pptl);
              v319 = XlateObject;
              v87 = XlateObject;
              *(_QWORD *)v320 = XlateObject;
              if ( XlateObject )
              {
                if ( v76 && v41 && (*((_DWORD *)XlateObject + 19) & 0x200) == 0 )
                {
                  pxlo = (XLATEOBJ *)Gre::Base::Globals(v89);
                  v323 = *(_QWORD *)&pxlo->iUniq + 312LL;
                  GreAcquireSemaphoreCommon<13,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
                  v90 = pxlo;
                  for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
                  {
                    iUniq = v90[194].iUniq;
                    v93 = 32LL * iUniq;
                    v94 = *(__int64 *)((char *)&v90[183].pulXlate + v93);
                    if ( !v94 )
                      goto LABEL_173;
                    if ( !*(_DWORD *)((char *)&v90[183].iSrcType + v93) )
                    {
                      FreeThreadBufferWithTag(*(ULONG **)((char *)&v90[183].pulXlate + v93), i, v94);
LABEL_173:
                      PopThreadGuardedObject((char *)v87 - 32);
                      v95 = pxlo;
                      v96 = v76;
                      *((_DWORD *)&pxlo[183].iSrcType + 8 * pxlo[194].iUniq) = 1;
                      *((_QWORD *)&v95[183].pulXlate + 4 * v95[194].iUniq) = v87;
                      if ( *(_QWORD *)(v76 + 120) != v76 )
                        v96 = *(_QWORD *)(v76 + 120);
                      v97 = *(_DWORD *)(v96 + 32);
                      v98 = v41;
                      *(&v95[184].iUniq + 8 * v95[194].iUniq) = v97;
                      if ( *(_QWORD *)(v41 + 120) != v41 )
                        v98 = *(_QWORD *)(v41 + 120);
                      *(&v95[184].flXlate + 8 * v95[194].iUniq) = *(_DWORD *)(v98 + 32);
                      v99 = *(_QWORD *)v312;
                      if ( *(_QWORD *)(*(_QWORD *)v312 + 120LL) != *(_QWORD *)v312 )
                        v99 = *(_QWORD *)(*(_QWORD *)v312 + 120LL);
                      v100 = *(_DWORD *)(v99 + 32);
                      v101 = v42;
                      *((_DWORD *)&v95[184].iSrcType + 8 * v95[194].iUniq) = v100;
                      if ( *((Gre::Base **)v42 + 15) != v42 )
                        v101 = (Gre::Base *)*((_QWORD *)v42 + 15);
                      *(&v95[184].cEntries + 8 * v95[194].iUniq) = *((_DWORD *)v101 + 8);
                      *((_DWORD *)v87 + 9) = v95[194].iUniq;
                      *(_DWORD *)(v76 + 56) = v95[194].iUniq;
                      v95[194].iUniq = ((unsigned __int8)v95[194].iUniq + 1) & 7;
                      break;
                    }
                    v90[194].iUniq = ((_BYTE)iUniq + 1) & 7;
                  }
                  SEMOBJ<13>::vUnlock((HSEMAPHORE *)&v323);
                }
                goto LABEL_183;
              }
              v292 = 0;
            }
LABEL_184:
            v335 = v87;
            v102 = (Gre::Base *)*((_QWORD *)v358 + 122);
            v314[0] = *((_DWORD *)v102 + 44);
            v298 = *((_DWORD *)v102 + 46);
            if ( v76 )
            {
              if ( v78 )
              {
                v103 = v76;
                if ( *(_QWORD *)(v76 + 120) != v76 )
                  v103 = *(_QWORD *)(v76 + 120);
                v104 = *(_DWORD *)(v103 + 32);
                v102 = (Gre::Base *)v78;
                if ( *(_QWORD *)(v78 + 120) != v78 )
                  v102 = *(Gre::Base **)(v78 + 120);
                if ( v104 != *((_DWORD *)v102 + 8) )
                {
                  v311[0] = *(_DWORD *)(v76 + 56);
                  pxlo = (XLATEOBJ *)Gre::Base::Globals(v102);
                  v313 = (HSEMAPHORE)(*(_QWORD *)&pxlo->iUniq + 312LL);
                  GreAcquireSemaphoreInternal(v313);
                  GrepAcquireLockValidate<13>();
                  v105 = v311[0];
                  v106 = 0;
                  for ( j = 0; ; ++j )
                  {
                    if ( v106 >= 8 )
                    {
                      v108 = 0LL;
                      v323 = 0LL;
                      *(_QWORD *)v321 = 0LL;
                      v305 = 0;
                      goto LABEL_198;
                    }
                    v107 = v76;
                    v289 = v57;
                    if ( *(_QWORD *)(v76 + 120) != v76 )
                      v107 = *(_QWORD *)(v76 + 120);
                    if ( *(&pxlo[184].iUniq + 8 * v105) == *(_DWORD *)(v107 + 32) )
                    {
                      v224 = *(_QWORD *)(v78 + 120);
                      v289 = v57;
                      if ( v224 == v78 )
                        v224 = v78;
                      v225 = 32LL * v105;
                      if ( *(FLONG *)((char *)&pxlo[184].flXlate + v225) == *(_DWORD *)(v224 + 32) )
                      {
                        v226 = v57;
                        v227 = *(_QWORD *)v312;
                        v289 = v57;
                        v228 = *(_QWORD *)(*(_QWORD *)v312 + 120LL);
                        if ( v228 != *(_QWORD *)v312 )
                          v227 = *(_QWORD *)(*(_QWORD *)v312 + 120LL);
                        if ( *(ULONG *)((char *)&pxlo[184].cEntries + v225) == *(_DWORD *)(v227 + 32) )
                          break;
                      }
                    }
LABEL_196:
                    v105 = ((_BYTE)v105 + 1) & 7;
                    v106 = j + 1;
                  }
                  v108 = *(HSEMAPHORE *)((char *)&pxlo[183].pulXlate + v225);
                  v323 = (__int64)v108;
                  *(_QWORD *)v321 = v108;
                  v289 = v226;
                  if ( ((_DWORD)v108[19] & 0x6000) == 0 )
                  {
                    v229 = (_DWORD)v108[19] & 0x100;
                    if ( ((_DWORD)v108[1] & 4) != 0 )
                    {
                      if ( v291 == *((_DWORD *)v108 + 6) )
                      {
                        v230 = *(_QWORD *)v312;
                        if ( v228 != *(_QWORD *)v312 )
                          v230 = v228;
                        if ( *((_DWORD *)&pxlo[184].iSrcType + 8 * v105) == *(_DWORD *)(v230 + 32) )
                        {
LABEL_392:
                          _InterlockedAdd((volatile signed __int32 *)&pxlo[183].iSrcType + 8 * v105, 1u);
                          *(_DWORD *)(v76 + 56) = v105;
                          v305 = 1;
                          v289 = v226;
LABEL_198:
                          SEMOBJ<13>::vUnlock(&v313);
                          if ( !v305 )
                          {
                            v109 = *(_QWORD *)v312;
                            goto LABEL_200;
                          }
LABEL_202:
                          v112 = 1;
                          goto LABEL_203;
                        }
                      }
                      v289 = v226;
                      if ( !v229 )
                        goto LABEL_457;
                    }
                    else if ( !v229 )
                    {
                      goto LABEL_392;
                    }
                    v289 = v226;
                    if ( v298 == *((_DWORD *)v108 + 7) )
                    {
                      v289 = v226;
                      if ( v314[0] == *((_DWORD *)v108 + 8) )
                        goto LABEL_392;
                    }
                  }
LABEL_457:
                  v57 = v226;
                  goto LABEL_196;
                }
LABEL_289:
                v108 = (HSEMAPHORE)((char *)Gre::Base::Globals(v102) + 4664);
                v323 = (__int64)v108;
                *(_QWORD *)v321 = v108;
                goto LABEL_202;
              }
              v165 = (*(_DWORD *)(v76 + 24) & 0x800) == 0;
            }
            else
            {
              if ( !v78 )
                goto LABEL_289;
              v165 = (*(_DWORD *)(v78 + 24) & 0x800) == 0;
            }
            v109 = *(_QWORD *)v312;
            if ( !v165 )
            {
              v102 = *(Gre::Base **)(*(_QWORD *)v312 + 80LL);
              if ( !v102 || v102 == *(Gre::Base **)(*(_QWORD *)v312 + 72LL) )
                goto LABEL_289;
            }
LABEL_200:
            LODWORD(pptl) = 0;
            LODWORD(prcl) = v291;
            LODWORD(pptfx) = v314[0];
            LODWORD(pptlBrushOrg) = v298;
            v110 = (HSEMAPHORE)CreateXlateObject(0LL, 0, v76, v78, v109, v109, pptlBrushOrg, pptfx, prcl, pptl);
            v323 = (__int64)v110;
            v108 = v110;
            *(_QWORD *)v321 = v110;
            if ( v110 )
            {
              if ( v76 && v78 && ((_DWORD)v110[19] & 0x200) == 0 )
              {
                pxlo = (XLATEOBJ *)Gre::Base::Globals(v111);
                v313 = (HSEMAPHORE)(*(_QWORD *)&pxlo->iUniq + 312LL);
                GreAcquireSemaphoreCommon<13,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
                v174 = pxlo;
                for ( k = 0LL; (unsigned int)k < 8; k = (unsigned int)(k + 1) )
                {
                  v176 = v174[194].iUniq;
                  v177 = 32LL * v176;
                  v178 = *(__int64 *)((char *)&v174[183].pulXlate + v177);
                  if ( !v178 )
                    goto LABEL_324;
                  if ( !*(_DWORD *)((char *)&v174[183].iSrcType + v177) )
                  {
                    FreeThreadBufferWithTag(*(ULONG **)((char *)&v174[183].pulXlate + v177), k, v178);
LABEL_324:
                    PopThreadGuardedObject(v108 - 8);
                    v179 = pxlo;
                    v180 = *(_QWORD *)v312;
                    v181 = v76;
                    *((_DWORD *)&pxlo[183].iSrcType + 8 * pxlo[194].iUniq) = 1;
                    *((_QWORD *)&v179[183].pulXlate + 4 * v179[194].iUniq) = v108;
                    if ( *(_QWORD *)(v76 + 120) != v76 )
                      v181 = *(_QWORD *)(v76 + 120);
                    v182 = *(_DWORD *)(v181 + 32);
                    v183 = v78;
                    *(&v179[184].iUniq + 8 * v179[194].iUniq) = v182;
                    if ( *(_QWORD *)(v78 + 120) != v78 )
                      v183 = *(_QWORD *)(v78 + 120);
                    v184 = *(_DWORD *)(v183 + 32);
                    v185 = v180;
                    *(&v179[184].flXlate + 8 * v179[194].iUniq) = v184;
                    if ( *(_QWORD *)(v180 + 120) != v180 )
                      v185 = *(_QWORD *)(v180 + 120);
                    *((_DWORD *)&v179[184].iSrcType + 8 * v179[194].iUniq) = *(_DWORD *)(v185 + 32);
                    if ( *(_QWORD *)(v180 + 120) != v180 )
                      v180 = *(_QWORD *)(v180 + 120);
                    *(&v179[184].cEntries + 8 * v179[194].iUniq) = *(_DWORD *)(v180 + 32);
                    *(_DWORD *)(v108 + 9) = v179[194].iUniq;
                    *(_DWORD *)(v76 + 56) = v179[194].iUniq;
                    v179[194].iUniq = ((unsigned __int8)v179[194].iUniq + 1) & 7;
                    break;
                  }
                  v174[194].iUniq = ((_BYTE)v176 + 1) & 7;
                }
                SEMOBJ<13>::vUnlock(&v313);
              }
              goto LABEL_202;
            }
            v112 = 0;
LABEL_203:
            v293 = v112 & v292;
            pxlo = (XLATEOBJ *)v108;
            v113 = (Gre::Base *)*((_QWORD *)v358 + 122);
            v314[0] = *((_DWORD *)v113 + 44);
            v299 = *((_DWORD *)v113 + 46);
            if ( v41 )
            {
              if ( v78 )
              {
                v114 = v41;
                if ( *(_QWORD *)(v41 + 120) != v41 )
                  v114 = *(_QWORD *)(v41 + 120);
                v115 = *(_DWORD *)(v114 + 32);
                v113 = (Gre::Base *)v78;
                if ( *(_QWORD *)(v78 + 120) != v78 )
                  v113 = *(Gre::Base **)(v78 + 120);
                if ( v115 != *((_DWORD *)v113 + 8) )
                {
                  v311[0] = *(_DWORD *)(v41 + 56);
                  v313 = (HSEMAPHORE)Gre::Base::Globals(v113);
                  v377 = (HSEMAPHORE)(*(_QWORD *)v313 + 312LL);
                  GreAcquireSemaphoreInternal(v377);
                  GrepAcquireLockValidate<13>();
                  v116 = v311[0];
                  v117 = 0;
                  v118 = v313;
                  for ( m = 0; ; ++m )
                  {
                    if ( v117 >= 8 )
                    {
                      v120 = 0LL;
                      *(_QWORD *)v312 = 0LL;
                      v121 = 0;
                      goto LABEL_217;
                    }
                    v119 = v41;
                    if ( *(_QWORD *)(v41 + 120) != v41 )
                      v119 = *(_QWORD *)(v41 + 120);
                    if ( *((_DWORD *)v118 + 8 * v116 + 1104) == *(_DWORD *)(v119 + 32) )
                    {
                      v231 = *(_QWORD *)(v78 + 120);
                      if ( v231 == v78 )
                        v231 = v78;
                      v232 = 32LL * v116;
                      if ( *(_DWORD *)((char *)v118 + v232 + 4420) == *(_DWORD *)(v231 + 32) )
                        break;
                    }
LABEL_215:
                    v116 = ((_BYTE)v116 + 1) & 7;
                    v117 = m + 1;
                  }
                  v233 = (Gre::Base *)*((_QWORD *)v42 + 15);
                  v234 = v42;
                  if ( v233 != v42 )
                    v234 = (Gre::Base *)*((_QWORD *)v42 + 15);
                  if ( *(_DWORD *)((char *)v313 + v232 + 4428) != *((_DWORD *)v234 + 8) )
                  {
LABEL_439:
                    v118 = v313;
                    goto LABEL_215;
                  }
                  v120 = *(_DWORD **)((char *)v313 + v232 + 4408);
                  *(_QWORD *)v312 = v120;
                  if ( (v120[19] & 0x6000) == 0 )
                  {
                    v235 = v120[19] & 0x100;
                    if ( (v120[1] & 4) != 0 )
                    {
                      if ( v291 == v120[6] )
                      {
                        v236 = v317;
                        if ( v233 != v317 )
                          v236 = v233;
                        if ( *((_DWORD *)v313 + 8 * v116 + 1106) == *((_DWORD *)v236 + 8) )
                        {
LABEL_408:
                          _InterlockedAdd((volatile signed __int32 *)v313 + 8 * v116 + 1100, 1u);
                          *(_DWORD *)(v41 + 56) = v116;
                          v121 = 1;
LABEL_217:
                          SEMOBJ<13>::vUnlock(&v377);
                          if ( !v121 )
                          {
                            v42 = v317;
                            goto LABEL_219;
                          }
LABEL_221:
                          v124 = 1;
                          goto LABEL_222;
                        }
                      }
                      if ( !v235 )
                        goto LABEL_438;
                    }
                    else if ( !v235 )
                    {
                      goto LABEL_408;
                    }
                    if ( v299 == v120[7] && v314[0] == v120[8] )
                      goto LABEL_408;
                  }
LABEL_438:
                  v42 = v317;
                  goto LABEL_439;
                }
LABEL_294:
                v120 = (_DWORD *)((char *)Gre::Base::Globals(v113) + 4664);
                *(_QWORD *)v312 = v120;
                goto LABEL_221;
              }
              v166 = (*(_DWORD *)(v41 + 24) & 0x800) == 0;
            }
            else
            {
              if ( !v78 )
                goto LABEL_294;
              v166 = (*(_DWORD *)(v78 + 24) & 0x800) == 0;
            }
            if ( !v166 )
            {
              v167 = *((_QWORD *)v42 + 10);
              if ( !v167 || v167 == *((_QWORD *)v42 + 9) )
                goto LABEL_294;
            }
LABEL_219:
            LODWORD(pptl) = 0;
            LODWORD(prcl) = v291;
            LODWORD(pptfx) = v314[0];
            LODWORD(pptlBrushOrg) = v299;
            v122 = CreateXlateObject(0LL, 0, v41, v78, v42, v42, pptlBrushOrg, pptfx, prcl, pptl);
            *(_QWORD *)v312 = v122;
            v120 = v122;
            if ( v122 )
            {
              if ( v41 && v78 && (v122[19] & 0x200) == 0 )
              {
                v186 = Gre::Base::Globals(v123);
                v313 = (HSEMAPHORE)(*(_QWORD *)v186 + 312LL);
                GreAcquireSemaphoreCommon<13,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
                for ( n = 0; n < 8; ++n )
                {
                  v188 = *((unsigned int *)v186 + 1164);
                  v189 = 32 * v188;
                  v190 = *((_QWORD *)v186 + 4 * v188 + 551);
                  if ( !v190 )
                    goto LABEL_341;
                  if ( !*(_DWORD *)((char *)v186 + v189 + 4400) )
                  {
                    FreeThreadBufferWithTag(*(_QWORD *)((char *)v186 + v189 + 4408), v190, v188);
LABEL_341:
                    PopThreadGuardedObject(v120 - 8);
                    v191 = v186;
                    v192 = v41;
                    *((_DWORD *)v186 + 8 * *((unsigned int *)v186 + 1164) + 1100) = 1;
                    *((_QWORD *)v186 + 4 * *((unsigned int *)v186 + 1164) + 551) = v120;
                    if ( *(_QWORD *)(v41 + 120) != v41 )
                      v192 = *(_QWORD *)(v41 + 120);
                    v193 = *(_DWORD *)(v192 + 32);
                    v194 = v78;
                    *((_DWORD *)v186 + 8 * *((unsigned int *)v186 + 1164) + 1104) = v193;
                    if ( *(_QWORD *)(v78 + 120) != v78 )
                      v194 = *(_QWORD *)(v78 + 120);
                    *((_DWORD *)v186 + 8 * *((unsigned int *)v186 + 1164) + 1105) = *(_DWORD *)(v194 + 32);
                    v195 = v317;
                    v196 = v317;
                    if ( *((Gre::Base **)v317 + 15) != v317 )
                      v196 = (Gre::Base *)*((_QWORD *)v317 + 15);
                    *((_DWORD *)v191 + 8 * *((unsigned int *)v191 + 1164) + 1106) = *((_DWORD *)v196 + 8);
                    v197 = v195;
                    if ( *((Gre::Base **)v195 + 15) != v195 )
                      v197 = (Gre::Base *)*((_QWORD *)v195 + 15);
                    *((_DWORD *)v191 + 8 * *((unsigned int *)v191 + 1164) + 1107) = *((_DWORD *)v197 + 8);
                    v120[9] = *((_DWORD *)v191 + 1164);
                    *(_DWORD *)(v41 + 56) = *((_DWORD *)v191 + 1164);
                    *((_DWORD *)v191 + 1164) = ((unsigned __int8)*((_DWORD *)v191 + 1164) + 1) & 7;
                    break;
                  }
                  *((_DWORD *)v186 + 1164) = ((_BYTE)v188 + 1) & 7;
                }
                SEMOBJ<13>::vUnlock(&v313);
              }
              goto LABEL_221;
            }
            v124 = 0;
LABEL_222:
            v294 = v124 & v293;
            v125 = (Gre::Base *)*((_QWORD *)v358 + 122);
            v314[0] = *((_DWORD *)v125 + 44);
            v300 = *((_DWORD *)v125 + 46);
            if ( v78 )
            {
              if ( v41 )
              {
                v126 = v78;
                if ( *(_QWORD *)(v78 + 120) != v78 )
                  v126 = *(_QWORD *)(v78 + 120);
                v127 = *(_DWORD *)(v126 + 32);
                v125 = (Gre::Base *)v41;
                if ( *(_QWORD *)(v41 + 120) != v41 )
                  v125 = *(Gre::Base **)(v41 + 120);
                if ( v127 != *((_DWORD *)v125 + 8) )
                {
                  v311[0] = *(_DWORD *)(v78 + 56);
                  v377 = (HSEMAPHORE)Gre::Base::Globals(v125);
                  v342 = (HSEMAPHORE)(*(_QWORD *)v377 + 312LL);
                  GreAcquireSemaphoreInternal(v342);
                  GrepAcquireLockValidate<13>();
                  v128 = v311[0];
                  v129 = 0;
                  for ( ii = 0; ; ++ii )
                  {
                    if ( v129 >= 8 )
                    {
                      v131 = v317;
                      v132 = 0LL;
                      v313 = 0LL;
                      *(_QWORD *)v311 = 0LL;
                      v308 = 0;
                      goto LABEL_236;
                    }
                    v130 = v78;
                    if ( *(_QWORD *)(v78 + 120) != v78 )
                      v130 = *(_QWORD *)(v78 + 120);
                    if ( *((_DWORD *)v377 + 8 * v128 + 1104) == *(_DWORD *)(v130 + 32) )
                    {
                      v237 = *(_QWORD *)(v41 + 120);
                      if ( v237 == v41 )
                        v237 = v41;
                      v238 = 32LL * v128;
                      if ( *(_DWORD *)((char *)v377 + v238 + 4420) == *(_DWORD *)(v237 + 32) )
                      {
                        v131 = v317;
                        v239 = v317;
                        v240 = (Gre::Base *)*((_QWORD *)v317 + 15);
                        if ( v240 != v317 )
                          v239 = (Gre::Base *)*((_QWORD *)v317 + 15);
                        if ( *(_DWORD *)((char *)v377 + v238 + 4428) == *((_DWORD *)v239 + 8) )
                          break;
                      }
                    }
LABEL_234:
                    v128 = ((_BYTE)v128 + 1) & 7;
                    v129 = ii + 1;
                  }
                  v132 = *(HSEMAPHORE *)((char *)v377 + v238 + 4408);
                  v313 = v132;
                  *(_QWORD *)v311 = v132;
                  if ( ((_DWORD)v132[19] & 0x6000) == 0 )
                  {
                    v241 = (_DWORD)v132[19] & 0x100;
                    if ( ((_DWORD)v132[1] & 4) != 0 )
                    {
                      if ( v291 == *((_DWORD *)v132 + 6) )
                      {
                        v242 = v317;
                        if ( v240 != v317 )
                          v242 = v240;
                        if ( *((_DWORD *)v377 + 8 * v128 + 1106) == *((_DWORD *)v242 + 8) )
                        {
LABEL_424:
                          _InterlockedAdd((volatile signed __int32 *)v377 + 8 * v128 + 1100, 1u);
                          *(_DWORD *)(v78 + 56) = v128;
                          v308 = 1;
LABEL_236:
                          SEMOBJ<13>::vUnlock(&v342);
                          if ( !v308 )
                          {
                            v41 = v318;
                            goto LABEL_238;
                          }
LABEL_257:
                          v149 = 1;
                          goto LABEL_258;
                        }
                      }
                      if ( !v241 )
                        goto LABEL_458;
                    }
                    else if ( !v241 )
                    {
                      goto LABEL_424;
                    }
                    if ( v300 == *((_DWORD *)v132 + 7) && v314[0] == *((_DWORD *)v132 + 8) )
                      goto LABEL_424;
                  }
LABEL_458:
                  v41 = v318;
                  goto LABEL_234;
                }
LABEL_309:
                v132 = (HSEMAPHORE)((char *)Gre::Base::Globals(v125) + 4664);
                v313 = v132;
                *(_QWORD *)v311 = v132;
                goto LABEL_257;
              }
              v131 = v317;
              if ( (*(_DWORD *)(v78 + 24) & 0x800) != 0 )
              {
                v169 = *((_QWORD *)v317 + 10);
                if ( !v169 || v169 == *((_QWORD *)v317 + 9) )
                  goto LABEL_309;
              }
            }
            else
            {
              if ( !v41 )
                goto LABEL_309;
              v131 = v317;
              if ( (*(_DWORD *)(v41 + 24) & 0x800) != 0 )
              {
                v254 = *((_QWORD *)v317 + 10);
                if ( !v254 || v254 == *((_QWORD *)v317 + 9) )
                  goto LABEL_309;
              }
            }
LABEL_238:
            LODWORD(pptl) = 0;
            LODWORD(prcl) = v291;
            LODWORD(pptfx) = v314[0];
            LODWORD(pptlBrushOrg) = v300;
            v133 = (HSEMAPHORE)CreateXlateObject(0LL, 0, v78, v41, v131, v131, pptlBrushOrg, pptfx, prcl, pptl);
            v313 = v133;
            v132 = v133;
            *(_QWORD *)v311 = v133;
            if ( v133 )
            {
              if ( v78 )
              {
                v135 = v318;
                if ( v318 )
                {
                  if ( ((_DWORD)v133[19] & 0x200) == 0 )
                  {
                    v309 = Gre::Base::Globals(v134);
                    *(_QWORD *)v314 = *(_QWORD *)v309 + 312LL;
                    GreAcquireSemaphoreCommon<13,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
                    for ( jj = 0LL; (unsigned int)jj < 8; jj = (unsigned int)(jj + 1) )
                    {
                      v137 = *((_DWORD *)v309 + 1164);
                      v138 = 32LL * v137;
                      v139 = *(_QWORD *)((char *)v309 + v138 + 4408);
                      if ( !v139 )
                        goto LABEL_247;
                      if ( !*(_DWORD *)((char *)v309 + v138 + 4400) )
                      {
                        FreeThreadBufferWithTag(*(_QWORD *)((char *)v309 + v138 + 4408), jj, v139);
LABEL_247:
                        PopThreadGuardedObject(v132 - 8);
                        v140 = v78;
                        *((_DWORD *)v309 + 8 * *((unsigned int *)v309 + 1164) + 1100) = 1;
                        *((_QWORD *)v309 + 4 * *((unsigned int *)v309 + 1164) + 551) = v132;
                        if ( *(_QWORD *)(v78 + 120) != v78 )
                          v140 = *(_QWORD *)(v78 + 120);
                        v141 = *(_DWORD *)(v140 + 32);
                        v142 = v135;
                        *((_DWORD *)v309 + 8 * *((unsigned int *)v309 + 1164) + 1104) = v141;
                        v143 = *(_QWORD *)(v135 + 120);
                        v82 = v143 == v135;
                        v144 = v317;
                        if ( !v82 )
                          v142 = v143;
                        v145 = *(_DWORD *)(v142 + 32);
                        v146 = v317;
                        *((_DWORD *)v309 + 8 * *((unsigned int *)v309 + 1164) + 1105) = v145;
                        if ( *((Gre::Base **)v144 + 15) != v144 )
                          v146 = (Gre::Base *)*((_QWORD *)v144 + 15);
                        v147 = *((_DWORD *)v146 + 8);
                        v148 = v144;
                        *((_DWORD *)v309 + 8 * *((unsigned int *)v309 + 1164) + 1106) = v147;
                        if ( *((Gre::Base **)v144 + 15) != v144 )
                          v148 = (Gre::Base *)*((_QWORD *)v144 + 15);
                        *((_DWORD *)v309 + 8 * *((unsigned int *)v309 + 1164) + 1107) = *((_DWORD *)v148 + 8);
                        v132[9] = *(_DWORD *)(HSEMAPHORE)((int)v309 + 4656);
                        *(_DWORD *)(v78 + 56) = *((_DWORD *)v309 + 1164);
                        *((_DWORD *)v309 + 1164) = ((unsigned __int8)*((_DWORD *)v309 + 1164) + 1) & 7;
                        break;
                      }
                      *((_DWORD *)v309 + 1164) = ((_BYTE)v137 + 1) & 7;
                    }
                    SEMOBJ<13>::vUnlock((HSEMAPHORE *)v314);
                  }
                }
              }
              goto LABEL_257;
            }
            v149 = 0;
LABEL_258:
            v295 = v149 & v294;
            v150 = XDCOBJ::prgnEffRao(&v343);
            v385 = 0LL;
            v386 = 0LL;
            v387 = 0;
            v388 = 1;
            v389 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)v380, v150, (const struct ERECTL *)&v375, 0);
            if ( v381 == v383 || v382 == v384 )
            {
              EXLATEOBJ::vAltUnlock((Gre::Base **)v311, v151, v152);
              EXLATEOBJ::vAltUnlock((Gre::Base **)v312, v210, v211);
              EXLATEOBJ::vAltUnlock((Gre::Base **)v321, v212, v213);
              EXLATEOBJ::vAltUnlock(&v322, v214, v215);
              EXLATEOBJ::vAltUnlock((Gre::Base **)v320, v216, v217);
              v12 = 1;
              goto LABEL_82;
            }
            v328 = 0LL;
            v329 = 0;
            v330 = 0;
            v153 = *(_QWORD *)(v331 + 48);
            *(_QWORD *)v310 = v153;
            if ( pptlSrc.x )
            {
              v198 = *(_DWORD *)(*((_QWORD *)v343 + 122) + 108LL);
              if ( (v198 & 1) != 0 && (v198 & 9) != 9 )
              {
                v366[1] = *((_DWORD *)v289 + 14);
                v366[2] = *((_DWORD *)v289 + 15);
                v366[0] = *((_DWORD *)v289 + 24);
                v199 = (__int64 *)*((_QWORD *)v289 + 16);
                v366[3] = 0;
                v368 = 0LL;
                v367 = *v199;
                SURFMEM::bCreateDIB((SURFMEM *)&v328, (struct _DEVBITMAPINFO *)v366, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
                if ( !v328 )
                  goto LABEL_354;
                v82 = (*((_DWORD *)v289 + 28) & 0x400) == 0;
                v378 = *((_DWORD *)v289 + 14);
                v379 = *((_DWORD *)v289 + 15);
                v377 = 0LL;
                *(_QWORD *)v314 = 0LL;
                if ( !(v82
                     ? ((__int64 (__fastcall *)(char *, char *, _QWORD, _QWORD, HSEMAPHORE *, int *))EngCopyBits)(
                         (char *)v328 + 24,
                         (char *)v289 + 24,
                         0LL,
                         0LL,
                         &v377,
                         v314)
                     : (*(unsigned int (__fastcall **)(char *, __int64, _QWORD, _QWORD, HSEMAPHORE *, int *))(*(_QWORD *)&v376.left + 2832LL))(
                         (char *)v328 + 24,
                         (__int64)v289 + 24,
                         0LL,
                         0LL,
                         &v377,
                         v314)) )
                  goto LABEL_354;
                v253 = *((_DWORD *)v328 + 24);
                if ( (unsigned int)(v253 - 1) > 5 )
                  goto LABEL_354;
                ((void (*)(void))(&stretch::apfnMirror)[v253])();
                v289 = v328;
              }
            }
            *(_QWORD *)&v325.left = 0LL;
            LOBYTE(v325.right) = 0;
            v325.bottom = 0;
            v332 = 0LL;
            v333 = 0;
            v334 = 0;
            if ( !v326 )
              goto LABEL_262;
            v369[1] = v375.m128i_i32[2] - v375.m128i_i32[0];
            v369[2] = v375.m128i_i32[3] - v375.m128i_i32[1];
            v369[3] = 0;
            v371 = 0LL;
            v256 = (__int64 *)*((_QWORD *)v324 + 485);
            v369[0] = 6;
            v370 = *v256;
            *(_QWORD *)&v376.left = v256;
            v257 = SURFMEM::bCreateDIB((SURFMEM *)&v325, (struct _DEVBITMAPINFO *)v369, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) & v295;
            if ( v257 )
            {
              if ( (a11 & 0x1000000) == 0 )
              {
                v338 = prclDest.right - prclDest.left;
                v339 = (XLATEOBJ *)(unsigned int)(prclDest.bottom - prclDest.top);
                v341 = 0LL;
                v258 = (_QWORD *)*((_QWORD *)v324 + 485);
                v337 = 6;
                v340 = (_DWORD *)*v258;
                DIB = SURFMEM::bCreateDIB(
                        (SURFMEM *)&v332,
                        (struct _DEVBITMAPINFO *)&v337,
                        0LL,
                        0LL,
                        0,
                        0LL,
                        0LL,
                        0,
                        1,
                        0);
                v257 = DIB;
                if ( DIB )
                {
                  v259 = prclDest.left;
                  v260 = prclDest.top;
                  pptlSrc.x = prclDest.left;
                  pptlSrc.y = prclDest.top;
                  if ( (unsigned __int64)(prclDest.right - (__int64)prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                    || (unsigned __int64)(prclDest.bottom - (__int64)prclDest.top + 0x80000000LL) > 0xFFFFFFFF )
                  {
                    v282 = 87;
LABEL_540:
                    EngSetLastError(v282);
                    SURFMEM::~SURFMEM((SURFMEM *)&v332);
                    SURFMEM::~SURFMEM((SURFMEM *)&v325);
LABEL_354:
                    SURFMEM::~SURFMEM((SURFMEM *)&v328);
                    EXLATEOBJ::vAltUnlock((Gre::Base **)v311, v200, v201);
                    EXLATEOBJ::vAltUnlock((Gre::Base **)v312, v202, v203);
                    EXLATEOBJ::vAltUnlock((Gre::Base **)v321, v204, v205);
                    EXLATEOBJ::vAltUnlock(&v322, v206, v207);
                    EXLATEOBJ::vAltUnlock((Gre::Base **)v320, v208, v209);
                    goto LABEL_82;
                  }
                  v261 = prclDest.right - prclDest.left;
                  *(_QWORD *)&prclDest.left = 0LL;
                  v262 = prclDest.bottom - v260;
                  prclDest.right = v261;
                  prclDest.bottom -= v260;
                  if ( v261 > 0 && v262 > 0 && v259 <= *((_DWORD *)v289 + 14) && v260 <= *((_DWORD *)v289 + 15) )
                  {
                    v281 = (SURFOBJ *)(v332 + 24);
                    if ( !v332 )
                      v281 = 0LL;
                    EngCopyBits(v281, (SURFOBJ *)((char *)v289 + 24), 0LL, (XLATEOBJ *)v108, &prclDest, &pptlSrc);
                    v261 = prclDest.right;
                  }
                  v263 = (int *)v332;
                  v264 = 0;
                  v289 = (stretch *)v332;
                  v265 = *(XLATEOBJ **)(v332 + 80);
                  v266 = (XLATEOBJ *)((char *)v265 + *(_DWORD *)(v332 + 60) * *(_DWORD *)(v332 + 88));
                  if ( v265 != v266 )
                  {
                    do
                    {
                      if ( v264 < prclDest.bottom && v264 >= prclDest.top )
                      {
                        v278 = v265;
                        pxlo = (XLATEOBJ *)((char *)v265 + 4 * v263[14]);
                        v277 = 0;
                        if ( v265 != pxlo )
                        {
                          v276 = pxlo;
                          do
                          {
                            if ( v277 >= prclDest.left && v277 < v261 )
                            {
                              v278->iUniq |= 0xFF000000;
                              v261 = prclDest.right;
                            }
                            ++v277;
                            v278 = (XLATEOBJ *)((char *)v278 + 4);
                          }
                          while ( v278 != v276 );
                          v263 = (int *)v332;
                        }
                      }
                      ++v264;
                      v265 = (XLATEOBJ *)((char *)v265 + v263[22]);
                    }
                    while ( v265 != v266 );
                    v289 = (stretch *)v263;
                  }
                  v257 = DIB;
                  HIBYTE(a11) |= 1u;
                  pxlo = (XLATEOBJ *)((char *)v324 + 4664);
                }
              }
              v267 = *(_DWORD **)(*(_QWORD *)&v325.left + 72LL);
              v268 = (unsigned __int64)*(unsigned int *)(*(_QWORD *)&v325.left + 64LL) >> 2;
              if ( v268 )
              {
                if ( ((unsigned __int8)v267 & 4) == 0 )
                  goto LABEL_492;
                *v267 = 0;
                if ( --v268 )
                {
                  ++v267;
LABEL_492:
                  memset(v267, 0, 8 * (v268 >> 1));
                  if ( (v268 & 1) != 0 )
                    v267[v268 - 1] = 0;
                }
              }
            }
            if ( v257 )
            {
              v269 = &v400;
              v270 = 3LL;
              do
              {
                EPOINTFIX::EPOINTFIX((EPOINTFIX *)v269++);
                --v270;
              }
              while ( v270 );
              v311[0] = v390.x - 16 * v397.m128i_i32[0];
              v311[1] = v390.y - 16 * v397.m128i_i32[1];
              v400 = *(POINTFIX *)v311;
              v311[0] = v391 - 16 * v397.m128i_i32[0];
              v311[1] = v392 - 16 * v397.m128i_i32[1];
              v401 = *(POINTFIX *)v311;
              v311[0] = v393 - 16 * v397.m128i_i32[0];
              v311[1] = v394 - 16 * v397.m128i_i32[1];
              v402 = *(POINTFIX *)v311;
              v271 = (SURFOBJ *)((char *)v289 + 24);
              if ( !v289 )
                v271 = 0LL;
              v272 = (SURFOBJ *)(*(_QWORD *)&v325.left + 24LL);
              if ( !*(_QWORD *)&v325.left )
                v272 = 0LL;
              v273 = 3LL;
              EngPlgBlt(v272, v271, 0LL, 0LL, pxlo, 0LL, 0LL, &v400, &prclDest, 0LL, 3u);
              inited = EXLATEOBJ::bInitXlateObj(
                         (Gre::Base *)&v322,
                         0LL,
                         0,
                         *(__int64 *)&v376.left,
                         v318,
                         0LL,
                         v317,
                         *(_DWORD *)(*((_QWORD *)v358 + 122) + 184LL),
                         *(_DWORD *)(*((_QWORD *)v358 + 122) + 176LL),
                         v291,
                         0);
              v132 = v313;
              v153 = *(_QWORD *)v310;
              v295 = inited;
              v335 = v322;
              pxlo = (XLATEOBJ *)((char *)v324 + 4664);
              v275 = (struct BLTINFO *)&v403;
              v289 = *(stretch **)&v325.left;
              prclDest.right = v375.m128i_i32[2] - v375.m128i_i32[0];
              prclDest.bottom = v375.m128i_i32[3] - v375.m128i_i32[1];
              *(_QWORD *)&prclDest.left = 0LL;
              do
              {
                v275 = (struct BLTINFO *)((char *)v275 - 8);
                vSrcCopyDummy(v275);
                --v273;
              }
              while ( v273 );
              v108 = (HSEMAPHORE)v323;
              v87 = v319;
LABEL_262:
              v154 = v322;
              if ( !v295 )
              {
                v218 = 6;
LABEL_360:
                EngSetLastError(v218);
                v290 = 0;
LABEL_84:
                SURFMEM::~SURFMEM((SURFMEM *)&v332);
                SURFMEM::~SURFMEM((SURFMEM *)&v325);
                SURFMEM::~SURFMEM((SURFMEM *)&v328);
                if ( v132 )
                {
                  v47 = *((_DWORD *)v132 + 9);
                  if ( v47 >= 0 )
                  {
                    v45 = Gre::Base::Globals(v45);
                    _InterlockedAdd((volatile signed __int32 *)v45 + 8 * *((int *)v132 + 9) + 1100, 0xFFFFFFFF);
                  }
                  else if ( v47 == -1 )
                  {
                    FreeThreadBufferWithTag(v132, v44, v46);
                  }
                }
                if ( v120 )
                {
                  v48 = v120[9];
                  if ( v48 >= 0 )
                  {
                    v45 = Gre::Base::Globals(v45);
                    _InterlockedAdd((volatile signed __int32 *)v45 + 8 * v120[9] + 1100, 0xFFFFFFFF);
                  }
                  else if ( v48 == -1 )
                  {
                    FreeThreadBufferWithTag(v120, v44, v46);
                  }
                }
                if ( v108 )
                {
                  v49 = *((_DWORD *)v108 + 9);
                  if ( v49 >= 0 )
                  {
                    v45 = Gre::Base::Globals(v45);
                    _InterlockedAdd((volatile signed __int32 *)v45 + 8 * *((int *)v108 + 9) + 1100, 0xFFFFFFFF);
                  }
                  else if ( v49 == -1 )
                  {
                    FreeThreadBufferWithTag(v108, v44, v46);
                  }
                }
                if ( v154 )
                {
                  v50 = *((_DWORD *)v154 + 9);
                  if ( v50 >= 0 )
                  {
                    v45 = Gre::Base::Globals(v45);
                    _InterlockedAdd((volatile signed __int32 *)v45 + 8 * *((int *)v154 + 9) + 1100, 0xFFFFFFFF);
                  }
                  else if ( v50 == -1 )
                  {
                    FreeThreadBufferWithTag(v154, v44, v46);
                  }
                }
                if ( v87 )
                {
                  v51 = *((_DWORD *)v87 + 9);
                  if ( v51 >= 0 )
                  {
                    _InterlockedAdd(
                      (volatile signed __int32 *)Gre::Base::Globals(v45) + 8 * *((int *)v87 + 9) + 1100,
                      0xFFFFFFFF);
                  }
                  else if ( v51 == -1 )
                  {
                    FreeThreadBufferWithTag(v87, v44, v46);
                  }
                }
                goto LABEL_104;
              }
              ++*(_DWORD *)(v331 + 92);
              v155 = v343;
              if ( *((_QWORD *)v343 + 6) != *((_QWORD *)v358 + 6) )
              {
                if ( !(unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)&v343)
                  || (v155 = v343, *(_QWORD *)(*((_QWORD *)v343 + 6) + 3512LL) != *((_QWORD *)v358 + 6)) )
                {
                  v218 = 87;
                  goto LABEL_360;
                }
              }
              v156 = *((_DWORD *)v155 + 9);
              if ( (v156 & 0xE0) == 0 )
                goto LABEL_278;
              v376 = (struct _RECTL)v375;
              v157 = *((_DWORD *)v155 + 10) & 1LL;
              v375.m128i_i32[0] = _mm_cvtsi128_si32(v375);
              v158 = v375.m128i_i32[0] - *((_DWORD *)v155 + 2 * v157 + 254);
              v376.left = v158;
              v159 = v375.m128i_i32[2] - *((_DWORD *)v155 + 2 * v157 + 254);
              v376.right = v159;
              v160 = v375.m128i_i32[1] - *((_DWORD *)v155 + 2 * v157 + 255);
              v376.top = v160;
              v376.bottom -= *((_DWORD *)v155 + 2 * v157 + 255);
              if ( (v156 & 0x40) == 0 )
              {
LABEL_278:
                v338 = 0;
                v337 = a11;
                v339 = pxlo;
                v340 = v120;
                v341 = v132;
                if ( v375.m128i_i32[2] - v375.m128i_i32[0] == prclDest.right - prclDest.left
                  && v375.m128i_i32[3] - v375.m128i_i32[1] == prclDest.bottom - prclDest.top )
                {
                  BYTE1(v337) = BYTE1(a11) & 0xFE;
                }
                if ( (*(_DWORD *)(v331 + 112) & 0x10000) != 0 )
                  v163 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v153 + 3248);
                else
                  v163 = EngAlphaBlend;
                v164 = (char *)v289 + 24;
                if ( !v289 )
                  v164 = 0LL;
                v290 = ((__int64 (__fastcall *)(__int64, char *, _BYTE *, struct Gre::Base::SESSION_GLOBALS *, __m128i *, RECTL *, int *))v163)(
                         v331 + 24,
                         v164,
                         v380,
                         v335,
                         &v375,
                         &prclDest,
                         &v337);
                goto LABEL_84;
              }
              v161 = (struct _RECTL *)((char *)v155 + 1080);
              v162 = *((_DWORD *)v155 + 270);
              if ( v162 == *((_DWORD *)v155 + 272) || *((_DWORD *)v155 + 271) == *((_DWORD *)v155 + 273) )
              {
                *v161 = v376;
              }
              else
              {
                if ( v158 < v162 )
                {
                  v161->left = v158;
                  v155 = v343;
                  v159 = v376.right;
                  v160 = v376.top;
                }
                if ( v160 < v161->top )
                {
                  v161->top = v160;
                  v155 = v343;
                  v159 = v376.right;
                }
                if ( v159 > v161->right )
                {
                  v161->right = v159;
                  v155 = v343;
                }
                if ( v376.bottom <= v161->bottom )
                  goto LABEL_277;
                v161->bottom = v376.bottom;
              }
              v155 = v343;
LABEL_277:
              v324 = (struct Gre::Base::SESSION_GLOBALS *)*((_QWORD *)v155 + 148);
              if ( v324 )
              {
                v318 = 0LL;
                RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v318, 0x70u);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v318);
                v319 = 0LL;
                RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v319, 0x70u);
                RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v319);
                if ( v318 )
                {
                  if ( v319 )
                  {
                    RGNOBJ::vSet((RGNOBJ *)&v319, &v376);
                    if ( RGNOBJ::bMerge((RGNOBJ *)&v318, (struct RGNOBJ *)&v324, (struct RGNOBJ *)&v319, 0xEu) )
                    {
                      RGNOBJ::vSwap((RGNOBJ *)&v324, (struct RGNOBJ *)&v318);
                      *((_QWORD *)v343 + 148) = v324;
                    }
                  }
                }
                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v319);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v319);
                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v318);
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v318);
              }
              goto LABEL_278;
            }
            v282 = 8;
            goto LABEL_540;
          }
          v168 = *((_QWORD *)v42 + 10);
          if ( !v168 )
          {
LABEL_296:
            v292 = 1;
            v289 = v57;
            v87 = (struct Gre::Base::SESSION_GLOBALS *)((char *)Gre::Base::Globals(v79) + 4664);
            v319 = v87;
            *(_QWORD *)v320 = v87;
            goto LABEL_184;
          }
          v82 = v168 == *((_QWORD *)v42 + 9);
        }
        if ( !v82 )
          goto LABEL_148;
        goto LABEL_296;
      }
    }
  }
  v290 = 1;
LABEL_104:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v372);
  v52 = v290;
LABEL_105:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v358);
LABEL_106:
  if ( !(_BYTE)v357 )
    v350 = 0LL;
  PopThreadGuardedObject(v355);
  DCOBJ::~DCOBJ((DCOBJ *)&v350);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v343);
  return v52;
}
