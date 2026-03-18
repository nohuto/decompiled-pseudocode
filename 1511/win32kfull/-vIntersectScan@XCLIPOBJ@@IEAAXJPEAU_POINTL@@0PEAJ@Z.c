/*
 * XREFs of ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C02C88C4
 * Callers:
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02C8024 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C02C84D4 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02C8820 (-vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02C8908 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 */

void __fastcall XCLIPOBJ::vIntersectScan(XCLIPOBJ *this, int a2, struct _POINTL *a3, struct _POINTL *a4, int *a5)
{
  struct DDA_CLIPLINE *v5; // rcx

  v5 = (struct DDA_CLIPLINE *)(*((_QWORD *)this + 18) + 64LL);
  if ( (*(_DWORD *)v5 & 8) != 0 )
    a2 = 1 - a2;
  if ( (*(_DWORD *)v5 & 5) != 0 )
    vIntersectVertical(v5, a2, a3, a4, a5);
  else
    vIntersectHorizontal((unsigned __int64)v5, a2, a3, a4, a5);
}
