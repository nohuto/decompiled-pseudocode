/*
 * XREFs of EngStrokeAndFillPath @ 0x1C0006A30
 * Callers:
 *     OffStrokeAndFillPath @ 0x1C0005560 (OffStrokeAndFillPath.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C00CCE08 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0288B10 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028D440 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028FD40 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0297BE0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ADB60 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0004F04 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C0004F34 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC4F4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC580 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 *     EngPaint @ 0x1C00CE580 (EngPaint.c)
 *     EngStrokePath @ 0x1C00CE630 (EngStrokePath.c)
 *     ??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ @ 0x1C00CE834 (--1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00CE854 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D3304 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

BOOL __stdcall EngStrokeAndFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
{
  BOOL v10; // ebx
  BOOL v13; // esi
  MIX v14; // r15d
  MIX mix; // r12d
  BOOL v16; // edi
  PATHOBJ *v18; // rdx
  SURFOBJ *v19; // r13
  struct _CLIPOBJ *v20; // r14
  struct RGNOBJ *p_top; // r8
  POINTL *v22; // r15
  BRUSHOBJ *v23; // r8
  struct RGNOBJ *v24; // r8
  BRUSHOBJ *v25; // r8
  MIX v26; // [rsp+20h] [rbp-E0h]
  CLIPOBJ *pcoa[2]; // [rsp+50h] [rbp-B0h] BYREF
  LINEATTRS *v28; // [rsp+60h] [rbp-A0h]
  BRUSHOBJ *v29; // [rsp+68h] [rbp-98h]
  SURFOBJ *psoa; // [rsp+70h] [rbp-90h]
  _QWORD v31[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v32; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *pbo; // [rsp+98h] [rbp-68h]
  _QWORD v35[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v37[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int128 v39; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ v40; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v41[160]; // [rsp+200h] [rbp+100h] BYREF
  int v42; // [rsp+2A0h] [rbp+1A0h]

  psoa = pso;
  v10 = 0;
  v29 = pboStroke;
  v13 = 0;
  pbo = pboFill;
  pcoa[0] = pco;
  v32 = pco;
  v28 = plineattrs;
  v14 = mixFill;
  v33 = SURFOBJ_TO_SURFACE(pso);
  mix = mixFill;
  if ( ((__int64)pboFill[5].pvRbrush & 0x8000) == 0 )
    mix = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((__int64)v29[5].pvRbrush & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (_BYTE)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v37);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( (unsigned int)bUMPDSecurityGateEx() && !pxo )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_50;
      }
      if ( !v38
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v37, (struct EPATHOBJ *)ppo, pxo, v28)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v37, (struct EPATHOBJ *)ppo, pxo, v28) )
      {
        EngSetLastError(8u);
LABEL_50:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v37);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_50;
    v18 = (PATHOBJ *)v37;
    if ( ppo[5] )
      v18 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v35, (struct EPATHOBJ *)v18, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v36, (struct EPATHOBJ *)ppo, 1, flOptions, 0LL);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
    if ( !v36[0]
      || !v35[0]
      || !v31[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v31, (struct RGNOBJ *)v36, (struct RGNOBJ *)v35, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_48;
    }
    v19 = psoa;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v41, psoa, &v32);
    if ( !v42 )
    {
      BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v41);
LABEL_49:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v36);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v35);
      goto LABEL_50;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)pcoa);
    if ( pcoa[0] && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v35) != 1 )
    {
      v20 = v32;
      p_top = (struct RGNOBJ *)&v32[2].rclBounds.top;
      if ( !v32 )
        p_top = 0LL;
      if ( RGNOBJ::bMerge((RGNOBJ *)pcoa, (struct RGNOBJ *)v35, p_top, BYTE1(gafjRgnOp)) )
      {
        v39 = *(_OWORD *)&pcoa[0][3].rclBounds.bottom;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v40, (struct REGION *)pcoa[0], (struct ERECTL *)&v39, 0);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v40.rclBounds) )
        {
          v22 = pptlBrushOrg;
          v13 = 1;
          goto LABEL_39;
        }
        v23 = v29;
        v26 = v14;
        v22 = pptlBrushOrg;
        ++*(_DWORD *)(v33 + 92);
        v13 = EngPaint(v19, &v40, v23, pptlBrushOrg, v26);
        if ( v13 )
        {
LABEL_39:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v31) != 1 )
          {
            v24 = (struct RGNOBJ *)&v20[2].rclBounds.top;
            if ( !v20 )
              v24 = 0LL;
            if ( RGNOBJ::bMerge((RGNOBJ *)pcoa, (struct RGNOBJ *)v31, v24, BYTE1(gafjRgnOp)) )
            {
              v39 = *(_OWORD *)&pcoa[0][3].rclBounds.bottom;
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v40, (struct REGION *)pcoa[0], (struct ERECTL *)&v39, 0);
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v40.rclBounds) )
              {
                v13 = 1;
              }
              else
              {
                v25 = pbo;
                ++*(_DWORD *)(v33 + 92);
                v13 = EngPaint(v19, &v40, v25, v22, mix);
              }
            }
            else
            {
              v13 = 0;
            }
          }
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)pcoa);
    BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v41);
LABEL_48:
    v10 = v13;
    goto LABEL_49;
  }
  if ( !EngFillPath(psoa, ppo, pcoa[0], pbo, pptlBrushOrg, mix, flOptions)
    || !EngStrokePath(psoa, ppo, pcoa[0], pxo, v29, pptlBrushOrg, v28, v14) )
  {
    return 0;
  }
  return v16;
}
