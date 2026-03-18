/*
 * XREFs of ?GetRealization@CMatrixTransform@@MEAAXPEAVCMILMatrix@@@Z @ 0x180017E40
 * Callers:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x180034EC0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMatrixTransform::GetRealization(CMatrixTransform *this, struct CMILMatrix *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  float v6; // xmm1_4

  v2 = *((double *)this + 13);
  *(float *)a2 = v2;
  v3 = *((double *)this + 14);
  *((_QWORD *)a2 + 1) = 0LL;
  *((float *)a2 + 1) = v3;
  v4 = *((double *)this + 15);
  *((float *)a2 + 4) = v4;
  v5 = *((double *)this + 16);
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((float *)a2 + 5) = v5;
  *((float *)a2 + 12) = *((double *)this + 17);
  v6 = *((double *)this + 18);
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((float *)a2 + 13) = v6;
}
