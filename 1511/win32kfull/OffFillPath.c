/*
 * XREFs of OffFillPath @ 0x1C02C0394
 * Callers:
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026CE50 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0296380 (-MulFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 * Callees:
 *     EngFillPath @ 0x1C00E6210 (EngFillPath.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00EA440 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C013317C (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OffFillPath(
        __int64 (__fastcall *a1)(SURFOBJ *, struct _PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG),
        int *a2,
        SURFOBJ *a3,
        struct _PATHOBJ *a4,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *a7,
        MIX a8,
        FLONG a9)
{
  int v9; // edi
  LONG v11; // ebx
  POINTL *pptlBrushOrg; // rsi
  FLONG flOptions; // r12d
  MIX mix; // r13d
  unsigned int v16; // r15d
  int v17; // edi
  int v18; // ebx
  int v21; // [rsp+88h] [rbp+10h] BYREF
  int v22; // [rsp+8Ch] [rbp+14h]
  SURFOBJ *pso; // [rsp+90h] [rbp+18h]

  pso = a3;
  v9 = a2[1];
  v11 = *a2;
  PATHOBJ_vOffset(a4, *a2, v9);
  CLIPOBJ_vOffset(pco, v11, v9);
  pptlBrushOrg = a7;
  if ( a7 )
  {
    v21 = v11 + a7->x;
    pptlBrushOrg = (POINTL *)&v21;
    v22 = v9 + a7->y;
  }
  flOptions = a9;
  mix = a8;
  v16 = a1(a3, a4, pco, pbo, pptlBrushOrg, a8, a9);
  if ( !v16 )
    v16 = EngFillPath(pso, a4, pco, pbo, pptlBrushOrg, mix, flOptions);
  v17 = -v9;
  v18 = -v11;
  PATHOBJ_vOffset(a4, v18, v17);
  CLIPOBJ_vOffset(pco, v18, v17);
  return v16;
}
