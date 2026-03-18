/*
 * XREFs of ?RequiresNearPlaneClipping@@YA_NAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@@Z @ 0x180125CF0
 * Callers:
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x180125D84 (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RequiresNearPlaneClipping(const struct D2D_MATRIX_4X4_F *a1, const struct D2D_RECT_F *a2)
{
  float _24; // xmm3_4
  float _14; // xmm2_4
  float _44; // xmm4_4

  _24 = a1->_24;
  _14 = a1->_14;
  _44 = a1->_44;
  return (float)((float)((float)(_14 * a2->left) + (float)(_24 * a2->top)) + _44) <= 0.000099999997
      || (float)((float)((float)(_14 * a2->left) + (float)(_24 * a2->bottom)) + _44) <= 0.000099999997
      || (float)((float)((float)(_24 * a2->top) + (float)(_14 * a2->right)) + _44) <= 0.000099999997
      || (float)((float)((float)(_14 * a2->right) + (float)(_24 * a2->bottom)) + _44) <= 0.000099999997;
}
