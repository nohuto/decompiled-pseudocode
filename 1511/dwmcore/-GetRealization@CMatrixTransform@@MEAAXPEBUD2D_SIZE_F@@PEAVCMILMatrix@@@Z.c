/*
 * XREFs of ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800665C0
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800677D4 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMatrixTransform::GetRealization(
        CMatrixTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm1_4

  v3 = *((double *)this + 15);
  *(float *)a3 = v3;
  v4 = *((double *)this + 16);
  *((_QWORD *)a3 + 1) = 0LL;
  *((float *)a3 + 1) = v4;
  v5 = *((double *)this + 17);
  *((float *)a3 + 4) = v5;
  v6 = *((double *)this + 18);
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((float *)a3 + 5) = v6;
  *((float *)a3 + 12) = *((double *)this + 19);
  v7 = *((double *)this + 20);
  *((_DWORD *)a3 + 14) = 0;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((float *)a3 + 13) = v7;
}
