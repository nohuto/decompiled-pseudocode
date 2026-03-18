/*
 * XREFs of ?GetRealization@CTranslateTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x180017FB0
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z @ 0x18001A2D0 (-GetRealization@CTransformGroup@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform::GetRealization(CTranslateTransform *this, struct CMILMatrix *a2)
{
  double v2; // xmm1_8
  float v3; // xmm0_4

  v2 = *((double *)this + 14);
  v3 = *((double *)this + 13);
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  *((_DWORD *)a2 + 14) = 0;
  *((float *)a2 + 12) = v3;
  *((float *)a2 + 13) = v2;
}
