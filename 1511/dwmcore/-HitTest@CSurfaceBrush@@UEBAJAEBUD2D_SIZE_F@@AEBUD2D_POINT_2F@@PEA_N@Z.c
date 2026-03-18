/*
 * XREFs of ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180122250
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@PEAU3@@Z @ 0x1801216B0 (-CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT.c)
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x180121CB0 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@QEBA_NXZ @ 0x180122304 (-IsReadyToDraw@CSurfaceBrush@@QEBA_NXZ.c)
 */

__int64 __fastcall CSurfaceBrush::HitTest(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  struct D2D_RECT_F v9; // [rsp+30h] [rbp-18h] BYREF

  *a4 = 0;
  if ( a2->width != 0.0
    && a2->height != 0.0
    && CSurfaceBrush::IsReadyToDraw(this)
    && (int)CSurfaceBrush::CalculateDestinationRect(this, a2, 0LL, &v9, 0LL) >= 0 )
  {
    *a4 = Contains(&v9, a3);
  }
  return 0LL;
}
