/*
 * XREFs of NtGdiBitBltInternal @ 0x1C003E620
 * Callers:
 *     _InternalGetIconInfo @ 0x1C003C054 (_InternalGetIconInfo.c)
 *     NtGdiBitBlt @ 0x1C003DDF0 (NtGdiBitBlt.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C005CF20 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00777E4 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00AE2D8 (-UT_InvertCaret@@YAXXZ.c)
 *     _DrawIconEx @ 0x1C00B0C5C (_DrawIconEx.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 *     UpdateSpriteArea @ 0x1C00D661C (UpdateSpriteArea.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00D8568 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     BitBltSysBmp @ 0x1C011D69C (BitBltSysBmp.c)
 *     CreateSpb @ 0x1C012210C (CreateSpb.c)
 *     RecolorDeskPattern @ 0x1C01355A0 (RecolorDeskPattern.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C013CA74 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNAnimate @ 0x1C013F880 (MNAnimate.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     NtUserBitBltSysBmp @ 0x1C014B160 (NtUserBitBltSysBmp.c)
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 *     xxxClientExtTextOutW @ 0x1C0151798 (xxxClientExtTextOutW.c)
 *     xxxPrintWindow @ 0x1C01DE6D4 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C01E12DC (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C020DA2C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C020DDD8 (xxxClientPSMTextOut.c)
 *     xxxCompositedPaint @ 0x1C0225130 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226BB8 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02277F8 (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022E79C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     BltColor @ 0x1C0235644 (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0235F40 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C023882C (xxxRealDrawMenuItem.c)
 *     DxgkEngBltViaGDI @ 0x1C0260390 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0033E1C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C003554C (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C003A654 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C003A910 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     bCvtPts1 @ 0x1C003BEC0 (bCvtPts1.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00449C0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreClientRgnUpdated @ 0x1C0075BE8 (GreClientRgnUpdated.c)
 *     GreClientRgnUpdatedStable @ 0x1C010BD6C (GreClientRgnUpdatedStable.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C026175C (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C02618B8 (SimBitBlt.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        int a2,
        LONG top,
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
  unsigned int v12; // edi
  int x; // r12d
  LONG left; // esi
  int v18; // r14d
  __int64 v19; // rdx
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
  LONG v31; // eax
  LONG v32; // eax
  DC *v33; // rcx
  int v34; // eax
  int v35; // ebx
  int v36; // r9d
  DC *v37; // r8
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // r15
  unsigned __int8 v41; // cl
  __int64 v42; // rdx
  char *v43; // rbx
  __int64 v44; // rdx
  int v45; // ecx
  _DWORD *v46; // rcx
  int v47; // r10d
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  __int64 v50; // r14
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // rcx
  __int64 v56; // rdi
  int v57; // r13d
  bool v58; // zf
  __int64 v59; // rax
  int v60; // r11d
  __int64 v61; // rax
  int v62; // r11d
  int v63; // ecx
  LONG v64; // r11d
  LONG v65; // ecx
  int v66; // eax
  XLATEOBJ *v67; // rbx
  RECTL v68; // xmm6
  char *v69; // rbx
  struct REGION *v70; // rax
  int v71; // r10d
  __int64 v72; // r15
  __int64 v73; // r14
  __int64 v74; // rax
  int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // edx
  __int64 v80; // rax
  int v81; // ecx
  unsigned int v82; // r13d
  struct _XLATETABLE near *v83; // rdx
  unsigned int v84; // r10d
  __int64 v85; // r11
  int v86; // ecx
  int v87; // eax
  __int64 v88; // r8
  int v89; // eax
  __int64 v90; // r8
  XLATEOBJ *v91; // rdx
  FLONG flXlate; // r9d
  int v93; // eax
  __int64 v94; // r8
  __int64 XlateObject; // rax
  DC *v96; // r14
  __int64 v97; // r13
  __int64 v98; // rdx
  __int64 v99; // r8
  POINTL *v100; // r9
  POINTL *v101; // rdx
  unsigned int v102; // eax
  int v103; // edi
  __int64 v104; // rdi
  int v105; // esi
  __int64 ThreadWin32Thread; // rax
  unsigned int v107; // eax
  __int64 v108; // rax
  int (*v109)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v110; // rdx
  __int64 v111; // r9
  __int64 v112; // r10
  __int64 cEntries; // rax
  int v114; // edi
  int v115; // [rsp+70h] [rbp-90h]
  XLATEOBJ *v116; // [rsp+78h] [rbp-88h] BYREF
  int v117; // [rsp+80h] [rbp-80h]
  int v118; // [rsp+84h] [rbp-7Ch]
  int v119; // [rsp+88h] [rbp-78h]
  HDC v120; // [rsp+90h] [rbp-70h]
  int v121; // [rsp+98h] [rbp-68h]
  int v122; // [rsp+9Ch] [rbp-64h]
  int v123; // [rsp+A0h] [rbp-60h]
  unsigned int v124; // [rsp+A4h] [rbp-5Ch]
  struct _XLATETABLE near *v125; // [rsp+A8h] [rbp-58h]
  __int64 v126; // [rsp+B0h] [rbp-50h]
  int v127[2]; // [rsp+B8h] [rbp-48h]
  DC *v128[6]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v129; // [rsp+F0h] [rbp-10h]
  HDC v130; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v131; // [rsp+100h] [rbp+0h] BYREF
  int v132; // [rsp+108h] [rbp+8h]
  int v133; // [rsp+10Ch] [rbp+Ch]
  struct MATRIX *v134; // [rsp+110h] [rbp+10h] BYREF
  int v135; // [rsp+118h] [rbp+18h]
  int v136; // [rsp+11Ch] [rbp+1Ch]
  _QWORD v137[6]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v138; // [rsp+150h] [rbp+50h] BYREF
  __int64 v139; // [rsp+158h] [rbp+58h] BYREF
  __int64 v140; // [rsp+160h] [rbp+60h] BYREF
  RECTL v141; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v142[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v143; // [rsp+1A0h] [rbp+A0h]
  __int64 v144; // [rsp+1A8h] [rbp+A8h]
  char v145; // [rsp+1B0h] [rbp+B0h]
  int v146; // [rsp+1B4h] [rbp+B4h]
  int v147; // [rsp+1D8h] [rbp+D8h]
  __int128 v148; // [rsp+1E0h] [rbp+E0h]
  int v149; // [rsp+1F0h] [rbp+F0h]
  __int64 v150[6]; // [rsp+1F8h] [rbp+F8h] BYREF
  _QWORD v151[7]; // [rsp+228h] [rbp+128h] BYREF
  __int128 v152; // [rsp+260h] [rbp+160h]
  __int64 v153; // [rsp+270h] [rbp+170h]
  __int128 v154; // [rsp+280h] [rbp+180h]
  __int64 v155; // [rsp+290h] [rbp+190h]
  RECTL v156; // [rsp+2A0h] [rbp+1A0h] BYREF
  POINTL v157; // [rsp+2B0h] [rbp+1B0h] BYREF
  LONG v158; // [rsp+2B8h] [rbp+1B8h]
  LONG v159; // [rsp+2BCh] [rbp+1BCh]

  y = a8;
  v12 = 0;
  x = a7;
  left = a2;
  v130 = a1;
  v120 = a6;
  v117 = a8;
  if ( (a9 & 0x40000000) != 0 )
    return GreStretchBltInternal(a1, a2, a5, a6, a7, a8, a4, a5, a9 & 0xDFFFFFFF, a10, (a9 >> 28) & 2);
  v118 = a9 & 0xDFFFFFFF;
  v18 = a9 & 0x5FFFFFFF;
  DCOBJ::DCOBJ((DCOBJ *)v128, a1);
  if ( v128[0] && (*((_DWORD *)v128[0] + 9) & 0x10000) == 0 )
  {
    if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v18 != 16711778 && v18 != 66 )
      bSpDwmValidateSurface((struct XDCOBJ *)v128, left, top, a4, a5);
    DCOBJ::DCOBJ((DCOBJ *)v137, v120);
    if ( !v137[0] )
      goto LABEL_196;
    bSpDwmValidateSurface((struct XDCOBJ *)v137, a7, a8, a4, a5);
    v19 = v137[0];
    v20 = v128[0];
    v21 = *((_QWORD *)v128[0] + 10);
    v22 = *(_DWORD *)(v21 + 312);
    if ( (((unsigned __int8)v22 ^ *(_BYTE *)(*(_QWORD *)(v137[0] + 80LL) + 312LL)) & 7) != 0
      && (v118 < 0 && (v22 & 1) != 0 || (v22 & 9) == 9) )
    {
      v23 = *(_QWORD *)(v21 + 320);
      v24 = DC::dwSetLayout(v128[0], -1, 0);
      v20 = v128[0];
      v19 = v137[0];
      left = v23 - a4 - left;
      v123 = 0x80000000;
      y = v117;
    }
    else
    {
      v24 = v124;
      v123 = 0;
    }
    v118 = v24;
    v132 = *(_DWORD *)(*((_QWORD *)v20 + 10) + 68LL);
    v133 = *(_DWORD *)(*((_QWORD *)v20 + 10) + 312LL) & 1;
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 10) + 352LL) & 0xE000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v131, (struct XDCOBJ *)v128, 0x204u, 0);
      v19 = v137[0];
    }
    else
    {
      v131 = (__int64)v20 + 336;
    }
    v135 = *(_DWORD *)(*(_QWORD *)(v19 + 80) + 68LL);
    v136 = *(_DWORD *)(*(_QWORD *)(v19 + 80) + 312LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v19 + 80) + 352LL) & 0xE000) != 0 )
    {
      EXFORMOBJ::vInit((EXFORMOBJ *)&v134, (struct XDCOBJ *)v137, 0x204u, 0);
      v25 = v134;
    }
    else
    {
      v25 = (struct MATRIX *)(v19 + 336);
      v134 = v25;
    }
    if ( (*(_DWORD *)(v131 + 32) & 1) != 0 && EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v131, v25) )
    {
      v26 = a5;
      v27 = a7 + a4;
      v157.x = a7;
      v157.y = y;
      v28 = y + a5;
      v158 = a7 + a4;
      v159 = y + a5;
      if ( (*((_BYTE *)v134 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1((__int64)v134, (int *)&v157, 2LL);
        v28 = v159;
        v27 = v158;
        v26 = a5;
        y = v157.y;
        x = v157.x;
      }
      if ( v136 )
      {
        ++x;
        ++v27;
        v157.x = x;
        v158 = v27;
      }
      if ( x > v27 )
      {
        v157.x = v27;
        v158 = x;
      }
      if ( y > v28 )
      {
        v157.y = v28;
        v159 = y;
      }
      bottom = v26 + top;
      v156.left = left;
      right = left + a4;
      v156.top = top;
      v156.right = left + a4;
      v156.bottom = v26 + top;
      if ( (*(_BYTE *)(v131 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1(v131, &v156.left, 2LL);
        bottom = v156.bottom;
        right = v156.right;
        top = v156.top;
        left = v156.left;
      }
      if ( v133 )
      {
        ++left;
        ++right;
        v156.left = left;
        v156.right = right;
      }
      if ( left > right )
      {
        v31 = left;
        v156.left = right;
        left = right;
        v156.right = v31;
        right = v31;
      }
      if ( top > bottom )
      {
        v32 = top;
        v156.top = bottom;
        top = bottom;
        v156.bottom = v32;
        bottom = v32;
      }
      if ( left != right && top != bottom )
      {
        v33 = v128[0];
        v34 = *((_DWORD *)v128[0] + 9);
        if ( (v34 & 0xE0) != 0 )
        {
          if ( (v34 & 0x20) != 0 )
          {
            ERECTL::operator|=((_DWORD *)v128[0] + 364, &v156);
            v33 = v128[0];
          }
          if ( (*((_DWORD *)v33 + 9) & 0x80u) != 0 )
            ERECTL::operator|=((_DWORD *)v33 + 372, &v156);
        }
        v35 = 0;
        v144 = 0LL;
        v145 = 0;
        v146 = 0;
        v147 = 0;
        DCOBJ::DCOBJ((DCOBJ *)v150);
        DCOBJ::DCOBJ((DCOBJ *)v151);
        v143 = 0LL;
        memset(v142, 0, sizeof(v142));
        v148 = 0LL;
        v152 = 0LL;
        v154 = 0LL;
        v149 = 0;
        v151[6] = 0LL;
        v153 = 0LL;
        v155 = 0LL;
        v150[0] = 0LL;
        v151[0] = 0LL;
        if ( !(unsigned int)DEVLOCKBLTOBJ::bLock(
                              (DEVLOCKBLTOBJ *)v142,
                              (struct XDCOBJ *)v128,
                              (struct XDCOBJ *)v137,
                              v36) )
        {
          v114 = XDCOBJ::bFullScreen((XDCOBJ *)v137);
          v12 = XDCOBJ::bFullScreen((XDCOBJ *)v128) | v114;
          goto LABEL_191;
        }
        v37 = v128[0];
        v38 = *((_QWORD *)v128[0] + 64);
        if ( !v38 )
          goto LABEL_189;
        v39 = *(_QWORD *)(v38 + 120);
        v40 = *((_QWORD *)v128[0] + 12);
        v41 = (a9 & 0x5FFFFFFF) >> 16;
        v117 = (v41 << 8) | v41;
        if ( ((v41 ^ (unsigned __int8)(16 * v41)) & 0xF0) != 0 )
        {
          v42 = *((_QWORD *)v128[0] + 10);
          v43 = (char *)v128[0] + 1584;
          v120 = (HDC)((char *)v128[0] + 1584);
          if ( (*(_DWORD *)(v42 + 8) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v128[0], *(_QWORD *)(v42 + 16));
            v37 = v128[0];
          }
          v44 = *((_QWORD *)v37 + 10);
          v45 = *(_DWORD *)(v44 + 8);
          if ( (v45 & 1) != 0 || (*((_DWORD *)v37 + 83) & 1) != 0 )
          {
            *(_DWORD *)(v44 + 8) = v45 & 0xFFFFFFFE;
            *((_DWORD *)v128[0] + 83) &= ~1u;
            EBRUSHOBJ::vInitBrush(v43, v128[0], *((_QWORD *)v128[0] + 18), v40, v39, v38, 1);
            v37 = v128[0];
          }
          v35 = 0;
        }
        else
        {
          v120 = 0LL;
        }
        v46 = (_DWORD *)((char *)v37 + 1416);
        if ( (*((_DWORD *)v37 + 10) & 1) == 0 )
          v46 = (_DWORD *)((char *)v37 + 1408);
        v47 = *v46 + v156.left;
        v48 = v137[0];
        v156.left = v47;
        v156.right += *v46;
        v49 = (unsigned int)(v46[1] + v156.top);
        v156.top += v46[1];
        v156.bottom += v46[1];
        v50 = *(_QWORD *)(v137[0] + 512LL);
        v126 = v50;
        if ( !v50 )
          goto LABEL_189;
        if ( (a11 & 2) != 0 )
        {
LABEL_79:
          v55 = (_DWORD *)(v48 + 1416);
          v56 = *(_QWORD *)(v50 + 120);
          if ( (*(_DWORD *)(v48 + 40) & 1) == 0 )
            v55 = (_DWORD *)(v48 + 1408);
          v57 = v47 - *v55 - v157.x;
          v58 = (*(_DWORD *)(v48 + 40) & 1) == 0;
          v124 = v57;
          v59 = v48 + 1416;
          if ( v58 )
            v59 = v48 + 1408;
          v60 = v49 - *(_DWORD *)(v59 + 4) - v157.y;
          v61 = *(_QWORD *)(v50 + 48);
          v115 = v60;
          v62 = 0;
          if ( v61 && v50 == *(_QWORD *)(v61 + 2576) && (*(_DWORD *)(v61 + 56) & 0x20000) != 0 )
          {
            v62 = *(_DWORD *)(v61 + 2608);
            v35 = *(_DWORD *)(v61 + 2612);
          }
          if ( v62 + v57 > v47 )
            v47 = v62 + v57;
          v156.left = v47;
          if ( v35 + v115 > (int)v49 )
            v49 = (unsigned int)(v35 + v115);
          v156.top = v49;
          v63 = v62 + *(_DWORD *)(v50 + 56);
          v64 = v156.right;
          v65 = v57 + v63;
          if ( v65 < v156.right )
            v64 = v65;
          v156.right = v64;
          v66 = v156.bottom;
          if ( v35 + *(_DWORD *)(v50 + 60) + v115 < v156.bottom )
            v66 = v35 + *(_DWORD *)(v50 + 60) + v115;
          v156.bottom = v66;
          if ( v47 < v64 && (int)v49 < v66 )
          {
            v67 = 0LL;
            *(_QWORD *)v127 = 0LL;
            if ( v47 >= *((_DWORD *)v37 + 348)
              && v64 <= *((_DWORD *)v37 + 350)
              && (int)v49 >= *((_DWORD *)v37 + 349)
              && v66 <= *((_DWORD *)v37 + 351) )
            {
              v68 = v156;
              goto LABEL_105;
            }
            v69 = (char *)v37 + 2184;
            *(_QWORD *)v127 = (char *)v37 + 2184;
            v70 = XDCOBJ::prgnEffRao((XDCOBJ *)v128);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v69, v70, (struct ERECTL *)&v156, 2);
            v68 = *(RECTL *)(v69 + 4);
            v156 = v68;
            if ( !ERECTL::bEmpty((ERECTL *)&v156) )
            {
              v37 = v128[0];
              v67 = 0LL;
              v48 = v137[0];
              v49 = (unsigned int)v156.top;
              v47 = v156.left;
LABEL_105:
              if ( (*((_DWORD *)v37 + 9) & 0xE0) != 0 )
              {
                v141 = v68;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v128, (struct ECLIPOBJ *)v49, (struct ERECTL *)&v141);
                v37 = v128[0];
                v48 = v137[0];
                LODWORD(v49) = v156.top;
                v47 = v156.left;
              }
              v116 = 0LL;
              v157.x = v47 - v57;
              v71 = v115;
              v157.y = v49 - v115;
              if ( *(_QWORD *)(v48 + 512) == *((_QWORD *)v37 + 64) )
              {
                v72 = 0LL;
                goto LABEL_162;
              }
              v73 = *(_QWORD *)(v48 + 96);
              v119 = a10;
              if ( a10 == -1 )
                v119 = *(_DWORD *)(*(_QWORD *)(v48 + 80) + 36LL);
              v74 = *((_QWORD *)v37 + 10);
              v75 = *(_DWORD *)(v74 + 32);
              v122 = *(_DWORD *)(v74 + 40);
              v129 = *((_DWORD *)v37 + 28);
              v121 = v75;
              if ( (v56
                 || v39
                 && ((*(_DWORD *)(v39 + 24) & 0x800) == 0
                  || (v76 = *(_QWORD *)(v40 + 80)) != 0 && v76 != *(_QWORD *)(v40 + 72)))
                && (v39
                 || (*(_DWORD *)(v56 + 24) & 0x800) == 0
                 || (v77 = *(_QWORD *)(v40 + 80)) != 0 && v77 != *(_QWORD *)(v40 + 72)) )
              {
                if ( !v56 || !v39 )
                {
LABEL_150:
                  XlateObject = CreateXlateObject(0LL, v129, v56, v39, v73, v40, v122, v121, v119, 0);
                  v116 = (XLATEOBJ *)XlateObject;
                  v67 = (XLATEOBJ *)XlateObject;
                  if ( XlateObject )
                  {
                    if ( v56 && v39 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                      EXLATEOBJ::vAddToCache((__int64)&v116, v56, v39, v73, v40);
                    v12 = 1;
                  }
                  else
                  {
                    v12 = 0;
                  }
LABEL_158:
                  v37 = v128[0];
                  v71 = v115;
LABEL_159:
                  v72 = (__int64)v67;
                  if ( (*((_DWORD *)v37 + 9) & 1) == 0 )
                  {
                    v158 = v156.right - v124;
                    v159 = v156.bottom - v71;
                  }
                  if ( !v12 )
                    goto LABEL_184;
LABEL_162:
                  ++*(_DWORD *)(v38 + 92);
                  v96 = v128[0];
                  v97 = v137[0];
                  if ( *((_QWORD *)v128[0] + 6) == *(_QWORD *)(v137[0] + 48LL)
                    || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v128) && *(_QWORD *)(v98 + 3536) == v99
                    || !*(_WORD *)(v126 + 100) && !*(_QWORD *)(v126 + 24) && (*(_DWORD *)(v98 + 56) & 0x80u) == 0 )
                  {
                    v103 = v117;
                    if ( v117 == 52428 )
                    {
                      v104 = *(_QWORD *)(v38 + 48);
                      v105 = a11 & 1;
                      if ( v105 )
                      {
                        EtwWindowRendering(
                          *((_QWORD *)v96 + 60),
                          *((_QWORD *)v96 + 61),
                          **((_QWORD **)v96 + 64),
                          (unsigned int)v156.left,
                          v156.top,
                          v156.right,
                          v156.bottom,
                          *(_QWORD *)(v97 + 480),
                          *(_QWORD *)(v97 + 488),
                          **(_QWORD **)(v97 + 512),
                          v157.x,
                          v157.y,
                          v157.x + abs32(v156.right - v156.bottom),
                          v157.y + abs32(v156.bottom - v156.top));
                        *(_WORD *)(v38 + 102) |= 0x40u;
                        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                        if ( ThreadWin32Thread )
                          *(_BYTE *)(ThreadWin32Thread + 328) = 0;
                        GreClientRgnUpdated(0LL);
                        GreClientRgnUpdatedStable();
                        v67 = v116;
                      }
                      if ( (*(_DWORD *)(v38 + 112) & 0x400) != 0 )
                        v107 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, RECTL *, POINTL *))(v104 + 2864))(
                                 v38 + 24,
                                 v126 + 24,
                                 *(_QWORD *)v127,
                                 v72,
                                 &v156,
                                 &v157);
                      else
                        v107 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, RECTL *, POINTL *))EngCopyBits)(
                                 v38 + 24,
                                 v126 + 24,
                                 *(_QWORD *)v127,
                                 v72,
                                 &v156,
                                 &v157);
                      v12 = v107;
                      if ( v105 )
                      {
                        *(_WORD *)(v38 + 102) &= ~0x40u;
                        v108 = W32GetThreadWin32Thread(KeGetCurrentThread());
                        v67 = v116;
                        if ( v108 )
                          *(_BYTE *)(v108 + 328) = 1;
                      }
                      goto LABEL_184;
                    }
                    v109 = SURFACE::pfnBitBlt((SURFACE *)v38);
                    v102 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, RECTL *, POINTL *, __int64, HDC, __int64, int))v109)(
                             v38 + 24,
                             v112,
                             0LL,
                             *(_QWORD *)v127,
                             v72,
                             &v156,
                             &v157,
                             v111,
                             v120,
                             v110,
                             v103);
                  }
                  else
                  {
                    v101 = (POINTL *)v142;
                    if ( *(char *)(*(_QWORD *)(v38 + 48) + 56LL) >= 0 )
                      v101 = v100;
                    v102 = SimBitBlt(
                             (int)v38 + 24,
                             (int)v126 + 24,
                             0,
                             v127[0],
                             v72,
                             &v156,
                             &v157,
                             v100,
                             (__int64)v120,
                             (__int64)v96 + 1576,
                             v117,
                             (__int64)v101);
                  }
                  v12 = v102;
LABEL_184:
                  if ( v67 )
                  {
                    cEntries = (int)v67[1].cEntries;
                    if ( (int)cEntries < 0 )
                    {
                      if ( (_DWORD)cEntries == -1 )
                        FreeThreadBufferWithTag(v67);
                    }
                    else
                    {
                      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                    }
                  }
                  goto LABEL_191;
                }
                v78 = *(_QWORD *)(v56 + 128);
                if ( v78 == v56 )
                  v79 = *(_DWORD *)(v56 + 32);
                else
                  v79 = *(_DWORD *)(v78 + 32);
                v80 = *(_QWORD *)(v39 + 128);
                if ( v80 == v39 )
                  v81 = *(_DWORD *)(v39 + 32);
                else
                  v81 = *(_DWORD *)(v80 + 32);
                if ( v79 != v81 )
                {
                  v82 = *(_DWORD *)(v56 + 56);
                  v139 = v40;
                  v140 = v73;
                  v138 = v39;
                  v130 = (HDC)ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v83 = xlateTable;
                  v84 = 0;
                  v85 = *(_QWORD *)(v56 + 128);
                  v125 = xlateTable;
                  do
                  {
                    if ( v85 == v56 )
                      v86 = *(_DWORD *)(v56 + 32);
                    else
                      v86 = *(_DWORD *)(v85 + 32);
                    if ( *((_DWORD *)v83 + 8 * v82 + 4) == v86 )
                    {
                      v87 = XEPALOBJ::ulTime((XEPALOBJ *)&v138);
                      if ( *(_DWORD *)(v88 + 20) == v87 )
                      {
                        v89 = XEPALOBJ::ulTime((XEPALOBJ *)&v139);
                        if ( *(_DWORD *)(v90 + 28) == v89 )
                        {
                          v91 = *(XLATEOBJ **)(v90 + 8);
                          v116 = v91;
                          flXlate = v91[3].flXlate;
                          if ( (flXlate & 0x6000) == 0 )
                          {
                            if ( (v91->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                              || (v91->flXlate & 4) != 0
                              && v119 == v91[1].iUniq
                              && (v93 = XEPALOBJ::ulTime((XEPALOBJ *)&v140), *(_DWORD *)(v94 + 24) == v93)
                              || (flXlate & 0x100) != 0 && v122 == v91[1].flXlate && v121 == *(_DWORD *)&v91[1].iSrcType )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)v125 + 8 * v82);
                              *(_DWORD *)(v56 + 56) = v82;
                              SEMOBJ::~SEMOBJ((SEMOBJ *)&v130);
                              v67 = v116;
                              v12 = 1;
                              goto LABEL_158;
                            }
                          }
                          v83 = v125;
                        }
                      }
                    }
                    ++v84;
                    v82 = ((_BYTE)v82 + 1) & 7;
                  }
                  while ( v84 < 8 );
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
                  goto LABEL_150;
                }
              }
              v67 = xloIdent;
              v12 = 1;
              v116 = xloIdent;
              goto LABEL_159;
            }
          }
LABEL_189:
          v12 = 1;
          goto LABEL_191;
        }
        if ( *(_DWORD *)(v50 + 608) )
        {
          if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v50 + 608) )
            goto LABEL_102;
          v37 = v128[0];
          v48 = v137[0];
          v49 = (unsigned int)v156.top;
          v47 = v156.left;
        }
        v51 = *(_DWORD *)(v50 + 112);
        if ( (v51 & 0x800) != 0 )
        {
          v52 = UserSurfaceAccessCheck(*(_QWORD *)(v50 + 600));
        }
        else
        {
          if ( (v51 & 0x10000000) == 0 )
          {
LABEL_70:
            if ( (*(_DWORD *)(v38 + 116) & 8) == 0 && !*(_QWORD *)(v38 + 224) || (*(_WORD *)(v38 + 102) & 0x200) == 0 )
            {
              v53 = *(_DWORD *)(v38 + 112);
              if ( (v53 & 0x800) != 0 )
              {
                v54 = UserSurfaceAccessCheck(*(_QWORD *)(v38 + 600));
              }
              else
              {
                if ( (v53 & 0x10000000) == 0 )
                  goto LABEL_79;
                v54 = UserScreenAccessCheck(v46, v49, v37);
              }
              if ( v54 )
              {
                v37 = v128[0];
                v48 = v137[0];
                v49 = (unsigned int)v156.top;
                v47 = v156.left;
                goto LABEL_79;
              }
            }
LABEL_102:
            EngSetLastError(6u);
LABEL_191:
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v142);
            goto LABEL_194;
          }
          v52 = UserScreenAccessCheck(v46, v49, v37);
        }
        if ( !v52 )
          goto LABEL_102;
        v37 = v128[0];
        v48 = v137[0];
        v49 = (unsigned int)v156.top;
        v47 = v156.left;
        goto LABEL_70;
      }
      v12 = 1;
    }
    else
    {
      v12 = GreStretchBltInternal(v130, left, a5, v120, a7, y, a4, a5, v18, a10, 0);
    }
LABEL_194:
    if ( v123 < 0 )
      DC::dwSetLayout(v128[0], -1, v118);
LABEL_196:
    DCOBJ::~DCOBJ((DCOBJ *)v137);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v128);
  return v12;
}
