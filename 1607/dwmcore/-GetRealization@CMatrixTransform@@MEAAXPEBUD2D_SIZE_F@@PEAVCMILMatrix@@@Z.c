/*
 * XREFs of ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800243A0
 * Callers:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180023F98 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18005BB80 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CMatrixTransform::GetRealization(
        CMatrixTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4

  v3 = *((double *)this + 31);
  v4 = *((double *)this + 30);
  CMILMatrix::Set2DAffineMatrix(
    a3,
    *((double *)this + 27),
    *((double *)this + 28),
    *((double *)this + 29),
    v4,
    v3,
    *((double *)this + 32));
}
