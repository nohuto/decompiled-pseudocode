/*
 * XREFs of EngPlgBlt @ 0x1400EA130
 * Callers:
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1400E9B20 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x14030DE90 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x14031E140 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x14031E398 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngEraseSurface @ 0x1400A14B0 (EngEraseSurface.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1400E8CA8 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     ?vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x1400EB850 (-vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 *     ?lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z @ 0x1400EB9F0 (-lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z.c)
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1400EBACC (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14018A09C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x14019C490 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x14019C4CC (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1401AEF4C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140224CD8 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
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
  ULONG v11; // r13d
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  BOOL v14; // edi
  BOOL v15; // esi
  int v16; // ecx
  int v17; // eax
  ULONG v18; // r8d
  __int64 v19; // r9
  Gre::Base *v20; // rcx
  __int64 v21; // rbx
  int v22; // r9d
  __int64 v23; // rdx
  CLIPOBJ *v24; // r13
  char v25; // bl
  __int64 v26; // rax
  BOOL (__stdcall *v27)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r12
  ULONG v28; // r8d
  unsigned __int64 v29; // rax
  XLATEOBJ *v30; // r12
  int v31; // r8d
  POINTFIX *v32; // r15
  rotate *v33; // rax
  rotate *v34; // rbx
  struct rotate::_PLGDDA *v35; // rdx
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  void (*const near *v38)(struct rotate::_PLGRUN *, struct rotate::_PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  struct Gre::Base::SESSION_GLOBALS *v39; // r10
  LONG top; // edx
  unsigned __int64 v41; // r8
  __int64 p_lDelta; // rax
  __int64 v43; // rcx
  __int64 p_pvScan0; // rax
  XLATEOBJ *v45; // rcx
  __int64 v46; // rax
  struct rotate::_PLGDDA *v47; // rdx
  __int64 v48; // rax
  int v49; // r12d
  CLIPOBJ *v50; // r15
  FIX x; // edx
  FIX y; // eax
  struct _RECTL *v53; // r9
  CLIPOBJ *v54; // r13
  int v55; // r9d
  int v56; // r10d
  int v57; // r8d
  int v58; // edx
  int (*v59)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r10
  int v60; // r8d
  CLIPOBJ *v61; // r15
  BOOL (__stdcall *v62)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  CLIPOBJ *v63; // r8
  RECTL *v65; // [rsp+20h] [rbp-4F8h]
  COLORADJUSTMENT *v66; // [rsp+28h] [rbp-4F0h]
  char v67; // [rsp+60h] [rbp-4B8h]
  char v68; // [rsp+61h] [rbp-4B7h]
  int v69; // [rsp+64h] [rbp-4B4h]
  ULONG v70; // [rsp+68h] [rbp-4B0h]
  LONG v71; // [rsp+68h] [rbp-4B0h]
  struct REGION *v72; // [rsp+70h] [rbp-4A8h] BYREF
  __int64 v73; // [rsp+78h] [rbp-4A0h] BYREF
  XLATEOBJ *v74; // [rsp+80h] [rbp-498h]
  BOOL (__stdcall *v75)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+88h] [rbp-490h]
  POINTFIX v76; // [rsp+90h] [rbp-488h] BYREF
  struct REGION *v77; // [rsp+98h] [rbp-480h] BYREF
  POINTFIX *v78; // [rsp+A0h] [rbp-478h] BYREF
  struct REGION *v79; // [rsp+A8h] [rbp-470h] BYREF
  struct REGION *v80; // [rsp+B0h] [rbp-468h] BYREF
  int v81; // [rsp+B8h] [rbp-460h]
  int v82; // [rsp+BCh] [rbp-45Ch]
  struct Gre::Base::SESSION_GLOBALS *v83; // [rsp+C0h] [rbp-458h]
  __int64 v84; // [rsp+C8h] [rbp-450h] BYREF
  unsigned __int64 v85; // [rsp+D0h] [rbp-448h]
  POINTFIX *v86; // [rsp+D8h] [rbp-440h]
  RECTL *v87; // [rsp+E0h] [rbp-438h]
  POINTFIX *v88; // [rsp+E8h] [rbp-430h]
  __int64 v89; // [rsp+F0h] [rbp-428h] BYREF
  POINTFIX *v90; // [rsp+F8h] [rbp-420h] BYREF
  char v91; // [rsp+100h] [rbp-418h]
  int v92; // [rsp+104h] [rbp-414h]
  struct _SURFOBJ *v93; // [rsp+108h] [rbp-410h]
  CLIPOBJ *v94; // [rsp+110h] [rbp-408h] BYREF
  char v95; // [rsp+118h] [rbp-400h]
  int v96; // [rsp+11Ch] [rbp-3FCh]
  CLIPOBJ *v97; // [rsp+120h] [rbp-3F8h]
  XLATEOBJ *v98; // [rsp+128h] [rbp-3F0h]
  RECTL *v99; // [rsp+130h] [rbp-3E8h]
  CLIPOBJ *v100; // [rsp+138h] [rbp-3E0h]
  XLATEOBJ *v101; // [rsp+140h] [rbp-3D8h]
  struct _SURFOBJ *v102; // [rsp+148h] [rbp-3D0h]
  struct rotate::_PLGRUN *(*const near *v103)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+150h] [rbp-3C8h]
  unsigned __int64 v104; // [rsp+158h] [rbp-3C0h] BYREF
  char v105; // [rsp+160h] [rbp-3B8h]
  int v106; // [rsp+164h] [rbp-3B4h]
  unsigned __int64 v107; // [rsp+170h] [rbp-3A8h]
  SURFOBJ *v108; // [rsp+178h] [rbp-3A0h]
  unsigned __int64 v109; // [rsp+180h] [rbp-398h]
  rotate *v110; // [rsp+188h] [rbp-390h]
  struct rotate::_PLGRUN *(*const near *v111)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+190h] [rbp-388h]
  SURFOBJ *v112; // [rsp+198h] [rbp-380h]
  _DWORD v113[4]; // [rsp+1A0h] [rbp-378h] BYREF
  __int64 v114; // [rsp+1B0h] [rbp-368h]
  int v115; // [rsp+1B8h] [rbp-360h]
  int v116; // [rsp+1BCh] [rbp-35Ch]
  char v117[8]; // [rsp+1C0h] [rbp-358h] BYREF
  __int64 v118; // [rsp+1C8h] [rbp-350h]
  RECTL v119; // [rsp+240h] [rbp-2D8h] BYREF
  RECTL v120; // [rsp+250h] [rbp-2C8h] BYREF
  struct _RECTL v121; // [rsp+260h] [rbp-2B8h] BYREF
  __int64 v122; // [rsp+270h] [rbp-2A8h]
  int v123; // [rsp+278h] [rbp-2A0h]
  int v124; // [rsp+27Ch] [rbp-29Ch]
  __int128 v125; // [rsp+280h] [rbp-298h] BYREF
  unsigned __int64 v126; // [rsp+290h] [rbp-288h] BYREF
  int v127; // [rsp+298h] [rbp-280h]
  int v128; // [rsp+29Ch] [rbp-27Ch]
  struct _RECTL v129; // [rsp+2A0h] [rbp-278h] BYREF
  _BYTE v130[160]; // [rsp+2B0h] [rbp-268h] BYREF
  _BYTE v131[4]; // [rsp+350h] [rbp-1C8h] BYREF
  char v132[156]; // [rsp+354h] [rbp-1C4h] BYREF
  CLIPOBJ pcoa; // [rsp+3F0h] [rbp-128h] BYREF
  POINTFIX v134; // [rsp+490h] [rbp-88h] BYREF
  struct rotate::_PLGRUN *(*const near *v135)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+498h] [rbp-80h]
  POINTFIX v136; // [rsp+4A0h] [rbp-78h]
  int v137; // [rsp+4A8h] [rbp-70h]
  int v138; // [rsp+4ACh] [rbp-6Ch]
  struct _POINTL v139; // [rsp+4B0h] [rbp-68h] BYREF
  struct _POINTL v140; // [rsp+4B8h] [rbp-60h] BYREF
  __int64 v141; // [rsp+4C0h] [rbp-58h]
  int v142; // [rsp+4C8h] [rbp-50h]
  FIX v143; // [rsp+4CCh] [rbp-4Ch]

  v100 = pco;
  v108 = psoMsk;
  v93 = psoSrc;
  v102 = psoTrg;
  *(_QWORD *)&v121.left = pptl;
  v99 = prcl;
  v112 = psoMsk;
  v94 = pco;
  v74 = pxlo;
  v88 = pptfx;
  v77 = (struct REGION *)prcl;
  v11 = iMode;
  v70 = iMode;
  v12 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v104 = v12;
  v126 = v12;
  v13 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  v109 = (unsigned __int64)&psoMsk[-1].pvScan0 & -(__int64)(psoMsk != 0LL);
  v14 = 0;
  v69 = 0;
  if ( iMode != 4 || ((unsigned __int64)&psoMsk[-1].pvScan0 & -(__int64)(psoMsk != 0LL)) != 0 )
  {
    v67 = 0;
    v15 = 1;
  }
  else
  {
    v15 = 1;
    v67 = 1;
  }
  if ( iMode - 1 > 3 )
    return 0;
  v107 = v12 + 24;
  v16 = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x60);
  if ( v16 == 7 )
    return 0;
  if ( (unsigned int)(v16 - 8) <= 1 )
    return 0;
  v85 = v13 + 24;
  v17 = *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x60);
  if ( v17 == 9 || v16 == 10 || v17 == 10 )
    return 0;
  ERECTL::vOrder((ERECTL *)prcl);
  if ( iMode < v18 && !v19 && (*(_DWORD *)(v13 + 96) == 1 || *(_DWORD *)(v12 + 96) == 1) )
  {
    v68 = 1;
  }
  else
  {
    v68 = 0;
    if ( iMode < v18 )
      v11 = v18;
    v70 = v11;
  }
  v89 = *(_QWORD *)(v12 + 48);
  v84 = *(_QWORD *)(v13 + 48);
  v90 = 0LL;
  v91 = 0;
  v92 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v130);
  v119 = 0LL;
  v73 = 0LL;
  v101 = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v79);
  *(_QWORD *)&v120.left = 0LL;
  v120.right = *(_DWORD *)(v13 + 56);
  v120.bottom = *(_DWORD *)(v13 + 60);
  v83 = Gre::Base::Globals(v20);
  v21 = v84;
  if ( v84 && v13 == *(_QWORD *)(v84 + 2544) && (*(_DWORD *)(v84 + 40) & 0x20000) != 0 )
    ERECTL::bOffsetAdd((ERECTL *)&v120, (const struct _POINTL *)(v84 + 2576), 0);
  if ( !v68 && !*(_WORD *)(v12 + 100) && *(_QWORD *)(v12 + 32) != *(_QWORD *)(v13 + 32) && !v67 )
    goto LABEL_43;
  v76 = *v88;
  v134 = v76;
  v103 = (struct rotate::_PLGRUN *(*const near *)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))v88[1];
  v135 = v103;
  v136 = v88[2];
  v137 = v136.x + (_DWORD)v103 - v76.x;
  v138 = v88[1].y + v88[2].y - v88->y;
  v22 = ((int)v103 > v137) ^ ((int)v103 <= v76.x);
  v23 = (SHIDWORD(v103) > v138) ^ (unsigned int)(SHIDWORD(v103) <= v76.y);
  if ( *(&v134.x + 2 * v22) > *(&v134.x + 2 * (v22 ^ 3LL)) )
    v22 ^= 3u;
  if ( *(&v134.y + 2 * v23) > *(&v134.y + 2 * ((unsigned int)v23 ^ 3LL)) )
    v23 = (unsigned int)v23 ^ 3;
  v119.left = (*(&v134.x + 2 * v22) >> 4) - 1;
  v119.top = (*(&v134.y + 2 * v23) >> 4) - 1;
  v119.right = ((*(&v134.x + 2 * (v22 ^ 3LL)) + 15) >> 4) + 1;
  v119.bottom = ((*(&v134.y + 2 * (v23 ^ 3)) + 15) >> 4) + 1;
  v80 = 0LL;
  v81 = *(_DWORD *)(v12 + 56);
  v82 = *(_DWORD *)(v12 + 60);
  if ( v89 && v12 == *(_QWORD *)(v89 + 2544) && (*(_DWORD *)(v89 + 40) & 0x20000) != 0 )
    ERECTL::bOffsetAdd((ERECTL *)&v80, (const struct _POINTL *)(v89 + 2576), 0);
  ERECTL::operator*=(&v119, &v80);
  if ( !ERECTL::bEmpty((ERECTL *)&v119) )
  {
    if ( !v68
      && !*(_WORD *)(v12 + 100)
      && !v67
      && (v119.left > prcl->right || v119.right < prcl->left || v119.top > prcl->bottom || v119.bottom < prcl->top) )
    {
LABEL_43:
      v86 = (POINTFIX *)v12;
      v78 = v88;
      v24 = v100;
      v97 = v100;
      v75 = EngCopyBits;
      goto LABEL_69;
    }
    v134.x = v76.x - 16 * v119.left;
    v134.y -= 16 * v119.top;
    LODWORD(v135) = (_DWORD)v103 - 16 * v119.left;
    HIDWORD(v135) -= 16 * v119.top;
    v136.x -= 16 * v119.left;
    v136.y -= 16 * v119.top;
    v140.y = 0;
    v143 = 0;
    v139.y = v119.right - v119.left + 1;
    v140.x = v119.bottom - v119.top + 1;
    v141 = 0LL;
    v139.x = *(_DWORD *)(v12 + 96);
    v142 = *(_DWORD *)(v12 + 112) & 0x40000;
    v25 = v68;
    if ( v68 )
    {
      v139.x = 1;
    }
    else if ( v67 )
    {
      v139.x = *(_DWORD *)(v13 + 96);
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v90, (struct _DEVBITMAPINFO *)&v139, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
    if ( v90 )
    {
      v73 = *(_QWORD *)&v119.left;
      if ( v79 )
      {
        *(_QWORD *)&v119.left = 0LL;
        v119.right -= v73;
        v119.bottom -= HIDWORD(v73);
        RGNOBJ::vSet((RGNOBJ *)&v79, &v119);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v130, v79, (const struct ERECTL *)&v119, 1);
        v26 = v89;
        if ( v89 )
        {
          PDEVOBJ::vSync((PDEVOBJ *)&v89, v102, 0LL, 0);
          v26 = v89;
        }
        if ( v109 && v26 )
        {
          if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
          {
            v27 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v26 + 2832);
            v75 = EngCopyBits;
            v25 = v68;
          }
          else
          {
            v27 = EngCopyBits;
            v75 = EngCopyBits;
          }
          v66 = (COLORADJUSTMENT *)&v73;
          v65 = &v119;
          ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, char *))v27)(
            (unsigned __int64)&v90[3] & -(__int64)(v90 != 0LL),
            v107 & ((unsigned __int128)-(__int128)v12 >> 64),
            0LL,
            (char *)v83 + 4664);
        }
        else
        {
          v75 = EngCopyBits;
        }
        if ( !v25 )
          goto LABEL_63;
        v28 = -1;
        if ( v11 != 1 )
          v28 = 0;
        if ( EngEraseSurface((SURFOBJ *)((unsigned __int64)&v90[3] & -(__int64)(v90 != 0LL)), &v119, v28) )
        {
LABEL_63:
          v86 = v90;
          v78 = &v134;
          v24 = (CLIPOBJ *)v130;
          v97 = (CLIPOBJ *)v130;
          if ( v25 && *(_DWORD *)(v13 + 96) == 1 || v67 )
          {
            v101 = v74;
            v74 = 0LL;
          }
          else
          {
            v101 = (XLATEOBJ *)((char *)v83 + 4664);
          }
          v21 = v84;
LABEL_69:
          if ( v21 )
          {
            PDEVOBJ::vSync((PDEVOBJ *)&v84, v93, 0LL, 0);
            v21 = v84;
          }
          ERECTL::operator*=(&v120, v77);
          if ( v120.left == v120.right || v120.top == v120.bottom )
          {
            v14 = 1;
            goto LABEL_164;
          }
          v80 = 0LL;
          LOBYTE(v81) = 0;
          v82 = 0;
          v29 = 0LL;
          v72 = 0LL;
          v125 = 0LL;
          v87 = 0LL;
          v30 = 0LL;
          v98 = 0LL;
          if ( *(_WORD *)(v13 + 100) || (v31 = *(_DWORD *)(v13 + 96), v31 == 7) || v31 == 8 )
          {
            if ( v21 )
            {
              v113[3] = 0;
              v116 = 0;
              v113[1] = v120.right - v120.left + 1;
              v113[2] = v120.bottom - v120.top + 1;
              v114 = 0LL;
              v113[0] = v86[12].x;
              v115 = *(_DWORD *)(v13 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v80, (struct _DEVBITMAPINFO *)v113, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
              if ( !v80 )
                goto LABEL_98;
              DWORD2(v125) = v120.right - v120.left;
              HIDWORD(v125) = v120.bottom - v120.top;
              if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
                v75 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v84 + 2832);
              v66 = (COLORADJUSTMENT *)&v120;
              v65 = (RECTL *)&v125;
              ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *))v75)(
                ((unsigned __int64)v80 + 24) & -(__int64)(v80 != 0LL),
                v85 & -(__int64)(v13 != 0),
                0LL,
                v74);
              LODWORD(v125) = v99->left - v120.left;
              DWORD1(v125) = v99->top - v120.top;
              DWORD2(v125) = v99->right - v120.left;
              HIDWORD(v125) = v99->bottom - v120.top;
              v29 = (unsigned __int64)v80;
              v72 = v80;
              v98 = 0LL;
              v87 = (RECTL *)&v125;
              v120.right -= v120.left;
              v120.bottom -= v120.top;
              *(_QWORD *)&v120.left = 0LL;
            }
          }
          else
          {
            v29 = v13;
            v72 = (struct REGION *)v13;
            v30 = v74;
            v98 = v74;
            v87 = (RECTL *)v77;
          }
          *(_QWORD *)&v129.left = v29;
          v32 = v86;
          v76 = v86[6];
          if ( v76 )
            PDEVOBJ::vSync(
              (PDEVOBJ *)&v76,
              (struct _SURFOBJ *)((unsigned __int64)&v86[3] & ((unsigned __int128)-(__int128)(unsigned __int64)v86 >> 64)),
              0LL,
              0);
          v33 = (rotate *)Win32AllocPoolZInit(396LL, 1650946119LL);
          v34 = v33;
          v110 = v33;
          if ( !v33 || !v72 )
            goto LABEL_162;
          if ( !(unsigned int)rotate::bInitPlgDDA(
                                v33,
                                (struct rotate::_PLGDDA *)&v120,
                                v87,
                                (struct _RECTL *)v78,
                                (struct _POINTFIX *)v65) )
          {
LABEL_82:
            v69 = 1;
LABEL_161:
            Win32FreePool(v34);
LABEL_162:
            SURFMEM::~SURFMEM((SURFMEM *)&v80);
            v14 = v69;
            goto LABEL_164;
          }
          v103 = (&rotate::apfnRead)[*((unsigned int *)v72 + 24)];
          v111 = v103;
          v36 = rotate::lSizeDDA(v34, v35);
          v37 = (unsigned int)(v120.right - v120.left + 2) * (unsigned __int64)v36;
          if ( v37 > 0xFFFFFFFF || !(_DWORD)v37 )
            goto LABEL_161;
          if ( v68 )
          {
            *(_DWORD *)v34 = 1;
            v38 = (&rotate::apfnBogus)[v70];
          }
          else
          {
            *(_DWORD *)v34 = 0;
            v38 = (&rotate::apfnWrite)[v32[12].x];
          }
          v76 = (POINTFIX)v38;
          v93 = (struct _SURFOBJ *)v38;
          v39 = (struct Gre::Base::SESSION_GLOBALS *)PALLOCMEM(v37, 1650946119LL);
          v83 = v39;
          if ( !v39 )
            goto LABEL_161;
          top = v120.top;
          v71 = v120.top;
          v41 = *((_QWORD *)v72 + 10) + *((_DWORD *)v72 + 22) * v120.top;
          v85 = v41;
          v102 = 0LL;
          if ( !v109 )
          {
            v74 = 0LL;
            goto LABEL_104;
          }
          if ( *(_QWORD *)&v121.left )
          {
            LODWORD(v102) = v120.left + **(_DWORD **)&v121.left - v87->left;
            p_lDelta = (__int64)&v108->lDelta;
            if ( !v108 )
              p_lDelta = 88LL;
            v43 = *(_DWORD *)p_lDelta * (v120.top + *(_DWORD *)(*(_QWORD *)&v121.left + 4LL) - v87->top);
            p_pvScan0 = (__int64)&v108->pvScan0;
            if ( !v108 )
              p_pvScan0 = 80LL;
            v74 = (XLATEOBJ *)(*(_QWORD *)p_pvScan0 + v43);
LABEL_104:
            if ( v30 )
            {
              if ( (v30->flXlate & 1) != 0 )
                v30 = 0LL;
              v98 = v30;
            }
            if ( !v24 || !v24->iDComplexity )
            {
              *(_QWORD *)&v121.left = 0LL;
              v121.right = v32[7].x;
              v121.bottom = v32[7].y;
              RGNOBJ::vSet((RGNOBJ *)&v79, &v121);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v130, v79, (const struct ERECTL *)&v121, 1);
              v24 = (CLIPOBJ *)v130;
              v97 = (CLIPOBJ *)v130;
              top = v120.top;
              v71 = v120.top;
              v39 = v83;
              v41 = v85;
            }
            if ( v24->rclBounds.left >= v24->rclBounds.right || v24->rclBounds.top >= v24->rclBounds.bottom )
            {
              Win32FreePool(v39);
              goto LABEL_161;
            }
            v45 = v74;
            while ( 1 )
            {
              LODWORD(v75) = top;
              if ( top >= v120.bottom )
                break;
              *(_OWORD *)((char *)v34 + 68) = *(_OWORD *)((char *)v34 + 4);
              *(_OWORD *)((char *)v34 + 84) = *(_OWORD *)((char *)v34 + 20);
              *(_OWORD *)((char *)v34 + 100) = *(_OWORD *)((char *)v34 + 36);
              *(_OWORD *)((char *)v34 + 116) = *(_OWORD *)((char *)v34 + 52);
              LODWORD(v66) = v120.left;
              v46 = ((__int64 (__fastcall *)(rotate *, struct Gre::Base::SESSION_GLOBALS *, unsigned __int64, XLATEOBJ *, XLATEOBJ *, COLORADJUSTMENT *, LONG, _DWORD))v103)(
                      v34,
                      v39,
                      v41,
                      v45,
                      v30,
                      v66,
                      v120.right,
                      (_DWORD)v102);
              ((void (__fastcall *)(struct Gre::Base::SESSION_GLOBALS *, __int64, POINTFIX *, CLIPOBJ *))v93)(
                v83,
                v46,
                v32,
                v24);
              rotate::vAdvYDDA(v34, v47);
              v41 = *((int *)v72 + 22) + v85;
              v85 = v41;
              v45 = v74;
              if ( v74 )
              {
                v48 = (__int64)&v108->lDelta;
                if ( !v108 )
                  v48 = 88LL;
                v45 = (XLATEOBJ *)((char *)v74 + *(int *)v48);
                v74 = v45;
              }
              top = ++v71;
              v39 = v83;
            }
            Win32FreePool(v39);
            if ( v32 == (POINTFIX *)v12 )
              goto LABEL_82;
            v49 = 0;
            v94 = 0LL;
            v95 = 0;
            v96 = 0;
            v50 = 0LL;
            if ( v99->right - v99->left == v120.right && v99->bottom - v99->top == v120.bottom )
            {
              v49 = 1;
            }
            else
            {
              v121.bottom = 0;
              v124 = 0;
              v121.top = v119.right + 1;
              v121.right = v119.bottom + 1;
              v122 = 0LL;
              v121.left = 1;
              v123 = *(_DWORD *)(v12 + 112) & 0x40000;
              SURFMEM::bCreateDIB((SURFMEM *)&v94, (struct _DEVBITMAPINFO *)&v121, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
              if ( v94 )
              {
                v104 = 0LL;
                v105 = 0;
                v106 = 0;
                v121.top = v120.right;
                v121.right = v120.bottom;
                v122 = 0LL;
                v121.left = 1;
                v123 = *(_DWORD *)(v12 + 112) & 0x40000;
                SURFMEM::bCreateDIB((SURFMEM *)&v104, (struct _DEVBITMAPINFO *)&v121, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
                RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v77);
                if ( v104 )
                {
                  if ( v77 )
                  {
                    RGNOBJ::vSet((RGNOBJ *)&v77, &v119);
                    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v77, (struct ERECTL *)&v119, 1);
                    if ( EngEraseSurface((SURFOBJ *)((unsigned __int64)&v94[1] & -(__int64)(v94 != 0LL)), &v119, 0) )
                    {
                      if ( EngEraseSurface((SURFOBJ *)((v104 + 24) & -(__int64)(v104 != 0)), &v120, 0xFFFFFFFF)
                        && EngPlgBlt(
                             (SURFOBJ *)((unsigned __int64)&v94[1] & -(__int64)(v94 != 0LL)),
                             (SURFOBJ *)((v104 + 24) & ((unsigned __int128)-(__int128)v104 >> 64)),
                             0LL,
                             &pcoa,
                             0LL,
                             0LL,
                             0LL,
                             v78,
                             v87,
                             0LL,
                             3u) )
                      {
                        v50 = v94;
                        v49 = 1;
                      }
                    }
                  }
                }
                RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v77);
                SURFMEM::~SURFMEM((SURFMEM *)&v104);
              }
            }
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v117);
            if ( !v49 )
              goto LABEL_159;
            if ( !v118 )
              goto LABEL_159;
            v139 = (struct _POINTL)*v88;
            v140 = (struct _POINTL)v88[1];
            x = v88[2].x;
            LODWORD(v141) = x + v140.x - v139.x;
            y = v88[2].y;
            HIDWORD(v141) = y + v140.y - v139.y;
            v142 = x;
            v143 = y;
            if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)v117, 0LL, &v139)
              || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v117, 0LL, &v140, 3u) )
            {
LABEL_159:
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v117);
              SURFMEM::~SURFMEM((SURFMEM *)&v94);
              goto LABEL_161;
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78, (struct EPATHOBJ *)v117, 1u, v53);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v72);
            if ( v78 && v72 )
            {
              v54 = v100;
              if ( !v100 )
              {
                if ( !RGNOBJ::bCopy((RGNOBJ *)&v72, (struct RGNOBJ *)&v78) )
                  goto LABEL_158;
LABEL_142:
                v129 = *(struct _RECTL *)((char *)v72 + 52);
                if ( !v54 || bIntersect(&v129, &v54->rclBounds, &v129) )
                {
                  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v131, v72, (struct ERECTL *)&v129, 1);
                  if ( !ERECTL::bEmpty((ERECTL *)v132) )
                  {
                    v55 = v73 + v119.left;
                    v119.left += v73;
                    v56 = HIDWORD(v73) + v119.top;
                    v119.top += HIDWORD(v73);
                    v57 = v73 + v119.right;
                    v119.right += v73;
                    v58 = HIDWORD(v73) + v119.bottom;
                    v119.bottom += HIDWORD(v73);
                    v73 = 0LL;
                    ++*(_DWORD *)(v126 + 92);
                    if ( v67 )
                    {
                      if ( v89 )
                      {
                        v126 = 0LL;
                        v127 = v57 - v55;
                        v128 = v58 - v56;
                        v76 = 0LL;
                        if ( (*(_DWORD *)(v12 + 112) & 2) != 0 )
                          v62 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v89 + 2840);
                        else
                          v62 = EngStretchBlt;
                        v63 = v50 + 1;
                        if ( !v50 )
                          v63 = 0LL;
                        ((void (__fastcall *)(unsigned __int64, unsigned __int64, CLIPOBJ *, _BYTE *, XLATEOBJ *, _QWORD, POINTFIX *, RECTL *, unsigned __int64 *, __int64 *, int))v62)(
                          v107 & -(__int64)(v12 != 0),
                          (unsigned __int64)&v90[3] & -(__int64)(v90 != 0LL),
                          v63,
                          v131,
                          v101,
                          0LL,
                          &v76,
                          &v119,
                          &v126,
                          &v73,
                          4);
                      }
                    }
                    else
                    {
                      v59 = SURFACE::pfnBitBlt((SURFACE *)v12);
                      v60 = v50 != 0LL ? 43724 : 52428;
                      if ( v50 )
                        v61 = v50 + 1;
                      else
                        v61 = 0LL;
                      ((void (__fastcall *)(unsigned __int64, unsigned __int64, CLIPOBJ *, _BYTE *, XLATEOBJ *, RECTL *, __int64 *, __int64 *, _QWORD, _QWORD, int))v59)(
                        v107 & -(__int64)(v12 != 0),
                        (unsigned __int64)&v90[3] & -(__int64)(v90 != 0LL),
                        v61,
                        v131,
                        v101,
                        &v119,
                        &v73,
                        &v73,
                        0LL,
                        0LL,
                        v60);
                    }
                  }
                }
                v69 = 1;
                goto LABEL_158;
              }
              if ( RGNOBJ::bMerge((RGNOBJ *)&v72, (struct RGNOBJ *)&v78, (struct RGNOBJ *)&v100[2].rclBounds.top, 8u) )
                goto LABEL_142;
            }
LABEL_158:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v72);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
            goto LABEL_159;
          }
          Win32FreePool(v39);
          Win32FreePool(v34);
LABEL_98:
          SURFMEM::~SURFMEM((SURFMEM *)&v80);
LABEL_164:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v79);
          SURFMEM::~SURFMEM((SURFMEM *)&v90);
          return v14;
        }
      }
    }
    v15 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v79);
  SURFMEM::~SURFMEM((SURFMEM *)&v90);
  return v15;
}
