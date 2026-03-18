/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CAnalogDisplayRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18013DA60
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::CheckMultiplaneOverlaySupport(
        CAnalogDisplayRenderTarget *this,
        unsigned int a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, bool *))(**((_QWORD **)this + 4) + 176LL))(
           *((_QWORD *)this + 4),
           a2,
           a3,
           a4);
}
