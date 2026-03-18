/*
 * XREFs of ?GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801579E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18005B9A0 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CScaleTransform3D::GetRealization(
        CScaleTransform3D *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4

  v3 = *((double *)this + 31);
  v4 = *((double *)this + 30);
  CMILMatrix::SetScale(
    a3,
    *((double *)this + 27),
    *((double *)this + 28),
    *((double *)this + 29),
    v4,
    v3,
    *((double *)this + 32));
}
