/*
 * XREFs of EngEraseSurface @ 0x1C00BCB20
 * Callers:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00BBC94 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     NtGdiEngEraseSurface @ 0x1C02AB850 (NtGdiEngEraseSurface.c)
 * Callees:
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00396E0 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 */

BOOL __stdcall EngEraseSurface(SURFOBJ *pso, RECTL *prcl, ULONG iColor)
{
  __int64 v6; // rax
  struct SURFACE *v7; // rbx
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v6 = SURFOBJ_TO_SURFACE(pso);
  v7 = (struct SURFACE *)v6;
  if ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v9, pso, 0LL, 0);
    vDIBSolidBlt(v7, prcl, 0LL, iColor, 0);
    LODWORD(v6) = 1;
  }
  return v6;
}
