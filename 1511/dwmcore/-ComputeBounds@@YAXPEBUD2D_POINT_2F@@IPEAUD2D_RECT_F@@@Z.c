/*
 * XREFs of ?ComputeBounds@@YAXPEBUD2D_POINT_2F@@IPEAUD2D_RECT_F@@@Z @ 0x1800171D0
 * Callers:
 *     ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x180017020 (-Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ComputeBounds(const struct D2D_POINT_2F *a1, __int64 a2, struct D2D_RECT_F *a3)
{
  float x; // xmm1_4
  __int64 v4; // rax
  float y; // xmm2_4
  float *p_y; // rcx
  float v7; // xmm0_4
  float v8; // xmm0_4

  x = a1->x;
  v4 = 3LL;
  y = a1->y;
  p_y = &a1[1].y;
  a3->right = x;
  a3->left = x;
  a3->bottom = y;
  a3->top = y;
  do
  {
    v7 = *(p_y - 1);
    if ( x > v7 )
    {
      x = *(p_y - 1);
    }
    else if ( v7 > a3->right )
    {
      a3->right = v7;
    }
    v8 = *p_y;
    if ( y > *p_y )
    {
      y = *p_y;
    }
    else if ( v8 > a3->bottom )
    {
      a3->bottom = v8;
    }
    p_y += 2;
    --v4;
  }
  while ( v4 );
  a3->left = x;
  a3->top = y;
}
