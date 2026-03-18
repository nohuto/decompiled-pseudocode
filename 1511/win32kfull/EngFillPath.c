/*
 * XREFs of EngFillPath @ 0x1C00E6210
 * Callers:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0016688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     EngStrokePath @ 0x1C013CBC0 (EngStrokePath.c)
 *     EngStrokeAndFillPath @ 0x1C027D410 (EngStrokeAndFillPath.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C028C5E0 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C028EC00 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0296380 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     NtGdiEngFillPath @ 0x1C02AB9A0 (NtGdiEngFillPath.c)
 *     OffFillPath @ 0x1C02C0394 (OffFillPath.c)
 * Callees:
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0008088 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C00080B8 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEAAHXZ @ 0x1C00167C0 (-bPreComputedFill@EPATHOBJ@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0041C98 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C00E64E8 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     EngPaint @ 0x1C00E6F30 (EngPaint.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

BOOL __stdcall EngFillPath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  BOOL v10; // ebx
  __int64 v11; // r13
  BOOL v12; // edi
  RECTL *p_rclBounds; // r15
  RECTL *v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  struct _RECTL *v19; // rax
  struct REGION *v20; // r10
  BYTE iDComplexity; // al
  BYTE v22; // al
  _QWORD v24[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v26[3]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+88h] [rbp-78h]
  _DWORD v28[4]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-58h] BYREF
  char v30; // [rsp+B8h] [rbp-48h] BYREF
  int v31; // [rsp+BCh] [rbp-44h]
  int v32; // [rsp+C4h] [rbp-3Ch]
  CLIPOBJ v33; // [rsp+D0h] [rbp-30h] BYREF
  CLIPOBJ pcoa; // [rsp+170h] [rbp+70h] BYREF

  v10 = 0;
  v11 = SURFOBJ_TO_SURFACE(pso);
  v25 = *(_QWORD *)(v11 + 48);
  v12 = 1;
  if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
  {
    p_rclBounds = &pco->rclBounds;
    PDEVOBJ::vSync((PDEVOBJ *)&v25, pso, &pco->rclBounds, 0);
    if ( ((ppo->fl & 0x4000) == 0 || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo))
      && pco->iDComplexity != 3 )
    {
      v14 = 0LL;
      v15 = *(_QWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      v16 = (int)*(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL) >> 4;
      v27 = *(_OWORD *)(*(_QWORD *)&ppo[1] + 48LL);
      if ( p_rclBounds->left > v16
        || pco->rclBounds.right < (DWORD2(v27) + 15) >> 4
        || pco->rclBounds.top > SHIDWORD(v15) >> 4
        || pco->rclBounds.bottom < (HIDWORD(v27) + 15) >> 4 )
      {
        v14 = &pco->rclBounds;
      }
      v17 = EngFastFill(pso, ppo, v14, pbo, pptlBrushOrg, mix, flOptions);
      if ( v17 >= 0 )
        return v17;
    }
    if ( pco->iDComplexity )
    {
      v31 = 16 * pco->rclBounds.top;
      v32 = 16 * pco->rclBounds.bottom;
      v19 = (struct _RECTL *)&v30;
    }
    else
    {
      v19 = 0LL;
    }
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED((RGNMEMOBJ *)v26, (struct EPATHOBJ *)ppo, 1, flOptions, v19);
    if ( v26[0] )
    {
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v26) != 1 )
      {
        v28[0] = p_rclBounds->left;
        v28[1] = pco->rclBounds.top;
        v28[2] = pco->rclBounds.right;
        v28[3] = pco->rclBounds.bottom;
        if ( (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity )
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
          if ( v24[0] )
          {
            if ( RGNOBJ::bMerge(
                   (RGNOBJ *)v24,
                   (struct RGNOBJ *)v26,
                   (struct RGNOBJ *)&pco[2].rclBounds.top,
                   BYTE1(gafjRgnOp)) )
            {
              v29 = *(_OWORD *)(v24[0] + 88LL);
              ERECTL::operator*=(&v29, &pco->rclBounds.left);
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v20, (struct ERECTL *)&v29, 0);
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
              {
                v10 = 1;
              }
              else
              {
                iDComplexity = pcoa.iDComplexity;
                if ( !pcoa.iDComplexity )
                  iDComplexity = 1;
                pcoa.iDComplexity = iDComplexity;
                ++*(_DWORD *)(v11 + 92);
                v10 = EngPaint(pso, &pcoa, pbo, pptlBrushOrg, mix);
              }
            }
          }
          else
          {
            EngSetLastError(8u);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
          goto LABEL_25;
        }
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v33, v26[0], (struct ERECTL *)v28, 0);
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v33.rclBounds) )
        {
          v22 = v33.iDComplexity;
          if ( !v33.iDComplexity )
            v22 = 1;
          ++*(_DWORD *)(v11 + 92);
          v33.iDComplexity = v22;
          v12 = EngPaint(pso, &v33, pbo, pptlBrushOrg, mix);
        }
      }
    }
    else if ( ppo->cCurves >= 2 )
    {
      EngSetLastError(8u);
      v12 = 0;
    }
    v10 = v12;
LABEL_25:
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v26);
  }
  return v10;
}
