/*
 * XREFs of EngFillPath @ 0x1C0015B00
 * Callers:
 *     EngStrokePath @ 0x1C000F530 (EngStrokePath.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015414 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     EngStrokeAndFillPath @ 0x1C027B650 (EngStrokeAndFillPath.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C028B230 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C028D880 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0295B30 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     NtGdiEngFillPath @ 0x1C02ADB60 (NtGdiEngFillPath.c)
 *     OffFillPath @ 0x1C02C347C (OffFillPath.c)
 * Callees:
 *     ?bPreComputedFill@EPATHOBJ@@QEAAHXZ @ 0x1C001554C (-bPreComputedFill@EPATHOBJ@@QEAAHXZ.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015C68 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00354E4 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngPaint @ 0x1C013A0D0 (EngPaint.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z @ 0x1C02792E8 (--0RGNMEMOBJTMPIFNEEDED@@QEAA@AEAVEPATHOBJ@@W4PRECOMPUTETYPE@@KPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C027B614 (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
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
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  char *v19; // rax
  BYTE v20; // al
  struct REGION *v21; // r10
  BYTE iDComplexity; // al
  _QWORD v24[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  struct REGION *v26[3]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v27; // [rsp+88h] [rbp-78h]
  _DWORD v28[4]; // [rsp+98h] [rbp-68h] BYREF
  char v29; // [rsp+A8h] [rbp-58h] BYREF
  int v30; // [rsp+ACh] [rbp-54h]
  int v31; // [rsp+B4h] [rbp-4Ch]
  __int128 v32; // [rsp+B8h] [rbp-48h] BYREF
  CLIPOBJ pcoa; // [rsp+D0h] [rbp-30h] BYREF
  CLIPOBJ v34; // [rsp+170h] [rbp+70h] BYREF

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
        || pco->rclBounds.right < (int)((SDWORD2(v27) + 15LL) >> 4)
        || pco->rclBounds.top > SHIDWORD(v15) >> 4
        || pco->rclBounds.bottom < (int)((SHIDWORD(v27) + 15LL) >> 4) )
      {
        v14 = &pco->rclBounds;
      }
      v17 = EngFastFill(pso, ppo, v14, pbo, pptlBrushOrg, mix, flOptions);
      if ( v17 >= 0 )
        return v17;
    }
    if ( pco->iDComplexity )
    {
      v30 = 16 * pco->rclBounds.top;
      v31 = 16 * pco->rclBounds.bottom;
      v19 = &v29;
    }
    else
    {
      v19 = 0LL;
    }
    RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(v26, ppo, 1LL, flOptions, v19);
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
              v32 = *(_OWORD *)(v24[0] + 88LL);
              ERECTL::operator*=(&v32, &pco->rclBounds);
              ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&v34, v21, (struct ERECTL *)&v32, 0);
              if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v34.rclBounds) )
              {
                v10 = 1;
              }
              else
              {
                iDComplexity = v34.iDComplexity;
                if ( !v34.iDComplexity )
                  iDComplexity = 1;
                v34.iDComplexity = iDComplexity;
                ++*(_DWORD *)(v11 + 92);
                v10 = EngPaint(pso, &v34, pbo, pptlBrushOrg, mix);
              }
            }
          }
          else
          {
            EngSetLastError(8u);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v24);
          goto LABEL_38;
        }
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v26[0], (struct ERECTL *)v28, 0);
        if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
        {
          v20 = pcoa.iDComplexity;
          if ( !pcoa.iDComplexity )
            v20 = 1;
          ++*(_DWORD *)(v11 + 92);
          pcoa.iDComplexity = v20;
          v12 = EngPaint(pso, &pcoa, pbo, pptlBrushOrg, mix);
        }
      }
    }
    else if ( ppo->cCurves >= 2 )
    {
      EngSetLastError(8u);
      v12 = 0;
    }
    v10 = v12;
LABEL_38:
    RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)v26);
  }
  return v10;
}
