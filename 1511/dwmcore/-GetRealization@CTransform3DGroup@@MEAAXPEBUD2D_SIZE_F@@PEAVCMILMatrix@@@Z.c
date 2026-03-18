/*
 * XREFs of ?GetRealization@CTransform3DGroup@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B850
 * Callers:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004B150 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTransform3DGroup::GetRealization(
        CTransform3DGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  _OWORD *v3; // rax

  v3 = (_OWORD *)*((_QWORD *)this + 20);
  if ( v3 )
  {
    *(_OWORD *)a3 = *v3;
    *((_OWORD *)a3 + 1) = v3[1];
    *((_OWORD *)a3 + 2) = v3[2];
    *((_OWORD *)a3 + 3) = v3[3];
  }
  else
  {
    CTransform3DGroup::GetRealizationWorker(this, a2, a3);
  }
}
