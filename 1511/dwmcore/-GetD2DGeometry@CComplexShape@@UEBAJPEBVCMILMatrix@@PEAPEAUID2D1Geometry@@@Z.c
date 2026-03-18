/*
 * XREFs of ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800B0350
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CComplexShape::GetD2DGeometry(
        CComplexShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 v3; // rdi

  *a3 = (struct ID2D1Geometry *)*((_QWORD *)this + 1);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, const struct CMILMatrix *))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 1), a2);
  return 0LL;
}
