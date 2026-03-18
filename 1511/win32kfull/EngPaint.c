/*
 * XREFs of EngPaint @ 0x1C00E6F30
 * Callers:
 *     EngFillPath @ 0x1C00E6210 (EngFillPath.c)
 *     NtGdiExtFloodFill @ 0x1C012E0C0 (NtGdiExtFloodFill.c)
 *     NtGdiFrameRgn @ 0x1C012FC30 (NtGdiFrameRgn.c)
 *     NtGdiFillRgn @ 0x1C01301F0 (NtGdiFillRgn.c)
 *     EngStrokeAndFillPath @ 0x1C027D410 (EngStrokeAndFillPath.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0290F88 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiEngPaint @ 0x1C02AC1B0 (NtGdiEngPaint.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0038DCC (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
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
