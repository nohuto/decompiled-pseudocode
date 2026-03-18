/*
 * XREFs of OffStrokePath @ 0x140064BA4
 * Callers:
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140064150 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140068280 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 * Callees:
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x140064D08 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x140066BC4 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     EngStrokePath @ 0x1401160D0 (EngStrokePath.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OffStrokePath(
        __int64 (__fastcall *a1)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX),
        int *a2,
        SURFOBJ *a3,
        struct _PATHOBJ *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *a8,
        LINEATTRS *a9,
        MIX a10)
{
  int v10; // edi
  int v12; // ebx
  POINTL *pptlBrushOrg; // rsi
  MIX mix; // r13d
  LINEATTRS *plineattrs; // r15
  unsigned int v17; // r12d
  int v18; // edi
  int v19; // ebx
  __int64 v22; // [rsp+98h] [rbp+10h] BYREF
  SURFOBJ *pso; // [rsp+A0h] [rbp+18h]

  pso = a3;
  v10 = a2[1];
  v12 = *a2;
  PATHOBJ_vOffset(a4, *a2, v10);
  CLIPOBJ_vOffset(pco, v12, v10);
  pptlBrushOrg = a8;
  v22 = 0LL;
  if ( a8 )
  {
    LODWORD(v22) = v12 + a8->x;
    pptlBrushOrg = (POINTL *)&v22;
    HIDWORD(v22) = v10 + a8->y;
  }
  mix = a10;
  plineattrs = a9;
  v17 = a1(a3, a4, pco, pxo, pbo, pptlBrushOrg, a9, a10);
  if ( !v17 && ((plineattrs->fl & 1) != 0 || (a4->fl & 1) != 0) )
    v17 = EngStrokePath(pso, a4, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  v18 = -v10;
  v19 = -v12;
  PATHOBJ_vOffset(a4, v19, v18);
  CLIPOBJ_vOffset(pco, v19, v18);
  return v17;
}
