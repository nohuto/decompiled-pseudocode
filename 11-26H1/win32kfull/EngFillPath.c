/*
 * XREFs of EngFillPath @ 0x140118840
 * Callers:
 *     EngStrokeAndFillPath @ 0x140084A20 (EngStrokeAndFillPath.c)
 *     NtGdiEngFillPath @ 0x1400F5100 (NtGdiEngFillPath.c)
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1401170D8 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     ?BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x14030B4C0 (-BmpDevFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x14030D710 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1403286C0 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     OffFillPath @ 0x14033A8DC (OffFillPath.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     EngPaint @ 0x140083090 (EngPaint.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140118D68 (-EngFastFill@@YAJPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140182D04 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x140205640 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ @ 0x14022E68C (--1RGNMEMOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  BOOL v7; // edi
  __int64 p_hdev; // rax
  int *v13; // rcx
  RECTL *p_rclBounds; // r8
  BOOL result; // eax
  struct _RECTL *v16; // r9
  FLONG fl; // eax
  struct REGION *v18; // rax
  BYTE v19; // al
  POINTL *v20; // r9
  __int64 v21; // rax
  BOOL v22; // ebx
  struct REGION *v23; // rbx
  BYTE iDComplexity; // al
  POINTL *v25; // r9
  __int64 p_iUniq; // rax
  struct REGION *v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  struct REGION *v30; // [rsp+58h] [rbp-A8h] BYREF
  POINTL *v31; // [rsp+60h] [rbp-A0h]
  _DWORD v32[4]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v33; // [rsp+78h] [rbp-88h] BYREF
  __int128 v34; // [rsp+88h] [rbp-78h] BYREF
  CLIPOBJ pcoa; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+30h]
  CLIPOBJ v41; // [rsp+140h] [rbp+40h] BYREF
  __int64 v42; // [rsp+178h] [rbp+78h]
  __int64 v43; // [rsp+190h] [rbp+90h]
  int v44; // [rsp+198h] [rbp+98h]
  int v45; // [rsp+1C0h] [rbp+C0h]
  __int64 v46; // [rsp+1D0h] [rbp+D0h]

  v7 = 0;
  v31 = pptlBrushOrg;
  if ( (ppo->fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    return 0;
  p_hdev = (__int64)&pso->hdev;
  if ( !pso )
    p_hdev = 48LL;
  v30 = *(struct REGION **)p_hdev;
  if ( v30 )
    PDEVOBJ::vSync((PDEVOBJ *)&v30, pso, &pco->rclBounds, 0);
  if ( (ppo->fl & 0x4000) != 0 && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity == 3 )
    goto LABEL_18;
  v13 = (int *)ppo[1];
  p_rclBounds = 0LL;
  if ( pco->rclBounds.left > v13[12] >> 4
    || pco->rclBounds.right < (int)((v13[14] + 15LL) >> 4)
    || pco->rclBounds.top > v13[13] >> 4
    || pco->rclBounds.bottom < (int)((v13[15] + 15LL) >> 4) )
  {
    p_rclBounds = &pco->rclBounds;
  }
  result = EngFastFill(pso, ppo, p_rclBounds, pbo, v31, mix, flOptions);
  if ( result < 0 )
  {
LABEL_18:
    v33 = 0LL;
    if ( pco->iDComplexity )
    {
      v16 = (struct _RECTL *)&v33;
      DWORD1(v33) = 16 * pco->rclBounds.top;
      HIDWORD(v33) = 16 * pco->rclBounds.bottom;
    }
    else
    {
      v16 = 0LL;
    }
    fl = ppo->fl;
    v28 = 0;
    if ( (fl & 0x10) != 0 )
    {
      if ( flOptions == 2 )
        v18 = (struct REGION *)ppo[4];
      else
        v18 = (struct REGION *)ppo[3];
    }
    else
    {
      v18 = (struct REGION *)ppo[2];
    }
    v27 = v18;
    if ( !v18 )
    {
      v28 = 1;
      v30 = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v30, (struct EPATHOBJ *)ppo, flOptions, v16);
      v27 = v30;
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v27);
      if ( !v27 )
      {
        if ( ppo->cCurves < 2 )
        {
LABEL_25:
          if ( v28 )
          {
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v27);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
          }
          return 1;
        }
        EngSetLastError(8u);
LABEL_46:
        RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED((RGNMEMOBJTMPIFNEEDED *)&v27);
        return v7;
      }
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v27) == 1 )
      goto LABEL_25;
    v32[0] = pco->rclBounds.left;
    v32[1] = pco->rclBounds.top;
    v32[2] = pco->rclBounds.right;
    v32[3] = pco->rclBounds.bottom;
    if ( (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)ppo) || pco->iDComplexity )
    {
      v29 = 0LL;
      RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v29, 0x70u);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v29);
      if ( !v29 )
      {
        EngSetLastError(8u);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
        goto LABEL_46;
      }
      if ( !RGNOBJ::bMerge((RGNOBJ *)&v29, (struct RGNOBJ *)&v27, (struct RGNOBJ *)&pco[2].rclBounds.top, 8u) )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v29);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
        if ( v28 )
        {
          RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v27);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
        }
        return 0;
      }
      v23 = (struct REGION *)v29;
      v34 = *(_OWORD *)(v29 + 52);
      ERECTL::operator*=(&v34, &pco->rclBounds);
      v42 = 0LL;
      v45 = 1;
      v43 = 0LL;
      v44 = 0;
      v46 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&v41, v23, (const struct ERECTL *)&v34, 0);
      if ( ERECTL::bEmpty((ERECTL *)&v41.rclBounds) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
        v7 = 1;
        goto LABEL_46;
      }
      iDComplexity = v41.iDComplexity;
      v25 = v31;
      if ( !v41.iDComplexity )
        iDComplexity = 1;
      v41.iDComplexity = iDComplexity;
      p_iUniq = (__int64)&pso->iUniq;
      if ( !pso )
        p_iUniq = 92LL;
      ++*(_DWORD *)p_iUniq;
      v22 = EngPaint(pso, &v41, pbo, v25, mix);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v29);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v29);
    }
    else
    {
      v36 = 0LL;
      v39 = 1;
      v37 = 0LL;
      v38 = 0;
      v40 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pcoa, v27, (const struct ERECTL *)v32, 0);
      if ( ERECTL::bEmpty((ERECTL *)&pcoa.rclBounds) )
      {
        v7 = 1;
        goto LABEL_46;
      }
      v19 = pcoa.iDComplexity;
      v20 = v31;
      if ( !pcoa.iDComplexity )
        v19 = 1;
      pcoa.iDComplexity = v19;
      v21 = (__int64)&pso->iUniq;
      if ( !pso )
        v21 = 92LL;
      ++*(_DWORD *)v21;
      v22 = EngPaint(pso, &pcoa, pbo, v20, mix);
    }
    if ( v28 )
    {
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v27);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v27);
    }
    return v22;
  }
  return result;
}
