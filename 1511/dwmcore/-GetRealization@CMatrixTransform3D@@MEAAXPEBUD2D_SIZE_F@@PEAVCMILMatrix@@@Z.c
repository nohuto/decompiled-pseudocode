/*
 * XREFs of ?GetRealization@CMatrixTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180068540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMatrixTransform3D::GetRealization(
        CMatrixTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 120);
  *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + 136);
  *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + 152);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + 168);
}
