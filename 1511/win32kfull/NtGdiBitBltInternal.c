/*
 * XREFs of NtGdiBitBltInternal @ 0x1C0048C50
 * Callers:
 *     _DrawIconEx @ 0x1C00150EC (_DrawIconEx.c)
 *     NtGdiBitBlt @ 0x1C0048C40 (NtGdiBitBlt.c)
 *     _InternalGetIconInfo @ 0x1C0049C9C (_InternalGetIconInfo.c)
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C0050400 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006A524 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C009AF0C (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970 (-UT_InvertCaret@@YAXXZ.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00CCAFC (xxxClientGetTextExtentPointW.c)
 *     CreateCompatiblePublicDC @ 0x1C00CCE28 (CreateCompatiblePublicDC.c)
 *     BitBltSysBmp @ 0x1C00FB8D4 (BitBltSysBmp.c)
 *     CreateSpb @ 0x1C010B97C (CreateSpb.c)
 *     RecolorDeskPattern @ 0x1C01141B0 (RecolorDeskPattern.c)
 *     MNAnimate @ 0x1C01393FC (MNAnimate.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0139638 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     NtUserBitBltSysBmp @ 0x1C0145310 (NtUserBitBltSysBmp.c)
 *     UpdateSpriteArea @ 0x1C014577C (UpdateSpriteArea.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 *     xxxClientExtTextOutW @ 0x1C014C20C (xxxClientExtTextOutW.c)
 *     xxxPrintWindow @ 0x1C01E7E84 (xxxPrintWindow.c)
 *     RestoreSpb @ 0x1C01EA75C (RestoreSpb.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214C20 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0214F8C (xxxClientPSMTextOut.c)
 *     xxxCompositedPaint @ 0x1C0224568 (xxxCompositedPaint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0226E94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0227B9C (-TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0235EA4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     BltColor @ 0x1C023DC5C (BltColor.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C023E554 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0242490 (xxxRealDrawMenuItem.c)
 *     DxgkEngBltViaGDI @ 0x1C0262980 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002DAD0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002DBD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0038DCC (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0041720 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??_5ERECTL@@QEAAXAEAU_RECTL@@@Z @ 0x1C0041E20 (--_5ERECTL@@QEAAXAEAU_RECTL@@@Z.c)
 *     bCvtPts1 @ 0x1C0041E4C (bCvtPts1.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C0044040 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0046230 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     GreClientRgnUpdated @ 0x1C004F8F8 (GreClientRgnUpdated.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreClientRgnUpdatedStable @ 0x1C00ECDD8 (GreClientRgnUpdatedStable.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0263BDC (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     SimBitBlt @ 0x1C0263D38 (SimBitBlt.c)
 */

__int64 __fastcall NtGdiBitBltInternal(
        HDC a1,
        LONG left,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        char a11)
{
  LONG x; // r15d
  LONG top; // r13d
  __int64 v15; // rdx
  unsigned int v16; // edi
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // ebx
  int y; // ebx
  __int64 v23; // rdx
  DC *v24; // r9
  __int64 v25; // r10
  int v26; // r8d
  __int64 v27; // rbx
  unsigned int v28; // eax
  struct MATRIX *v29; // rdx
  int v30; // ecx
  LONG v31; // edx
  LONG v32; // r8d
  LONG bottom; // r8d
  LONG right; // edx
  DC *v35; // rcx
  int v36; // eax
  int v37; // ebx
  DC *v38; // r8
  __int64 v39; // r12
  __int64 v40; // rsi
  __int64 v41; // r15
  unsigned __int8 v42; // cl
  __int64 v43; // rdx
  char *v44; // rbx
  __int64 v45; // rdx
  int v46; // ecx
  _DWORD *v47; // rcx
  int v48; // r10d
  __int64 v49; // r9
  unsigned __int64 v50; // rdx
  __int64 v51; // r14
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  _DWORD *v56; // rcx
  __int64 v57; // rdi
  int v58; // r13d
  bool v59; // zf
  __int64 v60; // rax
  int v61; // r11d
  __int64 v62; // rax
  int v63; // r11d
  int v64; // ecx
  LONG v65; // r11d
  LONG v66; // ecx
  int v67; // eax
  XLATEOBJ *v68; // rbx
  struct _RECTL v69; // xmm6
  char *v70; // rbx
  struct REGION *v71; // rax
  int v72; // r10d
  __int64 v73; // rdx
  __int64 v74; // r15
  __int64 v75; // r14
  __int64 v76; // rax
  int v77; // ecx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  int v82; // ecx
  unsigned int v83; // r13d
  struct _XLATETABLE near *v84; // rdx
  unsigned int v85; // r10d
  __int64 v86; // r11
  int v87; // ecx
  int v88; // eax
  __int64 v89; // r8
  int v90; // eax
  __int64 v91; // r8
  XLATEOBJ *v92; // rdx
  FLONG flXlate; // r9d
  int v94; // eax
  __int64 v95; // r8
  __int64 XlateObject; // rax
  DC *v97; // rsi
  __int64 v98; // r13
  __int64 v99; // rdx
  __int64 v100; // r8
  POINTL *v101; // r9
  POINTL *v102; // rdx
  unsigned int v103; // eax
  __int64 v104; // rdi
  int v105; // r14d
  int v106; // eax
  int v107; // edx
  __int64 ThreadWin32Thread; // rax
  unsigned int v109; // eax
  __int64 v110; // rax
  int (*v111)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v112; // rdx
  int v113; // r8d
  __int64 v114; // r9
  __int64 cEntries; // rax
  int v116; // edi
  POINTL *v117; // [rsp+30h] [rbp-D0h]
  int v118; // [rsp+70h] [rbp-90h]
  DC *v119[2]; // [rsp+78h] [rbp-88h] BYREF
  int v120; // [rsp+88h] [rbp-78h]
  __int64 v121; // [rsp+90h] [rbp-70h] BYREF
  __int64 v122; // [rsp+98h] [rbp-68h]
  XLATEOBJ *v123; // [rsp+A0h] [rbp-60h] BYREF
  int v124; // [rsp+A8h] [rbp-58h]
  struct _XLATETABLE near *v125; // [rsp+B0h] [rbp-50h]
  int v126; // [rsp+B8h] [rbp-48h]
  unsigned int v127; // [rsp+BCh] [rbp-44h]
  int v128; // [rsp+C0h] [rbp-40h]
  int v129; // [rsp+C4h] [rbp-3Ch]
  int v130; // [rsp+C8h] [rbp-38h]
  __int64 v131; // [rsp+D0h] [rbp-30h]
  int v132[2]; // [rsp+D8h] [rbp-28h]
  __int64 v133; // [rsp+E0h] [rbp-20h]
  int v134; // [rsp+E8h] [rbp-18h]
  HDC v135; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v136; // [rsp+F8h] [rbp-8h] BYREF
  int v137; // [rsp+100h] [rbp+0h]
  int v138; // [rsp+104h] [rbp+4h]
  struct MATRIX *v139; // [rsp+108h] [rbp+8h] BYREF
  int v140; // [rsp+110h] [rbp+10h]
  int v141; // [rsp+114h] [rbp+14h]
  __int64 v142; // [rsp+118h] [rbp+18h] BYREF
  __int64 v143; // [rsp+120h] [rbp+20h] BYREF
  __int64 v144; // [rsp+128h] [rbp+28h] BYREF
  _OWORD v145[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v146; // [rsp+150h] [rbp+50h]
  __int64 v147; // [rsp+158h] [rbp+58h]
  char v148; // [rsp+160h] [rbp+60h]
  int v149; // [rsp+164h] [rbp+64h]
  __int64 v150; // [rsp+168h] [rbp+68h]
  __int64 v151; // [rsp+170h] [rbp+70h]
  int v152; // [rsp+178h] [rbp+78h]
  __int64 v153; // [rsp+180h] [rbp+80h]
  __int64 v154; // [rsp+188h] [rbp+88h]
  __int64 v155; // [rsp+190h] [rbp+90h]
  __int64 v156; // [rsp+198h] [rbp+98h]
  __int64 v157; // [rsp+1A0h] [rbp+A0h]
  __int64 v158; // [rsp+1A8h] [rbp+A8h]
  __int64 v159; // [rsp+1B0h] [rbp+B0h]
  __int64 v160; // [rsp+1B8h] [rbp+B8h]
  __int64 v161; // [rsp+1C8h] [rbp+C8h]
  __int64 v162; // [rsp+1D0h] [rbp+D0h]
  __int64 v163; // [rsp+1D8h] [rbp+D8h]
  struct _RECTL v164; // [rsp+1E0h] [rbp+E0h] BYREF
  RECTL v165; // [rsp+1F0h] [rbp+F0h] BYREF
  POINTL v166; // [rsp+200h] [rbp+100h] BYREF
  int v167; // [rsp+208h] [rbp+108h]
  LONG v168; // [rsp+20Ch] [rbp+10Ch]

  x = a7;
  top = a3;
  v135 = a1;
  v15 = a8;
  v16 = 0;
  v131 = (__int64)a6;
  v120 = a8;
  if ( (a9 & 0x40000000) != 0 )
    return GreStretchBltInternal(a1, left, a3, a4, a5, a6, a7, a8, a4, a5, a9 & 0xDFFFFFFF, a10, (a9 >> 28) & 2);
  v124 = a9 & 0xDFFFFFFF;
  LOBYTE(v15) = 1;
  v119[1] = 0LL;
  v18 = a9 & 0x5FFFFFFF;
  v119[0] = (DC *)HmgLockEx(a1, v15, 0LL);
  if ( v119[0] )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)v119) )
    {
      if ( v119[0] && (*((_DWORD *)v119[0] + 9) & 0x10000) == 0 )
      {
        v19 = BYTE1(v18);
        if ( ((gajRop3[(unsigned __int8)a9] | gajRop3[BYTE1(a9)]) & 2) != 0 && v18 != 16711778 && v18 != 66 )
          bSpDwmValidateSurface((struct XDCOBJ *)v119, left, top, a4, a5);
        v122 = 0LL;
        LOBYTE(v19) = 1;
        v20 = HmgLockEx(v131, v19, 0LL);
        v121 = v20;
        if ( !v20 )
          goto LABEL_215;
        if ( HIDWORD(v122) )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v20 + 48) + 56LL) & 0x8000) == 0 )
          {
LABEL_20:
            _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
            v121 = 0LL;
LABEL_215:
            XDCOBJ::RestoreAttributes((XDCOBJ *)v119);
            _InterlockedDecrement((volatile signed __int32 *)v119[0] + 3);
            return v16;
          }
          v21 = *(_DWORD *)(v20 + 2504);
          if ( v21 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            v20 = v121;
            goto LABEL_20;
          }
        }
        if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v121) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v121 + 12));
          v121 = 0LL;
          goto LABEL_215;
        }
        if ( !v121 )
          goto LABEL_215;
        y = v120;
        bSpDwmValidateSurface((struct XDCOBJ *)&v121, a7, v120, a4, a5);
        v23 = v121;
        v24 = v119[0];
        v25 = *((_QWORD *)v119[0] + 10);
        v26 = *(_DWORD *)(v25 + 312);
        if ( (((unsigned __int8)v26 ^ *(_BYTE *)(*(_QWORD *)(v121 + 80) + 312LL)) & 7) != 0
          && (v124 < 0 && (v26 & 1) != 0 || (v26 & 9) == 9) )
        {
          v27 = *(_QWORD *)(v25 + 320);
          v28 = DC::dwSetLayout(v119[0], -1, 0);
          v24 = v119[0];
          v23 = v121;
          left = v27 - a4 - left;
          v130 = 0x80000000;
          y = v120;
        }
        else
        {
          v28 = v127;
          v130 = 0;
        }
        v124 = v28;
        v137 = *(_DWORD *)(*((_QWORD *)v24 + 10) + 68LL);
        v138 = *(_DWORD *)(*((_QWORD *)v24 + 10) + 312LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v24 + 10) + 352LL) & 0xE000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v136, (struct XDCOBJ *)v119, 0x204u, 0);
          v23 = v121;
        }
        else
        {
          v136 = (unsigned __int64)v24 + 336;
        }
        v140 = *(_DWORD *)(*(_QWORD *)(v23 + 80) + 68LL);
        v141 = *(_DWORD *)(*(_QWORD *)(v23 + 80) + 312LL) & 1;
        if ( (*(_DWORD *)(*(_QWORD *)(v23 + 80) + 352LL) & 0xE000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v139, (struct XDCOBJ *)&v121, 0x204u, 0);
          v29 = v139;
        }
        else
        {
          v29 = (struct MATRIX *)(v23 + 336);
          v139 = v29;
        }
        if ( (*(_DWORD *)(v136 + 32) & 1) == 0 || !EXFORMOBJ::bEqualExceptTranslations((EXFORMOBJ *)&v136, v29) )
        {
          v16 = GreStretchBltInternal(v135, left, top, a4, a5, (HDC)v131, a7, y, a4, a5, v18, a10, 0);
          goto LABEL_212;
        }
        v30 = a5;
        v31 = a7 + a4;
        v166.x = a7;
        v166.y = y;
        v32 = y + a5;
        v167 = a7 + a4;
        v168 = y + a5;
        if ( (*((_BYTE *)v139 + 32) & 0x43) != 0x43 )
        {
          bCvtPts1((unsigned __int64)v139, &v166, 2LL);
          v32 = v168;
          v31 = v167;
          v30 = a5;
          y = v166.y;
          x = v166.x;
        }
        if ( v141 )
        {
          ++x;
          ++v31;
          v166.x = x;
          v167 = v31;
        }
        if ( x > v31 )
        {
          v166.x = v31;
          v167 = x;
        }
        if ( y > v32 )
        {
          v166.y = v32;
          v168 = y;
        }
        bottom = v30 + top;
        v165.left = left;
        right = a4 + left;
        v165.top = top;
        v165.right = a4 + left;
        v165.bottom = v30 + top;
        if ( (*(_BYTE *)(v136 + 32) & 0x43) != 0x43 )
        {
          bCvtPts1(v136, &v165, 2LL);
          bottom = v165.bottom;
          right = v165.right;
          top = v165.top;
          left = v165.left;
        }
        if ( v138 )
        {
          ++left;
          ++right;
          v165.left = left;
          v165.right = right;
        }
        if ( left > right )
        {
          v165.left = right;
          v165.right = left;
        }
        if ( top > bottom )
        {
          v165.top = bottom;
          v165.bottom = top;
        }
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v165) )
        {
          v16 = 1;
          goto LABEL_212;
        }
        v35 = v119[0];
        v36 = *((_DWORD *)v119[0] + 9);
        if ( (v36 & 0xE0) != 0 )
        {
          if ( (v36 & 0x20) != 0 )
          {
            ERECTL::operator|=((_DWORD *)v119[0] + 364, &v165);
            v35 = v119[0];
          }
          if ( (*((_DWORD *)v35 + 9) & 0x80u) != 0 )
            ERECTL::operator|=((_DWORD *)v35 + 372, &v165);
        }
        v37 = 0;
        v147 = 0LL;
        v148 = 0;
        v149 = 0;
        v154 = 0LL;
        v156 = 0LL;
        memset(v145, 0, sizeof(v145));
        v146 = 0LL;
        v152 = 0;
        v150 = 0LL;
        v151 = 0LL;
        v157 = 0LL;
        v160 = 0LL;
        v158 = 0LL;
        v159 = 0LL;
        v163 = 0LL;
        v161 = 0LL;
        v162 = 0LL;
        v153 = 0LL;
        v155 = 0LL;
        if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v145, (struct XDCOBJ *)v119, (struct XDCOBJ *)&v121) )
        {
          v116 = XDCOBJ::bFullScreen((XDCOBJ *)&v121);
          v16 = XDCOBJ::bFullScreen((XDCOBJ *)v119) | v116;
          goto LABEL_209;
        }
        v38 = v119[0];
        v39 = *((_QWORD *)v119[0] + 64);
        if ( !v39 )
          goto LABEL_207;
        v40 = *(_QWORD *)(v39 + 120);
        v41 = *((_QWORD *)v119[0] + 12);
        v42 = (a9 & 0x5FFFFFFF) >> 16;
        v129 = (v42 << 8) | v42;
        if ( ((v42 ^ (unsigned __int8)(16 * v42)) & 0xF0) != 0 )
        {
          v43 = *((_QWORD *)v119[0] + 10);
          v44 = (char *)v119[0] + 1560;
          v133 = (__int64)v119[0] + 1560;
          if ( (*(_DWORD *)(v43 + 8) & 0x1000) != 0 )
          {
            GreDCSelectBrush(v119[0], *(_QWORD *)(v43 + 16));
            v38 = v119[0];
          }
          v45 = *((_QWORD *)v38 + 10);
          v46 = *(_DWORD *)(v45 + 8);
          if ( (v46 & 1) != 0 || (*((_DWORD *)v38 + 83) & 1) != 0 )
          {
            *(_DWORD *)(v45 + 8) = v46 & 0xFFFFFFFE;
            *((_DWORD *)v119[0] + 83) &= ~1u;
            EBRUSHOBJ::vInitBrush(v44, v119[0], *((_QWORD *)v119[0] + 18), v41, v40, v39, 1);
            v38 = v119[0];
          }
          v37 = 0;
        }
        else
        {
          v133 = 0LL;
        }
        v47 = (_DWORD *)((char *)v38 + 1416);
        if ( (*((_DWORD *)v38 + 10) & 1) == 0 )
          v47 = (_DWORD *)((char *)v38 + 1408);
        v48 = *v47 + v165.left;
        v49 = v121;
        v165.left = v48;
        v165.right += *v47;
        v50 = (unsigned int)(v47[1] + v165.top);
        v165.top += v47[1];
        v165.bottom += v47[1];
        v51 = *(_QWORD *)(v121 + 512);
        v131 = v51;
        if ( !v51 )
          goto LABEL_207;
        if ( (a11 & 2) != 0 )
        {
LABEL_92:
          v56 = (_DWORD *)(v49 + 1416);
          v57 = *(_QWORD *)(v51 + 120);
          if ( (*(_DWORD *)(v49 + 40) & 1) == 0 )
            v56 = (_DWORD *)(v49 + 1408);
          v58 = v48 - *v56 - v166.x;
          v59 = (*(_DWORD *)(v49 + 40) & 1) == 0;
          v127 = v58;
          v60 = v49 + 1416;
          if ( v59 )
            v60 = v49 + 1408;
          v61 = v50 - *(_DWORD *)(v60 + 4) - v166.y;
          v62 = *(_QWORD *)(v51 + 48);
          v118 = v61;
          v63 = 0;
          if ( v62 && v51 == *(_QWORD *)(v62 + 2576) && (*(_DWORD *)(v62 + 56) & 0x20000) != 0 )
          {
            v63 = *(_DWORD *)(v62 + 2608);
            v37 = *(_DWORD *)(v62 + 2612);
          }
          if ( v63 + v58 > v48 )
            v48 = v63 + v58;
          v165.left = v48;
          if ( v37 + v118 > (int)v50 )
            v50 = (unsigned int)(v37 + v118);
          v165.top = v50;
          v64 = v63 + *(_DWORD *)(v51 + 56);
          v65 = v165.right;
          v66 = v58 + v64;
          if ( v66 < v165.right )
            v65 = v66;
          v165.right = v65;
          v67 = v165.bottom;
          if ( v37 + *(_DWORD *)(v51 + 60) + v118 < v165.bottom )
            v67 = v37 + *(_DWORD *)(v51 + 60) + v118;
          v165.bottom = v67;
          if ( v48 < v65 && (int)v50 < v67 )
          {
            v68 = 0LL;
            *(_QWORD *)v132 = 0LL;
            if ( v48 >= *((_DWORD *)v38 + 348)
              && v65 <= *((_DWORD *)v38 + 350)
              && (int)v50 >= *((_DWORD *)v38 + 349)
              && v67 <= *((_DWORD *)v38 + 351) )
            {
              v69 = v165;
              goto LABEL_118;
            }
            v70 = (char *)v38 + 2160;
            *(_QWORD *)v132 = (char *)v38 + 2160;
            v71 = XDCOBJ::prgnEffRao((XDCOBJ *)v119);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v70, v71, (struct ERECTL *)&v165, 2);
            v69 = *(struct _RECTL *)(v70 + 4);
            v165 = v69;
            if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v165) )
            {
              v38 = v119[0];
              v68 = 0LL;
              v49 = v121;
              v50 = (unsigned int)v165.top;
              v48 = v165.left;
LABEL_118:
              if ( (*((_DWORD *)v38 + 9) & 0xE0) != 0 )
              {
                v164 = v69;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v119, (struct ECLIPOBJ *)v50, &v164);
                v38 = v119[0];
                v49 = v121;
                LODWORD(v50) = v165.top;
                v48 = v165.left;
              }
              v123 = 0LL;
              v166.x = v48 - v58;
              v72 = v118;
              v73 = (unsigned int)(v50 - v118);
              v166.y = v73;
              if ( *(_QWORD *)(v49 + 512) == *((_QWORD *)v38 + 64) )
              {
                v74 = 0LL;
                goto LABEL_176;
              }
              v75 = *(_QWORD *)(v49 + 96);
              v120 = a10;
              if ( a10 == -1 )
                v120 = *(_DWORD *)(*(_QWORD *)(v49 + 80) + 36LL);
              v76 = *((_QWORD *)v38 + 10);
              v77 = *(_DWORD *)(v76 + 32);
              v128 = *(_DWORD *)(v76 + 40);
              v134 = *((_DWORD *)v38 + 28);
              v126 = v77;
              if ( (v57
                 || v40
                 && ((*(_DWORD *)(v40 + 24) & 0x800) == 0
                  || (v78 = *(_QWORD *)(v41 + 80)) != 0 && v78 != *(_QWORD *)(v41 + 72)))
                && (v40
                 || (*(_DWORD *)(v57 + 24) & 0x800) == 0
                 || (v79 = *(_QWORD *)(v41 + 80)) != 0 && v79 != *(_QWORD *)(v41 + 72)) )
              {
                if ( !v57 || !v40 )
                {
LABEL_163:
                  LODWORD(v117) = v128;
                  XlateObject = CreateXlateObject(0LL, v134, v57, v40, v75, v41, v117, v126, v120, 0);
                  v123 = (XLATEOBJ *)XlateObject;
                  v68 = (XLATEOBJ *)XlateObject;
                  if ( XlateObject )
                  {
                    if ( v57 && v40 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                      EXLATEOBJ::vAddToCache((__int64)&v123, v57, v40, v75, v41);
                    v16 = 1;
                  }
                  else
                  {
                    v16 = 0;
                  }
LABEL_171:
                  v38 = v119[0];
                  v72 = v118;
                  goto LABEL_172;
                }
                v80 = *(_QWORD *)(v57 + 136);
                if ( v80 == v57 )
                  v73 = *(unsigned int *)(v57 + 32);
                else
                  v73 = *(unsigned int *)(v80 + 32);
                v81 = *(_QWORD *)(v40 + 136);
                if ( v81 == v40 )
                  v82 = *(_DWORD *)(v40 + 32);
                else
                  v82 = *(_DWORD *)(v81 + 32);
                if ( (_DWORD)v73 != v82 )
                {
                  v83 = *(_DWORD *)(v57 + 56);
                  v142 = v41;
                  v144 = v75;
                  v143 = v40;
                  v135 = (HDC)ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v84 = xlateTable;
                  v85 = 0;
                  v86 = *(_QWORD *)(v57 + 136);
                  v125 = xlateTable;
                  do
                  {
                    if ( v86 == v57 )
                      v87 = *(_DWORD *)(v57 + 32);
                    else
                      v87 = *(_DWORD *)(v86 + 32);
                    if ( *((_DWORD *)v84 + 8 * v83 + 4) == v87 )
                    {
                      v88 = XEPALOBJ::ulTime((XEPALOBJ *)&v143);
                      if ( *(_DWORD *)(v89 + 20) == v88 )
                      {
                        v90 = XEPALOBJ::ulTime((XEPALOBJ *)&v142);
                        if ( *(_DWORD *)(v91 + 28) == v90 )
                        {
                          v92 = *(XLATEOBJ **)(v91 + 8);
                          v123 = v92;
                          flXlate = v92[3].flXlate;
                          if ( (flXlate & 0x6000) == 0 )
                          {
                            if ( (v92->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                              || (v92->flXlate & 4) != 0
                              && v120 == v92[1].iUniq
                              && (v94 = XEPALOBJ::ulTime((XEPALOBJ *)&v144), *(_DWORD *)(v95 + 24) == v94)
                              || (flXlate & 0x100) != 0 && v128 == v92[1].flXlate && v126 == *(_DWORD *)&v92[1].iSrcType )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)v125 + 8 * v83);
                              *(_DWORD *)(v57 + 56) = v83;
                              SEMOBJ::vUnlock((SEMOBJ *)&v135);
                              v68 = v123;
                              v16 = 1;
                              goto LABEL_171;
                            }
                          }
                          v84 = v125;
                        }
                      }
                    }
                    ++v85;
                    v83 = ((_BYTE)v83 + 1) & 7;
                  }
                  while ( v85 < 8 );
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
                  goto LABEL_163;
                }
              }
              v68 = xloIdent;
              v16 = 1;
              v123 = xloIdent;
LABEL_172:
              v74 = (__int64)v68;
              if ( (*((_DWORD *)v38 + 9) & 1) == 0 )
              {
                v167 = v165.right - v127;
                v168 = v165.bottom - v72;
              }
              if ( !v16 )
                goto LABEL_202;
              v51 = v131;
LABEL_176:
              ++*(_DWORD *)(v39 + 92);
              v97 = v119[0];
              v98 = v121;
              if ( *((_QWORD *)v119[0] + 6) == *(_QWORD *)(v121 + 48)
                || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v119) && *(_QWORD *)(v99 + 3544) == v100
                || !*(_WORD *)(v51 + 100) && !*(_QWORD *)(v51 + 24) && (*(_DWORD *)(v99 + 56) & 0x80u) == 0 )
              {
                if ( v129 == 52428 )
                {
                  v104 = *(_QWORD *)(v39 + 48);
                  v105 = a11 & 1;
                  if ( v105 )
                  {
                    v106 = v165.bottom - v165.top;
                    if ( v165.bottom - v165.top < 0 )
                      v106 = v165.top - v165.bottom;
                    v107 = v165.right - v165.bottom;
                    if ( v165.right - v165.bottom < 0 )
                      v107 = v165.bottom - v165.right;
                    EtwWindowRendering(
                      *((_QWORD *)v97 + 60),
                      *((_QWORD *)v97 + 61),
                      **((_QWORD **)v97 + 64),
                      (unsigned int)v165.left,
                      v165.top,
                      v165.right,
                      v165.bottom,
                      *(_QWORD *)(v98 + 480),
                      *(_QWORD *)(v98 + 488),
                      **(_QWORD **)(v98 + 512),
                      v166.x,
                      v166.y,
                      v107 + v166.x,
                      v106 + v166.y);
                    *(_WORD *)(v39 + 102) |= 0x40u;
                    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                    if ( ThreadWin32Thread )
                      *(_BYTE *)(ThreadWin32Thread + 328) = 0;
                    GreClientRgnUpdated(0LL);
                    GreClientRgnUpdatedStable();
                    v68 = v123;
                  }
                  if ( (*(_DWORD *)(v39 + 112) & 0x400) != 0 )
                    v109 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, RECTL *, POINTL *))(v104 + 2872))(
                             v39 + 24,
                             v131 + 24,
                             *(_QWORD *)v132,
                             v74,
                             &v165,
                             &v166);
                  else
                    v109 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, RECTL *, POINTL *))EngCopyBits)(
                             v39 + 24,
                             v131 + 24,
                             *(_QWORD *)v132,
                             v74,
                             &v165,
                             &v166);
                  v16 = v109;
                  if ( v105 )
                  {
                    *(_WORD *)(v39 + 102) &= ~0x40u;
                    v110 = W32GetThreadWin32Thread(KeGetCurrentThread());
                    v68 = v123;
                    if ( v110 )
                      *(_BYTE *)(v110 + 328) = 1;
                  }
                  goto LABEL_202;
                }
                v111 = SURFACE::pfnBitBlt((SURFACE *)v39);
                v103 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, __int64, RECTL *, POINTL *, __int64, __int64, __int64, int))v111)(
                         v39 + 24,
                         v51 + 24,
                         0LL,
                         *(_QWORD *)v132,
                         v74,
                         &v165,
                         &v166,
                         v114,
                         v133,
                         v112,
                         v113);
              }
              else
              {
                v102 = (POINTL *)v145;
                if ( *(char *)(*(_QWORD *)(v39 + 48) + 56LL) >= 0 )
                  v102 = v101;
                v103 = SimBitBlt(
                         (int)v39 + 24,
                         (int)v51 + 24,
                         0,
                         v132[0],
                         v74,
                         &v165,
                         &v166,
                         v101,
                         v133,
                         (__int64)v97 + 1552,
                         v129,
                         (__int64)v102);
              }
              v16 = v103;
LABEL_202:
              if ( v68 )
              {
                cEntries = (int)v68[1].cEntries;
                if ( (int)cEntries < 0 )
                {
                  if ( (_DWORD)cEntries == -1 )
                    FreeThreadBufferWithTag(v68, v73);
                }
                else
                {
                  _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
                }
              }
              goto LABEL_209;
            }
          }
LABEL_207:
          v16 = 1;
          goto LABEL_209;
        }
        if ( *(_DWORD *)(v51 + 592) )
        {
          if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v51 + 592) )
            goto LABEL_115;
          v38 = v119[0];
          v49 = v121;
          v50 = (unsigned int)v165.top;
          v48 = v165.left;
        }
        v52 = *(_DWORD *)(v51 + 112);
        if ( (v52 & 0x800) != 0 )
        {
          v53 = UserSurfaceAccessCheck(*(_QWORD *)(v51 + 584));
        }
        else
        {
          if ( (v52 & 0x10000000) == 0 )
          {
LABEL_83:
            if ( (*(_DWORD *)(v39 + 116) & 8) == 0 && !*(_QWORD *)(v39 + 216) || (*(_WORD *)(v39 + 102) & 0x200) == 0 )
            {
              v54 = *(_DWORD *)(v39 + 112);
              if ( (v54 & 0x800) != 0 )
              {
                v55 = UserSurfaceAccessCheck(*(_QWORD *)(v39 + 584));
              }
              else
              {
                if ( (v54 & 0x10000000) == 0 )
                  goto LABEL_92;
                v55 = UserScreenAccessCheck(v47, v50);
              }
              if ( v55 )
              {
                v38 = v119[0];
                v49 = v121;
                v50 = (unsigned int)v165.top;
                v48 = v165.left;
                goto LABEL_92;
              }
            }
LABEL_115:
            EngSetLastError(6u);
LABEL_209:
            DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v145);
LABEL_212:
            if ( v130 < 0 )
              DC::dwSetLayout(v119[0], -1, v124);
            XDCOBJ::RestoreAttributes((XDCOBJ *)&v121);
            _InterlockedDecrement((volatile signed __int32 *)(v121 + 12));
            goto LABEL_215;
          }
          v53 = UserScreenAccessCheck(v47, v50);
        }
        if ( !v53 )
          goto LABEL_115;
        v38 = v119[0];
        v49 = v121;
        v50 = (unsigned int)v165.top;
        v48 = v165.left;
        goto LABEL_83;
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)v119[0] + 3);
      v119[0] = 0LL;
    }
  }
  XDCOBJ::vUnlock((XDCOBJ *)v119);
  return v16;
}
