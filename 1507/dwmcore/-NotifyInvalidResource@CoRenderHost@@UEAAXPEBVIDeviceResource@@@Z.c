/*
 * XREFs of ?NotifyInvalidResource@CoRenderHost@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800E7FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1800E8024 (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 */

void __fastcall CoRenderHost::NotifyInvalidResource(CoRenderHost *this, const struct IDeviceResource *a2)
{
  CoRenderHost::ReleaseResources((CoRenderHost *)((char *)this - 8));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 104LL))(*((_QWORD *)this + 2));
}
