/*
 * XREFs of ?SetExclusiveSurface@CAnalogCompositorClient@@QEAAXPEAXIK@Z @ 0x1801275B0
 * Callers:
 *     ?PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ @ 0x180126BD4 (-PublishSurfaceUpdate@CAnalogRenderTarget@@AEAAXXZ.c)
 *     ?UnregisterSurfaceHandles@CAnalogRenderTarget@@AEAAXXZ @ 0x1801277E4 (-UnregisterSurfaceHandles@CAnalogRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAnalogCompositorClient::SetExclusiveSurface(
        CAnalogCompositorClient *this,
        void *a2,
        unsigned int a3,
        unsigned int a4)
{
  (*(void (__fastcall **)(__int64, void *, _QWORD, _QWORD))(*(_QWORD *)qword_180195FD0 + 40LL))(
    qword_180195FD0,
    a2,
    a3,
    a4);
}
