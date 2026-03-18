/*
 * XREFs of EngCopyBits @ 0x1400E3940
 * Callers:
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x1400773DC (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x14009EFCC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1400A0D50 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x1400A5648 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400DC9FC (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngStretchBlt @ 0x1400E65F0 (EngStretchBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x140180DF0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x14018174C (EngHTBlt.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x14019C5C4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x14027D524 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1402819CC (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x140314D04 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A9580 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1400E4488 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1400E4764 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x14011B120 (-vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x14011B310 (-vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x14011B7C0 (-vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z @ 0x14011BC50 (-vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z @ 0x14011C110 (-vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x14011C670 (-vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z @ 0x14011C720 (-vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x140132AF0 (-vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x140132F50 (-vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x140133140 (-vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x140133390 (-vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x140133690 (-vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x140141980 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D32@@YAXPEAUBLTINFO@@@Z @ 0x140156A20 (-vSrcCopyS8D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x140156C20 (-vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x140157190 (-vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x140157F70 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D32@@YAXPEAUBLTINFO@@@Z @ 0x140166680 (-vSrcCopyS1D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14016D630 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D32@@YAXPEAUBLTINFO@@@Z @ 0x1401AEA00 (-vSrcCopyS4D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x1401BDD50 (-vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z @ 0x1401C3940 (-vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401CFA20 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D24@@YAXPEAUBLTINFO@@@Z @ 0x1401D26B0 (-vSrcCopyS8D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401D7CF0 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x1401D7D50 (-vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D1@@YAXPEAUBLTINFO@@@Z @ 0x1401E28B0 (-vSrcCopyS8D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1401E2CE0 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8@@YAXPEAUBLTINFO@@@Z @ 0x1401E33E0 (-vSrcCopyS8D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D1@@YAXPEAUBLTINFO@@@Z @ 0x1401EC2C0 (-vSrcCopyS4D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1401ECAD0 (-vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401EF450 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401F61C0 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x140218470 (-vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4@@YAXPEAUBLTINFO@@@Z @ 0x140221670 (-vSrcCopyS4D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x14022D910 (-vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x14033AA10 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z @ 0x14033AE40 (-vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z @ 0x14033AF90 (-vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D4@@YAXPEAUBLTINFO@@@Z @ 0x14033B1A0 (-vSrcCopyS8D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x14033B280 (-vSrcCopyS16D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D8@@YAXPEAUBLTINFO@@@Z @ 0x14033B490 (-vSrcCopyS4D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x14033B560 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D16@@YAXPEAUBLTINFO@@@Z @ 0x14033B5F0 (-vSrcCopyS4D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D16@@YAXPEAUBLTINFO@@@Z @ 0x14033B6C0 (-vSrcCopyS8D16@@YAXPEAUBLTINFO@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  XLATEOBJ *v6; // r15
  POINTL *v9; // rdx
  POINTL *v10; // r8
  unsigned __int64 v11; // r13
  __int64 p_iBitmapFormat; // rax
  int v13; // esi
  int v14; // r8d
  int v15; // ebx
  unsigned int v16; // r12d
  LONG v17; // eax
  int lDelta; // eax
  unsigned __int64 v19; // rcx
  RECTL v20; // xmm0
  struct Gre::Base::SESSION_GLOBALS *v21; // rax
  XLATEOBJ *v22; // rdx
  unsigned int v23; // eax
  ULONG iBitmapFormat; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  unsigned int i; // r12d
  RECTL *v30; // rcx
  LONG left; // r13d
  LONG v32; // r8d
  RECTL *v33; // r11
  LONG right; // ecx
  LONG v35; // r9d
  LONG v36; // r10d
  LONG v37; // edx
  LONG bottom; // ecx
  LONG v39; // r11d
  int v40; // ecx
  int v41; // eax
  LONG v42; // ecx
  char *pvScan0; // r9
  LONG v44; // r8d
  char *v45; // r10
  int (*RLESrcCopy)(struct BLTINFO *); // r11
  LONG v47; // ecx
  LONG top; // edx
  __int64 v49; // rsi
  __int64 (__fastcall *v50)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  unsigned __int64 x; // rcx
  __int64 y; // rdx
  int v53; // eax
  int v54; // r12d
  LONG *p_top; // r13
  __int64 v56; // r8
  __int64 v57; // rcx
  __int64 v58; // r8
  RECTL *v59; // r9
  __int64 v60; // rcx
  char *v61; // rdx
  unsigned __int64 v62; // rax
  char *v63; // rcx
  unsigned int j; // ebx
  LONG v65; // eax
  LONG v66; // r10d
  RECTL *v67; // r8
  LONG v68; // eax
  LONG v69; // r9d
  LONG v70; // eax
  int v71; // edx
  int v72; // r8d
  int v73; // eax
  int v74; // ebx
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rbx
  struct Gre::Base::SESSION_GLOBALS *v78; // r14
  int v79; // [rsp+64h] [rbp-2F4h]
  RECTL *v80; // [rsp+68h] [rbp-2F0h] BYREF
  POINTL *v81; // [rsp+70h] [rbp-2E8h] BYREF
  int v82; // [rsp+78h] [rbp-2E0h]
  int v83; // [rsp+7Ch] [rbp-2DCh]
  HDEV hdev; // [rsp+80h] [rbp-2D8h] BYREF
  RECTL *v85; // [rsp+88h] [rbp-2D0h]
  XLATEOBJ *v86; // [rsp+90h] [rbp-2C8h]
  XCLIPOBJ *v87; // [rsp+98h] [rbp-2C0h]
  POINTL *v88; // [rsp+A0h] [rbp-2B8h]
  int v89; // [rsp+A8h] [rbp-2B0h]
  SURFOBJ *v90; // [rsp+B0h] [rbp-2A8h]
  ULONG *v91; // [rsp+B8h] [rbp-2A0h]
  int v92; // [rsp+C0h] [rbp-298h]
  CLIPOBJ *v93; // [rsp+C8h] [rbp-290h]
  SURFOBJ *v94; // [rsp+D0h] [rbp-288h]
  SURFOBJ *v95; // [rsp+D8h] [rbp-280h]
  HDEV v96; // [rsp+E0h] [rbp-278h]
  POINTL *v97; // [rsp+E8h] [rbp-270h]
  _BYTE v98[32]; // [rsp+F0h] [rbp-268h] BYREF
  __int64 v99; // [rsp+110h] [rbp-248h]
  XLATEOBJ *v100; // [rsp+120h] [rbp-238h] BYREF
  char *v101; // [rsp+128h] [rbp-230h]
  char *v102; // [rsp+130h] [rbp-228h]
  int v103; // [rsp+138h] [rbp-220h]
  int v104; // [rsp+13Ch] [rbp-21Ch]
  int v105; // [rsp+140h] [rbp-218h]
  int v106; // [rsp+144h] [rbp-214h]
  LONG v107; // [rsp+148h] [rbp-210h]
  int v108; // [rsp+14Ch] [rbp-20Ch]
  int v109; // [rsp+150h] [rbp-208h]
  int v110; // [rsp+154h] [rbp-204h]
  int v111; // [rsp+158h] [rbp-200h]
  unsigned int v112; // [rsp+15Ch] [rbp-1FCh]
  int v113; // [rsp+160h] [rbp-1F8h]
  unsigned __int64 v114; // [rsp+168h] [rbp-1F0h]
  POINTL v115; // [rsp+170h] [rbp-1E8h]
  RECTL v116; // [rsp+178h] [rbp-1E0h]
  char *v117; // [rsp+188h] [rbp-1D0h]
  char *v118; // [rsp+190h] [rbp-1C8h]
  int v119; // [rsp+198h] [rbp-1C0h]
  int v120; // [rsp+19Ch] [rbp-1BCh]
  int v121; // [rsp+1A0h] [rbp-1B8h]
  unsigned int v122; // [rsp+1A4h] [rbp-1B4h]
  int v123; // [rsp+1A8h] [rbp-1B0h]
  unsigned int v124; // [rsp+1C0h] [rbp-198h] BYREF
  RECTL v125[20]; // [rsp+1C4h] [rbp-194h]

  v6 = pxlo;
  v86 = pxlo;
  v87 = (XCLIPOBJ *)pco;
  v90 = psoDest;
  v80 = prclDest;
  v9 = pptlSrc;
  v81 = pptlSrc;
  v94 = psoDest;
  v95 = psoSrc;
  v93 = pco;
  v85 = prclDest;
  v10 = pptlSrc;
  v88 = pptlSrc;
  v97 = pptlSrc;
  if ( psoDest->iType )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(prclDest, pptlSrc);
    v10 = v88;
    v9 = v88;
  }
  v11 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  if ( psoSrc->iType )
  {
    v49 = *(_QWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x30);
    if ( !v49 )
      return 0;
    v50 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v49 + 2832);
    v80 = 0LL;
    x = (unsigned int)v9->x;
    LODWORD(v81) = v9->x;
    y = (unsigned int)v10->y;
    HIDWORD(v81) = v10->y;
    v53 = *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x70);
    if ( (v53 & 0x80000) != 0 && v49 != *(_QWORD *)(v49 + 24) )
    {
      if ( v53 < 0 )
      {
        LODWORD(v81) = *(_DWORD *)(v49 + 2576) + x;
        x = (unsigned int)(y + *(_DWORD *)(v49 + 2580));
        HIDWORD(v81) = y + *(_DWORD *)(v49 + 2580);
        v88 = (POINTL *)&v81;
      }
      v77 = *(_QWORD *)(v49 + 24);
      v78 = Gre::Base::Globals((Gre::Base *)x);
      SURFREF::SURFREF((SURFREF *)v98, *(HSURF *)(v11 + 144), v78);
      if ( !v99
        || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (Gre::Base *)&v80,
                            0LL,
                            0,
                            *(_QWORD *)(v77 + 1792),
                            *(_QWORD *)(v49 + 1792),
                            *((_QWORD *)v78 + 484),
                            *((Gre::Base **)v78 + 484),
                            0,
                            0,
                            0,
                            0x2000) )
      {
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v98);
LABEL_67:
        EXLATEOBJ::vAltUnlock((Gre::Base **)&v80, y, (__int64)v10);
        return 0;
      }
      v6 = (XLATEOBJ *)v80;
      if ( v99 )
        psoSrc = (SURFOBJ *)(v99 + 24);
      else
        psoSrc = 0LL;
      v50 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v77 + 2832);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v98);
      v10 = v88;
    }
    if ( v50 )
    {
      v74 = v50(psoDest, psoSrc, v87, v6, v85, v10);
      EXLATEOBJ::vAltUnlock((Gre::Base **)&v80, v75, v76);
      return v74;
    }
    goto LABEL_67;
  }
  if ( *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x60) > 8u )
    return 0;
  p_iBitmapFormat = (__int64)&psoDest->iBitmapFormat;
  v91 = &psoDest->iBitmapFormat;
  if ( !psoDest )
    p_iBitmapFormat = 96LL;
  if ( *(_DWORD *)p_iBitmapFormat > 8u )
    return 0;
  hdev = psoDest->hdev;
  if ( hdev )
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
  hdev = psoSrc->hdev;
  if ( hdev )
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoSrc, 0LL, 0);
  v13 = 0;
  v79 = 0;
  v113 = 0;
  v14 = 1;
  v82 = 1;
  v15 = 1;
  v83 = 1;
  if ( psoSrc->iBitmapFormat - 7 <= 1 )
  {
    v16 = 2;
    v82 = 1;
    v15 = -1;
    v83 = -1;
    lDelta = v90->lDelta;
    v107 = 0;
    v79 = 1;
LABEL_18:
    lDelta = -lDelta;
    goto LABEL_19;
  }
  if ( psoSrc->pvScan0 == psoDest->pvScan0 )
  {
    v47 = v81->y;
    top = v85->top;
    if ( v81->x < v80->left )
    {
      v15 = -1;
      v14 = -1;
      v82 = -1;
      if ( v47 >= top )
        v15 = 1;
      v83 = v15;
      v16 = 3;
      if ( v47 >= top )
        v16 = 1;
    }
    else if ( v47 < top )
    {
      v15 = -1;
      v83 = -1;
      v16 = 2;
    }
    else
    {
      v16 = 0;
    }
  }
  else
  {
    v16 = 4;
  }
  v17 = psoSrc->lDelta;
  if ( v15 <= 0 )
    v17 = -v17;
  v107 = v17;
  lDelta = v90->lDelta;
  if ( v15 <= 0 )
    goto LABEL_18;
LABEL_19:
  v108 = lDelta;
  v92 = v14;
  memset_0(&v124, 0, 0x144uLL);
  if ( !v87 || (v19 = *((unsigned __int8 *)v87 + 20), !*((_BYTE *)v87 + 20)) )
  {
    v20 = *v85;
LABEL_21:
    v124 = 1;
    v125[0] = v20;
    goto LABEL_22;
  }
  v19 = (unsigned int)(v19 - 1);
  if ( !(_DWORD)v19 )
  {
    v20 = *(RECTL *)((char *)v87 + 4);
    goto LABEL_21;
  }
  if ( (_DWORD)v19 == 2 )
  {
    v13 = 1;
    XCLIPOBJ::cEnumStart(v87, 0, 0, v16, 0x14u);
  }
LABEL_22:
  v21 = Gre::Base::Globals((Gre::Base *)v19);
  v22 = v86;
  if ( !v86 )
    v22 = (XLATEOBJ *)((char *)v21 + 4664);
  v100 = v22;
  v103 = v82;
  v106 = v15;
  v23 = *v91;
  iBitmapFormat = psoSrc->iBitmapFormat;
  if ( !v79 )
  {
    v25 = 4 * (iBitmapFormat | (8 * v23));
    v26 = v25 + 2;
    if ( v82 >= 0 )
      v26 = v25;
    if ( (v22->flXlate & 1) != 0 )
    {
      ++v26;
      v27 = v113;
      if ( (psoSrc->fjBitmap & 0x20) != 0 )
        v27 = 1;
      v113 = v27;
    }
    hdev = (HDEV)(&SrcCopyFunctionTable)[v26];
    v96 = hdev;
    if ( v13 )
      goto LABEL_54;
    while ( 1 )
    {
      for ( i = 0; i < v124; ++i )
      {
        v30 = v80;
        left = v80->left;
        v32 = v125[i].left;
        if ( v32 < v80->left )
        {
          v125[i].left = left;
          v32 = left;
        }
        v33 = v30;
        right = v30->right;
        v35 = v125[i].right;
        if ( v35 > right )
        {
          v125[i].right = right;
          v35 = right;
        }
        v36 = v33->top;
        v37 = v125[i].top;
        if ( v37 < v36 )
        {
          v125[i].top = v36;
          v37 = v36;
        }
        bottom = v33->bottom;
        v39 = v125[i].bottom;
        if ( v39 > bottom )
        {
          v125[i].bottom = bottom;
          v39 = bottom;
        }
        if ( v37 < v39 && v32 < v35 )
        {
          v40 = v32 + v81->x - left;
          LODWORD(v91) = v37 + v88->y - v36;
          v41 = v35 - v32;
          v104 = v35 - v32;
          LODWORD(v86) = v39 - v37;
          v105 = v39 - v37;
          if ( v82 <= 0 )
            v40 = v41 + v40 - 1;
          v109 = v40;
          v110 = v40 + v92 * v41;
          if ( v82 <= 0 )
            v111 = v35 - 1;
          else
            v111 = v32;
          v112 = v37;
          v42 = psoSrc->lDelta;
          pvScan0 = (char *)psoSrc->pvScan0;
          v44 = v90->lDelta;
          v45 = (char *)v90->pvScan0;
          if ( v15 <= 0 )
          {
            v101 = &pvScan0[v42 * ((int)v86 + (int)v91 - 1)];
            v102 = &v45[v44 * (v39 - 1)];
          }
          else
          {
            v101 = &pvScan0[v42 * (int)v91];
            v102 = &v45[v37 * v44];
          }
          ((void (__fastcall *)(XLATEOBJ **))hdev)(&v100);
        }
      }
      if ( !v13 )
        break;
LABEL_54:
      v13 = XCLIPOBJ::bEnum(v87, 0x144u, &v124, 0LL);
    }
    return 1;
  }
  RLESrcCopy = pfnGetRLESrcCopy(iBitmapFormat, v23);
  v86 = (XLATEOBJ *)RLESrcCopy;
  if ( !RLESrcCopy )
    return 0;
  v54 = 1;
  v89 = 1;
  v115 = *v88;
  v114 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  p_top = &v85->top;
  hdev = (HDEV)&v85->top;
  v56 = v85->top + (__int64)psoSrc->sizlBitmap.cy;
  if ( (unsigned __int64)(v56 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v57 = (int)v56 - (__int64)v88->y;
  if ( (unsigned __int64)(v57 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v58 = (int)v57 - 1LL;
  if ( (unsigned __int64)(v58 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v112 = v57 - 1;
  v59 = v80;
  v111 = v80->left - v88->x;
  v121 = v111;
  v101 = (char *)psoSrc->pvScan0;
  v60 = (int)v58 * (__int64)v90->lDelta;
  if ( (unsigned __int64)(v60 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v61 = (char *)v90->pvScan0;
  if ( (int)v60 >= 0 )
  {
    v63 = &v61[(int)v60];
    if ( v63 >= v61 )
      goto LABEL_78;
    return 0;
  }
  v62 = (unsigned int)-(int)v60;
  if ( (unsigned __int64)v61 < v62 )
    return 0;
  v63 = &v61[-v62];
LABEL_78:
  v102 = v63;
  v119 = 0;
  v116.top = 0;
  if ( v13 )
    goto LABEL_79;
  while ( 2 )
  {
    for ( j = 0; j < v124; ++j )
    {
      v65 = v59->left;
      v66 = v125[j].left;
      if ( v66 < v59->left )
      {
        v125[j].left = v65;
        v66 = v65;
      }
      v67 = v85;
      v68 = v85->right;
      v69 = v125[j].right;
      if ( v69 > v68 )
      {
        v125[j].right = v68;
        v69 = v68;
      }
      v70 = *p_top;
      v71 = v125[j].top;
      if ( v71 < *p_top )
      {
        v125[j].top = v70;
        v71 = v70;
      }
      v72 = v67->bottom;
      v73 = v125[j].bottom;
      if ( v73 > v72 )
      {
        v125[j].bottom = v72;
        v73 = v72;
      }
      if ( v71 < v73 && v66 < v69 )
      {
        if ( v73 > v116.top )
          goto LABEL_96;
        if ( v71 <= v122 )
        {
          if ( !v54 )
            return 1;
          v101 = v117;
          v102 = v118;
          v112 = v122;
          v121 = v123;
          v119 = v120;
LABEL_96:
          v116 = v125[j];
          v54 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v100);
          v89 = v54;
          v59 = v80;
          goto LABEL_97;
        }
      }
      v59 = v80;
LABEL_97:
      RLESrcCopy = (int (*)(struct BLTINFO *))v86;
    }
    if ( v13 )
    {
LABEL_79:
      v13 = XCLIPOBJ::bEnum(v87, 0x144u, &v124, 0LL);
      RLESrcCopy = (int (*)(struct BLTINFO *))v86;
      v59 = v80;
      continue;
    }
    return 1;
  }
}
