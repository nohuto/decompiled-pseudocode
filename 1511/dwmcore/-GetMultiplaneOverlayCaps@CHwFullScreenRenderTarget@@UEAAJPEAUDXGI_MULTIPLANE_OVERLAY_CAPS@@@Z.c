/*
 * XREFs of ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180073E10
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetMultiplaneOverlayCaps(
        CHwFullScreenRenderTarget *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(**((_QWORD **)this + 4) + 168LL))(
           *((_QWORD *)this + 4),
           a2);
}
