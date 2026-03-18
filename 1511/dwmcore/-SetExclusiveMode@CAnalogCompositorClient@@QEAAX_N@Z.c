/*
 * XREFs of ?SetExclusiveMode@CAnalogCompositorClient@@QEAAX_N@Z @ 0x18013B958
 * Callers:
 *     ?DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ @ 0x18013B3E4 (-DeactivateSwapChain@CAnalogExclusiveView@@AEAAXXZ.c)
 *     ?RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ @ 0x18013B81C (-RegisterSurfaceHandles@CAnalogExclusiveView@@AEAA_NXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CAnalogCompositorClient::SetExclusiveMode(CAnalogCompositorClient *this, __int64 a2)
{
  g_AnalogCompositor = a2;
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)xmmword_1801A3FB0 + 48LL))(xmmword_1801A3FB0, a2);
}
