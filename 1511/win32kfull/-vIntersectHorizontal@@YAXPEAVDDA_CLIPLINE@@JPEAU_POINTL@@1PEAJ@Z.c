/*
 * XREFs of ?vIntersectHorizontal@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C02C8820
 * Callers:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C02C8400 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C02C88C4 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 * Callees:
 *     ?vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z @ 0x1C02C8988 (-vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z.c)
 */

void __fastcall vIntersectHorizontal(unsigned __int64 this, LONG a2, struct _POINTL *a3, struct _POINTL *a4, int *a5)
{
  DDA_CLIPLINE *v6; // r11
  __int64 v9; // rax
  LONG v10; // r10d
  LONG *p_y; // r8

  v6 = (DDA_CLIPLINE *)this;
  v9 = *(int *)(this + 16) * (__int64)(a2 - *(_DWORD *)(this + 8)) - *(_QWORD *)(this + 24) - 1;
  if ( v9 >= 0xFFFFFFFFLL )
    this = v9 / (unsigned __int64)*(unsigned int *)(this + 12);
  else
    LODWORD(this) = (unsigned int)v9 / *(_DWORD *)(this + 12);
  v10 = this + *((_DWORD *)v6 + 1);
  if ( a3 )
  {
    a3->x = v10;
    p_y = &a3->y;
    *p_y = a2 - 1;
    DDA_CLIPLINE::vUnflip(v6, (int *)a3, p_y);
  }
  if ( a4 )
  {
    a4->x = v10 + 1;
    a4->y = a2;
    DDA_CLIPLINE::vUnflip(v6, (int *)a4, &a4->y);
  }
  *a5 = v10 - *((_DWORD *)v6 + 8);
}
