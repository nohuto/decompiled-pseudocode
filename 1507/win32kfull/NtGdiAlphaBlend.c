/*
 * XREFs of NtGdiAlphaBlend @ 0x1C0023B30
 * Callers:
 *     BltIcon @ 0x1C0051658 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E3A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 * Callees:
 *     EngCopyBits @ 0x1C00131B0 (EngCopyBits.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0025BE0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0026620 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0026984 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C0105E88 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0105EDC (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C026530C (-bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02653C4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        __int64 a6,
        LONG a7,
        LONG a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v14; // esi
  char v15; // ah
  int v16; // r14d
  __int64 v17; // rbx
  int v18; // edi
  __int64 v19; // rcx
  int v20; // r8d
  float v21; // xmm4_4
  LONG left; // edx
  LONG top; // r10d
  LONG bottom; // r9d
  LONG right; // eax
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  LONG v29; // ecx
  FIX v30; // r9d
  FIX x; // eax
  FIX y; // r11d
  FIX v33; // ecx
  int v34; // r10d
  __int64 v35; // r9
  int v36; // edx
  __int64 v37; // rbx
  __int64 v38; // r15
  __int64 v39; // r12
  __int64 v40; // r13
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  int v46; // ecx
  _DWORD *v47; // rcx
  int *v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r11
  int *v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // r11
  unsigned __int64 v55; // rax
  int v56; // r11d
  int v57; // edx
  LONG v58; // r9d
  LONG v59; // r8d
  LONG v60; // r10d
  struct PALETTE *v61; // rax
  int v62; // ecx
  LONG v63; // edx
  bool v64; // cc
  int v65; // r8d
  int v66; // r8d
  int v67; // edx
  __int64 v68; // rax
  HDC v69; // rcx
  char v70; // di
  int v71; // eax
  __int64 v72; // rsi
  HDC v73; // rdi
  _DWORD *v74; // rax
  int v75; // ecx
  __int64 v76; // rax
  XLATEOBJ *v77; // rbx
  __int64 v78; // rax
  HDC v79; // rax
  int v80; // edx
  __int64 v81; // rax
  int v82; // ecx
  int v83; // eax
  HDC v84; // rax
  struct _XLATETABLE near *v85; // r10
  unsigned int v86; // r11d
  int v87; // eax
  int v88; // eax
  __int64 v89; // r8
  int v90; // eax
  __int64 v91; // r8
  _DWORD *v92; // rdx
  int v93; // r9d
  int v94; // eax
  __int64 v95; // r8
  __int64 XlateObject; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  XLATEOBJ *v99; // r13
  __int64 v100; // rax
  __int64 v101; // rax
  HDC v102; // rax
  int v103; // edx
  __int64 v104; // rax
  int v105; // ecx
  unsigned int v106; // r15d
  XLATEOBJ *v107; // rax
  unsigned int v108; // r11d
  struct _XLATETABLE near *v109; // r10
  int v110; // eax
  int v111; // eax
  __int64 v112; // r8
  int v113; // eax
  __int64 v114; // r8
  _DWORD *v115; // rdx
  int v116; // r9d
  int v117; // eax
  __int64 v118; // r8
  __int64 v119; // rsi
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // r15
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  int v126; // edx
  __int64 v127; // rax
  int v128; // ecx
  unsigned int v129; // ebx
  struct _XLATETABLE near *v130; // r10
  unsigned int v131; // r11d
  __int64 v132; // r15
  int v133; // eax
  int v134; // eax
  __int64 v135; // r8
  int v136; // eax
  __int64 v137; // r8
  _DWORD *v138; // rdx
  int v139; // r9d
  int v140; // eax
  __int64 v141; // r8
  __int64 v142; // rcx
  __int64 v143; // rax
  int v144; // eax
  __int64 v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rax
  int v148; // edx
  __int64 v149; // rax
  int v150; // ecx
  unsigned int v151; // ebx
  __int64 v152; // rax
  unsigned int v153; // r11d
  struct _XLATETABLE near *v154; // r10
  int v155; // eax
  int v156; // eax
  __int64 v157; // r8
  int v158; // eax
  __int64 v159; // r8
  _DWORD *v160; // rdx
  int v161; // r9d
  int v162; // eax
  __int64 v163; // r8
  __int64 v164; // rax
  struct REGION *v165; // rdx
  __int64 v166; // r14
  int v167; // eax
  _DWORD *v168; // rsi
  bool v169; // zf
  unsigned int v171; // edx
  int v172; // r9d
  int v173; // r8d
  ULONG v174; // ecx
  SURFOBJ *v175; // rcx
  LONG v176; // r10d
  unsigned __int64 v177; // r9
  unsigned __int64 v178; // r11
  __int64 v179; // rsi
  _DWORD *v180; // rdx
  __int64 v181; // rdi
  LONG v182; // eax
  unsigned __int64 v183; // r8
  _DWORD *v184; // r8
  unsigned __int64 v185; // rdx
  SURFOBJ *v186; // rdx
  SURFOBJ *v187; // rcx
  __int64 v188; // rcx
  int inited; // eax
  XLATEOBJ *v190; // rsi
  __int64 v191; // r12
  __int64 v192; // r10
  __int64 v193; // r9
  struct ECLIPOBJ *v194; // rdx
  __int64 v195; // r8
  ULONG v196; // ecx
  BOOL (__stdcall *v197)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 cEntries; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rcx
  int v202; // ecx
  int v203; // esi
  int pptfx; // [rsp+38h] [rbp-C8h]
  int prcl; // [rsp+40h] [rbp-C0h]
  int pptl; // [rsp+48h] [rbp-B8h]
  ULONG iMode; // [rsp+50h] [rbp-B0h]
  int v208; // [rsp+70h] [rbp-90h]
  int v209; // [rsp+70h] [rbp-90h]
  int v210; // [rsp+70h] [rbp-90h]
  int v211; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v214; // [rsp+74h] [rbp-8Ch]
  int v215; // [rsp+74h] [rbp-8Ch]
  int v216; // [rsp+74h] [rbp-8Ch]
  int v217; // [rsp+74h] [rbp-8Ch]
  int v218; // [rsp+78h] [rbp-88h]
  int v219; // [rsp+78h] [rbp-88h]
  int v220; // [rsp+78h] [rbp-88h]
  int v221; // [rsp+78h] [rbp-88h]
  int v222; // [rsp+7Ch] [rbp-84h]
  int v223[2]; // [rsp+80h] [rbp-80h] BYREF
  int v224[2]; // [rsp+88h] [rbp-78h] BYREF
  POINTFIX v225; // [rsp+90h] [rbp-70h]
  XLATEOBJ *pxlo; // [rsp+98h] [rbp-68h]
  int v227[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v228; // [rsp+A8h] [rbp-58h]
  _QWORD v229[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL v230; // [rsp+C0h] [rbp-40h] BYREF
  HDC v231; // [rsp+D0h] [rbp-30h]
  POINTL pptlSrc; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v233; // [rsp+E0h] [rbp-20h]
  HDC v234; // [rsp+E8h] [rbp-18h] BYREF
  int v235; // [rsp+F0h] [rbp-10h]
  __int64 v236; // [rsp+F8h] [rbp-8h]
  __int64 v237; // [rsp+100h] [rbp+0h] BYREF
  int v238; // [rsp+108h] [rbp+8h]
  int v239; // [rsp+10Ch] [rbp+Ch]
  __int64 v240; // [rsp+110h] [rbp+10h] BYREF
  char v241; // [rsp+118h] [rbp+18h]
  int v242; // [rsp+11Ch] [rbp+1Ch]
  __int64 v243; // [rsp+120h] [rbp+20h] BYREF
  char v244; // [rsp+128h] [rbp+28h]
  int v245; // [rsp+12Ch] [rbp+2Ch]
  __int64 i; // [rsp+130h] [rbp+30h]
  struct PALETTE *v247; // [rsp+138h] [rbp+38h]
  _QWORD v248[6]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v249; // [rsp+170h] [rbp+70h] BYREF
  __int64 v250; // [rsp+178h] [rbp+78h] BYREF
  int v251; // [rsp+180h] [rbp+80h]
  int v252; // [rsp+184h] [rbp+84h]
  _QWORD v253[6]; // [rsp+188h] [rbp+88h] BYREF
  _DWORD v254[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v255; // [rsp+1C0h] [rbp+C0h]
  __int64 v256; // [rsp+1D0h] [rbp+D0h]
  _DWORD v257[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v258; // [rsp+1E0h] [rbp+E0h]
  __int128 v259; // [rsp+1E8h] [rbp+E8h]
  int v260; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v261; // [rsp+1FCh] [rbp+FCh]
  _BYTE v262[12]; // [rsp+204h] [rbp+104h]
  __int64 v263; // [rsp+210h] [rbp+110h]
  __int64 v264; // [rsp+218h] [rbp+118h] BYREF
  __int64 v265; // [rsp+220h] [rbp+120h] BYREF
  __int64 v266; // [rsp+228h] [rbp+128h] BYREF
  __int64 v267; // [rsp+230h] [rbp+130h] BYREF
  __int64 v268; // [rsp+238h] [rbp+138h] BYREF
  __int64 v269; // [rsp+240h] [rbp+140h] BYREF
  __int64 v270; // [rsp+248h] [rbp+148h] BYREF
  __int64 v271; // [rsp+250h] [rbp+150h] BYREF
  __int64 v272; // [rsp+258h] [rbp+158h] BYREF
  __int64 v273; // [rsp+260h] [rbp+160h] BYREF
  __int64 v274; // [rsp+268h] [rbp+168h] BYREF
  struct PALETTE *v275; // [rsp+270h] [rbp+170h] BYREF
  struct PALETTE *v276; // [rsp+278h] [rbp+178h] BYREF
  __int64 v277; // [rsp+280h] [rbp+180h] BYREF
  __int64 v278; // [rsp+288h] [rbp+188h] BYREF
  __int64 v279; // [rsp+290h] [rbp+190h] BYREF
  RECTL v280; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v281; // [rsp+2B0h] [rbp+1B0h] BYREF
  XLATEOBJ *v282; // [rsp+2B8h] [rbp+1B8h]
  __int64 v283; // [rsp+2C0h] [rbp+1C0h]
  XLATEOBJ *v284; // [rsp+2C8h] [rbp+1C8h]
  struct _RECTL v285; // [rsp+2D0h] [rbp+1D0h]
  struct _RECTL v286; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 v287; // [rsp+2F0h] [rbp+1F0h]
  _OWORD v288[2]; // [rsp+300h] [rbp+200h] BYREF
  __int64 v289; // [rsp+320h] [rbp+220h]
  __int64 v290; // [rsp+328h] [rbp+228h]
  char v291; // [rsp+330h] [rbp+230h]
  int v292; // [rsp+334h] [rbp+234h]
  int v293; // [rsp+358h] [rbp+258h]
  __int128 v294; // [rsp+360h] [rbp+260h]
  int v295; // [rsp+370h] [rbp+270h]
  __int64 v296[6]; // [rsp+378h] [rbp+278h] BYREF
  _QWORD v297[7]; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int128 v298; // [rsp+3E0h] [rbp+2E0h]
  __int64 v299; // [rsp+3F0h] [rbp+2F0h]
  __int128 v300; // [rsp+400h] [rbp+300h]
  __int64 v301; // [rsp+410h] [rbp+310h]
  RECTL prclDest; // [rsp+420h] [rbp+320h] BYREF
  struct _RECTL v303; // [rsp+430h] [rbp+330h] BYREF
  __int64 v304; // [rsp+440h] [rbp+340h] BYREF
  int v305; // [rsp+448h] [rbp+348h]
  int v306; // [rsp+44Ch] [rbp+34Ch]
  _BYTE v307[4]; // [rsp+450h] [rbp+350h] BYREF
  char v308[52]; // [rsp+454h] [rbp+354h] BYREF
  __int64 v309; // [rsp+488h] [rbp+388h]
  __int64 v310; // [rsp+4A0h] [rbp+3A0h]
  int v311; // [rsp+4A8h] [rbp+3A8h]
  int v312; // [rsp+4D0h] [rbp+3D0h]
  __int64 v313; // [rsp+4E0h] [rbp+3E0h]
  struct _POINTFIX v314; // [rsp+4F0h] [rbp+3F0h] BYREF
  FIX v315; // [rsp+4F8h] [rbp+3F8h]
  int v316; // [rsp+4FCh] [rbp+3FCh]
  int v317; // [rsp+500h] [rbp+400h]
  FIX v318; // [rsp+504h] [rbp+404h]
  FIX v319; // [rsp+508h] [rbp+408h]
  int v320; // [rsp+50Ch] [rbp+40Ch]
  struct _POINTL v321; // [rsp+510h] [rbp+410h] BYREF
  int v322; // [rsp+518h] [rbp+418h]
  LONG v323; // [rsp+51Ch] [rbp+41Ch]
  LONG v324; // [rsp+520h] [rbp+420h]
  int v325; // [rsp+524h] [rbp+424h]
  POINTFIX v326; // [rsp+528h] [rbp+428h] BYREF
  POINTFIX v327; // [rsp+530h] [rbp+430h]
  POINTFIX v328; // [rsp+538h] [rbp+438h]

  v14 = 1;
  pptlSrc = (POINTL)a6;
  LODWORD(pxlo) = a2;
  v224[0] = a3;
  v231 = a1;
  v223[0] = a5;
  v227[0] = a9;
  if ( (_BYTE)a11 )
    goto LABEL_426;
  v15 = BYTE1(a11);
  if ( (a11 & 0xFE000000) != 0 )
    goto LABEL_426;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_426:
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    BYTE1(a11) &= ~0x80u;
    v225.x = v15 & 0x80;
    DCOBJ::DCOBJ((DCOBJ *)v248, a1);
    if ( !v248[0] || (*(_DWORD *)(v248[0] + 36LL) & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      DCOBJ::~DCOBJ((DCOBJ *)v248);
      return 0LL;
    }
    else
    {
      DCOBJ::DCOBJ((DCOBJ *)v253, *(HDC *)&pptlSrc);
      if ( !v253[0] )
        goto LABEL_422;
      bSpDwmValidateSurface((struct XDCOBJ *)v253, a7, a8, a9, a10);
      bSpDwmValidateSurface((struct XDCOBJ *)v248, a2, a3, a4, a5);
      v238 = *(_DWORD *)(*(_QWORD *)(v248[0] + 80LL) + 68LL);
      v16 = *(_DWORD *)(*(_QWORD *)(v248[0] + 80LL) + 312LL) & 1;
      v239 = v16;
      if ( (*(_DWORD *)(*(_QWORD *)(v248[0] + 80LL) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v237, (struct XDCOBJ *)v248, 0x204u, 0);
        v16 = v239;
        v17 = v237;
      }
      else
      {
        v17 = v248[0] + 336LL;
        v237 = v248[0] + 336LL;
      }
      v251 = *(_DWORD *)(*(_QWORD *)(v253[0] + 80LL) + 68LL);
      v18 = *(_DWORD *)(*(_QWORD *)(v253[0] + 80LL) + 312LL) & 1;
      v252 = v18;
      if ( (*(_DWORD *)(*(_QWORD *)(v253[0] + 80LL) + 352LL) & 0xE000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v250, (struct XDCOBJ *)v253, 0x204u, 0);
        v19 = v250;
        v16 = v239;
        v17 = v237;
        v18 = v252;
      }
      else
      {
        v19 = v253[0] + 336LL;
        v250 = v253[0] + 336LL;
      }
      v20 = *(_DWORD *)(v19 + 32);
      if ( (v20 & 1) != 0 && ((v21 = 0.0, v18) || *(float *)v19 >= 0.0 && *(float *)(v19 + 12) >= 0.0) )
      {
        left = a7;
        top = a8;
        bottom = a8 + a10;
        prclDest.left = a7;
        right = a9 + a7;
        prclDest.top = a8;
        prclDest.right = a9 + a7;
        prclDest.bottom = a8 + a10;
        if ( (v20 & 0x43) != 0x43 )
        {
          bCvtPts1(v19, &prclDest, 2LL);
          bottom = prclDest.bottom;
          right = prclDest.right;
          top = prclDest.top;
          left = prclDest.left;
        }
        if ( v18 )
        {
          ++left;
          ++right;
          prclDest.left = left;
          prclDest.right = right;
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
        if ( (*(_DWORD *)(v17 + 32) & 1) != 0 && (v16 || v21 <= *(float *)v17 && v21 <= *(float *)(v17 + 12)) )
        {
          *(_QWORD *)&v230.left = __PAIR64__(a3, a2);
          v230.right = a2 + a4;
          v230.bottom = a3 + v223[0];
          v303 = v230;
          v26 = *(_DWORD *)(v17 + 32) & 0x43;
          v235 = 0;
          if ( (_BYTE)v26 != 67 )
            bCvtPts1(v17, &v303, 2LL);
          v27 = v303.left;
          v28 = v303.right;
          if ( v16 )
          {
            v27 = v303.left + 1;
            v28 = v303.right + 1;
            ++v303.left;
            ++v303.right;
          }
          if ( v27 > v28 )
          {
            v303.left = v28;
            v303.right = v27;
          }
          v29 = v303.top;
          if ( v303.top > v303.bottom )
          {
            v303.top = v303.bottom;
            v303.bottom = v29;
          }
        }
        else
        {
          v235 = 1;
          v322 = a2 + a4;
          v321.x = a2;
          v325 = a3 + v223[0];
          v321.y = a3;
          v323 = a3;
          v324 = a2;
          EXFORMOBJ::bXform((EXFORMOBJ *)&v237, &v321, &v314, 3uLL);
          v30 = v315;
          x = v314.x;
          if ( (*(_DWORD *)(v237 + 32) & 1) != 0 )
          {
            if ( v314.x > v315 )
            {
              x = v314.x + 16;
              v30 = v315 + 16;
              v317 += 16;
              v314.x += 16;
              v315 += 16;
            }
            y = v314.y;
            v33 = v318;
            v34 = v316;
            if ( v314.y > v318 )
            {
              y = v314.y + 16;
              v34 = v316 + 16;
              v33 = v318 + 16;
              v314.y += 16;
              v318 += 16;
              v316 += 16;
            }
          }
          else
          {
            v33 = v318;
            v34 = v316;
            y = v314.y;
          }
          v319 = v30 + v317 - x;
          v320 = v33 + v34 - y;
          v35 = v30 > x == v30 > v319;
          v36 = v34 > y == v34 > v320;
          if ( *(&v314.x + 2 * v35) > *(&v314.x + 2 * (v35 ^ 3)) )
            LODWORD(v35) = v35 ^ 3;
          if ( *(&v314.y + 2 * v36) > *(&v314.y + 2 * (v36 ^ 3LL)) )
            v36 ^= 3u;
          v230.left = (*(&v314.x + 2 * (int)v35) + 15) >> 4;
          v230.top = (*(&v314.y + 2 * v36) + 15) >> 4;
          v230.right = (*(&v314.x + 2 * ((int)v35 ^ 3LL)) + 15) >> 4;
          v230.bottom = (*(&v314.y + 2 * (v36 ^ 3LL)) + 15) >> 4;
          v303 = v230;
        }
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v303) )
        {
          if ( (*(_DWORD *)(v248[0] + 36LL) & 0xE0) != 0 )
            XDCOBJ::vAccumulate((XDCOBJ *)v248, (struct ERECTL *)&v303);
          v290 = 0LL;
          v291 = 0;
          v292 = 0;
          v293 = 0;
          DCOBJ::DCOBJ((DCOBJ *)v296);
          DCOBJ::DCOBJ((DCOBJ *)v297);
          v289 = 0LL;
          memset(v288, 0, sizeof(v288));
          v294 = 0LL;
          v298 = 0LL;
          v300 = 0LL;
          v295 = 0;
          v297[6] = 0LL;
          v299 = 0LL;
          v301 = 0LL;
          v296[0] = 0LL;
          v297[0] = 0LL;
          if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v288, (struct XDCOBJ *)v248, (struct XDCOBJ *)v253) )
          {
            v203 = XDCOBJ::bFullScreen((XDCOBJ *)v253);
            v14 = XDCOBJ::bFullScreen((XDCOBJ *)v248) | v203;
            goto LABEL_421;
          }
          v37 = *(_QWORD *)(v248[0] + 512LL);
          v236 = v37;
          if ( !v37 )
            goto LABEL_421;
          v38 = *(_QWORD *)(v248[0] + 96LL);
          v39 = *(_QWORD *)(v37 + 120);
          v233 = v38;
          v40 = *(_QWORD *)(v253[0] + 512LL);
          v228 = v40;
          if ( !v40 )
            goto LABEL_421;
          if ( *(_DWORD *)(v40 + 600) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v40 + 600) )
            goto LABEL_419;
          v41 = *(_DWORD *)(v40 + 112);
          if ( (v41 & 0x800) != 0 )
          {
            v42 = UserSurfaceAccessCheck(*(_QWORD *)(v40 + 592));
          }
          else
          {
            if ( (v41 & 0x10000000) == 0 )
            {
LABEL_66:
              if ( (*(_DWORD *)(v37 + 116) & 8) == 0 && !*(_QWORD *)(v37 + 216) || (*(_WORD *)(v37 + 102) & 0x200) == 0 )
              {
                v43 = *(_DWORD *)(v37 + 112);
                if ( (v43 & 0x800) != 0 )
                {
                  v44 = UserSurfaceAccessCheck(*(_QWORD *)(v37 + 592));
                }
                else
                {
                  if ( (v43 & 0x10000000) == 0 )
                  {
LABEL_74:
                    if ( (a11 & 0x1000000) != 0 )
                    {
                      v45 = *(_QWORD *)(v40 + 120);
                      if ( *(_DWORD *)(v40 + 96) != 6
                        || !v45
                        || (v46 = *(_DWORD *)(v45 + 24), (v46 & 8) == 0)
                        && ((v46 & 2) == 0
                         || (v47 = *(_DWORD **)(v45 + 128), *v47 != 16711680)
                         || v47[1] != 65280
                         || v47[2] != 255) )
                      {
LABEL_82:
                        EngSetLastError(0x57u);
                        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v288);
                        DCOBJ::~DCOBJ((DCOBJ *)v253);
                        DCOBJ::~DCOBJ((DCOBJ *)v248);
                        return 0LL;
                      }
                    }
                    v285 = v303;
                    if ( (*(_DWORD *)(v248[0] + 40LL) & 1) != 0 )
                      v49 = (int *)(v248[0] + 1416LL);
                    else
                      v49 = (int *)(v248[0] + 1408LL);
                    v50 = *v49;
                    if ( (unsigned __int64)(v50 + v303.left + 0x80000000LL) > 0xFFFFFFFF )
                      goto LABEL_418;
                    if ( (unsigned __int64)(v50 + v303.right + 0x80000000LL) > 0xFFFFFFFF )
                      goto LABEL_418;
                    v51 = v49[1];
                    if ( (unsigned __int64)(v51 + v303.top + 0x80000000LL) > 0xFFFFFFFF
                      || (unsigned __int64)(v51 + v303.bottom + 0x80000000LL) > 0xFFFFFFFF )
                    {
                      goto LABEL_418;
                    }
                    v303.left += v50;
                    v303.right += *v49;
                    v303.top += v49[1];
                    v303.bottom += v49[1];
                    v52 = (int *)((*(_DWORD *)(v253[0] + 40LL) & 1) != 0 ? v253[0] + 1416LL : v253[0] + 1408LL);
                    v53 = *v52;
                    if ( (unsigned __int64)(v53 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                      || (unsigned __int64)(v53 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                      || (v54 = v52[1], (unsigned __int64)(v54 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                      || (v55 = v54 + prclDest.bottom + 0x80000000LL, v56 = -1, v55 > 0xFFFFFFFF) )
                    {
LABEL_418:
                      EngSetLastError(0x216u);
                      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v288);
                      DCOBJ::~DCOBJ((DCOBJ *)v253);
                      DCOBJ::~DCOBJ((DCOBJ *)v248);
                      return 0LL;
                    }
                    v57 = v53 + prclDest.left;
                    prclDest.left += v53;
                    v58 = *v52 + prclDest.right;
                    prclDest.right = v58;
                    v59 = v52[1] + prclDest.top;
                    prclDest.top = v59;
                    v60 = v52[1] + prclDest.bottom;
                    prclDest.bottom = v60;
                    v61 = *(struct PALETTE **)(v40 + 48);
                    v247 = v61;
                    if ( *(_WORD *)(v40 + 100) == 1 && v61 && (*((_DWORD *)v61 + 14) & 0x20000) != 0 )
                    {
                      v62 = *((_DWORD *)v61 + 652);
                      if ( v57 >= v62 )
                      {
                        v63 = *((_DWORD *)v61 + 653);
                        if ( v59 >= v63 && v58 <= *(_DWORD *)(v40 + 56) + v62 )
                        {
                          v64 = v60 <= v63 + *(_DWORD *)(v40 + 60);
                          goto LABEL_108;
                        }
                      }
                    }
                    else if ( v57 >= 0 && v59 >= 0 && v58 <= *(_DWORD *)(v40 + 56) )
                    {
                      v64 = v60 <= *(_DWORD *)(v40 + 60);
LABEL_108:
                      v65 = 0;
                      if ( v64 )
                        goto LABEL_110;
                    }
                    v65 = 1;
LABEL_110:
                    if ( v40 == v236 )
                    {
                      v280 = prclDest;
                      ERECTL::operator*=(&v280);
                      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v280) )
                        goto LABEL_82;
                    }
                    if ( v65 )
                      goto LABEL_82;
                    if ( BYTE2(a11) != 0xFF || (a11 & 0x1000000) != 0 || (a11 & 0x100) != 0 )
                    {
                      v71 = 1;
                    }
                    else
                    {
                      v66 = v224[0];
                      v67 = (int)pxlo;
                      v68 = *(_QWORD *)(v248[0] + 80LL);
                      v69 = v231;
                      v70 = *(_BYTE *)(v68 + 75);
                      *(_BYTE *)(v68 + 75) = 3;
                      v14 = GreStretchBltInternal(
                              v69,
                              v67,
                              v66,
                              v223[0],
                              *(HDC *)&pptlSrc,
                              a7,
                              a8,
                              v227[0],
                              a10,
                              13369376,
                              v56,
                              0);
                      v71 = 0;
                      *(_BYTE *)(*(_QWORD *)(v248[0] + 80LL) + 75LL) = v70;
                    }
                    if ( (v71 & v14) != 0 )
                    {
                      v234 = 0LL;
                      v72 = *(_QWORD *)(v253[0] + 96LL);
                      v73 = *(HDC *)(v228 + 120);
                      v74 = *(_DWORD **)(v253[0] + 80LL);
                      v222 = v74[9];
                      v75 = v74[8];
                      v223[0] = v74[10];
                      v214 = v75;
                      if ( (v73
                         || v39
                         && ((*(_DWORD *)(v39 + 24) & 0x800) == 0
                          || (v76 = *(_QWORD *)(v38 + 80)) != 0 && v76 != *(_QWORD *)(v38 + 72)))
                        && (v39
                         || ((_DWORD)v73[6] & 0x800) == 0
                         || (v78 = *(_QWORD *)(v38 + 80)) != 0 && v78 != *(_QWORD *)(v38 + 72)) )
                      {
                        if ( !v73 || !v39 )
                        {
LABEL_159:
                          XlateObject = CreateXlateObject(0LL, 0LL, v73, v39, v72, v38, v223[0], v214, v222, 0);
                          v229[0] = XlateObject;
                          if ( XlateObject )
                          {
                            if ( v73 && v39 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                              EXLATEOBJ::vAddToCache(v229, v73, v39, v72, v38);
                            v208 = 1;
                          }
                          else
                          {
                            v208 = 0;
                          }
LABEL_166:
                          v77 = xloIdent;
                          goto LABEL_167;
                        }
                        v79 = (HDC)*((_QWORD *)v73 + 17);
                        if ( v79 == v73 )
                          v80 = *((_DWORD *)v73 + 8);
                        else
                          v80 = *((_DWORD *)v79 + 8);
                        v81 = *(_QWORD *)(v39 + 136);
                        if ( v81 == v39 )
                          v82 = *(_DWORD *)(v39 + 32);
                        else
                          v82 = *(_DWORD *)(v81 + 32);
                        if ( v80 != v82 )
                        {
                          v83 = *((_DWORD *)v73 + 14);
                          v271 = v38;
                          v273 = v72;
                          v278 = v39;
                          LODWORD(pxlo) = v83;
                          v272 = ghsemPalette;
                          GreAcquireSemaphore(ghsemPalette);
                          v84 = (HDC)*((_QWORD *)v73 + 17);
                          v85 = xlateTable;
                          v86 = (unsigned int)pxlo;
                          v231 = v84;
                          v218 = 0;
                          while ( 1 )
                          {
                            if ( v84 == v73 )
                              v87 = *((_DWORD *)v73 + 8);
                            else
                              v87 = *((_DWORD *)v84 + 8);
                            if ( *((_DWORD *)v85 + 8 * v86 + 4) == v87 )
                            {
                              v88 = XEPALOBJ::ulTime((XEPALOBJ *)&v278);
                              if ( *(_DWORD *)((char *)v85 + v89 + 20) == v88 )
                              {
                                v90 = XEPALOBJ::ulTime((XEPALOBJ *)&v271);
                                if ( *(_DWORD *)((char *)v85 + v91 + 28) == v90 )
                                {
                                  v92 = *(_DWORD **)((char *)v85 + v91 + 8);
                                  v229[0] = v92;
                                  v93 = v92[19];
                                  if ( (v93 & 0x6000) == 0 )
                                  {
                                    if ( (v92[1] & 4) == 0 && (v93 & 0x100) == 0
                                      || (v92[1] & 4) != 0
                                      && v222 == v92[6]
                                      && (v94 = XEPALOBJ::ulTime((XEPALOBJ *)&v273),
                                          *(_DWORD *)((char *)v85 + v95 + 24) == v94)
                                      || (v93 & 0x100) != 0 && v223[0] == v92[7] && v214 == v92[8] )
                                    {
                                      _InterlockedIncrement((volatile signed __int32 *)v85 + 8 * v86);
                                      *((_DWORD *)v73 + 14) = v86;
                                      SEMOBJ::vUnlock((SEMOBJ *)&v272);
                                      v208 = 1;
                                      goto LABEL_166;
                                    }
                                  }
                                }
                              }
                            }
                            v86 = ((_BYTE)v86 + 1) & 7;
                            if ( (unsigned int)++v218 >= 8 )
                              break;
                            v84 = v231;
                          }
                          if ( ghsemPalette )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                            GreReleaseSemaphoreInternal(ghsemPalette);
                          }
                          goto LABEL_159;
                        }
                      }
                      v77 = xloIdent;
                      v229[0] = xloIdent;
                      v208 = 1;
LABEL_167:
                      v231 = (HDC)v229[0];
                      v97 = *(_QWORD *)(v253[0] + 80LL);
                      v219 = *(_DWORD *)(v97 + 32);
                      v215 = *(_DWORD *)(v97 + 40);
                      if ( !v73 )
                      {
                        if ( !gppalRGB )
                          goto LABEL_172;
                        if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                        {
                          v98 = *(_QWORD *)(v72 + 80);
                          if ( !v98 || v98 == *(_QWORD *)(v72 + 72) )
                            goto LABEL_172;
                        }
                      }
                      if ( !gppalRGB && ((_DWORD)v73[6] & 0x800) != 0 )
                      {
                        v101 = *(_QWORD *)(v72 + 80);
                        if ( !v101 )
                        {
LABEL_172:
                          v99 = v77;
                          *(_QWORD *)v224 = v77;
                          LODWORD(v100) = 1;
                          goto LABEL_217;
                        }
                        if ( v101 == *(_QWORD *)(v72 + 72) )
                        {
                          v99 = v77;
                          *(_QWORD *)v224 = v77;
                          LODWORD(v100) = (_DWORD)gppalRGB + 1;
                          goto LABEL_217;
                        }
                      }
                      if ( v73 && gppalRGB )
                      {
                        v102 = (HDC)*((_QWORD *)v73 + 17);
                        if ( v102 == v73 )
                          v103 = *((_DWORD *)v73 + 8);
                        else
                          v103 = *((_DWORD *)v102 + 8);
                        v104 = *((_QWORD *)gppalRGB + 17);
                        if ( (struct PALETTE *)v104 == gppalRGB )
                          v105 = *((_DWORD *)gppalRGB + 8);
                        else
                          v105 = *(_DWORD *)(v104 + 32);
                        if ( v103 == v105 )
                        {
                          v99 = v77;
                          *(_QWORD *)v224 = v77;
                          LODWORD(v100) = 1;
LABEL_217:
                          v209 = v100 & v208;
                          v119 = v233;
                          pxlo = v99;
                          v120 = *(_QWORD *)(v253[0] + 80LL);
                          v220 = *(_DWORD *)(v120 + 32);
                          v216 = *(_DWORD *)(v120 + 40);
                          if ( !v39 )
                          {
                            if ( !gppalRGB )
                              goto LABEL_222;
                            if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                            {
                              v121 = *(_QWORD *)(v233 + 80);
                              if ( !v121 || v121 == *(_QWORD *)(v233 + 72) )
                                goto LABEL_222;
                            }
                          }
                          if ( !gppalRGB && (*(_DWORD *)(v39 + 24) & 0x800) != 0 )
                          {
                            v124 = *(_QWORD *)(v233 + 80);
                            if ( !v124 )
                            {
LABEL_222:
                              v122 = (__int64)v77;
                              *(_QWORD *)v227 = v77;
                              LODWORD(v123) = 1;
                              goto LABEL_266;
                            }
                            if ( v124 == *(_QWORD *)(v233 + 72) )
                            {
                              v122 = (__int64)v77;
                              *(_QWORD *)v227 = v77;
                              LODWORD(v123) = (_DWORD)gppalRGB + 1;
                              goto LABEL_266;
                            }
                          }
                          if ( v39 && gppalRGB )
                          {
                            v125 = *(_QWORD *)(v39 + 136);
                            if ( v125 == v39 )
                              v126 = *(_DWORD *)(v39 + 32);
                            else
                              v126 = *(_DWORD *)(v125 + 32);
                            v127 = *((_QWORD *)gppalRGB + 17);
                            if ( (struct PALETTE *)v127 == gppalRGB )
                              v128 = *((_DWORD *)gppalRGB + 8);
                            else
                              v128 = *(_DWORD *)(v127 + 32);
                            if ( v126 == v128 )
                            {
                              v122 = (__int64)v77;
                              *(_QWORD *)v227 = v77;
                              LODWORD(v123) = 1;
LABEL_266:
                              v210 = v123 & v209;
                              v142 = *(_QWORD *)(v253[0] + 80LL);
                              v221 = *(_DWORD *)(v142 + 32);
                              v217 = *(_DWORD *)(v142 + 40);
                              if ( !gppalRGB )
                              {
                                if ( !v39 )
                                  goto LABEL_271;
                                if ( (*(_DWORD *)(v39 + 24) & 0x800) != 0 )
                                {
                                  v143 = *(_QWORD *)(v119 + 80);
                                  if ( !v143 || v143 == *(_QWORD *)(v119 + 72) )
                                    goto LABEL_271;
                                }
                              }
                              if ( !v39 && (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                              {
                                v146 = *(_QWORD *)(v119 + 80);
                                if ( !v146 )
                                {
LABEL_271:
                                  *(_QWORD *)v223 = v77;
                                  v144 = 1;
                                  v145 = 0LL;
                                  goto LABEL_315;
                                }
                                if ( v146 == *(_QWORD *)(v119 + 72) )
                                {
                                  *(_QWORD *)v223 = v77;
                                  v144 = 1;
                                  v145 = 0LL;
                                  goto LABEL_315;
                                }
                              }
                              if ( gppalRGB && v39 )
                              {
                                v147 = *((_QWORD *)gppalRGB + 17);
                                if ( (struct PALETTE *)v147 == gppalRGB )
                                  v148 = *((_DWORD *)gppalRGB + 8);
                                else
                                  v148 = *(_DWORD *)(v147 + 32);
                                v149 = *(_QWORD *)(v39 + 136);
                                if ( v149 == v39 )
                                  v150 = *(_DWORD *)(v39 + 32);
                                else
                                  v150 = *(_DWORD *)(v149 + 32);
                                if ( v148 == v150 )
                                {
                                  *(_QWORD *)v223 = v77;
                                  v144 = 1;
                                  v145 = 0LL;
                                  goto LABEL_315;
                                }
                                v151 = *((_DWORD *)gppalRGB + 14);
                                v268 = v119;
                                v270 = v119;
                                v267 = v39;
                                v269 = ghsemPalette;
                                GreAcquireSemaphore(ghsemPalette);
                                v152 = *((_QWORD *)gppalRGB + 17);
                                v153 = 0;
                                v154 = xlateTable;
                                for ( i = v152; ; v152 = i )
                                {
                                  if ( (struct PALETTE *)v152 == gppalRGB )
                                    v155 = *((_DWORD *)gppalRGB + 8);
                                  else
                                    v155 = *(_DWORD *)(v152 + 32);
                                  if ( *((_DWORD *)v154 + 8 * v151 + 4) == v155 )
                                  {
                                    v156 = XEPALOBJ::ulTime((XEPALOBJ *)&v267);
                                    if ( *(_DWORD *)((char *)v154 + v157 + 20) == v156 )
                                    {
                                      v158 = XEPALOBJ::ulTime((XEPALOBJ *)&v268);
                                      if ( *(_DWORD *)((char *)v154 + v159 + 28) == v158 )
                                      {
                                        v160 = *(_DWORD **)((char *)v154 + v159 + 8);
                                        *(_QWORD *)v223 = v160;
                                        v161 = v160[19];
                                        if ( (v161 & 0x6000) == 0 )
                                        {
                                          if ( (v160[1] & 4) == 0 && (v161 & 0x100) == 0
                                            || (v160[1] & 4) != 0
                                            && v222 == v160[6]
                                            && (v162 = XEPALOBJ::ulTime((XEPALOBJ *)&v270),
                                                *(_DWORD *)((char *)v154 + v163 + 24) == v162)
                                            || (v161 & 0x100) != 0 && v217 == v160[7] && v221 == v160[8] )
                                          {
                                            _InterlockedIncrement((volatile signed __int32 *)v154 + 8 * v151);
                                            *((_DWORD *)gppalRGB + 14) = v151;
                                            SEMOBJ::vUnlock((SEMOBJ *)&v269);
                                            v99 = *(XLATEOBJ **)v224;
                                            v144 = 1;
                                            v122 = *(_QWORD *)v227;
                                            v145 = 0LL;
                                            v77 = *(XLATEOBJ **)v223;
                                            goto LABEL_315;
                                          }
                                        }
                                      }
                                    }
                                  }
                                  ++v153;
                                  v151 = ((_BYTE)v151 + 1) & 7;
                                  if ( v153 >= 8 )
                                    break;
                                }
                                if ( ghsemPalette )
                                {
                                  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                  GreReleaseSemaphoreInternal(ghsemPalette);
                                }
                              }
                              v145 = 0LL;
                              v164 = CreateXlateObject(0LL, 0LL, gppalRGB, v39, v119, v119, v217, v221, v222, 0);
                              *(_QWORD *)v223 = v164;
                              v77 = (XLATEOBJ *)v164;
                              if ( v164 )
                              {
                                if ( gppalRGB && v39 && (*(_DWORD *)(v164 + 76) & 0x200) == 0 )
                                  EXLATEOBJ::vAddToCache(v223, gppalRGB, v39, v119, v119);
                                v144 = 1;
                              }
                              else
                              {
                                v144 = 0;
                              }
LABEL_315:
                              v211 = v144 & v210;
                              v165 = *(struct REGION **)(v248[0] + 1552LL);
                              if ( !v165 )
                                v165 = *(struct REGION **)(v248[0] + 1544LL);
                              v309 = 0LL;
                              v310 = 0LL;
                              v311 = 0;
                              v312 = 1;
                              v313 = 0LL;
                              XCLIPOBJ::vSetup((XCLIPOBJ *)v307, v165, (struct ERECTL *)&v303, 0);
                              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v308) )
                              {
                                LODWORD(v145) = 1;
LABEL_372:
                                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v223);
                                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v227);
                                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v224);
                                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v234);
                                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v229);
                                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v288);
                                DCOBJ::~DCOBJ((DCOBJ *)v253);
                                DCOBJ::~DCOBJ((DCOBJ *)v248);
                                return (unsigned int)v145;
                              }
                              *(_QWORD *)&v230.left = 0LL;
                              LOBYTE(v230.right) = 0;
                              v230.bottom = 0;
                              v166 = *(_QWORD *)(v236 + 48);
                              i = v166;
                              if ( v225.x )
                              {
                                v167 = *(_DWORD *)(*(_QWORD *)(v248[0] + 80LL) + 312LL);
                                if ( (v167 & 1) != 0 && (v167 & 9) != 9 )
                                {
                                  v168 = (_DWORD *)v228;
                                  *(_DWORD *)&v262[8] = 0;
                                  v261 = 0LL;
                                  *(_QWORD *)v262 = 0LL;
                                  v263 = 0LL;
                                  v261 = *(_QWORD *)(v228 + 56);
                                  v260 = *(_DWORD *)(v228 + 96);
                                  *(_QWORD *)&v262[4] = **(_QWORD **)(v228 + 120);
                                  SURFMEM::bCreateDIB(
                                    (SURFMEM *)&v230,
                                    (struct _DEVBITMAPINFO *)&v260,
                                    0LL,
                                    0LL,
                                    0,
                                    0LL,
                                    0LL,
                                    0,
                                    1,
                                    0,
                                    0);
                                  if ( !*(_QWORD *)&v230.left )
                                    goto LABEL_371;
                                  v169 = (v168[28] & 0x400) == 0;
                                  v305 = v168[14];
                                  v306 = v168[15];
                                  v304 = 0LL;
                                  v249 = 0LL;
                                  if ( !(v169
                                       ? ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))EngCopyBits)(
                                           *(_QWORD *)&v230.left + 24LL,
                                           v168 + 6,
                                           0LL,
                                           0LL,
                                           &v304,
                                           &v249)
                                       : (*((unsigned int (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))v247
                                          + 359))(
                                           *(_QWORD *)&v230.left + 24LL,
                                           v168 + 6,
                                           0LL,
                                           0LL,
                                           &v304,
                                           &v249)) )
                                    goto LABEL_371;
                                  v171 = *(_DWORD *)(*(_QWORD *)&v230.left + 96LL);
                                  if ( v171 - 1 > 5 )
                                    goto LABEL_371;
                                  qword_1C02EB3A0[v171]();
                                  v228 = *(_QWORD *)&v230.left;
                                }
                              }
                              v240 = 0LL;
                              v241 = 0;
                              v242 = 0;
                              v243 = 0LL;
                              v244 = 0;
                              v245 = 0;
                              if ( !v235 )
                              {
                                v190 = pxlo;
                                v191 = v228;
                                goto LABEL_374;
                              }
                              *(_QWORD *)&v259 = 0LL;
                              v257[1] = v303.right - v303.left;
                              v258 = (unsigned int)(v303.bottom - v303.top);
                              v257[0] = 6;
                              v259 = *(unsigned __int64 *)gppalRGB;
                              v247 = gppalRGB;
                              v172 = SURFMEM::bCreateDIB(
                                       (SURFMEM *)&v240,
                                       (struct _DEVBITMAPINFO *)v257,
                                       0LL,
                                       0LL,
                                       0,
                                       0LL,
                                       0LL,
                                       0,
                                       1,
                                       0,
                                       0) & v211;
                              if ( !v172 )
                              {
LABEL_369:
                                v174 = 8;
                                goto LABEL_370;
                              }
                              if ( (a11 & 0x1000000) == 0 )
                              {
                                v256 = 0LL;
                                v254[1] = prclDest.right - prclDest.left;
                                v255 = (unsigned int)(prclDest.bottom - prclDest.top);
                                v254[0] = 6;
                                *((_QWORD *)&v255 + 1) = *(_QWORD *)gppalRGB;
                                DIB = SURFMEM::bCreateDIB(
                                        (SURFMEM *)&v243,
                                        (struct _DEVBITMAPINFO *)v254,
                                        0LL,
                                        0LL,
                                        0,
                                        0LL,
                                        0LL,
                                        0,
                                        1,
                                        0,
                                        0);
                                v172 = DIB;
                                if ( DIB )
                                {
                                  v225.x = prclDest.left;
                                  pptlSrc.x = prclDest.left;
                                  LODWORD(pxlo) = prclDest.top;
                                  pptlSrc.y = prclDest.top;
                                  if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, v173) )
                                  {
                                    v174 = 87;
LABEL_370:
                                    EngSetLastError(v174);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v243);
                                    SURFMEM::~SURFMEM((SURFMEM *)&v240);
LABEL_371:
                                    SURFMEM::~SURFMEM((SURFMEM *)&v230);
                                    goto LABEL_372;
                                  }
                                  if ( prclDest.right > prclDest.left
                                    && prclDest.bottom > prclDest.top
                                    && v225.x <= *(_DWORD *)(v228 + 56)
                                    && (int)pxlo <= *(_DWORD *)(v228 + 60) )
                                  {
                                    v175 = 0LL;
                                    if ( v243 )
                                      v175 = (SURFOBJ *)(v243 + 24);
                                    EngCopyBits(v175, (SURFOBJ *)(v228 + 24), 0LL, v99, &prclDest, &pptlSrc);
                                  }
                                  v176 = 0;
                                  v228 = v243;
                                  v177 = *(_QWORD *)(v243 + 80);
                                  v178 = v177 + *(_DWORD *)(v243 + 60) * *(_DWORD *)(v243 + 88);
                                  if ( v177 != v178 )
                                  {
                                    v179 = v243;
                                    do
                                    {
                                      if ( v176 >= prclDest.top && v176 < prclDest.bottom )
                                      {
                                        v180 = (_DWORD *)v177;
                                        v181 = 0LL;
                                        v182 = 0;
                                        v183 = (unsigned __int64)(4LL * *(int *)(v179 + 56) + 3) >> 2;
                                        if ( v177 > v177 + 4LL * *(int *)(v179 + 56) )
                                          v183 = 0LL;
                                        if ( v183 )
                                        {
                                          do
                                          {
                                            if ( v182 >= prclDest.left && v182 < prclDest.right )
                                              *v180 |= 0xFF000000;
                                            ++v182;
                                            ++v180;
                                            ++v181;
                                          }
                                          while ( v181 != v183 );
                                          v179 = v243;
                                        }
                                      }
                                      ++v176;
                                      v177 += *(int *)(v179 + 88);
                                    }
                                    while ( v177 != v178 );
                                    v166 = i;
                                    v145 = 0LL;
                                    v228 = v179;
                                  }
                                  HIBYTE(a11) |= 1u;
                                  v172 = DIB;
                                  pxlo = xloIdent;
                                }
                              }
                              v184 = *(_DWORD **)(v240 + 72);
                              v185 = (unsigned __int64)*(unsigned int *)(v240 + 64) >> 2;
                              if ( v185 )
                              {
                                if ( ((unsigned __int8)v184 & 4) != 0 )
                                {
                                  *v184 = 0;
                                  if ( !--v185 )
                                    goto LABEL_363;
                                  ++v184;
                                }
                                memset(v184, 0, 8 * (v185 >> 1));
                                v145 = 0LL;
                                if ( (v185 & 1) != 0 )
                                  v184[v185 - 1] = 0;
                              }
LABEL_363:
                              if ( v172 )
                              {
                                `vector constructor iterator'(&v326, 8uLL, 3, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                                v225.x = v314.x - 16 * v285.left;
                                v225.y = v314.y - 16 * v285.top;
                                v326 = v225;
                                v225.x = v315 - 16 * v285.left;
                                v225.y = v316 - 16 * v285.top;
                                v327 = v225;
                                v186 = 0LL;
                                v225.x = v317 - 16 * v285.left;
                                v225.y = v318 - 16 * v285.top;
                                v328 = v225;
                                if ( v228 )
                                  v186 = (SURFOBJ *)(v228 + 24);
                                v187 = 0LL;
                                if ( v240 )
                                  v187 = (SURFOBJ *)(v240 + 24);
                                EngPlgBlt(v187, v186, 0LL, 0LL, pxlo, 0LL, 0LL, &v326, &prclDest, 0LL, 3u);
                                iMode = 0;
                                v287 = 0LL;
                                v188 = *(_QWORD *)(v253[0] + 80LL);
                                pptl = v222;
                                prcl = *(_DWORD *)(v188 + 32);
                                pptfx = *(_DWORD *)(v188 + 40);
                                inited = EXLATEOBJ::bInitXlateObj(&v234, 0LL, 0LL);
                                v190 = xloIdent;
                                v191 = v240;
                                v211 = inited;
                                v231 = v234;
                                prclDest.right = v303.right - v303.left;
                                prclDest.bottom = v303.bottom - v303.top;
                                *(_QWORD *)&prclDest.left = 0LL;
                                `vector destructor iterator'(&v326, 8uLL, 3, Scale_None);
LABEL_374:
                                if ( v211 )
                                {
                                  v192 = v236;
                                  ++*(_DWORD *)(v236 + 92);
                                  v193 = v248[0];
                                  v194 = *(struct ECLIPOBJ **)(v253[0] + 48LL);
                                  if ( *(struct ECLIPOBJ **)(v248[0] + 48LL) == v194
                                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v248)
                                    && *(struct ECLIPOBJ **)(v195 + 3544) == v194 )
                                  {
                                    if ( (*(_DWORD *)(v193 + 36) & 0xE0) != 0 )
                                    {
                                      v286 = v303;
                                      XDCOBJ::vAccumulateTight((XDCOBJ *)v248, v194, &v286);
                                      v192 = v236;
                                    }
                                    v281 = a11;
                                    v282 = v190;
                                    v283 = v122;
                                    v284 = v77;
                                    if ( v303.right - v303.left == prclDest.right - prclDest.left
                                      && v303.bottom - v303.top == prclDest.bottom - prclDest.top )
                                    {
                                      BYTE1(v281) = BYTE1(a11) & 0xFE;
                                    }
                                    if ( (*(_DWORD *)(v192 + 112) & 0x10000) != 0 )
                                      v197 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v166 + 3288);
                                    else
                                      v197 = EngAlphaBlend;
                                    if ( v191 )
                                      v145 = v191 + 24;
                                    v14 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, RECTL *, int *, int, int, int, ULONG))v197)(
                                            v192 + 24,
                                            v145,
                                            v307,
                                            v231,
                                            &v303,
                                            &prclDest,
                                            &v281,
                                            pptfx,
                                            prcl,
                                            pptl,
                                            iMode);
                                    goto LABEL_392;
                                  }
                                  v196 = 87;
                                }
                                else
                                {
                                  v196 = 6;
                                }
                                EngSetLastError(v196);
                                v14 = 0;
LABEL_392:
                                SURFMEM::~SURFMEM((SURFMEM *)&v243);
                                SURFMEM::~SURFMEM((SURFMEM *)&v240);
                                SURFMEM::~SURFMEM((SURFMEM *)&v230);
                                if ( v77 )
                                {
                                  cEntries = (int)v77[1].cEntries;
                                  if ( (int)cEntries < 0 )
                                  {
                                    if ( (_DWORD)cEntries == -1 )
                                      FreeThreadBufferWithTag(v77);
                                  }
                                  else
                                  {
                                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                                    v99 = *(XLATEOBJ **)v224;
                                    v122 = *(_QWORD *)v227;
                                  }
                                }
                                if ( v122 )
                                {
                                  v199 = *(int *)(v122 + 36);
                                  if ( (int)v199 < 0 )
                                  {
                                    if ( (_DWORD)v199 == -1 )
                                      FreeThreadBufferWithTag(v122);
                                  }
                                  else
                                  {
                                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v199);
                                    v99 = *(XLATEOBJ **)v224;
                                  }
                                }
                                if ( v99 )
                                {
                                  v200 = (int)v99[1].cEntries;
                                  if ( (int)v200 < 0 )
                                  {
                                    if ( (_DWORD)v200 == -1 )
                                      FreeThreadBufferWithTag(v99);
                                  }
                                  else
                                  {
                                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v200);
                                  }
                                }
                                if ( v234 )
                                {
                                  v201 = *((int *)v234 + 9);
                                  if ( (int)v201 < 0 )
                                  {
                                    if ( (_DWORD)v201 == -1 )
                                      FreeThreadBufferWithTag(v234);
                                  }
                                  else
                                  {
                                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v201);
                                  }
                                }
                                if ( v229[0] )
                                {
                                  v202 = *(_DWORD *)(v229[0] + 36LL);
                                  if ( v202 >= 0 )
                                  {
                                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8
                                                                                                 * *(int *)(v229[0] + 36LL));
                                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v288);
                                    DCOBJ::~DCOBJ((DCOBJ *)v253);
                                    DCOBJ::~DCOBJ((DCOBJ *)v248);
                                    return v14;
                                  }
                                  if ( v202 == -1 )
                                  {
                                    FreeThreadBufferWithTag(v229[0]);
                                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v288);
                                    DCOBJ::~DCOBJ((DCOBJ *)v253);
                                    DCOBJ::~DCOBJ((DCOBJ *)v248);
                                    return v14;
                                  }
                                }
                                goto LABEL_421;
                              }
                              goto LABEL_369;
                            }
                            if ( gppalRGB )
                            {
                              v129 = *(_DWORD *)(v39 + 56);
                              v277 = v233;
                              v279 = v233;
                              v275 = gppalRGB;
                              v264 = ghsemPalette;
                              GreAcquireSemaphore(ghsemPalette);
                              v130 = xlateTable;
                              v131 = 0;
                              v132 = *(_QWORD *)(v39 + 136);
                              do
                              {
                                if ( v132 == v39 )
                                  v133 = *(_DWORD *)(v39 + 32);
                                else
                                  v133 = *(_DWORD *)(v132 + 32);
                                if ( *((_DWORD *)v130 + 8 * v129 + 4) == v133 )
                                {
                                  v134 = XEPALOBJ::ulTime((XEPALOBJ *)&v275);
                                  if ( *(_DWORD *)((char *)v130 + v135 + 20) == v134 )
                                  {
                                    v136 = XEPALOBJ::ulTime((XEPALOBJ *)&v277);
                                    if ( *(_DWORD *)((char *)v130 + v137 + 28) == v136 )
                                    {
                                      v138 = *(_DWORD **)((char *)v130 + v137 + 8);
                                      *(_QWORD *)v227 = v138;
                                      v139 = v138[19];
                                      if ( (v139 & 0x6000) == 0 )
                                      {
                                        if ( (v138[1] & 4) == 0 && (v139 & 0x100) == 0
                                          || (v138[1] & 4) != 0
                                          && v222 == v138[6]
                                          && (v140 = XEPALOBJ::ulTime((XEPALOBJ *)&v279),
                                              *(_DWORD *)((char *)v130 + v141 + 24) == v140)
                                          || (v139 & 0x100) != 0 && v216 == v138[7] && v220 == v138[8] )
                                        {
                                          _InterlockedIncrement((volatile signed __int32 *)v130 + 8 * v129);
                                          *(_DWORD *)(v39 + 56) = v129;
                                          SEMOBJ::vUnlock((SEMOBJ *)&v264);
                                          v99 = *(XLATEOBJ **)v224;
                                          LODWORD(v123) = 1;
                                          v122 = *(_QWORD *)v227;
                                          goto LABEL_265;
                                        }
                                      }
                                    }
                                  }
                                }
                                ++v131;
                                v129 = ((_BYTE)v129 + 1) & 7;
                              }
                              while ( v131 < 8 );
                              if ( ghsemPalette )
                              {
                                EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                                GreReleaseSemaphoreInternal(ghsemPalette);
                              }
                            }
                          }
                          v123 = CreateXlateObject(0LL, 0LL, v39, gppalRGB, v119, v119, v216, v220, v222, 0);
                          *(_QWORD *)v227 = v123;
                          v122 = v123;
                          if ( v123 )
                          {
                            if ( v39 && gppalRGB && (*(_DWORD *)(v123 + 76) & 0x200) == 0 )
                              EXLATEOBJ::vAddToCache(v227, v39, gppalRGB, v119, v119);
                            LODWORD(v123) = 1;
                          }
LABEL_265:
                          v77 = xloIdent;
                          goto LABEL_266;
                        }
                        if ( gppalRGB )
                        {
                          v106 = *((_DWORD *)v73 + 14);
                          v274 = v72;
                          v265 = v72;
                          v276 = gppalRGB;
                          v266 = ghsemPalette;
                          GreAcquireSemaphore(ghsemPalette);
                          v107 = (XLATEOBJ *)*((_QWORD *)v73 + 17);
                          v108 = 0;
                          v109 = xlateTable;
                          for ( pxlo = v107; ; v107 = pxlo )
                          {
                            if ( v107 == (XLATEOBJ *)v73 )
                              v110 = *((_DWORD *)v73 + 8);
                            else
                              v110 = *(_DWORD *)&v107[1].iSrcType;
                            if ( *((_DWORD *)v109 + 8 * v106 + 4) == v110 )
                            {
                              v111 = XEPALOBJ::ulTime((XEPALOBJ *)&v276);
                              if ( *(_DWORD *)((char *)v109 + v112 + 20) == v111 )
                              {
                                v113 = XEPALOBJ::ulTime((XEPALOBJ *)&v274);
                                if ( *(_DWORD *)((char *)v109 + v114 + 28) == v113 )
                                {
                                  v115 = *(_DWORD **)((char *)v109 + v114 + 8);
                                  *(_QWORD *)v224 = v115;
                                  v116 = v115[19];
                                  if ( (v116 & 0x6000) == 0 )
                                  {
                                    if ( (v115[1] & 4) == 0 && (v116 & 0x100) == 0
                                      || (v115[1] & 4) != 0
                                      && v222 == v115[6]
                                      && (v117 = XEPALOBJ::ulTime((XEPALOBJ *)&v265),
                                          *(_DWORD *)((char *)v109 + v118 + 24) == v117)
                                      || (v116 & 0x100) != 0 && v215 == v115[7] && v219 == v115[8] )
                                    {
                                      _InterlockedIncrement((volatile signed __int32 *)v109 + 8 * v106);
                                      *((_DWORD *)v73 + 14) = v106;
                                      SEMOBJ::vUnlock((SEMOBJ *)&v266);
                                      v99 = *(XLATEOBJ **)v224;
                                      LODWORD(v100) = 1;
                                      goto LABEL_216;
                                    }
                                  }
                                }
                              }
                            }
                            ++v108;
                            v106 = ((_BYTE)v106 + 1) & 7;
                            if ( v108 >= 8 )
                              break;
                          }
                          if ( ghsemPalette )
                          {
                            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                            GreReleaseSemaphoreInternal(ghsemPalette);
                          }
                        }
                      }
                      v100 = CreateXlateObject(0LL, 0LL, v73, gppalRGB, v72, v72, v215, v219, v222, 0);
                      *(_QWORD *)v224 = v100;
                      v99 = (XLATEOBJ *)v100;
                      if ( v100 )
                      {
                        if ( v73 && gppalRGB && (*(_DWORD *)(v100 + 76) & 0x200) == 0 )
                          EXLATEOBJ::vAddToCache(v224, v73, gppalRGB, v72, v72);
                        LODWORD(v100) = 1;
                      }
LABEL_216:
                      v77 = xloIdent;
                      goto LABEL_217;
                    }
LABEL_421:
                    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v288);
                    DCOBJ::~DCOBJ((DCOBJ *)v253);
                    DCOBJ::~DCOBJ((DCOBJ *)v248);
                    return v14;
                  }
                  v44 = UserScreenAccessCheck(512LL);
                }
                if ( v44 )
                  goto LABEL_74;
              }
LABEL_419:
              EngSetLastError(6u);
              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v288);
              DCOBJ::~DCOBJ((DCOBJ *)v253);
              DCOBJ::~DCOBJ((DCOBJ *)v248);
              return 0LL;
            }
            v42 = ((__int64 (*)(void))UserScreenAccessCheck)();
          }
          if ( !v42 )
            goto LABEL_419;
          goto LABEL_66;
        }
      }
      else
      {
LABEL_422:
        v14 = 0;
        EngSetLastError(0x57u);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v253);
      DCOBJ::~DCOBJ((DCOBJ *)v248);
      return v14;
    }
  }
}
