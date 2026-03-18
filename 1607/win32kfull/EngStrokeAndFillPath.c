/*
 * XREFs of EngStrokeAndFillPath @ 0x1C027B650
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000AA78 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0287530 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028BEB0 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028E7A0 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0296E80 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AF350 (NtGdiEngStrokeAndFillPath.c)
 *     OffStrokeAndFillPath @ 0x1C02C3908 (OffStrokeAndFillPath.c)
 * Callees:
 *     EngStrokePath @ 0x1C000F530 (EngStrokePath.c)
 *     ??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ @ 0x1C000F734 (--1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C000F754 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00147C4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00148F0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngFillPath @ 0x1C0015B00 (EngFillPath.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngPaint @ 0x1C013A0D0 (EngPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C02792E8 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C027B614 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
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
  MIX v15; // r12d
  BOOL v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PATHOBJ *v21; // rdx
  SURFOBJ *v22; // r13
  struct _CLIPOBJ *v23; // r14
  struct RGNOBJ *p_top; // r8
  POINTL *v25; // r15
  BRUSHOBJ *v26; // r8
  struct RGNOBJ *v27; // r8
  BRUSHOBJ *v28; // r8
  MIX mix; // [rsp+20h] [rbp-E0h]
  CLIPOBJ *v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  LINEATTRS *v32; // [rsp+60h] [rbp-A0h]
  BRUSHOBJ *pbo; // [rsp+68h] [rbp-98h]
  struct _CLIPOBJ *v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  BRUSHOBJ *v36; // [rsp+80h] [rbp-80h]
  SURFOBJ *psoa; // [rsp+88h] [rbp-78h]
  _QWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v39[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v40[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int128 v43; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pcoa; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v45[160]; // [rsp+200h] [rbp+100h] BYREF
  int v46; // [rsp+2A0h] [rbp+1A0h]

  psoa = pso;
  v10 = 0;
  pbo = pboStroke;
  v13 = 0;
  v36 = pboFill;
  v31[0] = pco;
  v34 = pco;
  v32 = plineattrs;
  v14 = mixFill;
  v35 = SURFOBJ_TO_SURFACE(pso);
  v15 = mixFill;
  if ( ((__int64)pboFill[5].pvRbrush & 0x8000) == 0 )
    v15 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((__int64)pbo[5].pvRbrush & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (_BYTE)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v41);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx(v18, v17, v19, v20) && !pxo )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_45;
      }
      if ( !v42
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v41, (struct EPATHOBJ *)ppo, pxo, v32)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v41, (__m128i **)ppo, pxo, v32) )
      {
        EngSetLastError(8u);
LABEL_45:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v41);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_45;
    v21 = (PATHOBJ *)v41;
    if ( ppo[5] )
      v21 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v39, (struct EPATHOBJ *)v21, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v40, (struct EPATHOBJ *)ppo, 1, flOptions, 0LL);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v38);
    if ( !v40[0]
      || !v39[0]
      || !v38[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v38, (struct RGNOBJ *)v40, (struct RGNOBJ *)v39, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_43;
    }
    v22 = psoa;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v45, psoa, &v34);
    if ( !v46 )
    {
      BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v45);
LABEL_44:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v38);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v40);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v39);
      goto LABEL_45;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
    if ( v31[0] && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v39) != 1 )
    {
      v23 = v34;
      p_top = (struct RGNOBJ *)&v34[2].rclBounds.top;
      if ( !v34 )
        p_top = 0LL;
      if ( RGNOBJ::bMerge((RGNOBJ *)v31, (struct RGNOBJ *)v39, p_top, BYTE1(gafjRgnOp)) )
      {
        v43 = *(_OWORD *)&v31[0][3].rclBounds.bottom;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, (struct REGION *)v31[0], (struct ERECTL *)&v43, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
        {
          v25 = pptlBrushOrg;
          v13 = 1;
          goto LABEL_34;
        }
        v26 = pbo;
        mix = v14;
        v25 = pptlBrushOrg;
        ++*(_DWORD *)(v35 + 92);
        v13 = EngPaint(v22, &pcoa, v26, pptlBrushOrg, mix);
        if ( v13 )
        {
LABEL_34:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v38) != 1 )
          {
            v27 = (struct RGNOBJ *)&v23[2].rclBounds.top;
            if ( !v23 )
              v27 = 0LL;
            if ( RGNOBJ::bMerge((RGNOBJ *)v31, (struct RGNOBJ *)v38, v27, BYTE1(gafjRgnOp)) )
            {
              v43 = *(_OWORD *)&v31[0][3].rclBounds.bottom;
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, (struct REGION *)v31[0], (struct ERECTL *)&v43, 0);
              if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
              {
                v13 = 1;
              }
              else
              {
                v28 = v36;
                ++*(_DWORD *)(v35 + 92);
                v13 = EngPaint(v22, &pcoa, v28, v25, v15);
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
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
    BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v45);
LABEL_43:
    v10 = v13;
    goto LABEL_44;
  }
  if ( !EngFillPath(psoa, ppo, v31[0], v36, pptlBrushOrg, v15, flOptions)
    || !EngStrokePath(psoa, ppo, v31[0], pxo, pbo, pptlBrushOrg, v32, v14) )
  {
    return 0;
  }
  return v16;
}
