/*
 * XREFs of ?HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180145160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CYCbCrSurface::HitTest(
        CYCbCrSurface *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  CCompositionSurfaceBitmap *v4; // rcx
  __int64 result; // rax

  v4 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 14);
  result = 0LL;
  if ( v4 )
    return CCompositionSurfaceBitmap::HitTest(v4, a2, a3, a4);
  *a4 = 0;
  return result;
}
