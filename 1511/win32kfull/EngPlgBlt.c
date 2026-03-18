/*
 * XREFs of EngPlgBlt @ 0x1C00041F0
 * Callers:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     NtGdiTransparentBlt @ 0x1C00F0040 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C026D2E0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C027FB78 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C027FDC4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C028F3D0 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC330 (NtGdiEngPlgBlt.c)
 * Callees:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C0004A94 (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C0004CB0 (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C0004D94 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C002DC90 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0038DCC (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     EngEraseSurface @ 0x1C00BCB20 (EngEraseSurface.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013073C (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
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
  __int64 v15; // r10
  ULONG v16; // r8d
  BOOL v17; // edi
  int v18; // eax
  int v19; // edx
  LONG v20; // r8d
  LONG v21; // edx
  RECTL *v22; // rdx
  int v23; // eax
  struct _PLGDDA *v24; // rax
  unsigned int v25; // eax
  _DWORD *v26; // r11
  unsigned __int64 v27; // r9
  struct _SURFOBJ *v28; // rax
  LONG top; // r11d
  XLATEOBJ *v30; // rdx
  CLIPOBJ *v31; // rcx
  int v32; // r11d
  __int64 v34; // rdx
  int v35; // r8d
  int v36; // edx
  int v37; // r8d
  __int64 v38; // r11
  SURFOBJ *v39; // rcx
  LONG v40; // ecx
  LONG v41; // eax
  SURFOBJ *v42; // rcx
  SURFOBJ *v43; // rcx
  SURFOBJ *v44; // rdx
  SURFOBJ *v45; // rcx
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v48; // r9
  ULONG v49; // [rsp+60h] [rbp-518h]
  int v50; // [rsp+60h] [rbp-518h]
  int v51; // [rsp+64h] [rbp-514h]
  int v52; // [rsp+68h] [rbp-510h]
  int v53; // [rsp+6Ch] [rbp-50Ch]
  __int64 v54; // [rsp+70h] [rbp-508h]
  __int64 v55; // [rsp+78h] [rbp-500h]
  __int64 v56; // [rsp+80h] [rbp-4F8h]
  XLATEOBJ *v57; // [rsp+88h] [rbp-4F0h]
  __int64 v58; // [rsp+90h] [rbp-4E8h]
  __int64 v60; // [rsp+A8h] [rbp-4D0h]
  struct _PLGDDA *v61; // [rsp+B0h] [rbp-4C8h]
  CLIPOBJ *v62; // [rsp+C0h] [rbp-4B8h]
  __int64 v63; // [rsp+D0h] [rbp-4A8h] BYREF
  char v64; // [rsp+D8h] [rbp-4A0h]
  int v65; // [rsp+DCh] [rbp-49Ch]
  struct _SURFOBJ *v66; // [rsp+E0h] [rbp-498h]
  struct _SURFOBJ *v67; // [rsp+E8h] [rbp-490h]
  XLATEOBJ *v68; // [rsp+F0h] [rbp-488h]
  RECTL *v69; // [rsp+F8h] [rbp-480h]
  POINTFIX *v70; // [rsp+100h] [rbp-478h]
  __int64 v71; // [rsp+108h] [rbp-470h] BYREF
  __int64 v72; // [rsp+110h] [rbp-468h]
  __int64 v73; // [rsp+118h] [rbp-460h] BYREF
  char v74; // [rsp+120h] [rbp-458h]
  int v75; // [rsp+124h] [rbp-454h]
  __int64 v76; // [rsp+128h] [rbp-450h] BYREF
  int v77; // [rsp+130h] [rbp-448h]
  int v78; // [rsp+134h] [rbp-444h]
  __int64 v79; // [rsp+138h] [rbp-440h] BYREF
  char v80; // [rsp+140h] [rbp-438h]
  int v81; // [rsp+144h] [rbp-434h]
  __int64 v82; // [rsp+150h] [rbp-428h] BYREF
  char v83; // [rsp+158h] [rbp-420h]
  int v84; // [rsp+15Ch] [rbp-41Ch]
  XLATEOBJ *v85; // [rsp+160h] [rbp-418h]
  struct REGION *v86[3]; // [rsp+168h] [rbp-410h] BYREF
  int v87; // [rsp+180h] [rbp-3F8h] BYREF
  __int64 v88; // [rsp+184h] [rbp-3F4h]
  int v89; // [rsp+18Ch] [rbp-3ECh]
  __int64 v90; // [rsp+190h] [rbp-3E8h]
  int v91; // [rsp+198h] [rbp-3E0h]
  int v92; // [rsp+19Ch] [rbp-3DCh]
  __int64 v93; // [rsp+1A0h] [rbp-3D8h] BYREF
  struct REGION *v94[2]; // [rsp+1A8h] [rbp-3D0h] BYREF
  __int64 v95; // [rsp+1B8h] [rbp-3C0h]
  _DWORD v96[4]; // [rsp+1C0h] [rbp-3B8h] BYREF
  __int64 v97; // [rsp+1D0h] [rbp-3A8h]
  int v98; // [rsp+1D8h] [rbp-3A0h]
  int v99; // [rsp+1DCh] [rbp-39Ch]
  __int64 v100; // [rsp+1E0h] [rbp-398h]
  struct REGION *v101[2]; // [rsp+1E8h] [rbp-390h] BYREF
  _DWORD v102[4]; // [rsp+1F8h] [rbp-380h] BYREF
  __int64 v103; // [rsp+208h] [rbp-370h]
  int v104; // [rsp+210h] [rbp-368h]
  int v105; // [rsp+214h] [rbp-364h]
  _QWORD v106[4]; // [rsp+218h] [rbp-360h] BYREF
  __int64 v107; // [rsp+238h] [rbp-340h] BYREF
  int v108; // [rsp+240h] [rbp-338h]
  __int64 v109; // [rsp+248h] [rbp-330h]
  char v110[8]; // [rsp+250h] [rbp-328h] BYREF
  __int64 v111; // [rsp+258h] [rbp-320h]
  RECTL v112; // [rsp+2D0h] [rbp-2A8h] BYREF
  RECTL v113; // [rsp+2E0h] [rbp-298h] BYREF
  __int64 v114; // [rsp+2F0h] [rbp-288h] BYREF
  int v115; // [rsp+2F8h] [rbp-280h]
  int v116; // [rsp+2FCh] [rbp-27Ch]
  struct _RECTL v117; // [rsp+300h] [rbp-278h] BYREF
  __int64 v118; // [rsp+310h] [rbp-268h]
  int v119; // [rsp+318h] [rbp-260h]
  int v120; // [rsp+31Ch] [rbp-25Ch]
  struct _RECTL v121; // [rsp+320h] [rbp-258h] BYREF
  _BYTE v122[160]; // [rsp+330h] [rbp-248h] BYREF
  char v123[4]; // [rsp+3D0h] [rbp-1A8h] BYREF
  char v124[156]; // [rsp+3D4h] [rbp-1A4h] BYREF
  CLIPOBJ pcoa; // [rsp+470h] [rbp-108h] BYREF
  POINTFIX v126; // [rsp+510h] [rbp-68h] BYREF
  POINTFIX v127; // [rsp+518h] [rbp-60h]
  POINTFIX v128; // [rsp+520h] [rbp-58h]
  int v129; // [rsp+528h] [rbp-50h]
  int v130; // [rsp+52Ch] [rbp-4Ch]
  POINTFIX v131; // [rsp+530h] [rbp-48h] BYREF
  struct _POINTL v132; // [rsp+538h] [rbp-40h] BYREF
  int v133; // [rsp+540h] [rbp-38h]
  int v134; // [rsp+544h] [rbp-34h]
  FIX v135; // [rsp+548h] [rbp-30h]
  FIX v136; // [rsp+54Ch] [rbp-2Ch]

  v67 = psoSrc;
  v66 = psoTrg;
  v106[2] = pco;
  v57 = pxlo;
  v49 = iMode;
  v13 = ((__int64 (*)(void))SURFOBJ_TO_SURFACE)();
  v106[3] = v13;
  v56 = SURFOBJ_TO_SURFACE(psoSrc);
  v14 = SURFOBJ_TO_SURFACE(psoMsk);
  v15 = v14;
  v58 = v14;
  v53 = 0;
  v16 = iMode;
  if ( iMode != 4 || v14 )
  {
    v52 = 0;
    v17 = 1;
  }
  else
  {
    v17 = 1;
    v52 = 1;
  }
  if ( iMode - 1 <= 3 )
  {
    v18 = *(_DWORD *)(v13 + 96);
    if ( v18 != 7 && v18 != 8 && v18 != 9 )
    {
      v19 = *(_DWORD *)(v56 + 96);
      if ( v19 != 9 && v18 != 10 && v19 != 10 )
      {
        if ( iMode < 3 && !v15 && (v19 == 1 || v18 == 1) )
        {
          v51 = 1;
        }
        else
        {
          v51 = 0;
          if ( iMode < 3 )
            v16 = 3;
          v49 = v16;
        }
        v71 = *(_QWORD *)(v13 + 48);
        v93 = *(_QWORD *)(v56 + 48);
        v63 = 0LL;
        v64 = 0;
        v65 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v122);
        v68 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v86);
        v20 = *(_DWORD *)(v56 + 60);
        v21 = *(_DWORD *)(v56 + 56);
        *(_QWORD *)&v113.left = 0LL;
        v113.right = v21;
        v113.bottom = v20;
        if ( v93 && v56 == *(_QWORD *)(v93 + 2576) && (*(_DWORD *)(v93 + 56) & 0x20000) != 0 )
        {
          v113.left = *(_DWORD *)(v93 + 2608);
          v113.right = *(_DWORD *)(v93 + 2608) + v21;
          v113.top = *(_DWORD *)(v93 + 2612);
          v113.bottom = v20 + *(_DWORD *)(v93 + 2612);
        }
        if ( !v51 && !*(_WORD *)(v13 + 100) && *(_QWORD *)(v13 + 32) != *(_QWORD *)(v56 + 32) && !v52 )
          goto LABEL_23;
        v126 = *pptfx;
        v127 = pptfx[1];
        v128 = pptfx[2];
        v129 = v127.x + v128.x - v126.x;
        v130 = pptfx[1].y + pptfx[2].y - pptfx->y;
        v34 = v127.y > v126.y == v127.y > v130;
        v35 = v127.x > v126.x == v127.x > v129;
        if ( *(&v126.x + 2 * (v127.x > v126.x == v127.x > v129)) > *(&v126.x
                                                                   + 2 * ((v127.x > v126.x == v127.x > v129) ^ 3LL)) )
          v35 ^= 3u;
        if ( *(&v126.y + 2 * (int)v34) > *(&v126.y + 2 * ((int)v34 ^ 3LL)) )
          LODWORD(v34) = v34 ^ 3;
        v112.left = (*(&v126.x + 2 * v35) >> 4) - 1;
        v112.top = (*(&v126.y + 2 * (int)v34) >> 4) - 1;
        v112.right = ((*(&v126.x + 2 * (v35 ^ 3LL)) + 15) >> 4) + 1;
        v112.bottom = ((*(&v126.y + 2 * ((int)v34 ^ 3LL)) + 15) >> 4) + 1;
        v36 = *(_DWORD *)(v13 + 60);
        v37 = *(_DWORD *)(v13 + 56);
        v76 = 0LL;
        v77 = v37;
        v78 = v36;
        if ( v71 && v13 == *(_QWORD *)(v71 + 2576) && (*(_DWORD *)(v71 + 56) & 0x20000) != 0 )
        {
          LODWORD(v76) = *(_DWORD *)(v71 + 2608);
          v77 = v37 + v76;
          HIDWORD(v76) = *(_DWORD *)(v71 + 2612);
          v78 = v36 + HIDWORD(v76);
        }
        ERECTL::operator*=(&v112, &v76);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v112) )
          goto LABEL_48;
        if ( v51
          || *(_WORD *)(v13 + 100)
          || v52
          || v112.left <= prcl->right
          && v112.right >= prcl->left
          && v112.top <= prcl->bottom
          && v112.bottom >= prcl->top )
        {
          v126.x -= 16 * v112.left;
          v126.y -= 16 * v112.top;
          v127.x -= 16 * v112.left;
          v127.y -= 16 * v112.top;
          v128.x -= 16 * v112.left;
          v128.y -= 16 * v112.top;
          v96[3] = 0;
          v98 = 0;
          v99 = 0;
          v96[1] = v112.right - v112.left + 1;
          v96[2] = v112.bottom - v112.top + 1;
          v97 = 0LL;
          v96[0] = *(_DWORD *)(v13 + 96);
          v98 = *(_DWORD *)(v13 + 112) & 0x40000;
          if ( v51 )
          {
            v96[0] = 1;
          }
          else if ( v52 )
          {
            v96[0] = *(_DWORD *)(v38 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v63, (struct _DEVBITMAPINFO *)v96, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v63 )
            goto LABEL_87;
          v55 = *(_QWORD *)&v112.left;
          if ( !v86[0] )
            goto LABEL_87;
          *(_QWORD *)&v112.left = 0LL;
          v112.right -= v55;
          v112.bottom -= HIDWORD(v55);
          RGNOBJ::vSet((RGNOBJ *)v86, &v112);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v122, v86[0], (struct ERECTL *)&v112, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v71, v66, 0LL, 0);
          if ( v58 )
            _guard_dispatch_icall_fptr();
          if ( v51 )
          {
            v39 = 0LL;
            if ( v63 )
              v39 = (SURFOBJ *)(v63 + 24);
            if ( !EngEraseSurface(v39, &v112, (v49 != 1) - 1) )
            {
LABEL_87:
              v17 = 0;
              goto LABEL_48;
            }
          }
          v54 = v63;
          v70 = &v126;
          v62 = (CLIPOBJ *)v122;
          if ( v51 && *(_DWORD *)(v56 + 96) == 1 || v52 )
          {
            v68 = pxlo;
            v57 = 0LL;
          }
          else
          {
            v68 = xloIdent;
          }
        }
        else
        {
LABEL_23:
          v54 = v13;
          v70 = pptfx;
          v62 = pco;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v93, v67, 0LL, 0);
        ERECTL::operator*=(&v113, prcl);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v113) )
        {
LABEL_48:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v86);
          SURFMEM::~SURFMEM((SURFMEM *)&v63);
          return v17;
        }
        v73 = 0LL;
        v74 = 0;
        v75 = 0;
        if ( *(_WORD *)(v56 + 100) || (v23 = *(_DWORD *)(v56 + 96), v23 == 7) || v23 == 8 )
        {
          v102[3] = 0;
          v104 = 0;
          v105 = 0;
          v102[1] = v113.right - v113.left + 1;
          v102[2] = v113.bottom - v113.top + 1;
          v103 = 0LL;
          v102[0] = *(_DWORD *)(v54 + 96);
          v104 = *(_DWORD *)(v56 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v73, (struct _DEVBITMAPINFO *)v102, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v73 )
            goto LABEL_94;
          v114 = 0LL;
          v115 = v113.right - v113.left;
          v116 = v113.bottom - v113.top;
          _guard_dispatch_icall_fptr();
          LODWORD(v114) = prcl->left - v113.left;
          HIDWORD(v114) = prcl->top - v113.top;
          v115 = prcl->right - v113.left;
          v116 = prcl->bottom - v113.top;
          v56 = v73;
          v100 = v73;
          v57 = 0LL;
          v85 = 0LL;
          v69 = (RECTL *)&v114;
          v113.right -= v113.left;
          v113.bottom -= v113.top;
          *(_QWORD *)&v113.left = 0LL;
        }
        else
        {
          v100 = v56;
          v85 = v57;
          v69 = v22;
        }
        v107 = *(_QWORD *)(v54 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v107, (struct _SURFOBJ *)(v54 + 24), 0LL, 0);
        v24 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL);
        v61 = v24;
        if ( !v24 )
        {
LABEL_47:
          SURFMEM::~SURFMEM((SURFMEM *)&v73);
          v17 = v53;
          goto LABEL_48;
        }
        if ( !(unsigned int)bInitPlgDDA(v24, &v113, v69, v70) )
        {
LABEL_45:
          v53 = 1;
LABEL_46:
          Win32FreePool(v61);
          goto LABEL_47;
        }
        v95 = qword_1C02E3FB0[*(unsigned int *)(v56 + 96)];
        v109 = v95;
        v25 = lSizeDDA(v61);
        v27 = v25 * (unsigned __int64)(unsigned int)(v113.right - v113.left + 2);
        if ( v27 > 0xFFFFFFFF || !(_DWORD)v27 )
          goto LABEL_46;
        if ( v51 )
        {
          *v26 = 1;
          v28 = (struct _SURFOBJ *)qword_1C02EA348[v49];
        }
        else
        {
          *v26 = 0;
          v28 = (struct _SURFOBJ *)qword_1C02E3F50[*(unsigned int *)(v54 + 96)];
        }
        v67 = v28;
        v86[2] = (struct REGION *)v28;
        v60 = PALLOCMEM2((unsigned int)v27);
        if ( !v60 )
          goto LABEL_46;
        top = v113.top;
        v72 = *(_QWORD *)(v56 + 80) + v113.top * *(_DWORD *)(v56 + 88);
        if ( !v58 )
        {
LABEL_37:
          v30 = v57;
          if ( v57 )
          {
            if ( (v57->flXlate & 1) != 0 )
              v30 = 0LL;
            v85 = v30;
          }
          v31 = v62;
          if ( !v62 || !v62->iDComplexity )
          {
            v40 = *(_DWORD *)(v54 + 60);
            v41 = *(_DWORD *)(v54 + 56);
            *(_QWORD *)&v117.left = 0LL;
            v117.right = v41;
            v117.bottom = v40;
            RGNOBJ::vSet((RGNOBJ *)v86, &v117);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v122, v86[0], (struct ERECTL *)&v117, 1);
            v31 = (CLIPOBJ *)v122;
            top = v113.top;
          }
          if ( v31->rclBounds.left >= v31->rclBounds.right || v31->rclBounds.top >= v31->rclBounds.bottom )
          {
            Win32FreePool(v60);
            goto LABEL_46;
          }
          while ( top < v113.bottom )
          {
            *(_OWORD *)((char *)v61 + 68) = *(_OWORD *)((char *)v61 + 4);
            *(_OWORD *)((char *)v61 + 84) = *(_OWORD *)((char *)v61 + 20);
            *(_OWORD *)((char *)v61 + 100) = *(_OWORD *)((char *)v61 + 36);
            *(_OWORD *)((char *)v61 + 116) = *(_OWORD *)((char *)v61 + 52);
            _guard_dispatch_icall_fptr();
            _guard_dispatch_icall_fptr();
            vAdvYDDA(v61);
            v72 += *(int *)(v56 + 88);
            top = v32 + 1;
          }
          Win32FreePool(v60);
          if ( v54 == v13 )
            goto LABEL_45;
          v50 = 0;
          v79 = 0LL;
          v80 = 0;
          v81 = 0;
          if ( prcl->right - prcl->left == v113.right && prcl->bottom - prcl->top == v113.bottom )
          {
            v50 = 1;
          }
          else
          {
            v89 = 0;
            v91 = 0;
            v92 = 0;
            LODWORD(v88) = v112.right + 1;
            HIDWORD(v88) = v112.bottom + 1;
            v90 = 0LL;
            v87 = 1;
            v91 = *(_DWORD *)(v13 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)&v87, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v79 )
            {
              v82 = 0LL;
              v83 = 0;
              v84 = 0;
              v88 = *(_QWORD *)&v113.right;
              v90 = 0LL;
              v87 = 1;
              v91 = *(_DWORD *)(v13 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v82, (struct _DEVBITMAPINFO *)&v87, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v101);
              if ( v82 && v101[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v101, &v112);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v101[0], (struct ERECTL *)&v112, 1);
                v42 = v79 ? (SURFOBJ *)(v79 + 24) : 0LL;
                if ( EngEraseSurface(v42, &v112, 0) )
                {
                  v43 = 0LL;
                  if ( v82 )
                    v43 = (SURFOBJ *)(v82 + 24);
                  if ( EngEraseSurface(v43, &v113, 0xFFFFFFFF) )
                  {
                    v44 = 0LL;
                    if ( v82 )
                      v44 = (SURFOBJ *)(v82 + 24);
                    v45 = 0LL;
                    if ( v79 )
                      v45 = (SURFOBJ *)(v79 + 24);
                    if ( EngPlgBlt(v45, v44, 0LL, &pcoa, 0LL, 0LL, 0LL, v70, v69, 0LL, 3u) )
                      v50 = 1;
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v101);
              SURFMEM::~SURFMEM((SURFMEM *)&v82);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v110);
          if ( !v50 )
            goto LABEL_141;
          if ( !v111 )
            goto LABEL_141;
          v131 = *pptfx;
          v132 = (struct _POINTL)pptfx[1];
          x = pptfx[2].x;
          v133 = x + v132.x - v131.x;
          y = pptfx[2].y;
          v134 = y + v132.y - v131.y;
          v135 = x;
          v136 = y;
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v110, 0LL, (struct _POINTL *)&v131)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v110, 0LL, &v132, 3u) )
          {
LABEL_141:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v110);
            SURFMEM::~SURFMEM((SURFMEM *)&v79);
            goto LABEL_46;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v106, (struct EPATHOBJ *)v110, 1u, v48);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v94);
          if ( v106[0] && v94[0] )
          {
            if ( !pco )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)v94, (struct RGNOBJ *)v106) )
                goto LABEL_140;
LABEL_132:
              v121 = *(struct _RECTL *)((char *)v94[0] + 88);
              if ( !pco || bIntersect(&v121, &pco->rclBounds, &v121) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v123, v94[0], (struct ERECTL *)&v121, 1);
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v124) )
                {
                  v112.left += v55;
                  v112.top += HIDWORD(v55);
                  v112.right += v55;
                  v112.bottom += HIDWORD(v55);
                  ++*(_DWORD *)(v13 + 92);
                  if ( v52 )
                  {
                    v118 = 0LL;
                    v119 = v112.right - v112.left;
                    v120 = v112.bottom - v112.top;
                    v66 = 0LL;
                  }
                  else
                  {
                    SURFACE::pfnBitBlt((SURFACE *)v13);
                  }
                  _guard_dispatch_icall_fptr();
                }
              }
              v53 = 1;
              goto LABEL_140;
            }
            if ( RGNOBJ::bMerge(
                   (RGNOBJ *)v94,
                   (struct RGNOBJ *)v106,
                   (struct RGNOBJ *)&pco[2].rclBounds.top,
                   BYTE1(gafjRgnOp)) )
            {
              goto LABEL_132;
            }
          }
LABEL_140:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v94);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v106);
          goto LABEL_141;
        }
        if ( !(unsigned int)bUMPDSecurityGateEx() || pptl )
        {
          v108 = v113.left + pptl->x - v69->left;
          top = v113.top;
          goto LABEL_37;
        }
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n", 1612);
        Win32FreePool(v60);
        Win32FreePool(v61);
LABEL_94:
        v17 = 0;
        SURFMEM::~SURFMEM((SURFMEM *)&v73);
        goto LABEL_48;
      }
    }
  }
  return 0;
}
