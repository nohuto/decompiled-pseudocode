/*
 * XREFs of ?SetExclusiveMode@CAnalogCompositorClient@@QEAAXH@Z @ 0x18012755C
 * Callers:
 *     ?RegisterSurfaceHandles@CAnalogRenderTarget@@AEAA_NXZ @ 0x180126C5C (-RegisterSurfaceHandles@CAnalogRenderTarget@@AEAA_NXZ.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAnalogCompositorClient::SetExclusiveMode(CAnalogCompositorClient *this, unsigned int a2)
{
  g_AnalogCompositor = a2 != 0;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_180195FD0 + 48LL))(qword_180195FD0, a2);
}
