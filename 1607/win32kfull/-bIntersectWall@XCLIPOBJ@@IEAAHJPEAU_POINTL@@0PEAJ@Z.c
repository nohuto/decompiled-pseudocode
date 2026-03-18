/*
 * XREFs of ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C02CBB00
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C02CB3B4 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02CB724 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02CBA84 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C02CBBD4 (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     ?vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02CBF20 (-vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 *     ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02CC008 (-vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z.c)
 */

__int64 __fastcall XCLIPOBJ::bIntersectWall(XCLIPOBJ *this, int a2, struct _POINTL *a3, struct _POINTL *a4, int *a5)
{
  __int64 v5; // r10
  int v6; // ecx

  v5 = *((_QWORD *)this + 18);
  v6 = *(_DWORD *)(v5 + 64);
  if ( (v6 & 0x20) != 0 )
    a2 = 1 - a2;
  if ( (v6 & 5) != 0 )
    vIntersectHorizontal((struct DDA_CLIPLINE *)(v5 + 64), a2, a3, a4, a5);
  else
    vIntersectVertical((struct DDA_CLIPLINE *)(v5 + 64), a2, a3, a4, a5);
  return 1LL;
}
