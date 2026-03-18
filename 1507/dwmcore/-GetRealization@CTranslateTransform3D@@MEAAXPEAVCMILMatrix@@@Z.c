/*
 * XREFs of ?GetRealization@CTranslateTransform3D@@MEAAXPEAVCMILMatrix@@@Z @ 0x18005E710
 * Callers:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ @ 0x18001AEB0 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTranslateTransform3D::GetRealization(CTranslateTransform3D *this, struct CMILMatrix *a2)
{
  float v2; // xmm0_4

  *((_QWORD *)a2 + 5) = 1065353216LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *(_DWORD *)a2 = 1065353216;
  v2 = *((double *)this + 14);
  *((float *)a2 + 12) = v2;
  *((float *)a2 + 13) = *((double *)this + 15);
  *((float *)a2 + 14) = *((double *)this + 16);
}
