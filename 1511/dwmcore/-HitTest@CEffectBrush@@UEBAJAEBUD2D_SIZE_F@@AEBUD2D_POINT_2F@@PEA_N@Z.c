/*
 * XREFs of ?HitTest@CEffectBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180122FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReadyToDraw@CEffectBrush@@QEBA_NXZ @ 0x180123054 (-IsReadyToDraw@CEffectBrush@@QEBA_NXZ.c)
 */

__int64 __fastcall CEffectBrush::HitTest(
        CEffectBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float y; // xmm0_4

  *a4 = 0;
  if ( a2->width != 0.0 && a2->height != 0.0 && CEffectBrush::IsReadyToDraw(this) )
  {
    y = a3->y;
    if ( y >= 0.0 && a2->height > y && a3->x >= 0.0 && a2->width > a3->x )
      *a4 = 1;
  }
  return 0LL;
}
