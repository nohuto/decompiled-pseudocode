/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CAnalogDisplayRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x180140120
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::CheckMultiplaneOverlaySupport(
        CAnalogDisplayRenderTarget *this,
        unsigned int a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, bool *))(**((_QWORD **)this + 4) + 168LL))(
           *((_QWORD *)this + 4),
           a2,
           a3,
           a4);
}
