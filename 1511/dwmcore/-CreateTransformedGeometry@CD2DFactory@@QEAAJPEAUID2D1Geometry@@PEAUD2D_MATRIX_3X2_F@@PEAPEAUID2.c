/*
 * XREFs of ?CreateTransformedGeometry@CD2DFactory@@QEAAJPEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@PEAPEAUID2D1TransformedGeometry@@@Z @ 0x18001C62C
 * Callers:
 *     ?CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18001C4DC (-CopyComplex@CComplexShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CD2DFactory::CreateTransformedGeometry(
        CD2DFactory *this,
        struct ID2D1Geometry *a2,
        struct D2D_MATRIX_3X2_F *a3,
        struct ID2D1TransformedGeometry **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry *, struct D2D_MATRIX_3X2_F *, struct ID2D1TransformedGeometry **))(**((_QWORD **)this + 3) + 72LL))(
           *((_QWORD *)this + 3),
           a2,
           a3,
           a4);
}
