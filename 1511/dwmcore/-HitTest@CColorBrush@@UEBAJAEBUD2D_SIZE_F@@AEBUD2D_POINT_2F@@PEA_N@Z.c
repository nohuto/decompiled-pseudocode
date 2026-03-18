/*
 * XREFs of ?HitTest@CColorBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180121130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorBrush::HitTest(
        CColorBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float height; // xmm1_4
  float y; // xmm2_4
  bool v6; // al

  *a4 = 0;
  if ( a2->width != 0.0 )
  {
    height = a2->height;
    if ( height != 0.0 )
    {
      y = a3->y;
      if ( y >= 0.0 && height > y && a3->x >= 0.0 )
      {
        v6 = *a4;
        if ( a2->width > a3->x )
          v6 = 1;
        *a4 = v6;
      }
    }
  }
  return 0LL;
}
