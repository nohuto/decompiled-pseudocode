/*
 * XREFs of ?NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z @ 0x180104070
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1801040B4 (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 */

void __fastcall CoRenderHost::NotifyInvalidResource(CoRenderHost *this, const struct IDeviceResource *a2)
{
  CoRenderHost::ReleaseResources((CoRenderHost *)((char *)this - 8));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 104LL))(*((_QWORD *)this + 2));
}
