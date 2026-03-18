/*
 * XREFs of ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B86C
 * Callers:
 *     ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B850 (-GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x18001DAA0 (-BreakLinksForCycles@CTransformGroup@@MEAAXXZ.c)
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

void __fastcall CTransform3DGroup::GetRealizationWorker(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // eax
  const struct D2DMatrix *Matrix; // rax

  v3 = 0LL;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_DWORD *)a3 + 10) = 1065353216;
  *((_DWORD *)a3 + 5) = 1065353216;
  *(_DWORD *)a3 = 1065353216;
  *(_QWORD *)((char *)a3 + 52) = 0LL;
  *(_QWORD *)((char *)a3 + 44) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v7 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v7;
  if ( (v7 & 6) == 2 && *((_DWORD *)this + 36) )
  {
    do
    {
      Matrix = CTransform3D::GetMatrix(*(CTransform3D **)(*((_QWORD *)this + 19) + 8 * v3), a2);
      D2DMatrixMultiply(a3, a3, Matrix);
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *((_DWORD *)this + 36) );
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
}
