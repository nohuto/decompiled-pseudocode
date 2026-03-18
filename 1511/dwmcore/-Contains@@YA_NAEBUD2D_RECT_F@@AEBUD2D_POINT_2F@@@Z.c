/*
 * XREFs of ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x180121CB0
 * Callers:
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180122250 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Contains(const struct D2D_RECT_F *a1, const struct D2D_POINT_2F *a2)
{
  float y; // xmm1_4
  _BOOL8 result; // rax

  result = 0;
  if ( a2->x >= a1->left && a1->right > a2->x )
  {
    y = a2->y;
    if ( y >= a1->top && a1->bottom > y )
      return 1;
  }
  return result;
}
