/*
 * XREFs of OffStrokePath @ 0x1C011A8E4
 * Callers:
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C011A690 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0297EB0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 * Callees:
 *     EngStrokePath @ 0x1C00CE630 (EngStrokePath.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00E16C8 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C00FC620 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
        MIX mix)
{
  int v10; // edi
  LONG v12; // ebx
  POINTL *pptlBrushOrg; // rsi
  LINEATTRS *plineattrs; // r15
  unsigned int v17; // r12d
  int v18; // edi
  int v19; // ebx
  int v21; // [rsp+80h] [rbp+8h] BYREF
  int v22; // [rsp+84h] [rbp+Ch]

  v10 = a2[1];
  v12 = *a2;
  PATHOBJ_vOffset(a4, *a2, v10);
  CLIPOBJ_vOffset(pco, v12, v10);
  pptlBrushOrg = a8;
  if ( a8 )
  {
    v21 = v12 + a8->x;
    pptlBrushOrg = (POINTL *)&v21;
    v22 = v10 + a8->y;
  }
  plineattrs = a9;
  v17 = a1(a3, a4, pco, pxo, pbo, pptlBrushOrg, a9, mix);
  if ( !v17 && ((plineattrs->fl & 1) != 0 || (a4->fl & 1) != 0) )
    v17 = EngStrokePath(a3, a4, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  v18 = -v10;
  v19 = -v12;
  PATHOBJ_vOffset(a4, v19, v18);
  CLIPOBJ_vOffset(pco, v19, v18);
  return v17;
}
