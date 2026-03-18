/*
 * XREFs of EngPlgBlt @ 0x1C0001FC0
 * Callers:
 *     EngPlgBlt @ 0x1C0001FC0 (EngPlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C013A310 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C026B7A0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C027E088 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C027E2D4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C028E030 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C02AE640 (NtGdiEngPlgBlt.c)
 * Callees:
 *     EngPlgBlt @ 0x1C0001FC0 (EngPlgBlt.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0003C90 (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C0003EBC (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0003FA0 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0033E1C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0041780 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngEraseSurface @ 0x1C00FAD70 (EngEraseSurface.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013A204 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngPlgBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMsk,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  __int64 v13; // rsi
  __int64 v14; // rax
  BOOL v15; // edi
  int v16; // eax
  int v17; // ecx
  __int64 v18; // r8
  ULONG v19; // r9d
  ULONG v20; // r10d
  __int64 v21; // r11
  LONG v22; // r8d
  LONG v23; // edx
  __int64 v24; // rdx
  int v25; // r8d
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r11
  SURFOBJ *v29; // rcx
  RECTL *v31; // rdx
  int v32; // eax
  struct _PLGDDA *v33; // rax
  __int64 v34; // rdx
  POINTL *v35; // r8
  unsigned int v36; // eax
  _DWORD *v37; // r11
  unsigned __int64 v38; // r9
  struct _SURFOBJ *v39; // rax
  LONG top; // r11d
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  XLATEOBJ *v45; // rdx
  CLIPOBJ *v46; // rcx
  LONG v47; // ecx
  LONG v48; // eax
  int v49; // r11d
  SURFOBJ *v50; // rcx
  SURFOBJ *v51; // rcx
  SURFOBJ *v52; // rdx
  SURFOBJ *v53; // rcx
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v56; // r9
  ULONG v57; // [rsp+60h] [rbp-518h]
  int v58; // [rsp+60h] [rbp-518h]
  int v59; // [rsp+64h] [rbp-514h]
  int v60; // [rsp+68h] [rbp-510h]
  int v61; // [rsp+6Ch] [rbp-50Ch]
  __int64 v62; // [rsp+70h] [rbp-508h]
  __int64 v63; // [rsp+78h] [rbp-500h]
  XLATEOBJ *v64; // [rsp+80h] [rbp-4F8h]
  __int64 v65; // [rsp+88h] [rbp-4F0h]
  __int64 v66; // [rsp+90h] [rbp-4E8h]
  CLIPOBJ *v68; // [rsp+B0h] [rbp-4C8h]
  __int64 v69; // [rsp+C0h] [rbp-4B8h]
  struct _PLGDDA *v70; // [rsp+C8h] [rbp-4B0h]
  __int64 v71; // [rsp+D0h] [rbp-4A8h] BYREF
  char v72; // [rsp+D8h] [rbp-4A0h]
  int v73; // [rsp+DCh] [rbp-49Ch]
  __int64 v74; // [rsp+E0h] [rbp-498h]
  RECTL *v75; // [rsp+E8h] [rbp-490h]
  POINTFIX *v76; // [rsp+F0h] [rbp-488h]
  __int64 v77; // [rsp+F8h] [rbp-480h] BYREF
  XLATEOBJ *v78; // [rsp+100h] [rbp-478h]
  struct _SURFOBJ *v79; // [rsp+108h] [rbp-470h]
  struct _SURFOBJ *v80; // [rsp+110h] [rbp-468h]
  __int64 v81; // [rsp+118h] [rbp-460h] BYREF
  int v82; // [rsp+120h] [rbp-458h]
  int v83; // [rsp+124h] [rbp-454h]
  __int64 v84; // [rsp+128h] [rbp-450h] BYREF
  char v85; // [rsp+130h] [rbp-448h]
  int v86; // [rsp+134h] [rbp-444h]
  __int64 v87; // [rsp+138h] [rbp-440h] BYREF
  char v88; // [rsp+140h] [rbp-438h]
  int v89; // [rsp+144h] [rbp-434h]
  XLATEOBJ *v90; // [rsp+148h] [rbp-430h]
  struct _SURFOBJ *v91; // [rsp+150h] [rbp-428h]
  __int64 v92; // [rsp+158h] [rbp-420h] BYREF
  __int64 v93; // [rsp+168h] [rbp-410h] BYREF
  char v94; // [rsp+170h] [rbp-408h]
  int v95; // [rsp+174h] [rbp-404h]
  struct REGION *v96[2]; // [rsp+178h] [rbp-400h] BYREF
  int v97; // [rsp+188h] [rbp-3F0h] BYREF
  __int64 v98; // [rsp+18Ch] [rbp-3ECh]
  int v99; // [rsp+194h] [rbp-3E4h]
  __int64 v100; // [rsp+198h] [rbp-3E0h]
  int v101; // [rsp+1A0h] [rbp-3D8h]
  int v102; // [rsp+1A4h] [rbp-3D4h]
  struct REGION *v103[2]; // [rsp+1A8h] [rbp-3D0h] BYREF
  __int64 v104; // [rsp+1B8h] [rbp-3C0h]
  __int64 v105; // [rsp+1C0h] [rbp-3B8h]
  _DWORD v106[4]; // [rsp+1C8h] [rbp-3B0h] BYREF
  __int64 v107; // [rsp+1D8h] [rbp-3A0h]
  int v108; // [rsp+1E0h] [rbp-398h]
  int v109; // [rsp+1E4h] [rbp-394h]
  struct REGION *v110[2]; // [rsp+1E8h] [rbp-390h] BYREF
  _QWORD v111[2]; // [rsp+1F8h] [rbp-380h] BYREF
  _DWORD v112[4]; // [rsp+208h] [rbp-370h] BYREF
  __int64 v113; // [rsp+218h] [rbp-360h]
  int v114; // [rsp+220h] [rbp-358h]
  int v115; // [rsp+224h] [rbp-354h]
  __int64 v116; // [rsp+228h] [rbp-350h] BYREF
  int v117; // [rsp+230h] [rbp-348h]
  __int64 v118; // [rsp+238h] [rbp-340h]
  __int64 v119; // [rsp+240h] [rbp-338h]
  CLIPOBJ *v120; // [rsp+248h] [rbp-330h]
  char v121[8]; // [rsp+250h] [rbp-328h] BYREF
  __int64 v122; // [rsp+258h] [rbp-320h]
  RECTL v123; // [rsp+2D0h] [rbp-2A8h] BYREF
  RECTL v124; // [rsp+2E0h] [rbp-298h] BYREF
  __int64 v125; // [rsp+2F0h] [rbp-288h] BYREF
  int v126; // [rsp+2F8h] [rbp-280h]
  int v127; // [rsp+2FCh] [rbp-27Ch]
  struct _RECTL v128; // [rsp+300h] [rbp-278h] BYREF
  __int64 v129; // [rsp+310h] [rbp-268h]
  int v130; // [rsp+318h] [rbp-260h]
  int v131; // [rsp+31Ch] [rbp-25Ch]
  struct _RECTL v132; // [rsp+320h] [rbp-258h] BYREF
  _BYTE v133[160]; // [rsp+330h] [rbp-248h] BYREF
  char v134[4]; // [rsp+3D0h] [rbp-1A8h] BYREF
  char v135[156]; // [rsp+3D4h] [rbp-1A4h] BYREF
  CLIPOBJ pcoa; // [rsp+470h] [rbp-108h] BYREF
  POINTFIX v137; // [rsp+510h] [rbp-68h] BYREF
  POINTFIX v138; // [rsp+518h] [rbp-60h]
  POINTFIX v139; // [rsp+520h] [rbp-58h]
  int v140; // [rsp+528h] [rbp-50h]
  int v141; // [rsp+52Ch] [rbp-4Ch]
  POINTFIX v142; // [rsp+530h] [rbp-48h] BYREF
  struct _POINTL v143; // [rsp+538h] [rbp-40h] BYREF
  int v144; // [rsp+540h] [rbp-38h]
  int v145; // [rsp+544h] [rbp-34h]
  FIX v146; // [rsp+548h] [rbp-30h]
  FIX v147; // [rsp+54Ch] [rbp-2Ch]

  v79 = psoSrc;
  v80 = psoTrg;
  v120 = pco;
  v64 = pxlo;
  v57 = iMode;
  v13 = ((__int64 (*)(void))SURFOBJ_TO_SURFACE)();
  v118 = v13;
  v63 = SURFOBJ_TO_SURFACE(psoSrc);
  v14 = SURFOBJ_TO_SURFACE(psoMsk);
  v66 = v14;
  v61 = 0;
  if ( iMode != 4 || v14 )
  {
    v60 = 0;
    v15 = 1;
  }
  else
  {
    v15 = 1;
    v60 = 1;
  }
  if ( iMode - 1 <= 3 )
  {
    v16 = *(_DWORD *)(v13 + 96);
    if ( v16 != 7 && v16 != 8 && v16 != 9 )
    {
      v17 = *(_DWORD *)(v63 + 96);
      if ( v17 != 9 && v16 != 10 && v17 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( v19 < v20 && !v21 && (*(_DWORD *)(v18 + 96) == 1 || *(_DWORD *)(v13 + 96) == 1) )
        {
          v59 = 1;
        }
        else
        {
          v59 = 0;
          if ( v19 < v20 )
            v19 = v20;
          v57 = v19;
        }
        v77 = *(_QWORD *)(v13 + 48);
        v92 = *(_QWORD *)(v18 + 48);
        v71 = 0LL;
        v72 = 0;
        v73 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v133);
        v78 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v96);
        v22 = *(_DWORD *)(v63 + 60);
        v23 = *(_DWORD *)(v63 + 56);
        *(_QWORD *)&v124.left = 0LL;
        v124.right = v23;
        v124.bottom = v22;
        if ( v92 && v63 == *(_QWORD *)(v92 + 2576) && (*(_DWORD *)(v92 + 56) & 0x20000) != 0 )
        {
          v124.left = *(_DWORD *)(v92 + 2608);
          v124.right = *(_DWORD *)(v92 + 2608) + v23;
          v124.top = *(_DWORD *)(v92 + 2612);
          v124.bottom = v22 + *(_DWORD *)(v92 + 2612);
        }
        if ( !v59 && !*(_WORD *)(v13 + 100) && *(_QWORD *)(v13 + 32) != *(_QWORD *)(v63 + 32) && !v60 )
          goto LABEL_44;
        v137 = *pptfx;
        v138 = pptfx[1];
        v139 = pptfx[2];
        v140 = v138.x + v139.x - v137.x;
        v141 = pptfx[1].y + pptfx[2].y - pptfx->y;
        v24 = v138.y > v137.y == v138.y > v141;
        v25 = v138.x > v137.x == v138.x > v140;
        if ( *(&v137.x + 2 * (v138.x > v137.x == v138.x > v140)) > *(&v137.x
                                                                   + 2 * ((v138.x > v137.x == v138.x > v140) ^ 3LL)) )
          v25 ^= 3u;
        if ( *(&v137.y + 2 * (int)v24) > *(&v137.y + 2 * ((int)v24 ^ 3LL)) )
          LODWORD(v24) = v24 ^ 3;
        v123.left = (*(&v137.x + 2 * v25) >> 4) - 1;
        v123.top = (*(&v137.y + 2 * (int)v24) >> 4) - 1;
        v123.right = ((*(&v137.x + 2 * (v25 ^ 3LL)) + 15) >> 4) + 1;
        v123.bottom = ((*(&v137.y + 2 * ((int)v24 ^ 3LL)) + 15) >> 4) + 1;
        v26 = *(_DWORD *)(v13 + 60);
        v27 = *(_DWORD *)(v13 + 56);
        v81 = 0LL;
        v82 = v27;
        v83 = v26;
        if ( v77 && v13 == *(_QWORD *)(v77 + 2576) && (*(_DWORD *)(v77 + 56) & 0x20000) != 0 )
        {
          LODWORD(v81) = *(_DWORD *)(v77 + 2608);
          v82 = v27 + v81;
          HIDWORD(v81) = *(_DWORD *)(v77 + 2612);
          v83 = v26 + HIDWORD(v81);
        }
        ERECTL::operator*=(&v123, &v81);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v123) )
          goto LABEL_58;
        if ( v59
          || *(_WORD *)(v13 + 100)
          || v60
          || v123.left <= prcl->right
          && v123.right >= prcl->left
          && v123.top <= prcl->bottom
          && v123.bottom >= prcl->top )
        {
          v137.x -= 16 * v123.left;
          v137.y -= 16 * v123.top;
          v138.x -= 16 * v123.left;
          v138.y -= 16 * v123.top;
          v139.x -= 16 * v123.left;
          v139.y -= 16 * v123.top;
          v106[3] = 0;
          v108 = 0;
          v109 = 0;
          v106[1] = v123.right - v123.left + 1;
          v106[2] = v123.bottom - v123.top + 1;
          v107 = 0LL;
          v106[0] = *(_DWORD *)(v13 + 96);
          v108 = *(_DWORD *)(v13 + 112) & 0x40000;
          if ( v59 )
          {
            v106[0] = 1;
          }
          else if ( v60 )
          {
            v106[0] = *(_DWORD *)(v28 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v71, (struct _DEVBITMAPINFO *)v106, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v71 )
            goto LABEL_57;
          v65 = *(_QWORD *)&v123.left;
          if ( !v96[0] )
            goto LABEL_57;
          *(_QWORD *)&v123.left = 0LL;
          v123.right -= v65;
          v123.bottom -= HIDWORD(v65);
          RGNOBJ::vSet((RGNOBJ *)v96, &v123);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v133, v96[0], (struct ERECTL *)&v123, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v77, v80, 0LL, 0);
          if ( v66 )
            _guard_dispatch_icall_fptr();
          if ( v59 )
          {
            v29 = 0LL;
            if ( v71 )
              v29 = (SURFOBJ *)(v71 + 24);
            if ( !EngEraseSurface(v29, &v123, (v57 != 1) - 1) )
            {
LABEL_57:
              v15 = 0;
              goto LABEL_58;
            }
          }
          v62 = v71;
          v76 = &v137;
          v68 = (CLIPOBJ *)v133;
          if ( v59 && *(_DWORD *)(v63 + 96) == 1 || v60 )
          {
            v78 = pxlo;
            v64 = 0LL;
          }
          else
          {
            v78 = xloIdent;
          }
        }
        else
        {
LABEL_44:
          v62 = v13;
          v76 = pptfx;
          v68 = pco;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v92, v79, 0LL, 0);
        ERECTL::operator*=(&v124, prcl);
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v124) )
        {
          v87 = 0LL;
          v88 = 0;
          v89 = 0;
          if ( *(_WORD *)(v63 + 100) || (v32 = *(_DWORD *)(v63 + 96), v32 == 7) || v32 == 8 )
          {
            v112[3] = 0;
            v114 = 0;
            v115 = 0;
            v112[1] = v124.right - v124.left + 1;
            v112[2] = v124.bottom - v124.top + 1;
            v113 = 0LL;
            v112[0] = *(_DWORD *)(v62 + 96);
            v114 = *(_DWORD *)(v63 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v87, (struct _DEVBITMAPINFO *)v112, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !v87 )
            {
LABEL_70:
              v15 = 0;
              SURFMEM::~SURFMEM((SURFMEM *)&v87);
              goto LABEL_58;
            }
            v125 = 0LL;
            v126 = v124.right - v124.left;
            v127 = v124.bottom - v124.top;
            _guard_dispatch_icall_fptr();
            LODWORD(v125) = prcl->left - v124.left;
            HIDWORD(v125) = prcl->top - v124.top;
            v126 = prcl->right - v124.left;
            v127 = prcl->bottom - v124.top;
            v63 = v87;
            v105 = v87;
            v64 = 0LL;
            v90 = 0LL;
            v75 = (RECTL *)&v125;
            v124.right -= v124.left;
            v124.bottom -= v124.top;
            *(_QWORD *)&v124.left = 0LL;
          }
          else
          {
            v105 = v63;
            v90 = v64;
            v75 = v31;
          }
          v116 = *(_QWORD *)(v62 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v116, (struct _SURFOBJ *)(v62 + 24), 0LL, 0);
          v33 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL);
          v70 = v33;
          if ( !v33 )
          {
LABEL_142:
            SURFMEM::~SURFMEM((SURFMEM *)&v87);
            v15 = v61;
            goto LABEL_58;
          }
          if ( !(unsigned int)bInitPlgDDA(v33, &v124, v75, v76) )
          {
LABEL_74:
            v61 = 1;
LABEL_141:
            Win32FreePool(v70, v34, v35);
            goto LABEL_142;
          }
          v104 = qword_1C02E4050[*(unsigned int *)(v63 + 96)];
          v119 = v104;
          v36 = lSizeDDA(v70);
          v38 = v36 * (unsigned __int64)(unsigned int)(v124.right - v124.left + 2);
          if ( v38 > 0xFFFFFFFF || !(_DWORD)v38 )
            goto LABEL_141;
          if ( v59 )
          {
            *v37 = 1;
            v39 = (struct _SURFOBJ *)qword_1C02E3FD0[v57];
          }
          else
          {
            *v37 = 0;
            v39 = (struct _SURFOBJ *)qword_1C02E3FF0[*(unsigned int *)(v62 + 96)];
          }
          v79 = v39;
          v91 = v39;
          v69 = PALLOCMEM2((unsigned int)v38);
          if ( !v69 )
            goto LABEL_141;
          top = v124.top;
          v74 = *(_QWORD *)(v63 + 80) + v124.top * *(_DWORD *)(v63 + 88);
          if ( v66 )
          {
            v41 = bUMPDSecurityGateEx();
            v35 = pptl;
            if ( v41 && !pptl )
            {
              if ( gfUMPDDebug )
                DbgPrint("windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n", 1772);
              Win32FreePool(v69, v42, v35);
              Win32FreePool(v70, v43, v44);
              goto LABEL_70;
            }
            v117 = v124.left + pptl->x - v75->left;
            top = v124.top;
          }
          v45 = v64;
          if ( v64 )
          {
            if ( (v64->flXlate & 1) != 0 )
              v45 = 0LL;
            v64 = v45;
            v90 = v45;
          }
          v46 = v68;
          if ( !v68 || !v68->iDComplexity )
          {
            v47 = *(_DWORD *)(v62 + 60);
            v48 = *(_DWORD *)(v62 + 56);
            *(_QWORD *)&v128.left = 0LL;
            v128.right = v48;
            v128.bottom = v47;
            RGNOBJ::vSet((RGNOBJ *)v96, &v128);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v133, v96[0], (struct ERECTL *)&v128, 1);
            v46 = (CLIPOBJ *)v133;
            top = v124.top;
            v45 = v64;
          }
          if ( v46->rclBounds.left >= v46->rclBounds.right || v46->rclBounds.top >= v46->rclBounds.bottom )
          {
            Win32FreePool(v69, v45, v35);
            goto LABEL_141;
          }
          while ( top < v124.bottom )
          {
            *(_OWORD *)((char *)v70 + 68) = *(_OWORD *)((char *)v70 + 4);
            *(_OWORD *)((char *)v70 + 84) = *(_OWORD *)((char *)v70 + 20);
            *(_OWORD *)((char *)v70 + 100) = *(_OWORD *)((char *)v70 + 36);
            *(_OWORD *)((char *)v70 + 116) = *(_OWORD *)((char *)v70 + 52);
            _guard_dispatch_icall_fptr();
            _guard_dispatch_icall_fptr();
            vAdvYDDA(v70);
            v74 += *(int *)(v63 + 88);
            top = v49 + 1;
            v45 = v64;
          }
          Win32FreePool(v69, v45, v35);
          if ( v62 == v13 )
            goto LABEL_74;
          v58 = 0;
          v84 = 0LL;
          v85 = 0;
          v86 = 0;
          if ( prcl->right - prcl->left == v124.right && prcl->bottom - prcl->top == v124.bottom )
          {
            v58 = 1;
          }
          else
          {
            v99 = 0;
            v101 = 0;
            v102 = 0;
            LODWORD(v98) = v123.right + 1;
            HIDWORD(v98) = v123.bottom + 1;
            v100 = 0LL;
            v97 = 1;
            v101 = *(_DWORD *)(v13 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)&v97, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v84 )
            {
              v93 = 0LL;
              v94 = 0;
              v95 = 0;
              v98 = *(_QWORD *)&v124.right;
              v100 = 0LL;
              v97 = 1;
              v101 = *(_DWORD *)(v13 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v93, (struct _DEVBITMAPINFO *)&v97, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
              if ( v93 && v110[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v110, &v123);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v110[0], (struct ERECTL *)&v123, 1);
                v50 = v84 ? (SURFOBJ *)(v84 + 24) : 0LL;
                if ( EngEraseSurface(v50, &v123, 0) )
                {
                  v51 = 0LL;
                  if ( v93 )
                    v51 = (SURFOBJ *)(v93 + 24);
                  if ( EngEraseSurface(v51, &v124, 0xFFFFFFFF) )
                  {
                    v52 = 0LL;
                    if ( v93 )
                      v52 = (SURFOBJ *)(v93 + 24);
                    v53 = 0LL;
                    if ( v84 )
                      v53 = (SURFOBJ *)(v84 + 24);
                    if ( EngPlgBlt(v53, v52, 0LL, &pcoa, 0LL, 0LL, 0LL, v76, v75, 0LL, 3u) )
                      v58 = 1;
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v110);
              SURFMEM::~SURFMEM((SURFMEM *)&v93);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v121);
          if ( !v58 )
            goto LABEL_139;
          if ( !v122 )
            goto LABEL_139;
          v142 = *pptfx;
          v143 = (struct _POINTL)pptfx[1];
          x = pptfx[2].x;
          v144 = x + v143.x - v142.x;
          y = pptfx[2].y;
          v145 = y + v143.y - v142.y;
          v146 = x;
          v147 = y;
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v121, 0LL, (struct _POINTL *)&v142)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v121, 0LL, &v143, 3u) )
          {
LABEL_139:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v121);
            SURFMEM::~SURFMEM((SURFMEM *)&v84);
            goto LABEL_141;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v111, (struct EPATHOBJ *)v121, 1u, v56);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v103);
          if ( v111[0] && v103[0] )
          {
            if ( !pco )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)v103, (struct RGNOBJ *)v111) )
                goto LABEL_138;
LABEL_130:
              v132 = *(struct _RECTL *)((char *)v103[0] + 88);
              if ( !pco || bIntersect(&v132, &pco->rclBounds, &v132) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v134, v103[0], (struct ERECTL *)&v132, 1);
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v135) )
                {
                  v123.left += v65;
                  v123.top += HIDWORD(v65);
                  v123.right += v65;
                  v123.bottom += HIDWORD(v65);
                  ++*(_DWORD *)(v13 + 92);
                  if ( v60 )
                  {
                    v129 = 0LL;
                    v130 = v123.right - v123.left;
                    v131 = v123.bottom - v123.top;
                    v80 = 0LL;
                  }
                  else
                  {
                    SURFACE::pfnBitBlt((SURFACE *)v13);
                  }
                  _guard_dispatch_icall_fptr();
                }
              }
              v61 = 1;
              goto LABEL_138;
            }
            if ( RGNOBJ::bMerge(
                   (RGNOBJ *)v103,
                   (struct RGNOBJ *)v111,
                   (struct RGNOBJ *)&pco[2].rclBounds.top,
                   BYTE1(gafjRgnOp)) )
            {
              goto LABEL_130;
            }
          }
LABEL_138:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v103);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v111);
          goto LABEL_139;
        }
LABEL_58:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v96);
        SURFMEM::~SURFMEM((SURFMEM *)&v71);
        return v15;
      }
    }
  }
  return 0;
}
