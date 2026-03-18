/*
 * XREFs of NtGdiBitBltInternal @ 0x1C0095CC0
 * Callers:
 *     UpdateSpriteArea @ 0x1C000A280 (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C000ADB8 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     _DrawIconEx @ 0x1C005137C (_DrawIconEx.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94 (-UT_InvertCaret@@YAXXZ.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0062A3C (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C008DAB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     _InternalGetIconInfo @ 0x1C0095874 (_InternalGetIconInfo.c)
 *     NtGdiBitBlt @ 0x1C0095CB0 (NtGdiBitBlt.c)
 *     BitBltSysBmp @ 0x1C00F4978 (BitBltSysBmp.c)
 *     CreateSpb @ 0x1C00FF068 (CreateSpb.c)
 *     RecolorDeskPattern @ 0x1C01011B0 (RecolorDeskPattern.c)
 *     MNAnimate @ 0x1C010D98C (MNAnimate.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C010DBC8 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     StopFade @ 0x1C010E080 (StopFade.c)
 *     NtUserBitBltSysBmp @ 0x1C011A330 (NtUserBitBltSysBmp.c)
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 *     xxxClientExtTextOutW @ 0x1C0123184 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 *     xxxPrintWindow @ 0x1C01E7A14 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C01EA24C (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214D78 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C02150E4 (xxxClientPSMTextOut.c)
 *     xxxCompositedPaint @ 0x1C0225058 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226AF4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0227840 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0235A94 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     BltColor @ 0x1C023DA94 (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E3A4 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242300 (xxxRealDrawMenuItem.c)
 *     DxgkEngBltViaGDI @ 0x1C0264220 (DxgkEngBltViaGDI.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C000C01C (GreDereferenceObject.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0013D08 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018630 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018688 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00187BC (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C001882C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0018920 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C001BB50 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0025BE0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0026984 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     GreClientRgnUpdated @ 0x1C0061BE4 (GreClientRgnUpdated.c)
 *     bCvtPts1 @ 0x1C00979C4 (bCvtPts1.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009CE2C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C009DBE0 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     GreClientRgnUpdatedStable @ 0x1C00E7C74 (GreClientRgnUpdatedStable.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C025E2C0 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C0265304 (--1CAutoTGO@@QEAA@XZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C02653C4 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x1C02653E8 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     SimBitBlt @ 0x1C0265540 (SimBitBlt.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028E090 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02904B4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C02B0114 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        LONG a8,
        unsigned int a9,
        int a10,
        char a11)
{
  LONG y; // ebx
  unsigned int v12; // r14d
  int x; // r15d
  LONG left; // esi
  LONG top; // r13d
  int v18; // edi
  struct ECLIPOBJ *v19; // rdx
  DC *v20; // r9
  __int64 v21; // r10
  int v22; // r8d
  __int64 v23; // rbx
  unsigned int v24; // eax
  struct MATRIX *v25; // rdx
  int v26; // ecx
  LONG v27; // edx
  LONG v28; // r8d
  LONG bottom; // r8d
  LONG right; // edx
  DC *v31; // rcx
  int v32; // eax
  DC *v33; // r8
  HDC v34; // r12
  __int64 v35; // rsi
  __int64 v36; // r15
  unsigned __int8 v37; // cl
  __int64 v38; // rdx
  char *v39; // rbx
  __int64 v40; // rdx
  int v41; // ecx
  __int64 v42; // rcx
  int v43; // r10d
  struct ECLIPOBJ *v44; // rdx
  int v45; // r9d
  __int64 v46; // r13
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  _DWORD *v51; // rcx
  __int64 v52; // rdi
  int v53; // r14d
  bool v54; // zf
  char *v55; // rax
  int v56; // ebx
  int v57; // r11d
  __int64 v58; // rax
  int v59; // ecx
  LONG v60; // r11d
  LONG v61; // ecx
  int v62; // eax
  struct _RECTL v63; // xmm6
  char *v64; // rbx
  struct REGION *v65; // rax
  XLATEOBJ *v66; // rbx
  int v67; // r10d
  __int64 v68; // rax
  __int64 v69; // r15
  __int64 v70; // r14
  __int64 v71; // rax
  int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // edx
  __int64 v77; // rax
  int v78; // ecx
  unsigned int v79; // r13d
  struct _XLATETABLE near *v80; // rdx
  unsigned int v81; // r10d
  __int64 v82; // r11
  int v83; // ecx
  int v84; // eax
  __int64 v85; // r8
  int v86; // eax
  __int64 v87; // r8
  XLATEOBJ *v88; // rdx
  FLONG flXlate; // r9d
  int v90; // eax
  __int64 v91; // r8
  __int64 XlateObject; // rax
  DC *v93; // rsi
  struct ECLIPOBJ *v94; // r13
  __int64 v95; // rdx
  __int64 v96; // r8
  __int128 *v97; // rdx
  int v98; // edi
  __int64 v99; // rdi
  int v100; // eax
  int v101; // edx
  int v102; // ecx
  __int64 v103; // r8
  int v104; // eax
  __int64 *v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 ThreadWin32Thread; // rax
  unsigned int v110; // eax
  __int64 v111; // rax
  int (*v112)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v113; // rdx
  __int64 v114; // r10
  __int64 cEntries; // rax
  __int64 v116; // rcx
  int v117; // r14d
  DC *v118; // rdx
  SURFACE *v119; // rcx
  DC *v120; // rdx
  SURFACE *v121; // rbx
  DC *v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 CurrentProcess; // rax
  __int64 v126; // rax
  __int64 *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rdx
  HSURF v132; // rbx
  char v133; // bl
  __int64 v134; // rax
  DCVISRGNSHARELOCK *v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rdx
  HSURF v140; // rbx
  char v141; // bl
  __int64 v142; // rax
  DCVISRGNSHARELOCK *v143; // rcx
  __int64 v144; // rax
  signed __int32 v145[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v146; // [rsp+20h] [rbp-E0h]
  HDC v147; // [rsp+28h] [rbp-D8h]
  POINTL *v148; // [rsp+30h] [rbp-D0h]
  POINTL *v149; // [rsp+38h] [rbp-C8h]
  __int64 v150; // [rsp+40h] [rbp-C0h]
  __int64 v151; // [rsp+48h] [rbp-B8h]
  int v152; // [rsp+50h] [rbp-B0h]
  __int64 v153; // [rsp+58h] [rbp-A8h]
  int v154; // [rsp+60h] [rbp-A0h]
  int v155; // [rsp+68h] [rbp-98h]
  int v156; // [rsp+70h] [rbp-90h]
  XLATEOBJ *v157; // [rsp+78h] [rbp-88h] BYREF
  int v158; // [rsp+80h] [rbp-80h]
  int v159; // [rsp+84h] [rbp-7Ch]
  int v160; // [rsp+88h] [rbp-78h]
  char v161; // [rsp+8Ch] [rbp-74h] BYREF
  char v162[3]; // [rsp+8Dh] [rbp-73h] BYREF
  HDC v163; // [rsp+90h] [rbp-70h]
  unsigned int v164; // [rsp+98h] [rbp-68h]
  int v165; // [rsp+9Ch] [rbp-64h]
  struct _XLATETABLE near *v166; // [rsp+A0h] [rbp-60h]
  int v167; // [rsp+A8h] [rbp-58h]
  int v168; // [rsp+ACh] [rbp-54h]
  __int64 v169; // [rsp+B0h] [rbp-50h]
  int v170[2]; // [rsp+B8h] [rbp-48h]
  DC *v171[6]; // [rsp+C0h] [rbp-40h] BYREF
  int v172; // [rsp+F0h] [rbp-10h]
  HDC v173; // [rsp+F8h] [rbp-8h] BYREF
  char *v174; // [rsp+100h] [rbp+0h] BYREF
  int v175; // [rsp+108h] [rbp+8h]
  int v176; // [rsp+10Ch] [rbp+Ch]
  struct MATRIX *v177; // [rsp+110h] [rbp+10h] BYREF
  int v178; // [rsp+118h] [rbp+18h]
  int v179; // [rsp+11Ch] [rbp+1Ch]
  __int128 v180; // [rsp+120h] [rbp+20h] BYREF
  __int128 v181; // [rsp+130h] [rbp+30h]
  __int64 v182; // [rsp+140h] [rbp+40h]
  __int64 v183; // [rsp+148h] [rbp+48h] BYREF
  char v184; // [rsp+150h] [rbp+50h]
  int v185; // [rsp+154h] [rbp+54h]
  _BYTE v186[32]; // [rsp+158h] [rbp+58h] BYREF
  int v187; // [rsp+178h] [rbp+78h]
  __int128 v188; // [rsp+180h] [rbp+80h]
  unsigned int v189; // [rsp+190h] [rbp+90h]
  DC *v190[6]; // [rsp+198h] [rbp+98h] BYREF
  DC *v191[6]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v192; // [rsp+1F8h] [rbp+F8h]
  __int128 v193; // [rsp+200h] [rbp+100h]
  HDC v194; // [rsp+210h] [rbp+110h]
  int v195; // [rsp+218h] [rbp+118h]
  __int128 v196; // [rsp+220h] [rbp+120h]
  HDC v197; // [rsp+230h] [rbp+130h]
  struct ECLIPOBJ *v198[6]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v199; // [rsp+270h] [rbp+170h] BYREF
  __int64 v200; // [rsp+278h] [rbp+178h] BYREF
  __int64 v201; // [rsp+280h] [rbp+180h] BYREF
  DC *v202[6]; // [rsp+288h] [rbp+188h] BYREF
  _BYTE v203[32]; // [rsp+2B8h] [rbp+1B8h] BYREF
  HSURF *v204; // [rsp+2D8h] [rbp+1D8h]
  _BYTE v205[32]; // [rsp+2E0h] [rbp+1E0h] BYREF
  HSURF *v206; // [rsp+300h] [rbp+200h]
  DC *v207[6]; // [rsp+308h] [rbp+208h] BYREF
  _BYTE v208[32]; // [rsp+338h] [rbp+238h] BYREF
  __int64 v209; // [rsp+358h] [rbp+258h]
  _BYTE v210[32]; // [rsp+360h] [rbp+260h] BYREF
  __int64 v211; // [rsp+380h] [rbp+280h]
  struct _RECTL v212; // [rsp+390h] [rbp+290h] BYREF
  RECTL v213; // [rsp+3A0h] [rbp+2A0h] BYREF
  POINTL v214; // [rsp+3B0h] [rbp+2B0h] BYREF
  LONG v215; // [rsp+3B8h] [rbp+2B8h]
  int v216; // [rsp+3BCh] [rbp+2BCh]
  int v217; // [rsp+480h] [rbp+380h]

  y = a8;
  v12 = 0;
  x = a7;
  left = a2;
  v173 = a1;
  v163 = a6;
  v156 = a5;
  top = a3;
  v158 = a8;
  if ( (a9 & 0x40000000) != 0 )
    return GreStretchBltInternal(a1, a2, a3, a5, a6, a7, a8, a4, a5, a9 & 0xDFFFFFFF, a10, (a9 >> 28) & 2);
  v159 = a9 & 0xDFFFFFFF;
  v18 = a9 & 0x5FFFFFFF;
  DCOBJ::DCOBJ((DCOBJ *)v171, a1);
  if ( v171[0] && (*((_DWORD *)v171[0] + 9) & 0x10000) == 0 )
  {
    if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v18 != 16711778 && v18 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)v171, left, top, a4, v156);
    DCOBJ::DCOBJ((DCOBJ *)v198, v163);
    if ( !v198[0] )
      goto LABEL_279;
    bSpDwmValidateSurface((struct XDCOBJ *)v198, a7, a8, a4, v156);
    v19 = v198[0];
    v20 = v171[0];
    v21 = *((_QWORD *)v171[0] + 10);
    v22 = *(_DWORD *)(v21 + 312);
    if ( (((unsigned __int8)v22 ^ *(_BYTE *)(*((_QWORD *)v198[0] + 10) + 312LL)) & 7) != 0
      && (v159 < 0 && (v22 & 1) != 0 || (v22 & 9) == 9) )
    {
      v23 = *(_QWORD *)(v21 + 320);
      v24 = DC::dwSetLayout(v171[0], -1, 0);
      v20 = v171[0];
      v19 = v198[0];
      left = v23 - a4 - left;
      v165 = 0x80000000;
      y = v158;
    }
    else
    {
      v24 = v164;
      v165 = 0;
    }
    v159 = v24;
    v175 = *(_DWORD *)(*((_QWORD *)v20 + 10) + 68LL);
    v176 = *(_DWORD *)(*((_QWORD *)v20 + 10) + 312LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 10) + 352LL) & 0xE000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v174, (struct XDCOBJ *)v171, 0x204u, 0);
      v19 = v198[0];
    }
    else
    {
      v174 = (char *)v20 + 336;
    }
    v178 = *(_DWORD *)(*((_QWORD *)v19 + 10) + 68LL);
    v179 = *(_DWORD *)(*((_QWORD *)v19 + 10) + 312LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v19 + 10) + 352LL) & 0xE000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v177, (struct XDCOBJ *)v198, 0x204u, 0);
      v25 = v177;
    }
    else
    {
      v25 = (struct ECLIPOBJ *)((char *)v19 + 336);
      v177 = v25;
    }
    if ( (*((_DWORD *)v174 + 8) & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v174, v25) )
    {
      v26 = v156;
      v27 = a7 + a4;
      v214.x = a7;
      v214.y = y;
      v28 = y + v156;
      v215 = a7 + a4;
      v216 = y + v156;
      if ( (*((_BYTE *)v177 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1(v177, &v214, 2LL);
        v28 = v216;
        v27 = v215;
        v26 = v156;
        y = v214.y;
        x = v214.x;
      }
      if ( v179 )
      {
        ++x;
        ++v27;
        v214.x = x;
        v215 = v27;
      }
      if ( x > v27 )
      {
        v214.x = v27;
        v215 = x;
      }
      if ( y > v28 )
      {
        v214.y = v28;
        v216 = y;
      }
      bottom = v26 + top;
      v213.left = left;
      right = a4 + left;
      v213.top = top;
      v213.right = a4 + left;
      v213.bottom = v26 + top;
      if ( (v174[32] & 0x43) != 0x43 )
      {
        bCvtPts1(v174, &v213, 2LL);
        bottom = v213.bottom;
        right = v213.right;
        top = v213.top;
        left = v213.left;
      }
      if ( v176 )
      {
        ++left;
        ++right;
        v213.left = left;
        v213.right = right;
      }
      if ( left > right )
      {
        v213.left = right;
        v213.right = left;
      }
      if ( top > bottom )
      {
        v213.top = bottom;
        v213.bottom = top;
      }
      if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v213) )
      {
        v31 = v171[0];
        v32 = *((_DWORD *)v171[0] + 9);
        if ( (v32 & 0xE0) != 0 )
        {
          if ( (v32 & 0x20) != 0 )
          {
            ERECTL::operator|=((char *)v171[0] + 1456, &v213);
            v31 = v171[0];
          }
          if ( (*((_DWORD *)v31 + 9) & 0x80u) != 0 )
            ERECTL::operator|=((char *)v31 + 1488, &v213);
        }
        v183 = 0LL;
        v184 = 0;
        v185 = 0;
        v187 = 0;
        DCOBJ::DCOBJ((DCOBJ *)v190);
        DCOBJ::DCOBJ((DCOBJ *)v191);
        v182 = 0LL;
        v180 = 0LL;
        v181 = 0LL;
        v188 = 0LL;
        v193 = 0LL;
        v196 = 0LL;
        v189 = 0;
        v192 = 0LL;
        v194 = 0LL;
        v197 = 0LL;
        v190[0] = 0LL;
        v191[0] = 0LL;
        if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)&v180, (struct XDCOBJ *)v171, (struct XDCOBJ *)v198) )
        {
          v117 = XDCOBJ::bFullScreen((XDCOBJ *)v198);
          v12 = XDCOBJ::bFullScreen((XDCOBJ *)v171) | v117;
          goto LABEL_188;
        }
        v33 = v171[0];
        v34 = (HDC)*((_QWORD *)v171[0] + 64);
        if ( !v34 )
        {
          v12 = 1;
          goto LABEL_188;
        }
        v35 = *((_QWORD *)v34 + 15);
        v36 = *((_QWORD *)v171[0] + 12);
        v37 = (a9 & 0x5FFFFFFF) >> 16;
        v158 = (v37 << 8) | v37;
        if ( ((v37 ^ (unsigned __int8)(16 * v37)) & 0xF0) != 0 )
        {
          v38 = *((_QWORD *)v171[0] + 10);
          v39 = (char *)v171[0] + 1584;
          v163 = (HDC)((char *)v171[0] + 1584);
          if ( (*(_DWORD *)(v38 + 8) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v171[0], *(_QWORD *)(v38 + 16));
            v33 = v171[0];
          }
          v40 = *((_QWORD *)v33 + 10);
          v41 = *(_DWORD *)(v40 + 8);
          if ( (v41 & 1) != 0 || (*((_DWORD *)v33 + 83) & 1) != 0 )
          {
            LODWORD(v148) = 1;
            *(_DWORD *)(v40 + 8) = v41 & 0xFFFFFFFE;
            v147 = v34;
            v146 = v35;
            *((_DWORD *)v171[0] + 83) &= ~1u;
            EBRUSHOBJ::vInitBrush(v39, v171[0], *((_QWORD *)v171[0] + 18), v36, v146);
            v33 = v171[0];
          }
        }
        else
        {
          v163 = 0LL;
        }
        v42 = (__int64)v33 + 1416;
        if ( (*((_DWORD *)v33 + 10) & 1) == 0 )
          v42 = (__int64)v33 + 1408;
        v43 = *(_DWORD *)v42 + v213.left;
        v44 = v198[0];
        v213.left = v43;
        v213.right += *(_DWORD *)v42;
        v45 = *(_DWORD *)(v42 + 4) + v213.top;
        v213.top = v45;
        v213.bottom += *(_DWORD *)(v42 + 4);
        v46 = *((_QWORD *)v198[0] + 64);
        v169 = v46;
        if ( !v46 )
          goto LABEL_197;
        if ( (a11 & 2) != 0 )
        {
LABEL_77:
          v51 = (_DWORD *)((char *)v44 + 1416);
          v52 = *(_QWORD *)(v46 + 120);
          if ( (*((_DWORD *)v44 + 10) & 1) == 0 )
            v51 = (_DWORD *)((char *)v44 + 1408);
          v53 = v43 - *v51 - v214.x;
          v54 = (*((_DWORD *)v44 + 10) & 1) == 0;
          v164 = v53;
          v55 = (char *)v44 + 1416;
          if ( v54 )
            v55 = (char *)v44 + 1408;
          v56 = 0;
          v156 = v45 - *((_DWORD *)v55 + 1) - v214.y;
          v57 = 0;
          v58 = *(_QWORD *)(v46 + 48);
          if ( v58 && v46 == *(_QWORD *)(v58 + 2576) && (*(_DWORD *)(v58 + 56) & 0x20000) != 0 )
          {
            v57 = *(_DWORD *)(v58 + 2608);
            v56 = *(_DWORD *)(v58 + 2612);
          }
          if ( v57 + v53 > v43 )
            v43 = v57 + v53;
          v213.left = v43;
          if ( v56 + v156 > v45 )
            v45 = v56 + v156;
          v213.top = v45;
          v59 = v57 + *(_DWORD *)(v46 + 56);
          v60 = v213.right;
          v61 = v53 + v59;
          if ( v61 < v213.right )
            v60 = v61;
          v213.right = v60;
          v62 = v213.bottom;
          if ( v56 + *(_DWORD *)(v46 + 60) + v156 < v213.bottom )
            v62 = v56 + *(_DWORD *)(v46 + 60) + v156;
          v213.bottom = v62;
          if ( v43 < v60 && v45 < v62 )
          {
            *(_QWORD *)v170 = 0LL;
            if ( v43 < *((_DWORD *)v33 + 348)
              || v60 > *((_DWORD *)v33 + 350)
              || v45 < *((_DWORD *)v33 + 349)
              || v62 > *((_DWORD *)v33 + 351) )
            {
              v64 = (char *)v33 + 2184;
              *(_QWORD *)v170 = (char *)v33 + 2184;
              v65 = XDCOBJ::prgnEffRao((XDCOBJ *)v171);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v64, v65, (struct ERECTL *)&v213, 2);
              v63 = *(struct _RECTL *)(v64 + 4);
              v213 = v63;
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v213) )
              {
                v12 = 1;
                goto LABEL_188;
              }
              v33 = v171[0];
              v44 = v198[0];
              v45 = v213.top;
              v43 = v213.left;
            }
            else
            {
              v63 = v213;
            }
            if ( (*((_DWORD *)v33 + 9) & 0xE0) != 0 )
            {
              v212 = v63;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v171, v44, &v212);
              v33 = v171[0];
              v44 = v198[0];
              v45 = v213.top;
              v43 = v213.left;
            }
            v66 = 0LL;
            v214.x = v43 - v53;
            v67 = v156;
            v214.y = v45 - v156;
            v68 = *((_QWORD *)v33 + 64);
            v157 = 0LL;
            if ( *((_QWORD *)v44 + 64) == v68 )
            {
              v69 = 0LL;
LABEL_160:
              ++*((_DWORD *)v34 + 23);
              v93 = v171[0];
              v94 = v198[0];
              if ( *((_QWORD *)v171[0] + 6) == *((_QWORD *)v198[0] + 6)
                || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v171) && *(_QWORD *)(v95 + 3544) == v96
                || !*(_WORD *)(v169 + 100) && !*(_QWORD *)(v169 + 24) && (*(_DWORD *)(v95 + 56) & 0x80u) == 0 )
              {
                v98 = v158;
                if ( v158 == 52428 )
                {
                  v54 = (a11 & 1) == 0;
                  v217 = a11 & 1;
                  v99 = *((_QWORD *)v34 + 6);
                  if ( !v54 )
                  {
                    v100 = v213.bottom - v213.top;
                    if ( v213.bottom - v213.top < 0 )
                      v100 = v213.top - v213.bottom;
                    v101 = v213.right - v213.bottom;
                    if ( v213.right - v213.bottom < 0 )
                      v101 = v213.bottom - v213.right;
                    v102 = v100 + v214.y;
                    v103 = **((_QWORD **)v93 + 64);
                    v104 = v101 + v214.x;
                    v105 = (__int64 *)*((_QWORD *)v94 + 64);
                    v155 = v102;
                    v106 = *((_QWORD *)v93 + 60);
                    v154 = v104;
                    v107 = *v105;
                    v108 = *((_QWORD *)v93 + 61);
                    LODWORD(v153) = v214.y;
                    v152 = v214.x;
                    v151 = v107;
                    v150 = *((_QWORD *)v94 + 61);
                    v149 = (POINTL *)*((_QWORD *)v94 + 60);
                    LODWORD(v147) = v213.right;
                    EtwWindowRendering(
                      v106,
                      v108,
                      v103,
                      (unsigned int)v213.left,
                      v213.top,
                      v147,
                      v213.bottom,
                      v149,
                      v150,
                      v107,
                      v214.x,
                      v214.y,
                      v154,
                      v155);
                    *((_WORD *)v34 + 51) |= 0x40u;
                    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                    if ( ThreadWin32Thread )
                      *(_BYTE *)(ThreadWin32Thread + 328) = 0;
                    GreClientRgnUpdated(0);
                    GreClientRgnUpdatedStable();
                    v66 = v157;
                  }
                  if ( ((_DWORD)v34[28] & 0x400) != 0 )
                    v110 = (*(__int64 (__fastcall **)(HDC, __int64, _QWORD, __int64, RECTL *, POINTL *, _DWORD))(v99 + 2872))(
                             v34 + 6,
                             v169 + 24,
                             *(_QWORD *)v170,
                             v69,
                             &v213,
                             &v214,
                             (_DWORD)v148);
                  else
                    v110 = ((__int64 (__fastcall *)(HDC, __int64, _QWORD, __int64, RECTL *, POINTL *, _DWORD))EngCopyBits)(
                             v34 + 6,
                             v169 + 24,
                             *(_QWORD *)v170,
                             v69,
                             &v213,
                             &v214,
                             (_DWORD)v148);
                  v12 = v110;
                  if ( v217 )
                  {
                    *((_WORD *)v34 + 51) &= ~0x40u;
                    v111 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                    v66 = v157;
                    if ( v111 )
                      *(_BYTE *)(v111 + 328) = 1;
                  }
                }
                else
                {
                  v112 = SURFACE::pfnBitBlt((SURFACE *)v34);
                  v12 = ((__int64 (__fastcall *)(HDC, __int64, _QWORD, _QWORD, __int64, RECTL *, POINTL *, _QWORD, HDC, __int64, int))v112)(
                          v34 + 6,
                          v114,
                          0LL,
                          *(_QWORD *)v170,
                          v69,
                          &v213,
                          &v214,
                          0LL,
                          v163,
                          v113,
                          v98);
                }
              }
              else
              {
                v97 = &v180;
                if ( *(char *)(*((_QWORD *)v34 + 6) + 56LL) >= 0 )
                  v97 = 0LL;
                v12 = SimBitBlt(
                        (int)v34 + 24,
                        (int)v169 + 24,
                        0,
                        v170[0],
                        v69,
                        &v213,
                        &v214,
                        0LL,
                        (__int64)v163,
                        (__int64)v93 + 1576,
                        v158,
                        (__int64)v97);
              }
LABEL_185:
              if ( v66 )
              {
                cEntries = (int)v66[1].cEntries;
                if ( (int)cEntries < 0 )
                {
                  if ( (_DWORD)cEntries == -1 )
                    FreeThreadBufferWithTag(v66);
                }
                else
                {
                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                }
              }
LABEL_188:
              v116 = v189;
              if ( (v189 & 0x1000) == 0 )
              {
LABEL_221:
                if ( v183 )
                {
                  CAutoTGO::vUnguard((CAutoTGO *)v186);
                  DEVLOCKBLTOBJ::TmpSrcCleanup((DEVLOCKBLTOBJ *)&v180);
                  v116 = v189;
                }
                if ( (v116 & 0x1000) != 0 )
                {
                  if ( (v116 & 0x8000) != 0 )
                  {
                    DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)&v180);
                    _InterlockedOr(v145, 0);
                    DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)&v180);
                    v189 &= ~0x8000u;
                  }
                  else
                  {
                    v122 = v191[0];
                    if ( v191[0] )
                    {
                      v123 = *((_QWORD *)v191[0] + 6);
                      if ( (v116 & 0x20) != 0 )
                      {
                        *((_DWORD *)v191[0] + 9) &= ~0x4000u;
                        v116 = *(_QWORD *)(v123 + 2576);
                        *((_QWORD *)v191[0] + 64) = v116;
                      }
                      if ( v192 )
                      {
                        v124 = *(_QWORD *)(v192 + 72);
                        CurrentProcess = PsGetCurrentProcess(v116, v122);
                        MmUnmapViewOfSection(CurrentProcess, v124);
                      }
                      DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v180, v191);
                      XDCOBJ::vUnlock((XDCOBJ *)v191);
                      v191[0] = 0LL;
                    }
                    _InterlockedOr(v145, 0);
                    if ( v190[0] )
                    {
                      v126 = *((_QWORD *)v190[0] + 6);
                      if ( (v189 & 0x10) != 0 )
                      {
                        *((_DWORD *)v190[0] + 9) &= ~0x4000u;
                        *((_QWORD *)v190[0] + 64) = *(_QWORD *)(v126 + 2576);
                      }
                      DEVLOCKBLTOBJ::vClearRenderState((DEVLOCKBLTOBJ *)&v180, v190);
                      XDCOBJ::vUnlock((XDCOBJ *)v190);
                      v190[0] = 0LL;
                    }
                  }
                  GreDecLockCount();
                  v189 &= ~0x1000u;
                  v127 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                  if ( v127 )
                  {
                    v128 = *v127;
                    if ( v128 )
                    {
                      *(_QWORD *)(v128 + 320) = 0LL;
                      *(_QWORD *)(v128 + 312) = 0LL;
                    }
                  }
                  LODWORD(v116) = v189;
                }
                if ( (_QWORD)v180 )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v180);
                  GreReleaseSemaphoreInternal(v180);
                  LODWORD(v116) = v189;
                }
                if ( *((_QWORD *)&v180 + 1) )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)&v180 + 1));
                  GreReleaseSemaphoreInternal(*((_QWORD *)&v180 + 1));
                  LODWORD(v116) = v189;
                }
                if ( (v116 & 8) != 0 )
                  v189 = v116 & 0xFFFFFFF7;
                if ( (_QWORD)v181 )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v181);
                  GreReleaseSemaphoreInternal(v181);
                }
                if ( *((_QWORD *)&v193 + 1) )
                {
                  DCOBJ::DCOBJ((DCOBJ *)v202, v194);
                  SURFREF::SURFREF((SURFREF *)v205);
                  SURFREF::SURFREF((SURFREF *)v210);
                  LOBYTE(v129) = 5;
                  v130 = HmgShareLock(v193, v129);
                  LOBYTE(v131) = 5;
                  v206 = (HSURF *)v130;
                  v211 = HmgShareLock(*((_QWORD *)&v193 + 1), v131);
                  v132 = *v206;
                  *((_QWORD *)v202[0] + 64) = v211;
                  DEC_SHARE_REF_CNT(v206);
                  v206 = 0LL;
                  DEC_SHARE_REF_CNT(v211);
                  v211 = 0LL;
                  GreDereferenceObject(v132, 1u);
                  v194 = 0LL;
                  *(_QWORD *)&v193 = 0LL;
                  *((_DWORD *)v202[0] + 9) |= v195;
                  if ( (*((_DWORD *)v202[0] + 9) & 0x200) != 0 )
                  {
                    v133 = 0;
                    if ( !(unsigned int)GreGetLockCount()
                      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                    {
                      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                      v133 = 1;
                    }
                    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v162);
                    LOBYTE(v146) = 5;
                    v134 = HmgShareUnlockRemoveObject(*((_QWORD *)&v193 + 1), 0LL, 0LL, 0LL, v146);
                    if ( v134 )
                      SURFACE::bDeleteSurface(v134, 0LL, 1LL);
                    *((_QWORD *)v202[0] + 65) = 0LL;
                    DC::vClearRendering(v202[0]);
                    *((_QWORD *)&v193 + 1) = 0LL;
                    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v135);
                    if ( v133 )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                      GreReleaseSemaphoreInternal(ghsemGreLock);
                    }
                  }
                  else
                  {
                    LOBYTE(v146) = 5;
                    v136 = HmgShareUnlockRemoveObject(*((_QWORD *)&v193 + 1), 0LL, 0LL, 0LL, v146);
                    if ( v136 )
                      SURFACE::bDeleteSurface(v136, 0LL, 1LL);
                    *((_QWORD *)v202[0] + 65) = 0LL;
                    *((_QWORD *)&v193 + 1) = 0LL;
                  }
                  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v210);
                  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v205);
                  DCOBJ::~DCOBJ((DCOBJ *)v202);
                }
                if ( *((_QWORD *)&v196 + 1) )
                {
                  DCOBJ::DCOBJ((DCOBJ *)v207, v197);
                  SURFREF::SURFREF((SURFREF *)v203);
                  SURFREF::SURFREF((SURFREF *)v208);
                  LOBYTE(v137) = 5;
                  v138 = HmgShareLock(v196, v137);
                  LOBYTE(v139) = 5;
                  v204 = (HSURF *)v138;
                  v209 = HmgShareLock(*((_QWORD *)&v196 + 1), v139);
                  v140 = *v204;
                  *((_QWORD *)v207[0] + 64) = v209;
                  DEC_SHARE_REF_CNT(v204);
                  v204 = 0LL;
                  DEC_SHARE_REF_CNT(v209);
                  v209 = 0LL;
                  GreDereferenceObject(v140, 1u);
                  v197 = 0LL;
                  *(_QWORD *)&v196 = 0LL;
                  if ( (*((_DWORD *)v207[0] + 9) & 0x200) != 0 )
                  {
                    v141 = 0;
                    if ( !(unsigned int)GreGetLockCount()
                      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
                    {
                      GreAcquireSemaphoreSharedInternal(ghsemGreLock);
                      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
                      v141 = 1;
                    }
                    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v161);
                    LOBYTE(v146) = 5;
                    v142 = HmgShareUnlockRemoveObject(*((_QWORD *)&v196 + 1), 0LL, 0LL, 0LL, v146);
                    if ( v142 )
                      SURFACE::bDeleteSurface(v142, 0LL, 1LL);
                    *((_QWORD *)v207[0] + 65) = 0LL;
                    DC::vClearRendering(v207[0]);
                    *((_QWORD *)&v196 + 1) = 0LL;
                    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v143);
                    if ( v141 )
                    {
                      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
                      GreReleaseSemaphoreInternal(ghsemGreLock);
                    }
                  }
                  else
                  {
                    LOBYTE(v146) = 5;
                    v144 = HmgShareUnlockRemoveObject(*((_QWORD *)&v196 + 1), 0LL, 0LL, 0LL, v146);
                    if ( v144 )
                      SURFACE::bDeleteSurface(v144, 0LL, 1LL);
                    *((_QWORD *)v207[0] + 65) = 0LL;
                    *((_QWORD *)&v196 + 1) = 0LL;
                  }
                  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
                  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
                  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v208);
                  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v203);
                  DCOBJ::~DCOBJ((DCOBJ *)v207);
                }
                DCOBJ::~DCOBJ((DCOBJ *)v191);
                DCOBJ::~DCOBJ((DCOBJ *)v190);
                CAutoTGO::~CAutoTGO((CAutoTGO *)v186);
                SURFMEM::~SURFMEM((SURFMEM *)&v183);
                goto LABEL_277;
              }
              if ( (v189 & 0x8000) != 0 )
              {
                if ( v190[0] )
                  DEVLOCKBLTOBJ::bUnMapTrgSurfaceView((DEVLOCKBLTOBJ *)&v180);
                _InterlockedOr(v145, 0);
                if ( v191[0] )
                  DEVLOCKBLTOBJ::bUnMapSrcSurfaceView((DEVLOCKBLTOBJ *)&v180);
              }
              else
              {
                v118 = v191[0];
                if ( v191[0] )
                {
                  if ( (*((_DWORD *)v191[0] + 11) & 1) == 0 )
                  {
                    v119 = (SURFACE *)*((_QWORD *)v191[0] + 64);
                    if ( v119 )
                    {
                      SURFACE::bUnMap(v119, &v180, 0LL);
                      v118 = v191[0];
                    }
                  }
                  *((_DWORD *)v118 + 11) &= ~1u;
                }
                _InterlockedOr(v145, 0);
                v120 = v190[0];
                v116 = v189;
                if ( !v190[0] )
                  goto LABEL_221;
                v121 = (SURFACE *)*((_QWORD *)v190[0] + 64);
                if ( (v189 & 0x400) != 0 )
                {
                  bUnHookRedir((struct XDCOBJ *)v190);
                  v116 = v189;
                  v120 = v190[0];
                  LODWORD(v116) = v189 & 0xFFFFFBFF;
                  v189 &= ~0x400u;
                }
                if ( (v116 & 0x2000) != 0 )
                {
                  bUnHookBmpDrv((struct XDCOBJ *)v190);
                  v116 = v189;
                  v120 = v190[0];
                  LODWORD(v116) = v189 & 0xFFFFDFFF;
                  v189 &= ~0x2000u;
                }
                if ( (v116 & 0x1000) == 0 )
                  goto LABEL_215;
                if ( (*((_DWORD *)v120 + 11) & 1) == 0 )
                {
                  SURFACE::bUnMap(v121, &v180, v120);
                  v120 = v190[0];
                }
                *((_DWORD *)v120 + 11) &= ~1u;
              }
              v120 = v190[0];
              v116 = v189;
LABEL_215:
              if ( v120
                && (v116 & 0x1000) != 0
                && (*((_DWORD *)v120 + 9) & 0x4000) != 0
                && *((_QWORD *)v120 + 61)
                && *((_DWORD *)v120 + 126) )
              {
                GreUpdateSpriteDevLockEnd((struct XDCOBJ *)v190, v116 & 0x400000);
                v116 = v189;
              }
              goto LABEL_221;
            }
            v70 = *((_QWORD *)v44 + 12);
            v160 = a10;
            if ( a10 == -1 )
              v160 = *(_DWORD *)(*((_QWORD *)v44 + 10) + 36LL);
            v71 = *((_QWORD *)v33 + 10);
            v72 = *(_DWORD *)(v71 + 32);
            v167 = *(_DWORD *)(v71 + 40);
            v172 = *((_DWORD *)v33 + 28);
            v168 = v72;
            if ( (v52
               || v35
               && ((*(_DWORD *)(v35 + 24) & 0x800) == 0
                || (v73 = *(_QWORD *)(v36 + 80)) != 0 && v73 != *(_QWORD *)(v36 + 72)))
              && (v35
               || (*(_DWORD *)(v52 + 24) & 0x800) == 0
               || (v74 = *(_QWORD *)(v36 + 80)) != 0 && v74 != *(_QWORD *)(v36 + 72)) )
            {
              if ( !v52 || !v35 )
              {
LABEL_148:
                LODWORD(v151) = 0;
                LODWORD(v150) = v160;
                LODWORD(v149) = v168;
                LODWORD(v148) = v167;
                XlateObject = CreateXlateObject(0LL, v172, v52, v35, v70, v36, v148, v149, v150, v151);
                v157 = (XLATEOBJ *)XlateObject;
                v66 = (XLATEOBJ *)XlateObject;
                if ( XlateObject )
                {
                  if ( v52 && v35 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                    EXLATEOBJ::vAddToCache((__int64)&v157, v52, v35, v70, v36);
                  v12 = 1;
                }
                else
                {
                  v12 = 0;
                }
LABEL_156:
                v33 = v171[0];
                v67 = v156;
LABEL_157:
                v69 = (__int64)v66;
                if ( (*((_DWORD *)v33 + 9) & 1) == 0 )
                {
                  v215 = v213.right - v164;
                  v216 = v213.bottom - v67;
                }
                if ( !v12 )
                  goto LABEL_185;
                goto LABEL_160;
              }
              v75 = *(_QWORD *)(v52 + 136);
              if ( v75 == v52 )
                v76 = *(_DWORD *)(v52 + 32);
              else
                v76 = *(_DWORD *)(v75 + 32);
              v77 = *(_QWORD *)(v35 + 136);
              if ( v77 == v35 )
                v78 = *(_DWORD *)(v35 + 32);
              else
                v78 = *(_DWORD *)(v77 + 32);
              if ( v76 != v78 )
              {
                v79 = *(_DWORD *)(v52 + 56);
                v201 = v36;
                v200 = v70;
                v199 = v35;
                v173 = (HDC)ghsemPalette;
                GreAcquireSemaphore(ghsemPalette);
                v80 = xlateTable;
                v81 = 0;
                v82 = *(_QWORD *)(v52 + 136);
                v166 = xlateTable;
                do
                {
                  if ( v82 == v52 )
                    v83 = *(_DWORD *)(v52 + 32);
                  else
                    v83 = *(_DWORD *)(v82 + 32);
                  if ( *((_DWORD *)v80 + 8 * v79 + 4) == v83 )
                  {
                    v84 = XEPALOBJ::ulTime((XEPALOBJ *)&v199);
                    if ( *(_DWORD *)(v85 + 20) == v84 )
                    {
                      v86 = XEPALOBJ::ulTime((XEPALOBJ *)&v201);
                      if ( *(_DWORD *)(v87 + 28) == v86 )
                      {
                        v88 = *(XLATEOBJ **)(v87 + 8);
                        v157 = v88;
                        flXlate = v88[3].flXlate;
                        if ( (flXlate & 0x6000) == 0 )
                        {
                          if ( (v88->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                            || (v88->flXlate & 4) != 0
                            && v160 == v88[1].iUniq
                            && (v90 = XEPALOBJ::ulTime((XEPALOBJ *)&v200), *(_DWORD *)(v91 + 24) == v90)
                            || (flXlate & 0x100) != 0 && v167 == v88[1].flXlate && v168 == *(_DWORD *)&v88[1].iSrcType )
                          {
                            _InterlockedIncrement((volatile signed __int32 *)v166 + 8 * v79);
                            *(_DWORD *)(v52 + 56) = v79;
                            SEMOBJ::vUnlock((SEMOBJ *)&v173);
                            v66 = v157;
                            v12 = 1;
                            goto LABEL_156;
                          }
                        }
                        v80 = v166;
                      }
                    }
                  }
                  ++v81;
                  v79 = ((_BYTE)v79 + 1) & 7;
                }
                while ( v81 < 8 );
                if ( ghsemPalette )
                {
                  EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                  GreReleaseSemaphoreInternal(ghsemPalette);
                }
                goto LABEL_148;
              }
            }
            v66 = xloIdent;
            v12 = 1;
            v157 = xloIdent;
            goto LABEL_157;
          }
LABEL_197:
          v12 = 1;
          goto LABEL_188;
        }
        if ( *(_DWORD *)(v46 + 600) )
        {
          if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v46 + 600) )
            goto LABEL_100;
          v33 = v171[0];
          v44 = v198[0];
          v45 = v213.top;
          v43 = v213.left;
        }
        v47 = *(_DWORD *)(v46 + 112);
        if ( (v47 & 0x800) != 0 )
        {
          v48 = UserSurfaceAccessCheck(*(_QWORD *)(v46 + 592));
        }
        else
        {
          if ( (v47 & 0x10000000) == 0 )
          {
LABEL_68:
            if ( ((_DWORD)v34[29] & 8) == 0 && !*((_QWORD *)v34 + 27)
              || (v42 = 512LL, (*((_WORD *)v34 + 51) & 0x200) == 0) )
            {
              v49 = *((_DWORD *)v34 + 28);
              if ( (v49 & 0x800) != 0 )
              {
                v50 = UserSurfaceAccessCheck(*((_QWORD *)v34 + 74));
              }
              else
              {
                if ( (v49 & 0x10000000) == 0 )
                  goto LABEL_77;
                v50 = UserScreenAccessCheck(v42);
              }
              if ( v50 )
              {
                v33 = v171[0];
                v44 = v198[0];
                v45 = v213.top;
                v43 = v213.left;
                goto LABEL_77;
              }
            }
LABEL_100:
            EngSetLastError(6u);
            goto LABEL_188;
          }
          v48 = UserScreenAccessCheck(v42);
        }
        if ( !v48 )
          goto LABEL_100;
        v33 = v171[0];
        v44 = v198[0];
        v45 = v213.top;
        v43 = v213.left;
        goto LABEL_68;
      }
      v12 = 1;
    }
    else
    {
      v12 = GreStretchBltInternal(v173, left, top, v156, v163, a7, y, a4, v156, v18, a10, 0);
    }
LABEL_277:
    if ( v165 < 0 )
      DC::dwSetLayout(v171[0], -1, v159);
LABEL_279:
    DCOBJ::~DCOBJ((DCOBJ *)v198);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v171);
  return v12;
}
