/*
 * XREFs of ?GetRealization@CMatrixTransform3D@@MEAAXPEAVCMILMatrix@@@Z @ 0x18005F410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMatrixTransform3D::GetRealization(CMatrixTransform3D *this, struct CMILMatrix *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 104);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 120);
  *((_OWORD *)a2 + 2) = *(_OWORD *)((char *)this + 136);
  *((_OWORD *)a2 + 3) = *(_OWORD *)((char *)this + 152);
}
