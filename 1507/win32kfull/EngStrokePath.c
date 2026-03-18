/*
 * XREFs of EngStrokePath @ 0x1C00CE630
 * Callers:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C00CD154 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     OffStrokePath @ 0x1C011A8E4 (OffStrokePath.c)
 *     W32kCddStrokePath @ 0x1C0120100 (W32kCddStrokePath.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0288C80 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C028D630 (-BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PE.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C028FEB0 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0297EB0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     NtGdiEngStrokePath @ 0x1C02ADEC0 (NtGdiEngStrokePath.c)
 * Callees:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC4F4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 *     ??1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ @ 0x1C00CE834 (--1BOUNDCLIPRGNTOSURFACE@@QEAA@XZ.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00CE854 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1C00CE9E8 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x1C00D0EBC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rdi
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  POINTL *v16; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *pcoa; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v18[160]; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+100h] [rbp+0h]

  pcoa = pco;
  v16 = pptlBrushOrg;
  BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v18, pso, &pcoa);
  v11 = 0LL;
  if ( v19 )
  {
    v12 = SURFOBJ_TO_SURFACE(pso);
    if ( (plineattrs->fl & 1) != 0 )
    {
      if ( (ppo->fl & 0x10) != 0 || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)ppo, (__m128i **)ppo, pxo, plineattrs) )
      {
        if ( v12 )
          v11 = (SURFOBJ *)(v12 + 24);
        v13 = EngFillPath(v11, ppo, pcoa, pbo, v16, mix, 2u);
        goto LABEL_22;
      }
    }
    else if ( (ppo->fl & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    {
      if ( *(_WORD *)(v12 + 100) )
      {
        v14 = *(__int64 (__fastcall **)(__int64, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v12 + 48) + 2832LL);
        if ( !v14 )
          goto LABEL_23;
        v13 = v14(v12 + 24, ppo, pcoa, pxo, pbo, v16, plineattrs, mix);
      }
      else
      {
        v16 = *(POINTL **)(v12 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v16, pso, 0LL, 0);
        if ( (_BYTE)mix == 13
          && (!pcoa || pcoa->iDComplexity != 3)
          && !plineattrs->pstyle
          && (plineattrs->fl & 2) == 0
          && ((*(_DWORD *)(v12 + 112) & 0x200) == 0 || (*(_DWORD *)(*(_QWORD *)(v12 + 48) + 56LL) & 0x8000) != 0) )
        {
          vSolidLine((struct SURFACE *)v12, ppo, 0LL, pcoa, pbo->iSolidColor);
          LODWORD(v11) = 1;
          goto LABEL_23;
        }
        v13 = bStrokeCosmetic((struct SURFACE *)v12, ppo, pcoa, pbo, plineattrs, mix);
      }
LABEL_22:
      LODWORD(v11) = v13;
    }
  }
LABEL_23:
  BOUNDCLIPRGNTOSURFACE::~BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v18);
  return (int)v11;
}
