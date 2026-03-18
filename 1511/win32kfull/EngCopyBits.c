/*
 * XREFs of EngCopyBits @ 0x1C00BC250
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00348C8 (GreStretchDIBitsInternal.c)
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C003A730 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngStretchBlt @ 0x1C003E600 (EngStretchBlt.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0042BD0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiAlphaBlend @ 0x1C0044190 (NtGdiAlphaBlend.c)
 *     GreGetBitmapBits @ 0x1C007C7AC (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C007CAF0 (GreSetBitmapBits.c)
 *     EngHTBlt @ 0x1C00BAC98 (EngHTBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00BB4A0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00BBC94 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00BCCB4 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C025DCBC (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C026028C (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C026FF68 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngCopyBits @ 0x1C02AB110 (NtGdiEngCopyBits.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C002DDC0 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002DFB8 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C00BCBF4 (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01C2DFC (--1EXLATEOBJ@@QEAA@XZ.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  SURFOBJ *v7; // r15
  POINTL *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  LONG x; // ecx
  __int64 y; // rdx
  int v16; // r8d
  __int64 v17; // rsi
  __int64 v18; // rdi
  int v20; // ebx
  int v21; // edi
  int v22; // esi
  int v23; // ecx
  LONG top; // eax
  unsigned int v25; // ebx
  int v26; // eax
  LONG lDelta; // eax
  int v28; // r9d
  RECTL rclBounds; // xmm0
  ULONG iBitmapFormat; // edx
  int (*RLESrcCopy)(struct BLTINFO *); // rsi
  int v32; // r9d
  CLIPOBJ *v33; // r10
  int v34; // r11d
  int v35; // edi
  unsigned int j; // ebx
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rdx
  void (* near *v43)(struct BLTINFO *); // r12
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
  int v59; // [rsp+60h] [rbp-2C8h]
  int v60; // [rsp+68h] [rbp-2C0h]
  XLATEOBJ *v62; // [rsp+78h] [rbp-2B0h] BYREF
  POINTL *v63; // [rsp+80h] [rbp-2A8h]
  __int64 v64; // [rsp+88h] [rbp-2A0h] BYREF
  int v65; // [rsp+90h] [rbp-298h]
  int (*v66)(struct BLTINFO *); // [rsp+98h] [rbp-290h]
  LONG v67; // [rsp+A0h] [rbp-288h] BYREF
  LONG v68; // [rsp+A4h] [rbp-284h]
  CLIPOBJ *v69; // [rsp+A8h] [rbp-280h]
  RECTL *v70; // [rsp+B0h] [rbp-278h]
  _QWORD v71[2]; // [rsp+B8h] [rbp-270h] BYREF
  _QWORD v72[5]; // [rsp+C8h] [rbp-260h] BYREF
  XLATEOBJ *v73; // [rsp+F0h] [rbp-238h] BYREF
  char *pvScan0; // [rsp+F8h] [rbp-230h]
  char *v75; // [rsp+100h] [rbp-228h]
  int v76; // [rsp+108h] [rbp-220h]
  int v77; // [rsp+10Ch] [rbp-21Ch]
  int v78; // [rsp+110h] [rbp-218h]
  int v79; // [rsp+114h] [rbp-214h]
  int v80; // [rsp+118h] [rbp-210h]
  LONG v81; // [rsp+11Ch] [rbp-20Ch]
  int v82; // [rsp+120h] [rbp-208h]
  int v83; // [rsp+124h] [rbp-204h]
  int v84; // [rsp+128h] [rbp-200h]
  int v85; // [rsp+12Ch] [rbp-1FCh]
  BOOL v86; // [rsp+130h] [rbp-1F8h]
  __int64 v87; // [rsp+138h] [rbp-1F0h]
  POINTL v88; // [rsp+140h] [rbp-1E8h]
  RECTL v89; // [rsp+148h] [rbp-1E0h]
  char *v90; // [rsp+158h] [rbp-1D0h]
  char *v91; // [rsp+160h] [rbp-1C8h]
  int v92; // [rsp+168h] [rbp-1C0h]
  int v93; // [rsp+16Ch] [rbp-1BCh]
  int v94; // [rsp+170h] [rbp-1B8h]
  unsigned int v95; // [rsp+174h] [rbp-1B4h]
  int v96; // [rsp+178h] [rbp-1B0h]
  unsigned int v97; // [rsp+190h] [rbp-198h] BYREF
  RECTL v98[20]; // [rsp+194h] [rbp-194h] BYREF

  v7 = psoSrc;
  v72[2] = psoDest;
  v71[1] = psoSrc;
  v69 = pco;
  v70 = prclDest;
  v9 = pptlSrc;
  v63 = pptlSrc;
  v72[1] = pptlSrc;
  v10 = SURFOBJ_TO_SURFACE(psoDest);
  v11 = SURFOBJ_TO_SURFACE(v7);
  v64 = v11;
  if ( v7->iType )
  {
    v12 = *(_QWORD *)(v11 + 48);
    v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v12 + 2872);
    v62 = 0LL;
    x = pptlSrc->x;
    v67 = pptlSrc->x;
    y = (unsigned int)pptlSrc->y;
    v68 = pptlSrc->y;
    v16 = *(_DWORD *)(v11 + 112);
    if ( (v16 & 0x80000) != 0 && v12 != *(_QWORD *)(v12 + 40) )
    {
      if ( v16 < 0 )
      {
        v67 = *(_DWORD *)(v12 + 2608) + x;
        y = (unsigned int)(*(_DWORD *)(v12 + 2612) + y);
        v68 = y;
        v63 = (POINTL *)&v67;
      }
      v17 = *(_QWORD *)(v12 + 40);
      LOBYTE(y) = 5;
      v18 = HmgShareLockCheck(*(_QWORD *)(v11 + 136), y);
      v64 = v18;
      if ( !v18
        || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            (__int64 *)&v62,
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
        EPALOBJ::~EPALOBJ((EPALOBJ *)&v64);
LABEL_8:
        EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v62);
        return 0;
      }
      pxlo = v62;
      v7 = (SURFOBJ *)(v18 + 24);
      v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2872);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v64);
      v9 = v63;
    }
    if ( v13 )
    {
      v20 = v13(psoDest, v7, pco, pxlo, prclDest, v9);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v62);
      return v20;
    }
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v11 + 96) <= 8u && *(_DWORD *)(v10 + 96) <= 8u || !(unsigned int)bUMPDSecurityGateEx() )
  {
    v72[0] = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v72, psoDest, 0LL, 0);
    v71[0] = v7->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v71, v7, 0LL, 0);
    v59 = 0;
    v21 = 0;
    v86 = 0;
    v22 = 1;
    LODWORD(v66) = 1;
    v23 = 1;
    v60 = 1;
    if ( v7->iBitmapFormat - 7 <= 1 )
    {
      v25 = 2;
      LODWORD(v66) = 1;
      v60 = -1;
      lDelta = psoDest->lDelta;
      v80 = 0;
      v21 = 1;
    }
    else
    {
      if ( v7->pvScan0 == psoDest->pvScan0 )
      {
        top = prclDest->top;
        if ( v63->x >= prclDest->left )
        {
          if ( v63->y >= top )
          {
            v25 = 0;
          }
          else
          {
            v23 = -1;
            v60 = -1;
            v25 = 2;
          }
        }
        else
        {
          v22 = -1;
          LODWORD(v66) = -1;
          if ( v63->y >= top )
          {
            v25 = 1;
          }
          else
          {
            v23 = -1;
            v60 = -1;
            v25 = 3;
          }
        }
      }
      else
      {
        v25 = 4;
      }
      v26 = v7->lDelta;
      if ( v23 <= 0 )
        v26 = -v26;
      v80 = v26;
      lDelta = psoDest->lDelta;
      if ( v23 > 0 )
      {
LABEL_35:
        v81 = lDelta;
        v97 = 0;
        memset(v98, 0, sizeof(v98));
        if ( pco && pco->iDComplexity )
        {
          if ( pco->iDComplexity != 1 )
          {
            if ( pco->iDComplexity == 3 )
            {
              v59 = 1;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, v25, 0x14u);
              v28 = 1;
            }
            else
            {
              v28 = 0;
            }
            goto LABEL_44;
          }
          rclBounds = pco->rclBounds;
        }
        else
        {
          rclBounds = *prclDest;
        }
        v28 = 0;
        v59 = 0;
        v97 = 1;
        v98[0] = rclBounds;
LABEL_44:
        if ( !pxlo )
          pxlo = xloIdent;
        v73 = pxlo;
        v76 = v22;
        v79 = v60;
        iBitmapFormat = psoDest->iBitmapFormat;
        if ( !v21 )
        {
          v42 = 4 * (v7->iBitmapFormat | (8 * iBitmapFormat));
          if ( v22 < 0 )
            v42 = (unsigned int)(v42 + 2);
          if ( (pxlo->flXlate & 1) != 0 )
          {
            v42 = (unsigned int)(v42 + 1);
            v86 = (v7->fjBitmap & 0x20) != 0;
          }
          v43 = (&SrcCopyFunctionTable)[v42];
          v72[3] = v43;
          if ( !v28 )
            goto LABEL_76;
          do
          {
            v59 = XCLIPOBJ::bEnum((XCLIPOBJ *)pco, 0x144u, (char *)&v97, 0LL);
LABEL_76:
            for ( i = 0; i < v97; ++i )
            {
              left = prclDest->left;
              if ( v98[i].left < prclDest->left )
                v98[i].left = left;
              right = prclDest->right;
              if ( v98[i].right > right )
                v98[i].right = right;
              v47 = prclDest->top;
              if ( v98[i].top < v47 )
                v98[i].top = v47;
              bottom = prclDest->bottom;
              if ( v98[i].bottom > bottom )
                v98[i].bottom = bottom;
              v49 = v98[i].top;
              v50 = v98[i].bottom;
              if ( v49 < v50 )
              {
                v51 = v98[i].left;
                v52 = v98[i].right;
                if ( v51 < v52 )
                {
                  v53 = v51 + v63->x - left;
                  v54 = v49 + v63->y - v47;
                  v55 = v52 - v51;
                  v77 = v55;
                  v56 = v50 - v49;
                  v78 = v56;
                  if ( v22 <= 0 )
                    v53 = v55 + v53 - 1;
                  v82 = v53;
                  v83 = v53 + v22 * v55;
                  if ( v22 <= 0 )
                    v84 = v55 + v51 - 1;
                  else
                    v84 = v51;
                  v85 = v49;
                  if ( v60 <= 0 )
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
                  v75 = (char *)psoDest->pvScan0 + v58;
                  ((void (__fastcall *)(XLATEOBJ **))v43)(&v73);
                }
              }
            }
          }
          while ( v59 );
          return 1;
        }
        RLESrcCopy = pfnGetRLESrcCopy(v7->iBitmapFormat, iBitmapFormat);
        v66 = RLESrcCopy;
        if ( !RLESrcCopy )
          return 0;
        v35 = v34;
        v65 = v34;
        v88 = *v63;
        v87 = v64;
        v85 = v7->sizlBitmap.cy - v63->y + prclDest->top - 1;
        v84 = prclDest->left - v63->x;
        v94 = v84;
        pvScan0 = (char *)v7->pvScan0;
        v75 = (char *)psoDest->pvScan0 + v85 * psoDest->lDelta;
        v92 = 0;
        v89.top = 0;
        if ( v32 )
          goto LABEL_49;
LABEL_50:
        for ( j = 0; ; ++j )
        {
          if ( j >= v97 )
          {
            v33 = pco;
            if ( !v59 )
              return 1;
LABEL_49:
            v59 = XCLIPOBJ::bEnum((XCLIPOBJ *)v33, 0x144u, (char *)&v97, 0LL);
            goto LABEL_50;
          }
          if ( v98[j].left < prclDest->left )
            v98[j].left = prclDest->left;
          v37 = prclDest->right;
          if ( v98[j].right > v37 )
            v98[j].right = v37;
          v38 = prclDest->top;
          if ( v98[j].top < v38 )
            v98[j].top = v38;
          v39 = prclDest->bottom;
          if ( v98[j].bottom > v39 )
            v98[j].bottom = v39;
          v40 = v98[j].top;
          v41 = v98[j].bottom;
          if ( v40 < v41 && v98[j].left < v98[j].right )
          {
            if ( v41 <= v89.top )
            {
              if ( v40 > v95 )
                continue;
              if ( !v35 )
                return 1;
              pvScan0 = v90;
              v75 = v91;
              v85 = v95;
              v94 = v96;
              v92 = v93;
            }
            v89 = v98[j];
            v35 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v73);
            v65 = v35;
          }
        }
      }
    }
    lDelta = -lDelta;
    goto LABEL_35;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 471);
  return 0;
}
