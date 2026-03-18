/*
 * XREFs of ?GetRealization@CMatrixTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800221B0
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
  __int128 v3; // xmm3
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  v3 = *(_OWORD *)((char *)this + 232);
  v4 = *(_OWORD *)((char *)this + 248);
  v5 = *(_OWORD *)((char *)this + 264);
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 216);
  *((_OWORD *)a3 + 1) = v3;
  *((_OWORD *)a3 + 2) = v4;
  *((_OWORD *)a3 + 3) = v5;
  *((_DWORD *)a3 + 16) = 0;
}
