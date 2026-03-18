/*
 * XREFs of EngStrokePath @ 0x1401160D0
 * Callers:
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140064150 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     OffStrokePath @ 0x140064BA4 (OffStrokePath.c)
 *     EngStrokeAndFillPath @ 0x140084A20 (EngStrokeAndFillPath.c)
 *     W32kCddStrokePath @ 0x1401140C0 (W32kCddStrokePath.c)
 *     ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x14030C310 (-BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PE.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x14030E820 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140322340 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 * Callees:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140114F8C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x140116358 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     EngFillPath @ 0x140118840 (EngFillPath.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1401877F8 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  SURFOBJ *v11; // rbx
  unsigned __int64 v12; // rdi
  FLONG fl; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  BOOL v17; // ebx
  __int64 (__fastcall *v19)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  POINTL *v20; // [rsp+20h] [rbp-E0h]
  POINTL *v21; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pcoa; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v23[152]; // [rsp+60h] [rbp-A0h] BYREF
  POINTL *v24; // [rsp+F8h] [rbp-8h]
  int v25; // [rsp+100h] [rbp+0h]

  pcoa = pco;
  v21 = pptlBrushOrg;
  BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v23, pso, &pcoa);
  v11 = 0LL;
  if ( !v25 )
    goto LABEL_17;
  v12 = (unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL);
  fl = ppo->fl;
  if ( (plineattrs->fl & 1) != 0 )
  {
    if ( (fl & 0x10) == 0
      && !pathwide::bWiden(
            (pathwide *)ppo,
            (struct EPATHOBJ *)ppo,
            (struct EPATHOBJ *)pxo,
            (const struct EXFORMOBJ *)plineattrs,
            (const struct _LINEATTRS *)v20) )
    {
      goto LABEL_17;
    }
    if ( v12 )
      v11 = (SURFOBJ *)(v12 + 24);
    v16 = EngFillPath(v11, ppo, pcoa, pbo, v21, mix, 2u);
    goto LABEL_16;
  }
  if ( (fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    goto LABEL_17;
  v14 = *(_QWORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
  if ( *(_WORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x64) )
  {
    v19 = *(__int64 (__fastcall **)(unsigned __int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(v14 + 2792);
    if ( !v19 )
    {
LABEL_17:
      v21 = v24;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
      return 0;
    }
    v16 = v19((v12 + 24) & -(__int64)(v12 != 0), ppo, pcoa, pxo, pbo, v21, plineattrs, mix);
LABEL_16:
    v17 = v16;
    v21 = v24;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
    return v17;
  }
  v21 = *(POINTL **)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
  if ( v14 )
    PDEVOBJ::vSync((PDEVOBJ *)&v21, pso, 0LL, 0);
  if ( (_BYTE)mix != 13
    || pcoa && pcoa->iDComplexity == 3
    || plineattrs->pstyle
    || (plineattrs->fl & 2) != 0
    || (v15 = *(_QWORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30),
        (*(_DWORD *)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x70) & 0x200) != 0)
    && (!v15 || (*(_DWORD *)(v15 + 40) & 0x8000) == 0) )
  {
    v16 = bStrokeCosmetic(
            (struct SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)),
            ppo,
            pcoa,
            pbo,
            plineattrs,
            mix);
    goto LABEL_16;
  }
  vSolidLine(
    (struct SURFACE *)((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)),
    ppo,
    0LL,
    pcoa,
    pbo->iSolidColor);
  v21 = v24;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v21);
  return 1;
}
