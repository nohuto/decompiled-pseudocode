/*
 * XREFs of NtGdiAlphaBlend @ 0x1C0044190
 * Callers:
 *     BltIcon @ 0x1C00153C8 (BltIcon.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E554 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 * Callees:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0041720 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0043CE0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0044040 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0046230 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     EngCopyBits @ 0x1C00BC250 (EngCopyBits.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x1C00F05E0 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00F0B1C (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C0263B24 (-bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0263BDC (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        POINTL a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v14; // esi
  __int64 v15; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // edi
  int v20; // r15d
  unsigned __int64 v21; // rbx
  int v22; // r14d
  unsigned __int64 v23; // rcx
  int v24; // r8d
  float v25; // xmm4_4
  int left; // edx
  LONG top; // r10d
  LONG right; // eax
  LONG bottom; // r9d
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  LONG v33; // ecx
  FIX v34; // r9d
  FIX x; // eax
  FIX y; // r11d
  FIX v37; // ecx
  int v38; // r10d
  __int64 v39; // r9
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 v46; // r13
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  int v52; // ecx
  _DWORD *v53; // rcx
  int *v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r11
  int *v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // r11
  unsigned __int64 v60; // rax
  int v61; // r11d
  int v62; // edx
  LONG v63; // r9d
  LONG v64; // r8d
  LONG v65; // r10d
  struct PALETTE *v66; // rax
  int v67; // ecx
  LONG v68; // edx
  bool v69; // cc
  int v70; // r8d
  int v71; // r8d
  int v72; // edx
  __int64 v73; // rax
  HDC v74; // rcx
  char v75; // di
  int v76; // eax
  __int64 v77; // rsi
  HDC v78; // rdi
  _DWORD *v79; // rax
  int v80; // ecx
  __int64 v81; // rax
  XLATEOBJ *v82; // rbx
  __int64 v83; // rax
  HDC v84; // rax
  int v85; // edx
  __int64 v86; // rax
  int v87; // ecx
  int v88; // eax
  HDC v89; // rax
  struct _XLATETABLE near *v90; // r10
  unsigned int v91; // r11d
  int v92; // eax
  int v93; // eax
  __int64 v94; // r8
  int v95; // eax
  __int64 v96; // r8
  _DWORD *v97; // rdx
  int v98; // r9d
  int v99; // eax
  __int64 v100; // r8
  __int64 XlateObject; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  XLATEOBJ *v104; // r13
  __int64 v105; // rax
  __int64 v106; // rax
  HDC v107; // rax
  int v108; // edx
  __int64 v109; // rax
  int v110; // ecx
  unsigned int v111; // r15d
  XLATEOBJ *v112; // rax
  unsigned int v113; // r11d
  struct _XLATETABLE near *v114; // r10
  int v115; // eax
  int v116; // eax
  __int64 v117; // r8
  int v118; // eax
  __int64 v119; // r8
  _DWORD *v120; // rdx
  int v121; // r9d
  int v122; // eax
  __int64 v123; // r8
  __int64 v124; // rsi
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // r15
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  int v131; // edx
  __int64 v132; // rax
  int v133; // ecx
  unsigned int v134; // ebx
  struct _XLATETABLE near *v135; // r10
  unsigned int v136; // r11d
  __int64 v137; // r15
  int v138; // eax
  int v139; // eax
  __int64 v140; // r8
  int v141; // eax
  __int64 v142; // r8
  _DWORD *v143; // rdx
  int v144; // r9d
  int v145; // eax
  __int64 v146; // r8
  __int64 v147; // rcx
  __int64 v148; // rax
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // rax
  int v152; // edx
  __int64 v153; // rax
  int v154; // ecx
  unsigned int v155; // ebx
  __int64 v156; // rax
  unsigned int v157; // r11d
  struct _XLATETABLE near *v158; // r10
  int v159; // eax
  int v160; // eax
  __int64 v161; // r8
  int v162; // eax
  __int64 v163; // r8
  XLATEOBJ *v164; // rdx
  FLONG flXlate; // r9d
  int v166; // eax
  __int64 v167; // r8
  __int64 v168; // rax
  struct REGION *v169; // rdx
  __int64 v170; // rdx
  __int64 v171; // r14
  int v172; // eax
  _DWORD *v173; // rsi
  bool v174; // zf
  unsigned int v176; // edx
  struct PALETTE *v177; // rsi
  int v178; // r9d
  int v179; // r8d
  ULONG v180; // ecx
  SURFOBJ *v181; // rcx
  LONG v182; // r10d
  unsigned __int64 v183; // r9
  unsigned __int64 v184; // r11
  __int64 v185; // rsi
  _DWORD *v186; // rdx
  __int64 v187; // rdi
  LONG v188; // eax
  unsigned __int64 v189; // r8
  _DWORD *v190; // r8
  unsigned __int64 v191; // rdx
  SURFOBJ *v192; // rdx
  SURFOBJ *v193; // rcx
  int inited; // eax
  XLATEOBJ *v195; // rsi
  __int64 v196; // r12
  __int64 v197; // rdx
  __int64 v198; // rdx
  __int64 v199; // rdx
  __int64 v200; // rdx
  __int64 v201; // r10
  __int64 v202; // r9
  struct ECLIPOBJ *v203; // rdx
  __int64 v204; // r8
  ULONG v205; // ecx
  BOOL (__stdcall *v206)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 v207; // rdx
  __int64 cEntries; // rax
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rcx
  int v212; // ecx
  int v213; // esi
  int v214; // [rsp+70h] [rbp-90h]
  int v215; // [rsp+70h] [rbp-90h]
  int v216; // [rsp+70h] [rbp-90h]
  int v217; // [rsp+70h] [rbp-90h]
  int DIB; // [rsp+70h] [rbp-90h]
  int v219; // [rsp+74h] [rbp-8Ch]
  int v220; // [rsp+74h] [rbp-8Ch]
  int v221; // [rsp+74h] [rbp-8Ch]
  int v222; // [rsp+74h] [rbp-8Ch]
  int v223; // [rsp+78h] [rbp-88h]
  int v224; // [rsp+78h] [rbp-88h]
  int v225; // [rsp+78h] [rbp-88h]
  int v226; // [rsp+78h] [rbp-88h]
  int v227; // [rsp+7Ch] [rbp-84h]
  _DWORD *p_iUniq; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v229[2]; // [rsp+88h] [rbp-78h] BYREF
  int v230[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v231; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v232; // [rsp+A8h] [rbp-58h]
  int v233[2]; // [rsp+B0h] [rbp-50h] BYREF
  POINTFIX v234; // [rsp+B8h] [rbp-48h]
  XLATEOBJ *pxlo; // [rsp+C0h] [rbp-40h]
  __int64 v236; // [rsp+C8h] [rbp-38h]
  struct _RECTL v237; // [rsp+D0h] [rbp-30h] BYREF
  XLATEOBJ *v238; // [rsp+E0h] [rbp-20h] BYREF
  POINTL pptlSrc; // [rsp+E8h] [rbp-18h] BYREF
  HDC v240; // [rsp+F0h] [rbp-10h]
  int v241; // [rsp+F8h] [rbp-8h]
  HDC v242; // [rsp+100h] [rbp+0h] BYREF
  __int64 v243; // [rsp+108h] [rbp+8h]
  __int64 v244; // [rsp+110h] [rbp+10h]
  __int64 v245; // [rsp+118h] [rbp+18h] BYREF
  int v246; // [rsp+120h] [rbp+20h]
  int v247; // [rsp+124h] [rbp+24h]
  __int64 v248; // [rsp+128h] [rbp+28h] BYREF
  char v249; // [rsp+130h] [rbp+30h]
  int v250; // [rsp+134h] [rbp+34h]
  __int64 v251; // [rsp+138h] [rbp+38h] BYREF
  char v252; // [rsp+140h] [rbp+40h]
  int v253; // [rsp+144h] [rbp+44h]
  __int64 i; // [rsp+148h] [rbp+48h]
  struct PALETTE *v255; // [rsp+150h] [rbp+50h]
  __int64 v256; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v257; // [rsp+160h] [rbp+60h] BYREF
  int v258; // [rsp+168h] [rbp+68h]
  int v259; // [rsp+16Ch] [rbp+6Ch]
  _DWORD v260[2]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v261; // [rsp+178h] [rbp+78h]
  __int64 v262; // [rsp+188h] [rbp+88h]
  int v263; // [rsp+190h] [rbp+90h] BYREF
  __int64 v264; // [rsp+194h] [rbp+94h]
  _BYTE v265[12]; // [rsp+19Ch] [rbp+9Ch]
  __int64 v266; // [rsp+1A8h] [rbp+A8h]
  _DWORD v267[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v268; // [rsp+1B8h] [rbp+B8h]
  __int128 v269; // [rsp+1C0h] [rbp+C0h]
  __int64 v270; // [rsp+1D0h] [rbp+D0h] BYREF
  struct PALETTE *v271; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v272; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v273; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v274; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v275; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v276; // [rsp+200h] [rbp+100h] BYREF
  __int64 v277; // [rsp+208h] [rbp+108h] BYREF
  __int64 v278; // [rsp+210h] [rbp+110h] BYREF
  __int64 v279; // [rsp+218h] [rbp+118h] BYREF
  __int64 v280; // [rsp+220h] [rbp+120h] BYREF
  __int64 v281; // [rsp+228h] [rbp+128h] BYREF
  __int64 v282; // [rsp+230h] [rbp+130h] BYREF
  struct PALETTE *v283; // [rsp+238h] [rbp+138h] BYREF
  __int64 v284; // [rsp+240h] [rbp+140h] BYREF
  __int64 v285; // [rsp+248h] [rbp+148h] BYREF
  int v286; // [rsp+250h] [rbp+150h] BYREF
  XLATEOBJ *v287; // [rsp+258h] [rbp+158h]
  __int64 v288; // [rsp+260h] [rbp+160h]
  XLATEOBJ *v289; // [rsp+268h] [rbp+168h]
  struct _RECTL v290; // [rsp+270h] [rbp+170h]
  RECTL v291; // [rsp+280h] [rbp+180h] BYREF
  _OWORD v292[2]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v293; // [rsp+2B0h] [rbp+1B0h]
  __int64 v294; // [rsp+2B8h] [rbp+1B8h]
  char v295; // [rsp+2C0h] [rbp+1C0h]
  int v296; // [rsp+2C4h] [rbp+1C4h]
  __int64 v297; // [rsp+2C8h] [rbp+1C8h]
  __int64 v298; // [rsp+2D0h] [rbp+1D0h]
  int v299; // [rsp+2D8h] [rbp+1D8h]
  __int64 v300; // [rsp+2E0h] [rbp+1E0h]
  __int64 v301; // [rsp+2E8h] [rbp+1E8h]
  __int64 v302; // [rsp+2F0h] [rbp+1F0h]
  __int64 v303; // [rsp+2F8h] [rbp+1F8h]
  __int64 v304; // [rsp+300h] [rbp+200h]
  __int64 v305; // [rsp+308h] [rbp+208h]
  __int64 v306; // [rsp+310h] [rbp+210h]
  __int64 v307; // [rsp+318h] [rbp+218h]
  __int64 v308; // [rsp+328h] [rbp+228h]
  __int64 v309; // [rsp+330h] [rbp+230h]
  __int64 v310; // [rsp+338h] [rbp+238h]
  __int64 v311; // [rsp+340h] [rbp+240h]
  struct _RECTL v312; // [rsp+350h] [rbp+250h] BYREF
  RECTL prclDest; // [rsp+360h] [rbp+260h] BYREF
  struct _RECTL v314; // [rsp+370h] [rbp+270h] BYREF
  __int64 v315; // [rsp+380h] [rbp+280h] BYREF
  int v316; // [rsp+388h] [rbp+288h]
  int v317; // [rsp+38Ch] [rbp+28Ch]
  _BYTE v318[4]; // [rsp+390h] [rbp+290h] BYREF
  char v319[76]; // [rsp+394h] [rbp+294h] BYREF
  __int64 v320; // [rsp+3E0h] [rbp+2E0h]
  int v321; // [rsp+3E8h] [rbp+2E8h]
  int v322; // [rsp+410h] [rbp+310h]
  __int64 v323; // [rsp+420h] [rbp+320h]
  struct _POINTFIX v324; // [rsp+430h] [rbp+330h] BYREF
  FIX v325; // [rsp+438h] [rbp+338h]
  int v326; // [rsp+43Ch] [rbp+33Ch]
  int v327; // [rsp+440h] [rbp+340h]
  FIX v328; // [rsp+444h] [rbp+344h]
  FIX v329; // [rsp+448h] [rbp+348h]
  int v330; // [rsp+44Ch] [rbp+34Ch]
  struct _POINTL v331; // [rsp+450h] [rbp+350h] BYREF
  int v332; // [rsp+458h] [rbp+358h]
  int v333; // [rsp+45Ch] [rbp+35Ch]
  int v334; // [rsp+460h] [rbp+360h]
  int v335; // [rsp+464h] [rbp+364h]
  POINTFIX pptfx; // [rsp+468h] [rbp+368h] BYREF
  POINTFIX v337; // [rsp+470h] [rbp+370h]
  POINTFIX v338; // [rsp+478h] [rbp+378h]

  v14 = 1;
  pptlSrc = a6;
  v230[0] = a7;
  LODWORD(pxlo) = a2;
  LODWORD(p_iUniq) = a4;
  v233[0] = a3;
  v240 = a1;
  if ( (_BYTE)a11 || (a11 & 0xFE000000) != 0 )
    goto LABEL_444;
  if ( !a9 || !a10 )
    return 1LL;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
LABEL_444:
    EngSetLastError(0x57u);
    return 0LL;
  }
  v234.x = BYTE1(a11) & 0x80;
  LODWORD(v15) = 0;
  BYTE1(a11) &= ~0x80u;
  v229[1] = 0LL;
  v229[0] = HmgLockEx(a1, 1LL, 0LL);
  if ( !v229[0] )
    goto LABEL_10;
  if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v229) )
  {
    if ( !v229[0] || (*(_DWORD *)(v229[0] + 36LL) & 0x10000) != 0 )
      goto LABEL_10;
    v231 = 0LL;
    v232 = 0LL;
    v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HmgLockEx)(pptlSrc, 1LL, 0LL);
    v231 = v17;
    v18 = v17;
    if ( !v17 )
      goto LABEL_25;
    if ( HIDWORD(v232) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v17 + 48) + 56LL) & 0x8000) == 0 )
      {
LABEL_23:
        _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
LABEL_24:
        v231 = 0LL;
LABEL_25:
        v14 = 0;
        EngSetLastError(0x57u);
LABEL_26:
        LODWORD(v15) = v14;
        goto LABEL_27;
      }
      v19 = *(_DWORD *)(v17 + 2504);
      if ( v19 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v18 = v231;
        goto LABEL_23;
      }
      LODWORD(v15) = 0;
    }
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v231) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v231 + 12));
      goto LABEL_24;
    }
    if ( !v231 )
      goto LABEL_25;
    bSpDwmValidateSurface((struct XDCOBJ *)&v231, v230[0], a8, a9, a10);
    bSpDwmValidateSurface((struct XDCOBJ *)v229, a2, a3, a4, a5);
    v246 = *(_DWORD *)(*(_QWORD *)(v229[0] + 80LL) + 68LL);
    v20 = *(_DWORD *)(*(_QWORD *)(v229[0] + 80LL) + 312LL) & 1;
    v247 = v20;
    if ( (*(_DWORD *)(*(_QWORD *)(v229[0] + 80LL) + 352LL) & 0xE000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v245, (struct XDCOBJ *)v229, 0x204u, 0);
      v20 = v247;
      v21 = v245;
    }
    else
    {
      v21 = v229[0] + 336LL;
      v245 = v229[0] + 336LL;
    }
    v258 = *(_DWORD *)(*(_QWORD *)(v231 + 80) + 68LL);
    v22 = *(_DWORD *)(*(_QWORD *)(v231 + 80) + 312LL) & 1;
    v259 = v22;
    if ( (*(_DWORD *)(*(_QWORD *)(v231 + 80) + 352LL) & 0xE000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v257, (struct XDCOBJ *)&v231, 0x204u, 0);
      v23 = v257;
      v20 = v247;
      v21 = v245;
      v22 = v259;
    }
    else
    {
      v23 = v231 + 336;
      v257 = v231 + 336;
    }
    v24 = *(_DWORD *)(v23 + 32);
    if ( (v24 & 1) == 0 )
      goto LABEL_25;
    v25 = 0.0;
    if ( !v22 && (*(float *)v23 < 0.0 || *(float *)(v23 + 12) < 0.0) )
      goto LABEL_25;
    left = v230[0];
    top = a8;
    right = v230[0] + a9;
    bottom = a8 + a10;
    prclDest.left = v230[0];
    prclDest.top = a8;
    prclDest.right = v230[0] + a9;
    prclDest.bottom = a8 + a10;
    if ( (v24 & 0x43) != 0x43 )
    {
      bCvtPts1(v23, &prclDest, 2LL);
      bottom = prclDest.bottom;
      right = prclDest.right;
      top = prclDest.top;
      left = prclDest.left;
    }
    if ( v22 )
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
    if ( (*(_DWORD *)(v21 + 32) & 1) != 0 && (v20 || v25 <= *(float *)v21 && v25 <= *(float *)(v21 + 12)) )
    {
      *(_QWORD *)&v237.left = __PAIR64__(a3, a2);
      v237.right = a2 + (_DWORD)p_iUniq;
      v237.bottom = a3 + a5;
      v314 = v237;
      v30 = *(_DWORD *)(v21 + 32) & 0x43;
      v241 = 0;
      if ( (_BYTE)v30 != 67 )
        bCvtPts1(v21, &v314, 2LL);
      v31 = v314.left;
      v32 = v314.right;
      if ( v20 )
      {
        v31 = v314.left + 1;
        v32 = v314.right + 1;
        ++v314.left;
        ++v314.right;
      }
      if ( v31 > v32 )
      {
        v314.left = v32;
        v314.right = v31;
      }
      v33 = v314.top;
      if ( v314.top > v314.bottom )
      {
        v314.top = v314.bottom;
        v314.bottom = v33;
      }
    }
    else
    {
      v241 = 1;
      v332 = a2 + (_DWORD)p_iUniq;
      v331.x = a2;
      v335 = a3 + a5;
      v331.y = a3;
      v333 = a3;
      v334 = a2;
      EXFORMOBJ::bXform((EXFORMOBJ *)&v245, &v331, &v324, 3uLL);
      v34 = v325;
      x = v324.x;
      if ( (*(_DWORD *)(v245 + 32) & 1) != 0 )
      {
        if ( v324.x > v325 )
        {
          x = v324.x + 16;
          v34 = v325 + 16;
          v327 += 16;
          v324.x += 16;
          v325 += 16;
        }
        y = v324.y;
        v37 = v328;
        v38 = v326;
        if ( v324.y > v328 )
        {
          y = v324.y + 16;
          v38 = v326 + 16;
          v37 = v328 + 16;
          v324.y += 16;
          v328 += 16;
          v326 += 16;
        }
      }
      else
      {
        v37 = v328;
        v38 = v326;
        y = v324.y;
      }
      v329 = v34 + v327 - x;
      v330 = v37 + v38 - y;
      v39 = v34 > x == v34 > v329;
      LODWORD(v15) = 0;
      v40 = v38 > y == v38 > v330;
      if ( *(&v324.x + 2 * v39) > *(&v324.x + 2 * (v39 ^ 3)) )
        LODWORD(v39) = v39 ^ 3;
      if ( *(&v324.y + 2 * v40) > *(&v324.y + 2 * (v40 ^ 3LL)) )
        v40 ^= 3u;
      v237.left = (*(&v324.x + 2 * (int)v39) + 15) >> 4;
      v237.top = (*(&v324.y + 2 * v40) + 15) >> 4;
      v237.right = (*(&v324.x + 2 * ((int)v39 ^ 3LL)) + 15) >> 4;
      v237.bottom = (*(&v324.y + 2 * (v40 ^ 3LL)) + 15) >> 4;
      v314 = v237;
    }
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v314) )
      goto LABEL_26;
    if ( (*(_DWORD *)(v229[0] + 36LL) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v229, (struct ERECTL *)&v314);
    v294 = 0LL;
    memset(v292, 0, sizeof(v292));
    v295 = 0;
    v296 = 0;
    v301 = 0LL;
    v303 = 0LL;
    v293 = 0LL;
    v299 = 0;
    v297 = 0LL;
    v298 = 0LL;
    v304 = 0LL;
    v307 = 0LL;
    v305 = 0LL;
    v306 = 0LL;
    v310 = 0LL;
    v308 = 0LL;
    v309 = 0LL;
    v300 = 0LL;
    v302 = 0LL;
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v292, (struct XDCOBJ *)v229, (struct XDCOBJ *)&v231) )
    {
      v213 = XDCOBJ::bFullScreen((XDCOBJ *)&v231);
      v14 = XDCOBJ::bFullScreen((XDCOBJ *)v229) | v213;
      goto LABEL_442;
    }
    v42 = v229[0];
    v43 = *(_QWORD *)(v229[0] + 512LL);
    v244 = v43;
    if ( !v43 )
      goto LABEL_442;
    v44 = *(_QWORD *)(v229[0] + 96LL);
    v45 = *(_QWORD *)(v43 + 120);
    v243 = v44;
    v46 = *(_QWORD *)(v231 + 512);
    v236 = v46;
    if ( !v46 )
      goto LABEL_442;
    if ( *(_DWORD *)(v46 + 592) && ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v46 + 592) )
      goto LABEL_440;
    v47 = *(_DWORD *)(v46 + 112);
    if ( (v47 & 0x800) != 0 )
    {
      v48 = UserSurfaceAccessCheck(*(_QWORD *)(v46 + 584));
    }
    else
    {
      if ( (v47 & 0x10000000) == 0 )
      {
LABEL_87:
        if ( (*(_DWORD *)(v43 + 116) & 8) == 0 && !*(_QWORD *)(v43 + 216) || (*(_WORD *)(v43 + 102) & 0x200) == 0 )
        {
          v49 = *(_DWORD *)(v43 + 112);
          if ( (v49 & 0x800) != 0 )
          {
            v50 = UserSurfaceAccessCheck(*(_QWORD *)(v43 + 584));
          }
          else
          {
            if ( (v49 & 0x10000000) == 0 )
            {
LABEL_95:
              if ( (a11 & 0x1000000) != 0 )
              {
                v51 = *(_QWORD *)(v46 + 120);
                if ( *(_DWORD *)(v46 + 96) != 6
                  || !v51
                  || (v52 = *(_DWORD *)(v51 + 24), (v52 & 8) == 0)
                  && ((v52 & 2) == 0
                   || (v53 = *(_DWORD **)(v51 + 128), *v53 != 16711680)
                   || v53[1] != 65280
                   || v53[2] != 255) )
                {
                  EngSetLastError(0x57u);
                  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v292);
                  goto LABEL_27;
                }
              }
              v290 = v314;
              if ( (*(_DWORD *)(v229[0] + 40LL) & 1) != 0 )
                v54 = (int *)(v229[0] + 1416LL);
              else
                v54 = (int *)(v229[0] + 1408LL);
              v55 = *v54;
              if ( (unsigned __int64)(v55 + v314.left + 0x80000000LL) > 0xFFFFFFFF )
                goto LABEL_439;
              if ( (unsigned __int64)(v55 + v314.right + 0x80000000LL) > 0xFFFFFFFF )
                goto LABEL_439;
              v56 = v54[1];
              if ( (unsigned __int64)(v56 + v314.top + 0x80000000LL) > 0xFFFFFFFF
                || (unsigned __int64)(v56 + v314.bottom + 0x80000000LL) > 0xFFFFFFFF )
              {
                goto LABEL_439;
              }
              v314.left += v55;
              v314.right += *v54;
              v314.top += v54[1];
              v314.bottom += v54[1];
              v57 = (int *)((*(_DWORD *)(v231 + 40) & 1) != 0 ? v231 + 1416 : v231 + 1408);
              v58 = *v57;
              if ( (unsigned __int64)(v58 + prclDest.left + 0x80000000LL) > 0xFFFFFFFF
                || (unsigned __int64)(v58 + prclDest.right + 0x80000000LL) > 0xFFFFFFFF
                || (v59 = v57[1], (unsigned __int64)(v59 + prclDest.top + 0x80000000LL) > 0xFFFFFFFF)
                || (v60 = v59 + prclDest.bottom + 0x80000000LL, v61 = -1, v60 > 0xFFFFFFFF) )
              {
LABEL_439:
                EngSetLastError(0x216u);
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v292);
LABEL_27:
                if ( v231 )
                {
                  XDCOBJ::RestoreAttributes((XDCOBJ *)&v231);
                  _InterlockedDecrement((volatile signed __int32 *)(v231 + 12));
                }
                goto LABEL_11;
              }
              v62 = v58 + prclDest.left;
              prclDest.left += v58;
              v63 = *v57 + prclDest.right;
              prclDest.right = v63;
              v64 = v57[1] + prclDest.top;
              prclDest.top = v64;
              v65 = v57[1] + prclDest.bottom;
              prclDest.bottom = v65;
              v66 = *(struct PALETTE **)(v46 + 48);
              v255 = v66;
              if ( *(_WORD *)(v46 + 100) == 1 && v66 && (*((_DWORD *)v66 + 14) & 0x20000) != 0 )
              {
                v67 = *((_DWORD *)v66 + 652);
                if ( v62 >= v67 )
                {
                  v68 = *((_DWORD *)v66 + 653);
                  if ( v64 >= v68 && v63 <= *(_DWORD *)(v46 + 56) + v67 )
                  {
                    v69 = v65 <= v68 + *(_DWORD *)(v46 + 60);
                    goto LABEL_129;
                  }
                }
              }
              else if ( v62 >= 0 && v64 >= 0 && v63 <= *(_DWORD *)(v46 + 56) )
              {
                v69 = v65 <= *(_DWORD *)(v46 + 60);
LABEL_129:
                v70 = 0;
                if ( v69 )
                  goto LABEL_131;
              }
              v70 = 1;
LABEL_131:
              if ( v46 == v244
                && (v291 = prclDest, ERECTL::operator*=(&v291, &v314), !(unsigned int)ERECTL::bEmpty((ERECTL *)&v291))
                || v70 )
              {
                EngSetLastError(0x57u);
                v14 = 0;
                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v292);
                goto LABEL_26;
              }
              if ( BYTE2(a11) != 0xFF || (a11 & 0x1000000) != 0 || (a11 & 0x100) != 0 )
              {
                v76 = 1;
              }
              else
              {
                v71 = v233[0];
                v72 = (int)pxlo;
                v73 = *(_QWORD *)(v229[0] + 80LL);
                v74 = v240;
                v75 = *(_BYTE *)(v73 + 75);
                *(_BYTE *)(v73 + 75) = 3;
                v14 = GreStretchBltInternal(
                        v74,
                        v72,
                        v71,
                        a5,
                        *(_QWORD *)&pptlSrc,
                        v230[0],
                        a8,
                        a9,
                        a10,
                        13369376,
                        v61,
                        0);
                v76 = 0;
                *(_BYTE *)(*(_QWORD *)(v229[0] + 80LL) + 75LL) = v75;
              }
              if ( (v76 & v14) == 0 )
                goto LABEL_442;
              v242 = 0LL;
              v77 = *(_QWORD *)(v231 + 96);
              v78 = *(HDC *)(v236 + 120);
              v79 = *(_DWORD **)(v231 + 80);
              v227 = v79[9];
              v80 = v79[8];
              LODWORD(p_iUniq) = v79[10];
              v219 = v80;
              if ( (v78
                 || v45
                 && ((*(_DWORD *)(v45 + 24) & 0x800) == 0
                  || (v81 = *(_QWORD *)(v44 + 80)) != 0 && v81 != *(_QWORD *)(v44 + 72)))
                && (v45
                 || ((_DWORD)v78[6] & 0x800) == 0
                 || (v83 = *(_QWORD *)(v44 + 80)) != 0 && v83 != *(_QWORD *)(v44 + 72)) )
              {
                if ( !v78 || !v45 )
                {
LABEL_180:
                  XlateObject = CreateXlateObject(0LL, 0LL, v78, v45, v77, v44, (_DWORD)p_iUniq, v219, v227, 0);
                  *(_QWORD *)v230 = XlateObject;
                  if ( XlateObject )
                  {
                    if ( v78 && v45 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                      EXLATEOBJ::vAddToCache((__int64)v230, v78, v45, v77, v44);
                    v214 = 1;
                  }
                  else
                  {
                    v214 = 0;
                  }
LABEL_187:
                  v82 = xloIdent;
                  goto LABEL_188;
                }
                v84 = (HDC)*((_QWORD *)v78 + 17);
                if ( v84 == v78 )
                  v85 = *((_DWORD *)v78 + 8);
                else
                  v85 = *((_DWORD *)v84 + 8);
                v86 = *(_QWORD *)(v45 + 136);
                if ( v86 == v45 )
                  v87 = *(_DWORD *)(v45 + 32);
                else
                  v87 = *(_DWORD *)(v86 + 32);
                if ( v85 != v87 )
                {
                  v88 = *((_DWORD *)v78 + 14);
                  v277 = v44;
                  v276 = v77;
                  v279 = v45;
                  LODWORD(pxlo) = v88;
                  v281 = ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v89 = (HDC)*((_QWORD *)v78 + 17);
                  v90 = xlateTable;
                  v91 = (unsigned int)pxlo;
                  v240 = v89;
                  v223 = 0;
                  while ( 1 )
                  {
                    if ( v89 == v78 )
                      v92 = *((_DWORD *)v78 + 8);
                    else
                      v92 = *((_DWORD *)v89 + 8);
                    if ( *((_DWORD *)v90 + 8 * v91 + 4) == v92 )
                    {
                      v93 = XEPALOBJ::ulTime((XEPALOBJ *)&v279);
                      if ( *(_DWORD *)((char *)v90 + v94 + 20) == v93 )
                      {
                        v95 = XEPALOBJ::ulTime((XEPALOBJ *)&v277);
                        if ( *(_DWORD *)((char *)v90 + v96 + 28) == v95 )
                        {
                          v97 = *(_DWORD **)((char *)v90 + v96 + 8);
                          *(_QWORD *)v230 = v97;
                          v98 = v97[19];
                          if ( (v98 & 0x6000) == 0 )
                          {
                            if ( (v97[1] & 4) == 0 && (v98 & 0x100) == 0
                              || (v97[1] & 4) != 0
                              && v227 == v97[6]
                              && (v99 = XEPALOBJ::ulTime((XEPALOBJ *)&v276), *(_DWORD *)((char *)v90 + v100 + 24) == v99)
                              || (v98 & 0x100) != 0 && (_DWORD)p_iUniq == v97[7] && v219 == v97[8] )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)v90 + 8 * v91);
                              *((_DWORD *)v78 + 14) = v91;
                              SEMOBJ::vUnlock((SEMOBJ *)&v281);
                              v214 = 1;
                              goto LABEL_187;
                            }
                          }
                        }
                      }
                    }
                    v91 = ((_BYTE)v91 + 1) & 7;
                    if ( (unsigned int)++v223 >= 8 )
                      break;
                    v89 = v240;
                  }
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
                  goto LABEL_180;
                }
              }
              v82 = xloIdent;
              *(_QWORD *)v230 = xloIdent;
              v214 = 1;
LABEL_188:
              v240 = *(HDC *)v230;
              v102 = *(_QWORD *)(v231 + 80);
              v224 = *(_DWORD *)(v102 + 32);
              v220 = *(_DWORD *)(v102 + 40);
              if ( !v78 )
              {
                if ( !gppalRGB )
                  goto LABEL_193;
                if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                {
                  v103 = *(_QWORD *)(v77 + 80);
                  if ( !v103 || v103 == *(_QWORD *)(v77 + 72) )
                    goto LABEL_193;
                }
              }
              if ( !gppalRGB && ((_DWORD)v78[6] & 0x800) != 0 )
              {
                v106 = *(_QWORD *)(v77 + 80);
                if ( !v106 )
                {
LABEL_193:
                  v104 = v82;
                  *(_QWORD *)v233 = v82;
                  LODWORD(v105) = 1;
                  goto LABEL_238;
                }
                if ( v106 == *(_QWORD *)(v77 + 72) )
                {
                  v104 = v82;
                  *(_QWORD *)v233 = v82;
                  LODWORD(v105) = (_DWORD)gppalRGB + 1;
                  goto LABEL_238;
                }
              }
              if ( v78 && gppalRGB )
              {
                v107 = (HDC)*((_QWORD *)v78 + 17);
                if ( v107 == v78 )
                  v108 = *((_DWORD *)v78 + 8);
                else
                  v108 = *((_DWORD *)v107 + 8);
                v109 = *((_QWORD *)gppalRGB + 17);
                if ( (struct PALETTE *)v109 == gppalRGB )
                  v110 = *((_DWORD *)gppalRGB + 8);
                else
                  v110 = *(_DWORD *)(v109 + 32);
                if ( v108 == v110 )
                {
                  v104 = v82;
                  *(_QWORD *)v233 = v82;
                  LODWORD(v105) = 1;
LABEL_238:
                  v215 = v105 & v214;
                  v124 = v243;
                  pxlo = v104;
                  v125 = *(_QWORD *)(v231 + 80);
                  v225 = *(_DWORD *)(v125 + 32);
                  v221 = *(_DWORD *)(v125 + 40);
                  if ( !v45 )
                  {
                    if ( !gppalRGB )
                      goto LABEL_243;
                    if ( (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                    {
                      v126 = *(_QWORD *)(v243 + 80);
                      if ( !v126 || v126 == *(_QWORD *)(v243 + 72) )
                        goto LABEL_243;
                    }
                  }
                  if ( !gppalRGB && (*(_DWORD *)(v45 + 24) & 0x800) != 0 )
                  {
                    v129 = *(_QWORD *)(v243 + 80);
                    if ( !v129 )
                    {
LABEL_243:
                      v127 = (__int64)v82;
                      p_iUniq = &v82->iUniq;
                      LODWORD(v128) = 1;
                      goto LABEL_287;
                    }
                    if ( v129 == *(_QWORD *)(v243 + 72) )
                    {
                      v127 = (__int64)v82;
                      p_iUniq = &v82->iUniq;
                      LODWORD(v128) = (_DWORD)gppalRGB + 1;
                      goto LABEL_287;
                    }
                  }
                  if ( v45 && gppalRGB )
                  {
                    v130 = *(_QWORD *)(v45 + 136);
                    if ( v130 == v45 )
                      v131 = *(_DWORD *)(v45 + 32);
                    else
                      v131 = *(_DWORD *)(v130 + 32);
                    v132 = *((_QWORD *)gppalRGB + 17);
                    if ( (struct PALETTE *)v132 == gppalRGB )
                      v133 = *((_DWORD *)gppalRGB + 8);
                    else
                      v133 = *(_DWORD *)(v132 + 32);
                    if ( v131 == v133 )
                    {
                      v127 = (__int64)v82;
                      p_iUniq = &v82->iUniq;
                      LODWORD(v128) = 1;
LABEL_287:
                      v216 = v128 & v215;
                      v147 = *(_QWORD *)(v231 + 80);
                      v226 = *(_DWORD *)(v147 + 32);
                      v222 = *(_DWORD *)(v147 + 40);
                      if ( !gppalRGB )
                      {
                        if ( !v45 )
                          goto LABEL_292;
                        if ( (*(_DWORD *)(v45 + 24) & 0x800) != 0 )
                        {
                          v148 = *(_QWORD *)(v124 + 80);
                          if ( !v148 || v148 == *(_QWORD *)(v124 + 72) )
                            goto LABEL_292;
                        }
                      }
                      if ( !v45 && (*((_DWORD *)gppalRGB + 6) & 0x800) != 0 )
                      {
                        v150 = *(_QWORD *)(v124 + 80);
                        if ( !v150 )
                        {
LABEL_292:
                          v238 = v82;
                          v149 = 1;
                          v15 = 0LL;
                          goto LABEL_336;
                        }
                        if ( v150 == *(_QWORD *)(v124 + 72) )
                        {
                          v238 = v82;
                          v149 = 1;
                          v15 = 0LL;
                          goto LABEL_336;
                        }
                      }
                      if ( gppalRGB && v45 )
                      {
                        v151 = *((_QWORD *)gppalRGB + 17);
                        if ( (struct PALETTE *)v151 == gppalRGB )
                          v152 = *((_DWORD *)gppalRGB + 8);
                        else
                          v152 = *(_DWORD *)(v151 + 32);
                        v153 = *(_QWORD *)(v45 + 136);
                        if ( v153 == v45 )
                          v154 = *(_DWORD *)(v45 + 32);
                        else
                          v154 = *(_DWORD *)(v153 + 32);
                        if ( v152 == v154 )
                        {
                          v238 = v82;
                          v149 = 1;
                          v15 = 0LL;
                          goto LABEL_336;
                        }
                        v155 = *((_DWORD *)gppalRGB + 14);
                        v275 = v124;
                        v273 = v124;
                        v278 = v45;
                        v285 = ghsemPalette;
                        GreAcquireSemaphore(ghsemPalette);
                        v156 = *((_QWORD *)gppalRGB + 17);
                        v157 = 0;
                        v158 = xlateTable;
                        for ( i = v156; ; v156 = i )
                        {
                          if ( (struct PALETTE *)v156 == gppalRGB )
                            v159 = *((_DWORD *)gppalRGB + 8);
                          else
                            v159 = *(_DWORD *)(v156 + 32);
                          if ( *((_DWORD *)v158 + 8 * v155 + 4) == v159 )
                          {
                            v160 = XEPALOBJ::ulTime((XEPALOBJ *)&v278);
                            if ( *(_DWORD *)((char *)v158 + v161 + 20) == v160 )
                            {
                              v162 = XEPALOBJ::ulTime((XEPALOBJ *)&v275);
                              if ( *(_DWORD *)((char *)v158 + v163 + 28) == v162 )
                              {
                                v164 = *(XLATEOBJ **)((char *)v158 + v163 + 8);
                                v238 = v164;
                                flXlate = v164[3].flXlate;
                                if ( (flXlate & 0x6000) == 0 )
                                {
                                  if ( (v164->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                                    || (v164->flXlate & 4) != 0
                                    && v227 == v164[1].iUniq
                                    && (v166 = XEPALOBJ::ulTime((XEPALOBJ *)&v273),
                                        *(_DWORD *)((char *)v158 + v167 + 24) == v166)
                                    || (flXlate & 0x100) != 0
                                    && v222 == v164[1].flXlate
                                    && v226 == *(_DWORD *)&v164[1].iSrcType )
                                  {
                                    _InterlockedIncrement((volatile signed __int32 *)v158 + 8 * v155);
                                    *((_DWORD *)gppalRGB + 14) = v155;
                                    SEMOBJ::vUnlock((SEMOBJ *)&v285);
                                    v104 = *(XLATEOBJ **)v233;
                                    v149 = 1;
                                    v127 = (__int64)p_iUniq;
                                    v15 = 0LL;
                                    v82 = v238;
                                    goto LABEL_336;
                                  }
                                }
                              }
                            }
                          }
                          ++v157;
                          v155 = ((_BYTE)v155 + 1) & 7;
                          if ( v157 >= 8 )
                            break;
                        }
                        if ( ghsemPalette )
                        {
                          EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                          GreReleaseSemaphoreInternal(ghsemPalette);
                        }
                      }
                      v15 = 0LL;
                      v168 = CreateXlateObject(0LL, 0LL, gppalRGB, v45, v124, v124, v222, v226, v227, 0);
                      v238 = (XLATEOBJ *)v168;
                      v82 = (XLATEOBJ *)v168;
                      if ( v168 )
                      {
                        if ( gppalRGB && v45 && (*(_DWORD *)(v168 + 76) & 0x200) == 0 )
                          EXLATEOBJ::vAddToCache((__int64)&v238, gppalRGB, v45, v124, v124);
                        v149 = 1;
                      }
                      else
                      {
                        v149 = 0;
                      }
LABEL_336:
                      v217 = v149 & v216;
                      v169 = *(struct REGION **)(v229[0] + 1528LL);
                      if ( !v169 )
                        v169 = *(struct REGION **)(v229[0] + 1520LL);
                      v320 = 0LL;
                      v321 = 0;
                      v322 = 1;
                      v323 = 0LL;
                      XCLIPOBJ::vSetup((XCLIPOBJ *)v318, v169, (struct ERECTL *)&v314, 0);
                      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v319) )
                      {
                        LODWORD(v15) = 1;
LABEL_393:
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v238, v170);
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&p_iUniq, v197);
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v233, v198);
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v242, v199);
                        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)v230, v200);
                        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v292);
                        goto LABEL_27;
                      }
                      *(_QWORD *)&v237.left = 0LL;
                      LOBYTE(v237.right) = 0;
                      v237.bottom = 0;
                      v171 = *(_QWORD *)(v244 + 48);
                      i = v171;
                      if ( v234.x )
                      {
                        v172 = *(_DWORD *)(*(_QWORD *)(v229[0] + 80LL) + 312LL);
                        if ( (v172 & 1) != 0 && (v172 & 9) != 9 )
                        {
                          v173 = (_DWORD *)v236;
                          *(_DWORD *)&v265[8] = 0;
                          v264 = 0LL;
                          *(_QWORD *)v265 = 0LL;
                          v266 = 0LL;
                          v264 = *(_QWORD *)(v236 + 56);
                          v263 = *(_DWORD *)(v236 + 96);
                          *(_QWORD *)&v265[4] = **(_QWORD **)(v236 + 120);
                          SURFMEM::bCreateDIB(
                            (SURFMEM *)&v237,
                            (struct _DEVBITMAPINFO *)&v263,
                            0LL,
                            0LL,
                            0,
                            0LL,
                            0LL,
                            0,
                            1,
                            0,
                            0);
                          if ( !*(_QWORD *)&v237.left )
                            goto LABEL_392;
                          v174 = (v173[28] & 0x400) == 0;
                          v316 = v173[14];
                          v317 = v173[15];
                          v315 = 0LL;
                          v256 = 0LL;
                          if ( !(v174
                               ? ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))EngCopyBits)(
                                   *(_QWORD *)&v237.left + 24LL,
                                   v173 + 6,
                                   0LL,
                                   0LL,
                                   &v315,
                                   &v256)
                               : (*((unsigned int (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD, __int64 *, __int64 *))v255
                                  + 359))(
                                   *(_QWORD *)&v237.left + 24LL,
                                   v173 + 6,
                                   0LL,
                                   0LL,
                                   &v315,
                                   &v256)) )
                            goto LABEL_392;
                          v176 = *(_DWORD *)(*(_QWORD *)&v237.left + 96LL);
                          if ( v176 - 1 > 5 )
                            goto LABEL_392;
                          qword_1C02EA360[v176]();
                          v236 = *(_QWORD *)&v237.left;
                        }
                      }
                      v251 = 0LL;
                      v252 = 0;
                      v253 = 0;
                      v248 = 0LL;
                      v249 = 0;
                      v250 = 0;
                      if ( !v241 )
                      {
                        v195 = pxlo;
                        v196 = v236;
                        goto LABEL_395;
                      }
                      v177 = gppalRGB;
                      *(_QWORD *)&v269 = 0LL;
                      v267[1] = v314.right - v314.left;
                      v268 = (unsigned int)(v314.bottom - v314.top);
                      v267[0] = 6;
                      v269 = *(unsigned __int64 *)gppalRGB;
                      v255 = gppalRGB;
                      v178 = SURFMEM::bCreateDIB(
                               (SURFMEM *)&v251,
                               (struct _DEVBITMAPINFO *)v267,
                               0LL,
                               0LL,
                               0,
                               0LL,
                               0LL,
                               0,
                               1,
                               0,
                               0) & v217;
                      if ( !v178 )
                      {
LABEL_390:
                        v180 = 8;
                        goto LABEL_391;
                      }
                      if ( (a11 & 0x1000000) == 0 )
                      {
                        v262 = 0LL;
                        v260[1] = prclDest.right - prclDest.left;
                        v261 = (unsigned int)(prclDest.bottom - prclDest.top);
                        v260[0] = 6;
                        *((_QWORD *)&v261 + 1) = *(_QWORD *)gppalRGB;
                        DIB = SURFMEM::bCreateDIB(
                                (SURFMEM *)&v248,
                                (struct _DEVBITMAPINFO *)v260,
                                0LL,
                                0LL,
                                0,
                                0LL,
                                0LL,
                                0,
                                1,
                                0,
                                0);
                        v178 = DIB;
                        if ( DIB )
                        {
                          v234.x = prclDest.left;
                          pptlSrc.x = prclDest.left;
                          LODWORD(pxlo) = prclDest.top;
                          pptlSrc.y = prclDest.top;
                          if ( !(unsigned int)ERECTL::bOffsetSubtract((ERECTL *)&prclDest, &pptlSrc, v179) )
                          {
                            v180 = 87;
LABEL_391:
                            EngSetLastError(v180);
                            SURFMEM::~SURFMEM((SURFMEM *)&v248);
                            SURFMEM::~SURFMEM((SURFMEM *)&v251);
LABEL_392:
                            SURFMEM::~SURFMEM((SURFMEM *)&v237);
                            goto LABEL_393;
                          }
                          if ( prclDest.right > prclDest.left
                            && prclDest.bottom > prclDest.top
                            && v234.x <= *(_DWORD *)(v236 + 56)
                            && (int)pxlo <= *(_DWORD *)(v236 + 60) )
                          {
                            v181 = 0LL;
                            if ( v248 )
                              v181 = (SURFOBJ *)(v248 + 24);
                            EngCopyBits(v181, (SURFOBJ *)(v236 + 24), 0LL, v104, &prclDest, &pptlSrc);
                          }
                          v182 = 0;
                          v236 = v248;
                          v183 = *(_QWORD *)(v248 + 80);
                          v184 = v183 + *(_DWORD *)(v248 + 60) * *(_DWORD *)(v248 + 88);
                          if ( v183 != v184 )
                          {
                            v185 = v248;
                            do
                            {
                              if ( v182 >= prclDest.top && v182 < prclDest.bottom )
                              {
                                v186 = (_DWORD *)v183;
                                v187 = 0LL;
                                v188 = 0;
                                v189 = (unsigned __int64)(4LL * *(int *)(v185 + 56) + 3) >> 2;
                                if ( v183 > v183 + 4LL * *(int *)(v185 + 56) )
                                  v189 = 0LL;
                                if ( v189 )
                                {
                                  do
                                  {
                                    if ( v188 >= prclDest.left && v188 < prclDest.right )
                                      *v186 |= 0xFF000000;
                                    ++v188;
                                    ++v186;
                                    ++v187;
                                  }
                                  while ( v187 != v189 );
                                  v185 = v248;
                                }
                              }
                              ++v182;
                              v183 += *(int *)(v185 + 88);
                            }
                            while ( v183 != v184 );
                            v171 = i;
                            v15 = 0LL;
                            v236 = v185;
                            v177 = v255;
                          }
                          HIBYTE(a11) |= 1u;
                          v178 = DIB;
                          pxlo = xloIdent;
                        }
                      }
                      v190 = *(_DWORD **)(v251 + 72);
                      v191 = (unsigned __int64)*(unsigned int *)(v251 + 64) >> 2;
                      if ( v191 )
                      {
                        if ( ((unsigned __int8)v190 & 4) != 0 )
                        {
                          *v190 = 0;
                          if ( !--v191 )
                            goto LABEL_384;
                          ++v190;
                        }
                        memset(v190, 0, 8 * (v191 >> 1));
                        v15 = 0LL;
                        if ( (v191 & 1) != 0 )
                          v190[v191 - 1] = 0;
                      }
LABEL_384:
                      if ( v178 )
                      {
                        `vector constructor iterator'(&pptfx, 8uLL, 3, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
                        v234.x = v324.x - 16 * v290.left;
                        v234.y = v324.y - 16 * v290.top;
                        pptfx = v234;
                        v234.x = v325 - 16 * v290.left;
                        v234.y = v326 - 16 * v290.top;
                        v337 = v234;
                        v192 = 0LL;
                        v234.x = v327 - 16 * v290.left;
                        v234.y = v328 - 16 * v290.top;
                        v338 = v234;
                        if ( v236 )
                          v192 = (SURFOBJ *)(v236 + 24);
                        v193 = 0LL;
                        if ( v251 )
                          v193 = (SURFOBJ *)(v251 + 24);
                        EngPlgBlt(v193, v192, 0LL, 0LL, pxlo, 0LL, 0LL, &pptfx, &prclDest, 0LL, 3u);
                        v311 = 0LL;
                        inited = EXLATEOBJ::bInitXlateObj(
                                   (__int64 *)&v242,
                                   0LL,
                                   0,
                                   (__int64)v177,
                                   v45,
                                   0LL,
                                   v243,
                                   *(_DWORD *)(*(_QWORD *)(v231 + 80) + 40LL),
                                   *(_DWORD *)(*(_QWORD *)(v231 + 80) + 32LL),
                                   v227,
                                   0);
                        v195 = xloIdent;
                        v196 = v251;
                        v217 = inited;
                        v240 = v242;
                        prclDest.right = v314.right - v314.left;
                        prclDest.bottom = v314.bottom - v314.top;
                        *(_QWORD *)&prclDest.left = 0LL;
                        `vector destructor iterator'(&pptfx, 8uLL, 3, Scale_None);
LABEL_395:
                        if ( v217 )
                        {
                          v201 = v244;
                          ++*(_DWORD *)(v244 + 92);
                          v202 = v229[0];
                          v203 = *(struct ECLIPOBJ **)(v231 + 48);
                          if ( *(struct ECLIPOBJ **)(v229[0] + 48LL) == v203
                            || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v229)
                            && *(struct ECLIPOBJ **)(v204 + 3544) == v203 )
                          {
                            if ( (*(_DWORD *)(v202 + 36) & 0xE0) != 0 )
                            {
                              v312 = v314;
                              XDCOBJ::vAccumulateTight((XDCOBJ *)v229, v203, &v312);
                              v201 = v244;
                            }
                            v286 = a11;
                            v287 = v195;
                            v288 = v127;
                            v289 = v82;
                            if ( v314.right - v314.left == prclDest.right - prclDest.left
                              && v314.bottom - v314.top == prclDest.bottom - prclDest.top )
                            {
                              BYTE1(v286) = BYTE1(a11) & 0xFE;
                            }
                            if ( (*(_DWORD *)(v201 + 112) & 0x10000) != 0 )
                              v206 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v171 + 3288);
                            else
                              v206 = EngAlphaBlend;
                            if ( v196 )
                              v15 = v196 + 24;
                            v14 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, HDC, struct _RECTL *, RECTL *, int *))v206)(
                                    v201 + 24,
                                    v15,
                                    v318,
                                    v240,
                                    &v314,
                                    &prclDest,
                                    &v286);
LABEL_413:
                            SURFMEM::~SURFMEM((SURFMEM *)&v248);
                            SURFMEM::~SURFMEM((SURFMEM *)&v251);
                            SURFMEM::~SURFMEM((SURFMEM *)&v237);
                            if ( v82 )
                            {
                              cEntries = (int)v82[1].cEntries;
                              if ( (int)cEntries < 0 )
                              {
                                if ( (_DWORD)cEntries == -1 )
                                  FreeThreadBufferWithTag(v82, v207);
                              }
                              else
                              {
                                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                                v104 = *(XLATEOBJ **)v233;
                                v127 = (__int64)p_iUniq;
                              }
                            }
                            if ( v127 )
                            {
                              v209 = *(int *)(v127 + 36);
                              if ( (int)v209 < 0 )
                              {
                                if ( (_DWORD)v209 == -1 )
                                  FreeThreadBufferWithTag(v127, v207);
                              }
                              else
                              {
                                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v209);
                                v104 = *(XLATEOBJ **)v233;
                              }
                            }
                            if ( v104 )
                            {
                              v210 = (int)v104[1].cEntries;
                              if ( (int)v210 < 0 )
                              {
                                if ( (_DWORD)v210 == -1 )
                                  FreeThreadBufferWithTag(v104, v207);
                              }
                              else
                              {
                                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v210);
                              }
                            }
                            if ( v242 )
                            {
                              v211 = *((int *)v242 + 9);
                              if ( (int)v211 < 0 )
                              {
                                if ( (_DWORD)v211 == -1 )
                                  FreeThreadBufferWithTag(v242, v207);
                              }
                              else
                              {
                                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v211);
                              }
                            }
                            if ( *(_QWORD *)v230 )
                            {
                              v212 = *(_DWORD *)(*(_QWORD *)v230 + 36LL);
                              if ( v212 >= 0 )
                              {
                                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8
                                                                                             * *(int *)(*(_QWORD *)v230 + 36LL));
                                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v292);
                                goto LABEL_26;
                              }
                              if ( v212 == -1 )
                              {
                                FreeThreadBufferWithTag(*(_QWORD *)v230, v207);
                                DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v292);
                                goto LABEL_26;
                              }
                            }
LABEL_442:
                            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v292);
                            goto LABEL_26;
                          }
                          v205 = 87;
                        }
                        else
                        {
                          v205 = 6;
                        }
                        EngSetLastError(v205);
                        v14 = 0;
                        goto LABEL_413;
                      }
                      goto LABEL_390;
                    }
                    if ( gppalRGB )
                    {
                      v134 = *(_DWORD *)(v45 + 56);
                      v272 = v243;
                      v284 = v243;
                      v271 = gppalRGB;
                      v270 = ghsemPalette;
                      GreAcquireSemaphore(ghsemPalette);
                      v135 = xlateTable;
                      v136 = 0;
                      v137 = *(_QWORD *)(v45 + 136);
                      do
                      {
                        if ( v137 == v45 )
                          v138 = *(_DWORD *)(v45 + 32);
                        else
                          v138 = *(_DWORD *)(v137 + 32);
                        if ( *((_DWORD *)v135 + 8 * v134 + 4) == v138 )
                        {
                          v139 = XEPALOBJ::ulTime((XEPALOBJ *)&v271);
                          if ( *(_DWORD *)((char *)v135 + v140 + 20) == v139 )
                          {
                            v141 = XEPALOBJ::ulTime((XEPALOBJ *)&v272);
                            if ( *(_DWORD *)((char *)v135 + v142 + 28) == v141 )
                            {
                              v143 = *(_DWORD **)((char *)v135 + v142 + 8);
                              p_iUniq = v143;
                              v144 = v143[19];
                              if ( (v144 & 0x6000) == 0 )
                              {
                                if ( (v143[1] & 4) == 0 && (v144 & 0x100) == 0
                                  || (v143[1] & 4) != 0
                                  && v227 == v143[6]
                                  && (v145 = XEPALOBJ::ulTime((XEPALOBJ *)&v284),
                                      *(_DWORD *)((char *)v135 + v146 + 24) == v145)
                                  || (v144 & 0x100) != 0 && v221 == v143[7] && v225 == v143[8] )
                                {
                                  _InterlockedIncrement((volatile signed __int32 *)v135 + 8 * v134);
                                  *(_DWORD *)(v45 + 56) = v134;
                                  SEMOBJ::vUnlock((SEMOBJ *)&v270);
                                  v104 = *(XLATEOBJ **)v233;
                                  LODWORD(v128) = 1;
                                  v127 = (__int64)p_iUniq;
                                  goto LABEL_286;
                                }
                              }
                            }
                          }
                        }
                        ++v136;
                        v134 = ((_BYTE)v134 + 1) & 7;
                      }
                      while ( v136 < 8 );
                      if ( ghsemPalette )
                      {
                        EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                        GreReleaseSemaphoreInternal(ghsemPalette);
                      }
                    }
                  }
                  v128 = CreateXlateObject(0LL, 0LL, v45, gppalRGB, v124, v124, v221, v225, v227, 0);
                  p_iUniq = (_DWORD *)v128;
                  v127 = v128;
                  if ( v128 )
                  {
                    if ( v45 && gppalRGB && (*(_DWORD *)(v128 + 76) & 0x200) == 0 )
                      EXLATEOBJ::vAddToCache((__int64)&p_iUniq, v45, gppalRGB, v124, v124);
                    LODWORD(v128) = 1;
                  }
LABEL_286:
                  v82 = xloIdent;
                  goto LABEL_287;
                }
                if ( gppalRGB )
                {
                  v111 = *((_DWORD *)v78 + 14);
                  v282 = v77;
                  v280 = v77;
                  v283 = gppalRGB;
                  v274 = ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v112 = (XLATEOBJ *)*((_QWORD *)v78 + 17);
                  v113 = 0;
                  v114 = xlateTable;
                  for ( pxlo = v112; ; v112 = pxlo )
                  {
                    if ( v112 == (XLATEOBJ *)v78 )
                      v115 = *((_DWORD *)v78 + 8);
                    else
                      v115 = *(_DWORD *)&v112[1].iSrcType;
                    if ( *((_DWORD *)v114 + 8 * v111 + 4) == v115 )
                    {
                      v116 = XEPALOBJ::ulTime((XEPALOBJ *)&v283);
                      if ( *(_DWORD *)((char *)v114 + v117 + 20) == v116 )
                      {
                        v118 = XEPALOBJ::ulTime((XEPALOBJ *)&v282);
                        if ( *(_DWORD *)((char *)v114 + v119 + 28) == v118 )
                        {
                          v120 = *(_DWORD **)((char *)v114 + v119 + 8);
                          *(_QWORD *)v233 = v120;
                          v121 = v120[19];
                          if ( (v121 & 0x6000) == 0 )
                          {
                            if ( (v120[1] & 4) == 0 && (v121 & 0x100) == 0
                              || (v120[1] & 4) != 0
                              && v227 == v120[6]
                              && (v122 = XEPALOBJ::ulTime((XEPALOBJ *)&v280),
                                  *(_DWORD *)((char *)v114 + v123 + 24) == v122)
                              || (v121 & 0x100) != 0 && v220 == v120[7] && v224 == v120[8] )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)v114 + 8 * v111);
                              *((_DWORD *)v78 + 14) = v111;
                              SEMOBJ::vUnlock((SEMOBJ *)&v274);
                              v104 = *(XLATEOBJ **)v233;
                              LODWORD(v105) = 1;
                              goto LABEL_237;
                            }
                          }
                        }
                      }
                    }
                    ++v113;
                    v111 = ((_BYTE)v111 + 1) & 7;
                    if ( v113 >= 8 )
                      break;
                  }
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
                }
              }
              v105 = CreateXlateObject(0LL, 0LL, v78, gppalRGB, v77, v77, v220, v224, v227, 0);
              *(_QWORD *)v233 = v105;
              v104 = (XLATEOBJ *)v105;
              if ( v105 )
              {
                if ( v78 && gppalRGB && (*(_DWORD *)(v105 + 76) & 0x200) == 0 )
                  EXLATEOBJ::vAddToCache((__int64)v233, v78, gppalRGB, v77, v77);
                LODWORD(v105) = 1;
              }
LABEL_237:
              v82 = xloIdent;
              goto LABEL_238;
            }
            v50 = UserScreenAccessCheck(512LL, v41);
          }
          if ( v50 )
            goto LABEL_95;
        }
LABEL_440:
        EngSetLastError(6u);
        v14 = 0;
        DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v292);
        goto LABEL_26;
      }
      v48 = UserScreenAccessCheck(v42, v41);
    }
    if ( !v48 )
      goto LABEL_440;
    goto LABEL_87;
  }
  _InterlockedDecrement((volatile signed __int32 *)(v229[0] + 12LL));
  v229[0] = 0LL;
LABEL_10:
  EngSetLastError(6u);
LABEL_11:
  if ( v229[0] )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v229);
    _InterlockedDecrement((volatile signed __int32 *)(v229[0] + 12LL));
  }
  return (unsigned int)v15;
}
