/*
 * XREFs of ?vPanningUpdate@@YAXPEAU_PANDEV@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C028A210
 * Callers:
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0287AB0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0287C10 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0288600 (-PanGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z @ 0x1C0288920 (-PanMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@@Z.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0288A90 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0288BE0 (-PanStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0288D50 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0289080 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C02891E0 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?vUnLock@PANDEVLOCK@@QEAAXXZ @ 0x1C028A364 (-vUnLock@PANDEVLOCK@@QEAAXXZ.c)
 */

void __fastcall vPanningUpdate(struct _PANDEV *a1, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  int left; // r9d
  LONG bottom; // ecx
  int top; // r8d
  LONG right; // edx
  bool v9; // cc
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  HSEMAPHORE v13; // [rsp+38h] [rbp-28h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-20h] BYREF

  if ( a3 && a3->iDComplexity )
  {
    left = a2->left;
    bottom = a2->bottom;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    top = a2->top;
    right = a2->right;
    if ( a3->rclBounds.top > top )
      top = a3->rclBounds.top;
    v9 = a3->rclBounds.right < right;
    v14.left = left;
    if ( v9 )
      right = a3->rclBounds.right;
    v9 = a3->rclBounds.bottom < bottom;
    v14.top = top;
    if ( v9 )
      bottom = a3->rclBounds.bottom;
    v14.bottom = bottom;
    v14.right = right;
  }
  else
  {
    v14 = *a2;
    bottom = v14.bottom;
    right = v14.right;
    top = v14.top;
    left = v14.left;
  }
  if ( *((_QWORD *)a1 + 10) )
  {
    left >>= 1;
    top >>= 1;
    v14.left = left;
    right = (right + 1) >> 1;
    v14.top = top;
    bottom = (bottom + 1) >> 1;
    v14.bottom = bottom;
    v14.right = right;
  }
  if ( left < right && top < bottom )
  {
    v13 = (HSEMAPHORE)*((_QWORD *)a1 + 15);
    EngAcquireSemaphore(v13);
    v12 = *((_QWORD *)a1 + 13);
    v10 = *((_QWORD *)a1 + 12);
    v11 = *((_QWORD *)a1 + 11);
    RGNOBJ::vSet((RGNOBJ *)&v12, &v14);
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v10, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v12, BYTE2(gafjRgnOp)) )
      RGNOBJ::vSet((RGNOBJ *)&v10);
    *((_QWORD *)a1 + 12) = v11;
    *((_QWORD *)a1 + 11) = v10;
    *((_DWORD *)a1 + 28) = 1;
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v13);
  }
}
