/*
 * XREFs of ??DMatrix4x4F@D2D1@@QEBA?AV01@AEBV01@@Z @ 0x180088F5C
 * Callers:
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089E60 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall D2D1::Matrix4x4F::operator*(
        struct D2D1::Matrix4x4F *a1,
        D2D1::Matrix4x4F *this,
        const struct D2D1::Matrix4x4F *a3)
{
  *(_DWORD *)this = 1065353216;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 9) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)((char *)this + 20) = 1065353216LL;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_DWORD *)this + 15) = 1065353216;
  D2D1::Matrix4x4F::SetProduct(this, a1, a3);
}
