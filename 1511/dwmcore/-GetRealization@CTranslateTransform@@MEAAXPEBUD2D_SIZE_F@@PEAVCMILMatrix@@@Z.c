/*
 * XREFs of ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180086050
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180066850 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform::GetRealization(
        CTranslateTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  double v3; // xmm1_8
  float v4; // xmm0_4

  v3 = *((double *)this + 16);
  v4 = *((double *)this + 15);
  *((_QWORD *)a3 + 5) = 1065353216LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *(_QWORD *)((char *)a3 + 12) = 0LL;
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  *((_DWORD *)a3 + 15) = 1065353216;
  *((_DWORD *)a3 + 5) = 1065353216;
  *(_DWORD *)a3 = 1065353216;
  *((_DWORD *)a3 + 14) = 0;
  *((float *)a3 + 12) = v4;
  *((float *)a3 + 13) = v3;
}
