/*
 * XREFs of EngCopyBits @ 0x1C0040D90
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0036410 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 *     NtGdiAlphaBlend @ 0x1C00423F0 (NtGdiAlphaBlend.c)
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0066D34 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00F1C10 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C00F2408 (EngHTBlt.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00FA7BC (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00FADEC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     GreGetBitmapBits @ 0x1C00FBF74 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00FC310 (GreSetBitmapBits.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C025B314 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C025DB7C (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C026E43C (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngCopyBits @ 0x1C02AD0A0 (NtGdiEngCopyBits.c)
 * Callees:
 *     ULongLongAdd @ 0x1C001DA88 (ULongLongAdd.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00418B4 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0041AAC (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C012EDA8 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01BF500 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     LongAdd @ 0x1C0261780 (LongAdd.c)
 *     LongSub @ 0x1C0261794 (LongSub.c)
 *     LongMult @ 0x1C02791F0 (LongMult.c)
 *     ULongLongSub @ 0x1C0279204 (ULongLongSub.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  SURFOBJ *v7; // r14
  POINTL *v9; // r12
  __int64 v10; // rbx
  ULONGLONG v11; // rax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  LONG x; // ecx
  LONG y; // edx
  int v16; // r8d
  __int64 v17; // rdi
  int v19; // ebx
  int v20; // edi
  int v21; // r12d
  int v22; // ecx
  LONG top; // eax
  unsigned int v24; // ebx
  int v25; // eax
  LONG lDelta; // eax
  int v27; // r9d
  RECTL v28; // xmm0
  int (*RLESrcCopy)(struct BLTINFO *); // r12
  int v30; // edi
  __int64 v31; // r10
  _DWORD *v32; // r10
  PVOID v33; // rcx
  int v34; // r9d
  XCLIPOBJ *v35; // r11
  unsigned int j; // ebx
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rcx
  void (* near *v43)(struct BLTINFO *); // r13
  unsigned int i; // ebx
  LONG left; // edi
  LONG right; // ecx
  LONG v47; // r11d
  LONG bottom; // ecx
  int v49; // r8d
  int v50; // r10d
  int v51; // r9d
  int v52; // edx
  int v53; // ecx
  int v54; // edi
  int v55; // edx
  int v56; // r10d
  __int64 v57; // rcx
  int v58; // eax
  int v59; // [rsp+60h] [rbp-2E8h]
  unsigned int v60; // [rsp+64h] [rbp-2E4h] BYREF
  int v61; // [rsp+68h] [rbp-2E0h]
  unsigned int v62; // [rsp+6Ch] [rbp-2DCh]
  XCLIPOBJ *v63; // [rsp+70h] [rbp-2D8h]
  XLATEOBJ *v64; // [rsp+78h] [rbp-2D0h] BYREF
  int (*v65)(struct BLTINFO *); // [rsp+80h] [rbp-2C8h]
  int v66; // [rsp+88h] [rbp-2C0h]
  LONG v67; // [rsp+90h] [rbp-2B8h] BYREF
  LONG v68; // [rsp+94h] [rbp-2B4h]
  POINTL *v69; // [rsp+98h] [rbp-2B0h]
  ULONGLONG pullResult; // [rsp+A0h] [rbp-2A8h] BYREF
  int v71; // [rsp+A8h] [rbp-2A0h] BYREF
  CLIPOBJ *v72; // [rsp+B0h] [rbp-298h]
  RECTL *v73; // [rsp+B8h] [rbp-290h]
  HDEV hdev; // [rsp+C0h] [rbp-288h] BYREF
  _QWORD v75[4]; // [rsp+C8h] [rbp-280h] BYREF
  _BYTE v76[32]; // [rsp+E8h] [rbp-260h] BYREF
  __int64 v77; // [rsp+108h] [rbp-240h]
  XLATEOBJ *v78; // [rsp+110h] [rbp-238h] BYREF
  char *pvScan0; // [rsp+118h] [rbp-230h]
  char *v80; // [rsp+120h] [rbp-228h]
  int v81; // [rsp+128h] [rbp-220h]
  int v82; // [rsp+12Ch] [rbp-21Ch]
  int v83; // [rsp+130h] [rbp-218h]
  int v84; // [rsp+134h] [rbp-214h]
  int v85; // [rsp+138h] [rbp-210h]
  LONG v86; // [rsp+13Ch] [rbp-20Ch]
  int v87; // [rsp+140h] [rbp-208h]
  int v88; // [rsp+144h] [rbp-204h]
  int v89; // [rsp+148h] [rbp-200h]
  unsigned int v90; // [rsp+14Ch] [rbp-1FCh]
  BOOL v91; // [rsp+150h] [rbp-1F8h]
  ULONGLONG v92; // [rsp+158h] [rbp-1F0h]
  POINTL v93; // [rsp+160h] [rbp-1E8h]
  __int128 v94; // [rsp+168h] [rbp-1E0h]
  char *v95; // [rsp+178h] [rbp-1D0h]
  char *v96; // [rsp+180h] [rbp-1C8h]
  int v97; // [rsp+188h] [rbp-1C0h]
  int v98; // [rsp+18Ch] [rbp-1BCh]
  int v99; // [rsp+190h] [rbp-1B8h]
  unsigned int v100; // [rsp+194h] [rbp-1B4h]
  int v101; // [rsp+198h] [rbp-1B0h]
  _DWORD v102[84]; // [rsp+1B0h] [rbp-198h] BYREF

  v63 = (XCLIPOBJ *)pco;
  v7 = psoSrc;
  v75[2] = psoDest;
  v75[3] = psoSrc;
  v72 = pco;
  v73 = prclDest;
  v9 = pptlSrc;
  v69 = pptlSrc;
  v10 = SURFOBJ_TO_SURFACE(psoDest);
  v11 = SURFOBJ_TO_SURFACE(v7);
  pullResult = v11;
  if ( v7->iType )
  {
    v12 = *(_QWORD *)(v11 + 48);
    v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v12 + 2864);
    v64 = 0LL;
    x = pptlSrc->x;
    v67 = pptlSrc->x;
    y = pptlSrc->y;
    v68 = y;
    v16 = *(_DWORD *)(v11 + 112);
    if ( (v16 & 0x80000) != 0 && v12 != *(_QWORD *)(v12 + 40) )
    {
      if ( v16 < 0 )
      {
        v67 = *(_DWORD *)(v12 + 2608) + x;
        v68 = *(_DWORD *)(v12 + 2612) + y;
        v9 = (POINTL *)&v67;
      }
      v17 = *(_QWORD *)(v12 + 40);
      SURFREF::SURFREF((SURFREF *)v76, *(HSURF *)(v11 + 136));
      if ( !v77
        || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (__int64 *)&v64,
                            0LL,
                            0,
                            *(_QWORD *)(v17 + 1832),
                            *(_QWORD *)(v12 + 1832),
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0x2000) )
      {
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v76);
LABEL_8:
        EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v64);
        return 0;
      }
      pxlo = v64;
      if ( v77 )
        v7 = (SURFOBJ *)(v77 + 24);
      else
        v7 = 0LL;
      v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2864);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v76);
    }
    if ( v13 )
    {
      v19 = v13(psoDest, v7, v63, pxlo, prclDest, v9);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v64);
      return v19;
    }
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v11 + 96) <= 8u && *(_DWORD *)(v10 + 96) <= 8u || !(unsigned int)bUMPDSecurityGateEx() )
  {
    hdev = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
    v75[0] = v7->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v75, v7, 0LL, 0);
    v59 = 0;
    v20 = 0;
    v91 = 0;
    v21 = 1;
    LODWORD(v65) = 1;
    v22 = 1;
    v61 = 1;
    if ( v7->iBitmapFormat - 7 <= 1 )
    {
      v24 = 2;
      LODWORD(v65) = 1;
      v61 = -1;
      lDelta = psoDest->lDelta;
      v85 = 0;
      v20 = 1;
    }
    else
    {
      if ( v7->pvScan0 == psoDest->pvScan0 )
      {
        top = prclDest->top;
        if ( v69->x >= prclDest->left )
        {
          if ( v69->y >= top )
          {
            v24 = 0;
          }
          else
          {
            v22 = -1;
            v61 = -1;
            v24 = 2;
          }
        }
        else
        {
          v21 = -1;
          LODWORD(v65) = -1;
          if ( v69->y >= top )
          {
            v24 = 1;
          }
          else
          {
            v22 = -1;
            v61 = -1;
            v24 = 3;
          }
        }
      }
      else
      {
        v24 = 4;
      }
      v25 = v7->lDelta;
      if ( v22 <= 0 )
        v25 = -v25;
      v85 = v25;
      lDelta = psoDest->lDelta;
      if ( v22 > 0 )
      {
LABEL_38:
        v86 = lDelta;
        memset(v102, 0, 0x144uLL);
        if ( v63 && *((_BYTE *)v63 + 20) )
        {
          if ( *((_BYTE *)v63 + 20) != 1 )
          {
            if ( *((_BYTE *)v63 + 20) == 3 )
            {
              v59 = 1;
              XCLIPOBJ::cEnumStart(v63, 0, 0, v24, 0x14u);
              v27 = 1;
            }
            else
            {
              v27 = 0;
            }
            goto LABEL_47;
          }
          v28 = *(RECTL *)((char *)v63 + 4);
        }
        else
        {
          v28 = *prclDest;
        }
        v27 = 0;
        v59 = 0;
        v102[0] = 1;
        *(RECTL *)&v102[1] = v28;
LABEL_47:
        if ( !pxlo )
          pxlo = xloIdent;
        v78 = pxlo;
        v81 = v21;
        v84 = v61;
        if ( !v20 )
        {
          v42 = 4 * (v7->iBitmapFormat | (8 * psoDest->iBitmapFormat));
          if ( v21 < 0 )
            v42 = (unsigned int)(v42 + 2);
          if ( (pxlo->flXlate & 1) != 0 )
          {
            v42 = (unsigned int)(v42 + 1);
            v91 = (v7->fjBitmap & 0x20) != 0;
          }
          v43 = (&SrcCopyFunctionTable)[v42];
          v75[1] = v43;
          if ( !v27 )
            goto LABEL_87;
          do
          {
            v59 = XCLIPOBJ::bEnum(v63, 0x144u, v102, 0LL);
LABEL_87:
            for ( i = 0; ; ++i )
            {
              v62 = i;
              if ( i >= v102[0] )
                break;
              left = prclDest->left;
              if ( v102[4 * i + 1] < prclDest->left )
                v102[4 * i + 1] = left;
              right = prclDest->right;
              if ( v102[4 * i + 3] > right )
                v102[4 * i + 3] = right;
              v47 = prclDest->top;
              if ( v102[4 * i + 2] < v47 )
                v102[4 * i + 2] = v47;
              bottom = prclDest->bottom;
              if ( v102[4 * i + 4] > bottom )
                v102[4 * i + 4] = bottom;
              v49 = v102[4 * i + 2];
              v50 = v102[4 * i + 4];
              if ( v49 < v50 )
              {
                v51 = v102[4 * i + 1];
                v52 = v102[4 * i + 3];
                if ( v51 < v52 )
                {
                  v53 = v51 + v69->x - left;
                  v54 = v49 + v69->y - v47;
                  v55 = v52 - v51;
                  v82 = v55;
                  v56 = v50 - v49;
                  v83 = v56;
                  if ( v21 <= 0 )
                    v53 = v55 + v53 - 1;
                  v87 = v53;
                  v88 = v53 + v21 * v55;
                  if ( v21 <= 0 )
                    v89 = v55 + v51 - 1;
                  else
                    v89 = v51;
                  v90 = v49;
                  if ( v61 <= 0 )
                  {
                    v57 = v7->lDelta * (v56 + v54 - 1);
                    v58 = psoDest->lDelta * (v56 + v49 - 1);
                  }
                  else
                  {
                    v57 = v54 * v7->lDelta;
                    v58 = v49 * psoDest->lDelta;
                  }
                  pvScan0 = (char *)v7->pvScan0 + v57;
                  v80 = (char *)psoDest->pvScan0 + v58;
                  ((void (__fastcall *)(XLATEOBJ **))v43)(&v78);
                }
              }
            }
          }
          while ( v59 );
          return 1;
        }
        RLESrcCopy = pfnGetRLESrcCopy(v7->iBitmapFormat, psoDest->iBitmapFormat);
        v65 = RLESrcCopy;
        if ( !RLESrcCopy )
          return 0;
        v30 = 1;
        v66 = 1;
        v93 = *v69;
        v92 = pullResult;
        if ( (int)LongAdd((unsigned int)prclDest->top, (unsigned int)v7->sizlBitmap.cy, &v60) < 0 )
          return 0;
        if ( (int)LongSub(v60, *(unsigned int *)(v31 + 4), &v60) < 0 )
          return 0;
        if ( (int)LongSub(v60, 1LL, &v60) < 0 )
          return 0;
        v90 = v60;
        v89 = prclDest->left - *v32;
        v99 = v89;
        pvScan0 = (char *)v7->pvScan0;
        if ( (int)LongMult(v60, (unsigned int)psoDest->lDelta, &v71) < 0 )
          return 0;
        v33 = psoDest->pvScan0;
        if ( v71 < 0 )
        {
          if ( ULongLongSub((ULONGLONG)v33, (unsigned int)-v71, &pullResult) < 0 )
            return 0;
        }
        else if ( ULongLongAdd((ULONGLONG)v33, v71, &pullResult) < 0 )
        {
          return 0;
        }
        v80 = (char *)pullResult;
        v97 = 0;
        DWORD1(v94) = 0;
        if ( v34 )
          goto LABEL_60;
LABEL_61:
        for ( j = 0; ; ++j )
        {
          v62 = j;
          if ( j >= v102[0] )
          {
            v35 = v63;
            if ( !v59 )
              return 1;
LABEL_60:
            v59 = XCLIPOBJ::bEnum(v35, 0x144u, v102, 0LL);
            goto LABEL_61;
          }
          if ( v102[4 * j + 1] < prclDest->left )
            v102[4 * j + 1] = prclDest->left;
          v37 = prclDest->right;
          if ( v102[4 * j + 3] > v37 )
            v102[4 * j + 3] = v37;
          v38 = prclDest->top;
          if ( v102[4 * j + 2] < v38 )
            v102[4 * j + 2] = v38;
          v39 = prclDest->bottom;
          if ( v102[4 * j + 4] > v39 )
            v102[4 * j + 4] = v39;
          v40 = v102[4 * j + 2];
          v41 = v102[4 * j + 4];
          if ( v40 < v41 && v102[4 * j + 1] < v102[4 * j + 3] )
          {
            if ( v41 <= SDWORD1(v94) )
            {
              if ( v40 > v100 )
                continue;
              if ( !v30 )
                return 1;
              pvScan0 = v95;
              v80 = v96;
              v90 = v100;
              v99 = v101;
              v97 = v98;
            }
            v94 = *(_OWORD *)&v102[4 * j + 1];
            v30 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v78);
            v66 = v30;
          }
        }
      }
    }
    lDelta = -lDelta;
    goto LABEL_38;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 471);
  return 0;
}
