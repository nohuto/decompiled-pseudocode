/*
 * XREFs of ?vIntersectVertical@@YAXPEAVDDA_CLIPLINE@@JPEAU_POINTL@@1PEAJ@Z @ 0x1C000228C
 * Callers:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C0001474 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C00014C8 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 * Callees:
 *     ?yCompute@DDA_CLIPLINE@@QEAAJJ@Z @ 0x1C000230C (-yCompute@DDA_CLIPLINE@@QEAAJJ@Z.c)
 *     ?vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z @ 0x1C000258C (-vUnflip@DDA_CLIPLINE@@QEAAXPEAJ0@Z.c)
 */

void __fastcall vIntersectVertical(struct DDA_CLIPLINE *this, LONG a2, struct _POINTL *a3, struct _POINTL *a4, int *a5)
{
  LONG v5; // r11d
  int v9; // eax
  int *v10; // r9

  v5 = a2 - 1;
  if ( a3 )
  {
    a3->x = v5;
    v9 = DDA_CLIPLINE::yCompute(this, v5);
    v10[1] = v9;
    DDA_CLIPLINE::vUnflip(this, v10, v10 + 1);
  }
  if ( a4 )
  {
    a4->x = a2;
    a4->y = DDA_CLIPLINE::yCompute(this, a2);
    DDA_CLIPLINE::vUnflip(this, (int *)a4, &a4->y);
  }
  *a5 = v5 - *((_DWORD *)this + 8);
}
