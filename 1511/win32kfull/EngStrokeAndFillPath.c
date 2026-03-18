/*
 * XREFs of EngStrokeAndFillPath @ 0x1C027D410
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027AEF0 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0288BE0 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028D260 (-BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C028FB20 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C02976E0 (-MulStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02ACF90 (NtGdiEngStrokeAndFillPath.c)
 *     OffStrokeAndFillPath @ 0x1C02C0820 (OffStrokeAndFillPath.c)
 * Callees:
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0008088 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C00080B8 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngFillPath @ 0x1C00E6210 (EngFillPath.c)
 *     EngPaint @ 0x1C00E6F30 (EngPaint.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0130838 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01308C4 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngStrokePath @ 0x1C013CBC0 (EngStrokePath.c)
 *     ??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ @ 0x1C013CD10 (--1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C013CD30 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
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
  PATHOBJ *v17; // rdx
  SURFOBJ *v18; // r13
  struct _CLIPOBJ *v19; // r14
  struct RGNOBJ *p_top; // r8
  POINTL *v21; // r15
  BRUSHOBJ *v22; // r8
  struct RGNOBJ *v23; // r8
  BRUSHOBJ *v24; // r8
  MIX mix; // [rsp+20h] [rbp-E0h]
  CLIPOBJ *v27[2]; // [rsp+50h] [rbp-B0h] BYREF
  LINEATTRS *v28; // [rsp+60h] [rbp-A0h]
  BRUSHOBJ *pbo; // [rsp+68h] [rbp-98h]
  SURFOBJ *psoa; // [rsp+70h] [rbp-90h]
  _QWORD v31[2]; // [rsp+78h] [rbp-88h] BYREF
  struct _CLIPOBJ *v32; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  BRUSHOBJ *v34; // [rsp+98h] [rbp-68h]
  _QWORD v35[3]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[3]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v37[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-28h]
  __int128 v39; // [rsp+150h] [rbp+50h] BYREF
  CLIPOBJ pcoa; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v41[160]; // [rsp+200h] [rbp+100h] BYREF
  int v42; // [rsp+2A0h] [rbp+1A0h]

  psoa = pso;
  v10 = 0;
  pbo = pboStroke;
  v13 = 0;
  v34 = pboFill;
  v27[0] = pco;
  v32 = pco;
  v28 = plineattrs;
  v14 = mixFill;
  v33 = SURFOBJ_TO_SURFACE(pso);
  v15 = mixFill;
  if ( ((__int64)pboFill[5].pvRbrush & 0x8000) == 0 )
    v15 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  if ( ((__int64)pbo[5].pvRbrush & 0x8000) == 0 )
    v14 = (unsigned __int8)mixFill | ((unsigned __int8)mixFill << 8);
  v16 = 1;
  if ( (plineattrs->fl & 1) != 0 && (_BYTE)mixFill != 13 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v37);
    if ( !*(_QWORD *)&ppo[5] )
    {
      if ( bUMPDSecurityGateEx() && !pxo )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\fillddi.cxx:%d:EngStrokeAndFillPath:pxo == NULL\n", 279);
        goto LABEL_45;
      }
      if ( !v38
        || !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v37, (struct EPATHOBJ *)ppo, pxo, v28)
        || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v37, (struct EPATHOBJ *)ppo, pxo, v28) )
      {
        EngSetLastError(8u);
LABEL_45:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v37);
        return v10;
      }
    }
    if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
      goto LABEL_45;
    v17 = (PATHOBJ *)v37;
    if ( ppo[5] )
      v17 = ppo;
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v35, (struct EPATHOBJ *)v17, 0, 2u, 0LL);
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v36, (struct EPATHOBJ *)ppo, 1, flOptions, 0LL);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
    if ( !v36[0]
      || !v35[0]
      || !v31[0]
      || !RGNOBJ::bMerge((RGNOBJ *)v31, (struct RGNOBJ *)v36, (struct RGNOBJ *)v35, BYTE4(gafjRgnOp)) )
    {
      goto LABEL_43;
    }
    v18 = psoa;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v41, psoa, &v32);
    if ( !v42 )
    {
      BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v41);
LABEL_44:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v31);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v36);
      RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v35);
      goto LABEL_45;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
    if ( v27[0] && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v35) != 1 )
    {
      v19 = v32;
      p_top = (struct RGNOBJ *)&v32[2].rclBounds.top;
      if ( !v32 )
        p_top = 0LL;
      if ( RGNOBJ::bMerge((RGNOBJ *)v27, (struct RGNOBJ *)v35, p_top, BYTE1(gafjRgnOp)) )
      {
        v39 = *(_OWORD *)&v27[0][3].rclBounds.bottom;
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, (struct REGION *)v27[0], (struct ERECTL *)&v39, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
        {
          v21 = pptlBrushOrg;
          v13 = 1;
          goto LABEL_34;
        }
        v22 = pbo;
        mix = v14;
        v21 = pptlBrushOrg;
        ++*(_DWORD *)(v33 + 92);
        v13 = EngPaint(v18, &pcoa, v22, pptlBrushOrg, mix);
        if ( v13 )
        {
LABEL_34:
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v31) != 1 )
          {
            v23 = (struct RGNOBJ *)&v19[2].rclBounds.top;
            if ( !v19 )
              v23 = 0LL;
            if ( RGNOBJ::bMerge((RGNOBJ *)v27, (struct RGNOBJ *)v31, v23, BYTE1(gafjRgnOp)) )
            {
              v39 = *(_OWORD *)&v27[0][3].rclBounds.bottom;
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, (struct REGION *)v27[0], (struct ERECTL *)&v39, 0);
              if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
              {
                v13 = 1;
              }
              else
              {
                v24 = v34;
                ++*(_DWORD *)(v33 + 92);
                v13 = EngPaint(v18, &pcoa, v24, v21, v15);
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
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v27);
    BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v41);
LABEL_43:
    v10 = v13;
    goto LABEL_44;
  }
  if ( !EngFillPath(psoa, ppo, v27[0], v34, pptlBrushOrg, v15, flOptions)
    || !EngStrokePath(psoa, ppo, v27[0], pxo, pbo, pptlBrushOrg, v28, v14) )
  {
    return 0;
  }
  return v16;
}
