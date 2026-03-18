/*
 * XREFs of ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_4X4_F@@@Z @ 0x1801461C0
 * Callers:
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1801467A0 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 * Callees:
 *     <none>
 */

CMILMatrix *__fastcall CMILMatrix::CMILMatrix(CMILMatrix *this, const struct D2D_MATRIX_4X4_F *a2)
{
  FLOAT _44; // eax

  if ( a2 )
  {
    *(_OWORD *)this = *(_OWORD *)&a2->_11;
    *((_OWORD *)this + 1) = *(_OWORD *)&a2->m[1][0];
    *((_OWORD *)this + 2) = *(_OWORD *)&a2->m[2][0];
    *((_QWORD *)this + 6) = *(_QWORD *)&a2->m[3][0];
    *((_DWORD *)this + 14) = LODWORD(a2->_43);
    _44 = a2->_44;
  }
  else
  {
    *(_QWORD *)((char *)this + 52) = 0LL;
    *(_QWORD *)((char *)this + 44) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *(_QWORD *)((char *)this + 12) = 0LL;
    *(_QWORD *)((char *)this + 4) = 0LL;
    _44 = 1.0;
    *((_DWORD *)this + 10) = 1065353216;
    *((_DWORD *)this + 5) = 1065353216;
    *(_DWORD *)this = 1065353216;
  }
  *((FLOAT *)this + 15) = _44;
  return this;
}
