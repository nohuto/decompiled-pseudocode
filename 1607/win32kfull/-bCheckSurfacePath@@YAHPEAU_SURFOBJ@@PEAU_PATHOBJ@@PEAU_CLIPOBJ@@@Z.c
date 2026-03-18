/*
 * XREFs of ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABB18
 * Callers:
 *     NtGdiEngFillPath @ 0x1C02ADB60 (NtGdiEngFillPath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02AF350 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02AF6D0 (NtGdiEngStrokePath.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall bCheckSurfacePath(struct _SURFOBJ *a1, struct _PATHOBJ *a2, struct _CLIPOBJ *a3)
{
  unsigned int v4; // r9d
  RECTL *p_rclBounds; // rcx
  __int64 v6; // rax
  LONG right; // edx
  __int128 v9; // [rsp+0h] [rbp-28h] BYREF

  v4 = 1;
  if ( !a1 || !a2 )
    return 0;
  if ( a3 && a3->iDComplexity )
  {
    p_rclBounds = &a3->rclBounds;
    if ( a3 == (struct _CLIPOBJ *)-4LL )
      return v4;
  }
  else
  {
    p_rclBounds = (RECTL *)&v9;
    v6 = 0LL;
    v9 = *(_OWORD *)(*(_QWORD *)&a2[1] + 48LL);
    do
      *((int *)&v9 + v6++) >>= 4;
    while ( v6 < 4 );
  }
  right = p_rclBounds->right;
  if ( p_rclBounds->left > right || p_rclBounds->top > p_rclBounds->bottom )
  {
    v4 = 0;
  }
  else if ( right > a1->sizlBitmap.cx )
  {
    return 0;
  }
  if ( p_rclBounds->left < 0 || p_rclBounds->bottom > a1->sizlBitmap.cy || p_rclBounds->top < 0 )
    return 0;
  return v4;
}
