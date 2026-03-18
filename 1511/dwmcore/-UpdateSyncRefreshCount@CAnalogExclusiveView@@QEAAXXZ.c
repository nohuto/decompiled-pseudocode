/*
 * XREFs of ?UpdateSyncRefreshCount@CAnalogExclusiveView@@QEAAXXZ @ 0x18013BA74
 * Callers:
 *     ?ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ @ 0x18013B2A8 (-ActivateSwapChain@CAnalogExclusiveView@@AEAAJXZ.c)
 *     ?WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ @ 0x18013BB54 (-WaitForSurfaceUpdate@CAnalogExclusiveView@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetFrameStatistics@CAnalogCompositorClient@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18013B4E0 (-GetFrameStatistics@CAnalogCompositorClient@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 */

void __fastcall CAnalogExclusiveView::UpdateSyncRefreshCount(CAnalogExclusiveView *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-38h] BYREF
  DXGI_FRAME_STATISTICS v3; // [rsp+28h] [rbp-30h] BYREF

  CAnalogCompositorClient::GetFrameStatistics(this, &v3);
  QueryPerformanceCounter(&PerformanceCount);
  *((_DWORD *)this + 24) = v3.SyncRefreshCount
                         + (PerformanceCount.QuadPart - v3.SyncQPCTime.QuadPart) / *((__int64 *)this + 13);
}
