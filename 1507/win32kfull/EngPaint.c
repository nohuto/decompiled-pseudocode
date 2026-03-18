/*
 * XREFs of EngPaint @ 0x1C00CE580
 * Callers:
 *     EngStrokeAndFillPath @ 0x1C0006A30 (EngStrokeAndFillPath.c)
 *     EngFillPath @ 0x1C00CD5A0 (EngFillPath.c)
 *     NtGdiExtFloodFill @ 0x1C0103240 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C0104C30 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C0105250 (NtGdiFillRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C029124C (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiEngPaint @ 0x1C02ACCB0 (NtGdiEngPaint.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009CE2C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngPaint(SURFOBJ *pso, CLIPOBJ *pco, BRUSHOBJ *pbo, POINTL *pptlBrushOrg, MIX mix)
{
  SURFACE *v9; // rax
  int (*v10)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v11; // rdx
  int v12; // r8d

  v9 = (SURFACE *)SURFOBJ_TO_SURFACE(pso);
  v10 = SURFACE::pfnBitBlt(v9);
  return ((__int64 (__fastcall *)(SURFOBJ *, _QWORD, _QWORD, CLIPOBJ *, _QWORD, __int64, _QWORD, _QWORD, BRUSHOBJ *, POINTL *, int))v10)(
           pso,
           0LL,
           0LL,
           pco,
           0LL,
           v11,
           0LL,
           0LL,
           pbo,
           pptlBrushOrg,
           v12);
}
