/*
 * XREFs of ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x18013ABD0
 * Callers:
 *     ?CalculateDestinationRectAlignment@CSurfaceBrush@@AEBAXAEBUD2D_SIZE_F@@0PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180121AE8 (-CalculateDestinationRectAlignment@CSurfaceBrush@@AEBAXAEBUD2D_SIZE_F@@0PEAUD2D_RECT_F@@PEAUD2D_.c)
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall StretchAlign::Arrange(
        StretchAlign *this,
        struct D2D_RECT_F *__return_ptr retstr,
        const struct D2D_SIZE_F *a3,
        const struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5)
{
  int v5; // r10d
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  struct D2D_RECT_F v10; // xmm0
  float v11; // xmm2_4
  float v12; // xmm5_4
  float width; // xmm4_4
  float height; // xmm0_4
  struct D2D_RECT_F *result; // rax
  struct D2D_RECT_F v16; // [rsp+0h] [rbp-40h]
  struct D2D_RECT_F v17; // [rsp+0h] [rbp-40h]
  struct D2D_RECT_F v18; // [rsp+10h] [rbp-30h]

  v5 = *((_DWORD *)this + 2);
  v6 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  if ( !v5 )
  {
    LODWORD(v8) = HIDWORD(*(unsigned __int64 *)a3);
    LODWORD(v7) = *(const struct D2D_SIZE_F *)&a3->width;
LABEL_9:
    v11 = (float)(a4->height - v8) * *((float *)this + 1);
    v12 = (float)(a4->width - v7) * *(float *)this;
    *(_QWORD *)&v17.left = __PAIR64__(LODWORD(v11), LODWORD(v12));
    width = v12 + v7;
    height = v11 + v8;
    v17.right = width;
    v17.bottom = v11 + v8;
    if ( a4->height <= (float)(v11 + v8) )
      height = a4->height;
    if ( a4->width <= width )
      width = a4->width;
    if ( v11 < 0.0 )
      v11 = 0.0;
    if ( v12 >= 0.0 )
      v6 = v12;
    *(_QWORD *)&v18.left = __PAIR64__(LODWORD(v11), LODWORD(v6));
    *(_QWORD *)&v18.right = __PAIR64__(LODWORD(height), LODWORD(width));
    if ( a5 )
      *a5 = v17;
    v10 = v18;
    goto LABEL_20;
  }
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      v9 = a3->width / a3->height;
      v7 = a4->width;
      v8 = a4->width / v9;
      if ( v8 >= a4->height != (v5 == 3) )
      {
        v8 = a4->height;
        v7 = v8 * v9;
      }
    }
    goto LABEL_9;
  }
  *(_QWORD *)&v16.left = 0LL;
  *(struct D2D_SIZE_F *)&v16.right = *a4;
  v10 = v16;
  if ( a5 )
    *a5 = v16;
LABEL_20:
  result = retstr;
  *retstr = v10;
  return result;
}
