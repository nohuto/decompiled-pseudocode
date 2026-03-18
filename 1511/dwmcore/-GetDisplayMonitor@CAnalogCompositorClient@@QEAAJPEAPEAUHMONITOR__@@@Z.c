/*
 * XREFs of ?GetDisplayMonitor@CAnalogCompositorClient@@QEAAJPEAPEAUHMONITOR__@@@Z @ 0x18013C214
 * Callers:
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x18013BFE4 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ @ 0x18013CF58 (-EnsureAnalogDisplay@CAnalogCompositorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CAnalogCompositorClient::GetDisplayMonitor(CAnalogCompositorClient *this, HMONITOR *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, HMONITOR *))(*(_QWORD *)xmmword_1801A3FB0 + 96LL))(xmmword_1801A3FB0, a2);
}
