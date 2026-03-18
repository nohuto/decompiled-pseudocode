/*
 * XREFs of EngPlgBlt @ 0x1C00C8FF0
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0004CC0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C01058C0 (NtGdiTransparentBlt.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C026E770 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0280138 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C028F5D0 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     NtGdiEngPlgBlt @ 0x1C02ACE40 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C0021614 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009CE2C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngEraseSurface @ 0x1C00A2820 (EngEraseSurface.c)
 *     ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C00C7478 (-bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     ?vAdvYDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C00CA5C0 (-vAdvYDDA@@YAXPEAU_PLGDDA@@@Z.c)
 *     ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C00CA81C (-lSizeDDA@@YAJPEAU_PLGDDA@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C01057B4 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C025B15C (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
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
  unsigned int v34; // eax
  _DWORD *v35; // r11
  unsigned __int64 v36; // r9
  struct _SURFOBJ *v37; // rax
  LONG top; // r11d
  XLATEOBJ *v39; // rdx
  CLIPOBJ *v40; // rcx
  LONG v41; // ecx
  LONG v42; // eax
  int v43; // r11d
  SURFOBJ *v44; // rcx
  SURFOBJ *v45; // rcx
  SURFOBJ *v46; // rdx
  SURFOBJ *v47; // rcx
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v50; // r9
  ULONG v51; // [rsp+60h] [rbp-518h]
  int v52; // [rsp+60h] [rbp-518h]
  int v53; // [rsp+64h] [rbp-514h]
  int v54; // [rsp+68h] [rbp-510h]
  int v55; // [rsp+6Ch] [rbp-50Ch]
  __int64 v56; // [rsp+70h] [rbp-508h]
  __int64 v57; // [rsp+78h] [rbp-500h]
  __int64 v58; // [rsp+80h] [rbp-4F8h]
  XLATEOBJ *v59; // [rsp+88h] [rbp-4F0h]
  __int64 v60; // [rsp+90h] [rbp-4E8h]
  void *v62; // [rsp+B0h] [rbp-4C8h]
  struct _PLGDDA *v63; // [rsp+B8h] [rbp-4C0h]
  __int64 v64; // [rsp+C8h] [rbp-4B0h] BYREF
  char v65; // [rsp+D0h] [rbp-4A8h]
  int v66; // [rsp+D4h] [rbp-4A4h]
  CLIPOBJ *v67; // [rsp+D8h] [rbp-4A0h]
  struct _SURFOBJ *v68; // [rsp+E0h] [rbp-498h]
  struct _SURFOBJ *v69; // [rsp+E8h] [rbp-490h]
  XLATEOBJ *v70; // [rsp+F0h] [rbp-488h]
  RECTL *v71; // [rsp+F8h] [rbp-480h]
  POINTFIX *v72; // [rsp+100h] [rbp-478h]
  __int64 v73; // [rsp+108h] [rbp-470h] BYREF
  __int64 v74; // [rsp+110h] [rbp-468h]
  __int64 v75; // [rsp+118h] [rbp-460h] BYREF
  char v76; // [rsp+120h] [rbp-458h]
  int v77; // [rsp+124h] [rbp-454h]
  __int64 v78; // [rsp+128h] [rbp-450h]
  int v79; // [rsp+130h] [rbp-448h]
  int v80; // [rsp+134h] [rbp-444h]
  __int64 v81; // [rsp+138h] [rbp-440h] BYREF
  char v82; // [rsp+140h] [rbp-438h]
  int v83; // [rsp+144h] [rbp-434h]
  __int64 v84; // [rsp+150h] [rbp-428h] BYREF
  char v85; // [rsp+158h] [rbp-420h]
  int v86; // [rsp+15Ch] [rbp-41Ch]
  XLATEOBJ *v87; // [rsp+160h] [rbp-418h]
  struct REGION *v88[3]; // [rsp+168h] [rbp-410h] BYREF
  int v89; // [rsp+180h] [rbp-3F8h] BYREF
  __int64 v90; // [rsp+184h] [rbp-3F4h]
  int v91; // [rsp+18Ch] [rbp-3ECh]
  __int64 v92; // [rsp+190h] [rbp-3E8h]
  int v93; // [rsp+198h] [rbp-3E0h]
  int v94; // [rsp+19Ch] [rbp-3DCh]
  __int64 v95; // [rsp+1A0h] [rbp-3D8h] BYREF
  struct REGION *v96[2]; // [rsp+1A8h] [rbp-3D0h] BYREF
  __int64 v97; // [rsp+1B8h] [rbp-3C0h]
  _DWORD v98[4]; // [rsp+1C0h] [rbp-3B8h] BYREF
  __int64 v99; // [rsp+1D0h] [rbp-3A8h]
  int v100; // [rsp+1D8h] [rbp-3A0h]
  int v101; // [rsp+1DCh] [rbp-39Ch]
  __int64 v102; // [rsp+1E0h] [rbp-398h]
  struct REGION *v103[2]; // [rsp+1E8h] [rbp-390h] BYREF
  _DWORD v104[4]; // [rsp+1F8h] [rbp-380h] BYREF
  __int64 v105; // [rsp+208h] [rbp-370h]
  int v106; // [rsp+210h] [rbp-368h]
  int v107; // [rsp+214h] [rbp-364h]
  _QWORD v108[4]; // [rsp+218h] [rbp-360h] BYREF
  __int64 v109; // [rsp+238h] [rbp-340h] BYREF
  int v110; // [rsp+240h] [rbp-338h]
  __int64 v111; // [rsp+248h] [rbp-330h]
  char v112[8]; // [rsp+250h] [rbp-328h] BYREF
  __int64 v113; // [rsp+258h] [rbp-320h]
  RECTL v114; // [rsp+2D0h] [rbp-2A8h] BYREF
  RECTL v115; // [rsp+2E0h] [rbp-298h] BYREF
  __int64 v116; // [rsp+2F0h] [rbp-288h] BYREF
  int v117; // [rsp+2F8h] [rbp-280h]
  int v118; // [rsp+2FCh] [rbp-27Ch]
  struct _RECTL v119; // [rsp+300h] [rbp-278h] BYREF
  __int64 v120; // [rsp+310h] [rbp-268h]
  int v121; // [rsp+318h] [rbp-260h]
  int v122; // [rsp+31Ch] [rbp-25Ch]
  struct _RECTL v123; // [rsp+320h] [rbp-258h] BYREF
  _BYTE v124[160]; // [rsp+330h] [rbp-248h] BYREF
  char v125[4]; // [rsp+3D0h] [rbp-1A8h] BYREF
  char v126[156]; // [rsp+3D4h] [rbp-1A4h] BYREF
  CLIPOBJ pcoa; // [rsp+470h] [rbp-108h] BYREF
  POINTFIX v128; // [rsp+510h] [rbp-68h] BYREF
  POINTFIX v129; // [rsp+518h] [rbp-60h]
  POINTFIX v130; // [rsp+520h] [rbp-58h]
  int v131; // [rsp+528h] [rbp-50h]
  int v132; // [rsp+52Ch] [rbp-4Ch]
  POINTFIX v133; // [rsp+530h] [rbp-48h] BYREF
  struct _POINTL v134; // [rsp+538h] [rbp-40h] BYREF
  int v135; // [rsp+540h] [rbp-38h]
  int v136; // [rsp+544h] [rbp-34h]
  FIX v137; // [rsp+548h] [rbp-30h]
  FIX v138; // [rsp+54Ch] [rbp-2Ch]

  v69 = psoSrc;
  v68 = psoTrg;
  v108[2] = pco;
  v59 = pxlo;
  v51 = iMode;
  v13 = SURFOBJ_TO_SURFACE(psoTrg);
  v108[3] = v13;
  v58 = SURFOBJ_TO_SURFACE(psoSrc);
  v14 = SURFOBJ_TO_SURFACE(psoMsk);
  v60 = v14;
  v55 = 0;
  if ( iMode != 4 || v14 )
  {
    v54 = 0;
    v15 = 1;
  }
  else
  {
    v15 = 1;
    v54 = 1;
  }
  if ( iMode - 1 <= 3 )
  {
    v16 = *(_DWORD *)(v13 + 96);
    if ( v16 != 7 && v16 != 8 && v16 != 9 )
    {
      v17 = *(_DWORD *)(v58 + 96);
      if ( v17 != 9 && v16 != 10 && v17 != 10 )
      {
        ERECTL::vOrder((ERECTL *)prcl);
        if ( v19 < v20 && !v21 && (*(_DWORD *)(v18 + 96) == 1 || *(_DWORD *)(v13 + 96) == 1) )
        {
          v53 = 1;
        }
        else
        {
          v53 = 0;
          if ( v19 < v20 )
            v19 = v20;
          v51 = v19;
        }
        v73 = *(_QWORD *)(v13 + 48);
        v95 = *(_QWORD *)(v18 + 48);
        v64 = 0LL;
        v65 = 0;
        v66 = 0;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v124);
        v70 = 0LL;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v88);
        v22 = *(_DWORD *)(v58 + 60);
        v23 = *(_DWORD *)(v58 + 56);
        *(_QWORD *)&v115.left = 0LL;
        v115.right = v23;
        v115.bottom = v22;
        if ( v95 && v58 == *(_QWORD *)(v95 + 2576) && (*(_DWORD *)(v95 + 56) & 0x20000) != 0 )
        {
          v115.left = *(_DWORD *)(v95 + 2608);
          v115.right = *(_DWORD *)(v95 + 2608) + v23;
          v115.top = *(_DWORD *)(v95 + 2612);
          v115.bottom = v22 + *(_DWORD *)(v95 + 2612);
        }
        if ( !v53 && !*(_WORD *)(v13 + 100) && *(_QWORD *)(v13 + 32) != *(_QWORD *)(v58 + 32) && !v54 )
          goto LABEL_44;
        v128 = *pptfx;
        v129 = pptfx[1];
        v130 = pptfx[2];
        v131 = v129.x + v130.x - v128.x;
        v132 = pptfx[1].y + pptfx[2].y - pptfx->y;
        v24 = v129.y > v128.y == v129.y > v132;
        v25 = v129.x > v128.x == v129.x > v131;
        if ( *(&v128.x + 2 * (v129.x > v128.x == v129.x > v131)) > *(&v128.x
                                                                   + 2 * ((v129.x > v128.x == v129.x > v131) ^ 3LL)) )
          v25 ^= 3u;
        if ( *(&v128.y + 2 * (int)v24) > *(&v128.y + 2 * ((int)v24 ^ 3LL)) )
          LODWORD(v24) = v24 ^ 3;
        v114.left = (*(&v128.x + 2 * v25) >> 4) - 1;
        v114.top = (*(&v128.y + 2 * (int)v24) >> 4) - 1;
        v114.right = ((*(&v128.x + 2 * (v25 ^ 3LL)) + 15) >> 4) + 1;
        v114.bottom = ((*(&v128.y + 2 * ((int)v24 ^ 3LL)) + 15) >> 4) + 1;
        v26 = *(_DWORD *)(v13 + 60);
        v27 = *(_DWORD *)(v13 + 56);
        v78 = 0LL;
        v79 = v27;
        v80 = v26;
        if ( v73 && v13 == *(_QWORD *)(v73 + 2576) && (*(_DWORD *)(v73 + 56) & 0x20000) != 0 )
        {
          LODWORD(v78) = *(_DWORD *)(v73 + 2608);
          v79 = v27 + v78;
          HIDWORD(v78) = *(_DWORD *)(v73 + 2612);
          v80 = v26 + HIDWORD(v78);
        }
        ERECTL::operator*=(&v114);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v114) )
          goto LABEL_58;
        if ( v53
          || *(_WORD *)(v13 + 100)
          || v54
          || v114.left <= prcl->right
          && v114.right >= prcl->left
          && v114.top <= prcl->bottom
          && v114.bottom >= prcl->top )
        {
          v128.x -= 16 * v114.left;
          v128.y -= 16 * v114.top;
          v129.x -= 16 * v114.left;
          v129.y -= 16 * v114.top;
          v130.x -= 16 * v114.left;
          v130.y -= 16 * v114.top;
          v98[3] = 0;
          v100 = 0;
          v101 = 0;
          v98[1] = v114.right - v114.left + 1;
          v98[2] = v114.bottom - v114.top + 1;
          v99 = 0LL;
          v98[0] = *(_DWORD *)(v13 + 96);
          v100 = *(_DWORD *)(v13 + 112) & 0x40000;
          if ( v53 )
          {
            v98[0] = 1;
          }
          else if ( v54 )
          {
            v98[0] = *(_DWORD *)(v28 + 96);
          }
          SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)v98, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( !v64 )
            goto LABEL_57;
          v57 = *(_QWORD *)&v114.left;
          if ( !v88[0] )
            goto LABEL_57;
          *(_QWORD *)&v114.left = 0LL;
          v114.right -= v57;
          v114.bottom -= HIDWORD(v57);
          RGNOBJ::vSet((RGNOBJ *)v88, &v114);
          XCLIPOBJ::vSetup((XCLIPOBJ *)v124, v88[0], (struct ERECTL *)&v114, 1);
          PDEVOBJ::vSync((PDEVOBJ *)&v73, v68, 0LL, 0);
          if ( v60 )
            _guard_dispatch_icall_fptr();
          if ( v53 )
          {
            v29 = 0LL;
            if ( v64 )
              v29 = (SURFOBJ *)(v64 + 24);
            if ( !EngEraseSurface(v29, &v114, (v51 != 1) - 1) )
            {
LABEL_57:
              v15 = 0;
              goto LABEL_58;
            }
          }
          v56 = v64;
          v72 = &v128;
          v67 = (CLIPOBJ *)v124;
          if ( v53 && *(_DWORD *)(v58 + 96) == 1 || v54 )
          {
            v70 = pxlo;
            v59 = 0LL;
          }
          else
          {
            v70 = xloIdent;
          }
        }
        else
        {
LABEL_44:
          v56 = v13;
          v72 = pptfx;
          v67 = pco;
        }
        PDEVOBJ::vSync((PDEVOBJ *)&v95, v69, 0LL, 0);
        ERECTL::operator*=(&v115);
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v115) )
        {
          v75 = 0LL;
          v76 = 0;
          v77 = 0;
          if ( *(_WORD *)(v58 + 100) || (v32 = *(_DWORD *)(v58 + 96), v32 == 7) || v32 == 8 )
          {
            v104[3] = 0;
            v106 = 0;
            v107 = 0;
            v104[1] = v115.right - v115.left + 1;
            v104[2] = v115.bottom - v115.top + 1;
            v105 = 0LL;
            v104[0] = *(_DWORD *)(v56 + 96);
            v106 = *(_DWORD *)(v58 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v75, (struct _DEVBITMAPINFO *)v104, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( !v75 )
            {
LABEL_70:
              v15 = 0;
              SURFMEM::~SURFMEM((SURFMEM *)&v75);
              goto LABEL_58;
            }
            v116 = 0LL;
            v117 = v115.right - v115.left;
            v118 = v115.bottom - v115.top;
            _guard_dispatch_icall_fptr();
            LODWORD(v116) = prcl->left - v115.left;
            HIDWORD(v116) = prcl->top - v115.top;
            v117 = prcl->right - v115.left;
            v118 = prcl->bottom - v115.top;
            v58 = v75;
            v102 = v75;
            v59 = 0LL;
            v87 = 0LL;
            v71 = (RECTL *)&v116;
            v115.right -= v115.left;
            v115.bottom -= v115.top;
            *(_QWORD *)&v115.left = 0LL;
          }
          else
          {
            v102 = v58;
            v87 = v59;
            v71 = v31;
          }
          v109 = *(_QWORD *)(v56 + 48);
          PDEVOBJ::vSync((PDEVOBJ *)&v109, (struct _SURFOBJ *)(v56 + 24), 0LL, 0);
          v33 = (struct _PLGDDA *)PALLOCMEM2(0x18CuLL, 1650946119LL, 1);
          v63 = v33;
          if ( !v33 )
          {
LABEL_142:
            SURFMEM::~SURFMEM((SURFMEM *)&v75);
            v15 = v55;
            goto LABEL_58;
          }
          if ( !(unsigned int)bInitPlgDDA(v33, &v115, v71, v72) )
          {
LABEL_74:
            v55 = 1;
LABEL_141:
            Win32FreePool(v63);
            goto LABEL_142;
          }
          v97 = qword_1C02E4230[*(unsigned int *)(v58 + 96)];
          v111 = v97;
          v34 = lSizeDDA(v63);
          v36 = v34 * (unsigned __int64)(unsigned int)(v115.right - v115.left + 2);
          if ( v36 > 0xFFFFFFFF || !(_DWORD)v36 )
            goto LABEL_141;
          if ( v53 )
          {
            *v35 = 1;
            v37 = (struct _SURFOBJ *)qword_1C02E41B0[v51];
          }
          else
          {
            *v35 = 0;
            v37 = (struct _SURFOBJ *)qword_1C02E41D0[*(unsigned int *)(v56 + 96)];
          }
          v69 = v37;
          v88[2] = (struct REGION *)v37;
          v62 = PALLOCMEM2((unsigned int)v36, 1650946119LL, 1);
          if ( !v62 )
            goto LABEL_141;
          top = v115.top;
          v74 = *(_QWORD *)(v58 + 80) + v115.top * *(_DWORD *)(v58 + 88);
          if ( v60 )
          {
            if ( (unsigned int)bUMPDSecurityGateEx() && !pptl )
            {
              if ( gfUMPDDebug )
                DbgPrint("windows\\core\\ntgdi\\gre\\windows\\plgblt.cxx:%d:EngPlgBlt:pptl/pptlMask == NULL\n", 1772);
              Win32FreePool(v62);
              Win32FreePool(v63);
              goto LABEL_70;
            }
            v110 = v115.left + pptl->x - v71->left;
            top = v115.top;
          }
          v39 = v59;
          if ( v59 )
          {
            if ( (v59->flXlate & 1) != 0 )
              v39 = 0LL;
            v87 = v39;
          }
          v40 = v67;
          if ( !v67 || !v67->iDComplexity )
          {
            v41 = *(_DWORD *)(v56 + 60);
            v42 = *(_DWORD *)(v56 + 56);
            *(_QWORD *)&v119.left = 0LL;
            v119.right = v42;
            v119.bottom = v41;
            RGNOBJ::vSet((RGNOBJ *)v88, &v119);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v124, v88[0], (struct ERECTL *)&v119, 1);
            v40 = (CLIPOBJ *)v124;
            v67 = (CLIPOBJ *)v124;
            top = v115.top;
          }
          if ( v40->rclBounds.left >= v40->rclBounds.right || v40->rclBounds.top >= v40->rclBounds.bottom )
          {
            Win32FreePool(v62);
            goto LABEL_141;
          }
          while ( top < v115.bottom )
          {
            *(_OWORD *)((char *)v63 + 68) = *(_OWORD *)((char *)v63 + 4);
            *(_OWORD *)((char *)v63 + 84) = *(_OWORD *)((char *)v63 + 20);
            *(_OWORD *)((char *)v63 + 100) = *(_OWORD *)((char *)v63 + 36);
            *(_OWORD *)((char *)v63 + 116) = *(_OWORD *)((char *)v63 + 52);
            _guard_dispatch_icall_fptr();
            _guard_dispatch_icall_fptr();
            vAdvYDDA(v63);
            v74 += *(int *)(v58 + 88);
            top = v43 + 1;
          }
          Win32FreePool(v62);
          if ( v56 == v13 )
            goto LABEL_74;
          v52 = 0;
          v81 = 0LL;
          v82 = 0;
          v83 = 0;
          if ( prcl->right - prcl->left == v115.right && prcl->bottom - prcl->top == v115.bottom )
          {
            v52 = 1;
          }
          else
          {
            v91 = 0;
            v93 = 0;
            v94 = 0;
            LODWORD(v90) = v114.right + 1;
            HIDWORD(v90) = v114.bottom + 1;
            v92 = 0LL;
            v89 = 1;
            v93 = *(_DWORD *)(v13 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v81, (struct _DEVBITMAPINFO *)&v89, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v81 )
            {
              v84 = 0LL;
              v85 = 0;
              v86 = 0;
              v90 = *(_QWORD *)&v115.right;
              v92 = 0LL;
              v89 = 1;
              v93 = *(_DWORD *)(v13 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v84, (struct _DEVBITMAPINFO *)&v89, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v103);
              if ( v84 && v103[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v103, &v114);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v103[0], (struct ERECTL *)&v114, 1);
                v44 = v81 ? (SURFOBJ *)(v81 + 24) : 0LL;
                if ( EngEraseSurface(v44, &v114, 0) )
                {
                  v45 = 0LL;
                  if ( v84 )
                    v45 = (SURFOBJ *)(v84 + 24);
                  if ( EngEraseSurface(v45, &v115, 0xFFFFFFFF) )
                  {
                    v46 = 0LL;
                    if ( v84 )
                      v46 = (SURFOBJ *)(v84 + 24);
                    v47 = 0LL;
                    if ( v81 )
                      v47 = (SURFOBJ *)(v81 + 24);
                    if ( EngPlgBlt(v47, v46, 0LL, &pcoa, 0LL, 0LL, 0LL, v72, v71, 0LL, 3u) )
                      v52 = 1;
                  }
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v103);
              SURFMEM::~SURFMEM((SURFMEM *)&v84);
            }
          }
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v112);
          if ( !v52 )
            goto LABEL_139;
          if ( !v113 )
            goto LABEL_139;
          v133 = *pptfx;
          v134 = (struct _POINTL)pptfx[1];
          x = pptfx[2].x;
          v135 = x + v134.x - v133.x;
          y = pptfx[2].y;
          v136 = y + v134.y - v133.y;
          v137 = x;
          v138 = y;
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v112, 0LL, (struct _POINTL *)&v133)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v112, 0LL, &v134, 3u) )
          {
LABEL_139:
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v112);
            SURFMEM::~SURFMEM((SURFMEM *)&v81);
            goto LABEL_141;
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v108, (struct EPATHOBJ *)v112, 1u, v50);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v96);
          if ( v108[0] && v96[0] )
          {
            if ( !pco )
            {
              if ( !RGNOBJ::bCopy((RGNOBJ *)v96, (struct RGNOBJ *)v108) )
                goto LABEL_138;
LABEL_130:
              v123 = *(struct _RECTL *)((char *)v96[0] + 88);
              if ( !pco || bIntersect(&v123, &pco->rclBounds, &v123) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v125, v96[0], (struct ERECTL *)&v123, 1);
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v126) )
                {
                  v114.left += v57;
                  v114.top += HIDWORD(v57);
                  v114.right += v57;
                  v114.bottom += HIDWORD(v57);
                  ++*(_DWORD *)(v13 + 92);
                  if ( v54 )
                  {
                    v120 = 0LL;
                    v121 = v114.right - v114.left;
                    v122 = v114.bottom - v114.top;
                    v68 = 0LL;
                  }
                  else
                  {
                    SURFACE::pfnBitBlt((SURFACE *)v13);
                  }
                  _guard_dispatch_icall_fptr();
                }
              }
              v55 = 1;
              goto LABEL_138;
            }
            if ( RGNOBJ::bMerge(
                   (RGNOBJ *)v96,
                   (struct RGNOBJ *)v108,
                   (struct RGNOBJ *)&pco[2].rclBounds.top,
                   BYTE1(gafjRgnOp)) )
            {
              goto LABEL_130;
            }
          }
LABEL_138:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v96);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v108);
          goto LABEL_139;
        }
LABEL_58:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v88);
        SURFMEM::~SURFMEM((SURFMEM *)&v64);
        return v15;
      }
    }
  }
  return 0;
}
