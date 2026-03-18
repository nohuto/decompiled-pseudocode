/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CAnalogDisplayRenderTarget@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18017FD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::CheckMultiplaneOverlaySupport(
        CAnalogDisplayRenderTarget *this,
        __int64 a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, bool *, bool *))(**((_QWORD **)this + 5) + 176LL))(
           *((_QWORD *)this + 5),
           a2,
           a3,
           a4,
           a5);
}
