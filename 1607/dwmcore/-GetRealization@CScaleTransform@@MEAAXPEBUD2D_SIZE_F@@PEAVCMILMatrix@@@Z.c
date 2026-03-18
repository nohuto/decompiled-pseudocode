/*
 * XREFs of ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022AB0
 * Callers:
 *     ?GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180022EA0 (-GetRealization@CTransformGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18005B9A0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CScaleTransform::GetRealization(
        CScaleTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4

  v3 = *((double *)this + 30);
  v4 = *((double *)this + 29);
  CMILMatrix::SetScale(a3, *((double *)this + 27), *((double *)this + 28), 1.0, v4, v3, 0.0);
}
