/*
 * XREFs of EngCopyBits @ 0x1C00131B0
 * Callers:
 *     GreGetBitmapBits @ 0x1C000EBCC (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C0010850 (GreSetBitmapBits.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0013F94 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     NtGdiAlphaBlend @ 0x1C0023B30 (NtGdiAlphaBlend.c)
 *     EngStretchBlt @ 0x1C0035220 (EngStretchBlt.c)
 *     GreStretchDIBitsInternal @ 0x1C0099AD8 (GreStretchDIBitsInternal.c)
 *     EngBitBlt @ 0x1C009CF40 (EngBitBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00A1510 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00A2268 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00D1988 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C0128DB8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C025E394 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1C02617FC (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x1C0270F3C (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngCopyBits @ 0x1C02ABAD0 (NtGdiEngCopyBits.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0021750 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C002193C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ULongLongAdd @ 0x1C00AD334 (ULongLongAdd.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z @ 0x1C00FFCDC (-pfnGetRLESrcCopy@@YAP6AHPEAUBLTINFO@@@ZKK@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ??1EXLATEOBJ@@QEAA@XZ @ 0x1C01C1354 (--1EXLATEOBJ@@QEAA@XZ.c)
 *     LongAdd @ 0x1C0265408 (LongAdd.c)
 *     LongSub @ 0x1C026541C (LongSub.c)
 *     LongMult @ 0x1C027BCB0 (LongMult.c)
 *     ULongLongSub @ 0x1C027BCC4 (ULongLongSub.c)
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
  __int64 (__fastcall *v13)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int); // rdi
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
  ULONG iBitmapFormat; // edx
  int (*RLESrcCopy)(struct BLTINFO *); // r12
  int v31; // edi
  __int64 v32; // r10
  _DWORD *v33; // r10
  PVOID v34; // rcx
  int v35; // r9d
  XCLIPOBJ *v36; // r11
  unsigned int j; // ebx
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // eax
  int v41; // r8d
  int v42; // edx
  __int64 v43; // rdx
  void (* near *v44)(struct BLTINFO *); // r13
  unsigned int i; // ebx
  LONG left; // edi
  LONG right; // ecx
  LONG v48; // r11d
  LONG bottom; // ecx
  LONG v50; // r8d
  LONG v51; // r10d
  int v52; // r9d
  int v53; // edx
  int v54; // ecx
  int v55; // edi
  int v56; // edx
  int v57; // r10d
  __int64 v58; // rcx
  int v59; // eax
  struct PALETTE *v60; // [rsp+30h] [rbp-318h]
  int v61; // [rsp+38h] [rbp-310h]
  int v62; // [rsp+40h] [rbp-308h]
  int v63; // [rsp+48h] [rbp-300h]
  int v64; // [rsp+50h] [rbp-2F8h]
  int v65; // [rsp+60h] [rbp-2E8h]
  unsigned int v66; // [rsp+68h] [rbp-2E0h] BYREF
  int v67; // [rsp+6Ch] [rbp-2DCh]
  XCLIPOBJ *v68; // [rsp+70h] [rbp-2D8h]
  XLATEOBJ *v69; // [rsp+78h] [rbp-2D0h] BYREF
  int (*v70)(struct BLTINFO *); // [rsp+80h] [rbp-2C8h]
  int v71; // [rsp+88h] [rbp-2C0h]
  POINTL *v72; // [rsp+90h] [rbp-2B8h]
  ULONGLONG pullResult; // [rsp+98h] [rbp-2B0h] BYREF
  LONG v74; // [rsp+A0h] [rbp-2A8h] BYREF
  LONG v75; // [rsp+A4h] [rbp-2A4h]
  int v76; // [rsp+A8h] [rbp-2A0h] BYREF
  CLIPOBJ *v77; // [rsp+B0h] [rbp-298h]
  RECTL *v78; // [rsp+B8h] [rbp-290h]
  _QWORD v79[2]; // [rsp+C0h] [rbp-288h] BYREF
  _QWORD v80[3]; // [rsp+D0h] [rbp-278h] BYREF
  _BYTE v81[32]; // [rsp+E8h] [rbp-260h] BYREF
  __int64 v82; // [rsp+108h] [rbp-240h]
  XLATEOBJ *v83; // [rsp+110h] [rbp-238h] BYREF
  char *pvScan0; // [rsp+118h] [rbp-230h]
  char *v85; // [rsp+120h] [rbp-228h]
  int v86; // [rsp+128h] [rbp-220h]
  int v87; // [rsp+12Ch] [rbp-21Ch]
  int v88; // [rsp+130h] [rbp-218h]
  int v89; // [rsp+134h] [rbp-214h]
  int v90; // [rsp+138h] [rbp-210h]
  LONG v91; // [rsp+13Ch] [rbp-20Ch]
  int v92; // [rsp+140h] [rbp-208h]
  int v93; // [rsp+144h] [rbp-204h]
  int v94; // [rsp+148h] [rbp-200h]
  unsigned int v95; // [rsp+14Ch] [rbp-1FCh]
  BOOL v96; // [rsp+150h] [rbp-1F8h]
  ULONGLONG v97; // [rsp+158h] [rbp-1F0h]
  POINTL v98; // [rsp+160h] [rbp-1E8h]
  RECTL v99; // [rsp+168h] [rbp-1E0h]
  char *v100; // [rsp+178h] [rbp-1D0h]
  char *v101; // [rsp+180h] [rbp-1C8h]
  int v102; // [rsp+188h] [rbp-1C0h]
  int v103; // [rsp+18Ch] [rbp-1BCh]
  int v104; // [rsp+190h] [rbp-1B8h]
  unsigned int v105; // [rsp+194h] [rbp-1B4h]
  int v106; // [rsp+198h] [rbp-1B0h]
  unsigned int v107; // [rsp+1B0h] [rbp-198h] BYREF
  RECTL v108[20]; // [rsp+1B4h] [rbp-194h] BYREF

  v68 = (XCLIPOBJ *)pco;
  v7 = psoSrc;
  v80[1] = psoDest;
  v79[1] = psoSrc;
  v77 = pco;
  v78 = prclDest;
  v9 = pptlSrc;
  v72 = pptlSrc;
  v10 = SURFOBJ_TO_SURFACE(psoDest);
  v11 = SURFOBJ_TO_SURFACE(v7);
  pullResult = v11;
  if ( v7->iType )
  {
    v12 = *(_QWORD *)(v11 + 48);
    v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int))(v12 + 2872);
    v69 = 0LL;
    x = pptlSrc->x;
    v74 = pptlSrc->x;
    y = pptlSrc->y;
    v75 = y;
    v16 = *(_DWORD *)(v11 + 112);
    if ( (v16 & 0x80000) != 0 && v12 != *(_QWORD *)(v12 + 40) )
    {
      if ( v16 < 0 )
      {
        v74 = *(_DWORD *)(v12 + 2608) + x;
        v75 = *(_DWORD *)(v12 + 2612) + y;
        v9 = (POINTL *)&v74;
      }
      v17 = *(_QWORD *)(v12 + 40);
      SURFREF::SURFREF((SURFREF *)v81, *(HSURF *)(v11 + 136));
      if ( !v82
        || (v64 = 0x2000,
            v63 = 0,
            v62 = 0,
            v61 = 0,
            v60 = ppalDefault,
            !(unsigned int)EXLATEOBJ::bInitXlateObj(&v69, 0LL, 0LL)) )
      {
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v81);
LABEL_8:
        EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v69);
        return 0;
      }
      pxlo = v69;
      if ( v82 )
        v7 = (SURFOBJ *)(v82 + 24);
      else
        v7 = 0LL;
      v13 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, XCLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, struct PALETTE *, int, int, int, int))(v17 + 2872);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v81);
    }
    if ( v13 )
    {
      v19 = v13(psoDest, v7, v68, pxlo, prclDest, v9, v60, v61, v62, v63, v64);
      EXLATEOBJ::~EXLATEOBJ((EXLATEOBJ *)&v69);
      return v19;
    }
    goto LABEL_8;
  }
  if ( *(_DWORD *)(v11 + 96) <= 8u && *(_DWORD *)(v10 + 96) <= 8u || !(unsigned int)bUMPDSecurityGateEx() )
  {
    v80[0] = psoDest->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v80, psoDest, 0LL, 0);
    v79[0] = v7->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v79, v7, 0LL, 0);
    v65 = 0;
    v20 = 0;
    v96 = 0;
    v21 = 1;
    LODWORD(v70) = 1;
    v22 = 1;
    v67 = 1;
    if ( v7->iBitmapFormat - 7 <= 1 )
    {
      v24 = 2;
      LODWORD(v70) = 1;
      v67 = -1;
      lDelta = psoDest->lDelta;
      v90 = 0;
      v20 = 1;
    }
    else
    {
      if ( v7->pvScan0 == psoDest->pvScan0 )
      {
        top = prclDest->top;
        if ( v72->x >= prclDest->left )
        {
          if ( v72->y >= top )
          {
            v24 = 0;
          }
          else
          {
            v22 = -1;
            v67 = -1;
            v24 = 2;
          }
        }
        else
        {
          v21 = -1;
          LODWORD(v70) = -1;
          if ( v72->y >= top )
          {
            v24 = 1;
          }
          else
          {
            v22 = -1;
            v67 = -1;
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
      v90 = v25;
      lDelta = psoDest->lDelta;
      if ( v22 > 0 )
      {
LABEL_38:
        v91 = lDelta;
        v107 = 0;
        memset(v108, 0, sizeof(v108));
        if ( v68 && *((_BYTE *)v68 + 20) )
        {
          if ( *((_BYTE *)v68 + 20) != 1 )
          {
            if ( *((_BYTE *)v68 + 20) == 3 )
            {
              v65 = 1;
              XCLIPOBJ::cEnumStart(v68, 0, 0, v24, 0x14u);
              v27 = 1;
            }
            else
            {
              v27 = 0;
            }
            goto LABEL_47;
          }
          v28 = *(RECTL *)((char *)v68 + 4);
        }
        else
        {
          v28 = *prclDest;
        }
        v27 = 0;
        v65 = 0;
        v107 = 1;
        v108[0] = v28;
LABEL_47:
        if ( !pxlo )
          pxlo = xloIdent;
        v83 = pxlo;
        v86 = v21;
        v89 = v67;
        iBitmapFormat = psoDest->iBitmapFormat;
        if ( !v20 )
        {
          v43 = 4 * (v7->iBitmapFormat | (8 * iBitmapFormat));
          if ( v21 < 0 )
            v43 = (unsigned int)(v43 + 2);
          if ( (pxlo->flXlate & 1) != 0 )
          {
            v43 = (unsigned int)(v43 + 1);
            v96 = (v7->fjBitmap & 0x20) != 0;
          }
          v44 = (&SrcCopyFunctionTable)[v43];
          v80[2] = v44;
          if ( !v27 )
            goto LABEL_87;
          do
          {
            v65 = XCLIPOBJ::bEnum(v68, 0x144u, &v107, 0LL);
LABEL_87:
            for ( i = 0; i < v107; ++i )
            {
              left = prclDest->left;
              if ( v108[i].left < prclDest->left )
                v108[i].left = left;
              right = prclDest->right;
              if ( v108[i].right > right )
                v108[i].right = right;
              v48 = prclDest->top;
              if ( v108[i].top < v48 )
                v108[i].top = v48;
              bottom = prclDest->bottom;
              if ( v108[i].bottom > bottom )
                v108[i].bottom = bottom;
              v50 = v108[i].top;
              v51 = v108[i].bottom;
              if ( v50 < v51 )
              {
                v52 = v108[i].left;
                v53 = v108[i].right;
                if ( v52 < v53 )
                {
                  v54 = v52 + v72->x - left;
                  v55 = v50 + v72->y - v48;
                  v56 = v53 - v52;
                  v87 = v56;
                  v57 = v51 - v50;
                  v88 = v57;
                  if ( v21 <= 0 )
                    v54 = v56 + v54 - 1;
                  v92 = v54;
                  v93 = v54 + v21 * v56;
                  if ( v21 <= 0 )
                    v94 = v56 + v52 - 1;
                  else
                    v94 = v52;
                  v95 = v50;
                  if ( v67 <= 0 )
                  {
                    v58 = v7->lDelta * (v57 + v55 - 1);
                    v59 = psoDest->lDelta * (v57 + v50 - 1);
                  }
                  else
                  {
                    v58 = v55 * v7->lDelta;
                    v59 = v50 * psoDest->lDelta;
                  }
                  pvScan0 = (char *)v7->pvScan0 + v58;
                  v85 = (char *)psoDest->pvScan0 + v59;
                  ((void (__fastcall *)(XLATEOBJ **))v44)(&v83);
                }
              }
            }
          }
          while ( v65 );
          return 1;
        }
        RLESrcCopy = pfnGetRLESrcCopy(v7->iBitmapFormat, iBitmapFormat);
        v70 = RLESrcCopy;
        if ( !RLESrcCopy )
          return 0;
        v31 = 1;
        v71 = 1;
        v98 = *v72;
        v97 = pullResult;
        if ( (int)LongAdd((unsigned int)prclDest->top, (unsigned int)v7->sizlBitmap.cy, &v66) < 0 )
          return 0;
        if ( (int)LongSub(v66, *(unsigned int *)(v32 + 4), &v66) < 0 )
          return 0;
        if ( (int)LongSub(v66, 1LL, &v66) < 0 )
          return 0;
        v95 = v66;
        v94 = prclDest->left - *v33;
        v104 = v94;
        pvScan0 = (char *)v7->pvScan0;
        if ( (int)LongMult(v66, (unsigned int)psoDest->lDelta, &v76) < 0 )
          return 0;
        v34 = psoDest->pvScan0;
        if ( v76 < 0 )
        {
          if ( ULongLongSub((ULONGLONG)v34, (unsigned int)-v76, &pullResult) < 0 )
            return 0;
        }
        else if ( ULongLongAdd((ULONGLONG)v34, v76, &pullResult) < 0 )
        {
          return 0;
        }
        v85 = (char *)pullResult;
        v102 = 0;
        v99.top = 0;
        if ( v35 )
          goto LABEL_60;
LABEL_61:
        for ( j = 0; ; ++j )
        {
          if ( j >= v107 )
          {
            v36 = v68;
            if ( !v65 )
              return 1;
LABEL_60:
            v65 = XCLIPOBJ::bEnum(v36, 0x144u, &v107, 0LL);
            goto LABEL_61;
          }
          if ( v108[j].left < prclDest->left )
            v108[j].left = prclDest->left;
          v38 = prclDest->right;
          if ( v108[j].right > v38 )
            v108[j].right = v38;
          v39 = prclDest->top;
          if ( v108[j].top < v39 )
            v108[j].top = v39;
          v40 = prclDest->bottom;
          if ( v108[j].bottom > v40 )
            v108[j].bottom = v40;
          v41 = v108[j].top;
          v42 = v108[j].bottom;
          if ( v41 < v42 && v108[j].left < v108[j].right )
          {
            if ( v42 <= v99.top )
            {
              if ( v41 > v105 )
                continue;
              if ( !v31 )
                return 1;
              pvScan0 = v100;
              v85 = v101;
              v95 = v105;
              v104 = v106;
              v102 = v103;
            }
            v99 = v108[j];
            v31 = ((__int64 (__fastcall *)(XLATEOBJ **))RLESrcCopy)(&v83);
            v71 = v31;
          }
        }
      }
    }
    lDelta = -lDelta;
    goto LABEL_38;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\trivblt.cxx:%d:EngCopyBits:Invalid iFormat().\n", 461);
  return 0;
}
