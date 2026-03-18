/*
 * XREFs of ?GetFrameStatistics@CAnalogCompositorClient@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18013B4E0
 * Callers:
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x18013B60C (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 *     ?UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ @ 0x18013BA74 (-UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ.c)
 *     ?GetPresentStatistics@CAnalogCompositorTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18013D140 (-GetPresentStatistics@CAnalogCompositorTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CAnalogCompositorClient::GetFrameStatistics(
        CAnalogCompositorClient *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)xmmword_1801A3FB0 + 88LL))(
           xmmword_1801A3FB0,
           a2);
}
