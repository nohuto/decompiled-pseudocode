/*
 * XREFs of ?ValidUmpdHooks@@YAHPEAVPDEVOBJ@@K@Z @ 0x1C02A98C0
 * Callers:
 *     NtGdiEngAssociateSurface @ 0x1C02AAAB0 (NtGdiEngAssociateSurface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidUmpdHooks(struct PDEVOBJ *a1, int a2)
{
  unsigned int v2; // r9d
  BOOL (__stdcall *v3)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r8

  v2 = 1;
  if ( (a2 & 1) != 0 )
    v3 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)a1 + 2864LL);
  else
    v3 = EngBitBlt;
  if ( !v3 )
    return 0;
  if ( !((a2 & 2) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*(_QWORD *)a1 + 2880LL)
       : EngStretchBlt) )
    return 0;
  if ( !((a2 & 4) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*(_QWORD *)a1 + 3280LL)
       : EngPlgBlt) )
    return 0;
  if ( !((a2 & 8) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)a1 + 2904LL)
       : EngTextOut) )
    return 0;
  if ( !((a2 & 0x20) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)a1 + 2832LL)
       : EngStrokePath) )
    return 0;
  if ( !((a2 & 0x40) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)a1 + 2840LL)
       : EngFillPath) )
    return 0;
  if ( !((a2 & 0x80u) == 0
       ? EngStrokeAndFillPath
       : *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)a1 + 2848LL)) )
    return 0;
  if ( !((a2 & 0x400) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)a1 + 2872LL)
       : EngCopyBits) )
    return 0;
  if ( !((a2 & 0x100) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)a1 + 2968LL)
       : EngLineTo) )
    return 0;
  if ( !((a2 & 0x2000) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)a1 + 3272LL)
       : EngStretchBltROP) )
    return 0;
  if ( !((a2 & 0x8000) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)a1 + 3312LL)
       : EngTransparentBlt) )
    return 0;
  if ( !((a2 & 0x10000) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)a1 + 3288LL)
       : EngAlphaBlend) )
    return 0;
  if ( !((a2 & 0x20000) != 0
       ? *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)a1 + 3264LL)
       : EngGradientFill) )
    return 0;
  return v2;
}
