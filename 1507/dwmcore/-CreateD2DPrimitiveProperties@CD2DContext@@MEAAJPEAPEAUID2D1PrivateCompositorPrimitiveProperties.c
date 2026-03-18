/*
 * XREFs of ?CreateD2DPrimitiveProperties@CD2DContext@@MEAAJPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x180135260
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::CreateD2DPrimitiveProperties(
        CD2DContext *this,
        struct ID2D1PrivateCompositorPrimitiveProperties **a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorPrimitiveProperties **))(**((_QWORD **)this + 6)
                                                                                                + 40LL))(
           *((_QWORD *)this + 6),
           a2);
}
