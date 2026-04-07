/*
 * XREFs of ?GetMirrorTransform@CVisual@@MEAAXPEAUD2DMatrix@@@Z @ 0x180076730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVisual::GetMirrorTransform(CVisual *this, struct D2DMatrix *a2)
{
  *(_DWORD *)a2 = -1082130432;
  *(_QWORD *)((char *)a2 + 44) = 0LL;
  *(_QWORD *)((char *)a2 + 52) = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *(_QWORD *)((char *)a2 + 12) = 0LL;
  *(_QWORD *)((char *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 15) = 1065353216;
  *((_DWORD *)a2 + 10) = 1065353216;
  *((_DWORD *)a2 + 5) = 1065353216;
  *((float *)a2 + 12) = (double)*((int *)this + 28) / *((double *)this + 20);
}
