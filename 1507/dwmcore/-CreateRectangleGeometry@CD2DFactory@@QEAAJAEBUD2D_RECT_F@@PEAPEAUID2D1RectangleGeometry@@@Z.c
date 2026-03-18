/*
 * XREFs of ?CreateRectangleGeometry@CD2DFactory@@QEAAJAEBUD2D_RECT_F@@PEAPEAUID2D1RectangleGeometry@@@Z @ 0x1800DD448
 * Callers:
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014B3AC (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DFactory::CreateRectangleGeometry(
        CD2DFactory *this,
        const struct D2D_RECT_F *a2,
        struct ID2D1RectangleGeometry **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct D2D_RECT_F *, struct ID2D1RectangleGeometry **))(**((_QWORD **)this + 3) + 40LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
