/*
 * XREFs of ?GetRealization@CTransform3DGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18000FFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 */

void __fastcall CTransform3DGroup::GetRealization(CTransform3DGroup *this, struct CMILMatrix *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // eax
  const struct D2DMatrix *Matrix; // rax

  v2 = 0LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 10) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  *(_QWORD *)((char *)a2 + 52) = 0LL;
  *(_QWORD *)((char *)a2 + 44) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  v5 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v5;
  if ( (v5 & 6) == 2 && *((_DWORD *)this + 32) )
  {
    do
    {
      Matrix = CTransform3D::GetMatrix(*(CTransform3D **)(*((_QWORD *)this + 17) + 8 * v2));
      D2DMatrixMultiply(a2, a2, Matrix);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 32) );
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
}
