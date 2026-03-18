/*
 * XREFs of ?GetPresentStatistics@CAnalogCompositorTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18013D140
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetFrameStatistics@CAnalogCompositorClient@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18013B4E0 (-GetFrameStatistics@CAnalogCompositorClient@@QEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall CAnalogCompositorTarget::GetPresentStatistics(
        CAnalogCompositorTarget *this,
        LARGE_INTEGER *a2,
        struct _UNSIGNED_RATIO *a3)
{
  LARGE_INTEGER SyncQPCTime; // rax
  struct DXGI_FRAME_STATISTICS v8; // [rsp+20h] [rbp-38h] BYREF

  CAnalogCompositorClient::GetFrameStatistics(this, &v8);
  a2->LowPart = v8.PresentCount;
  a2->HighPart = v8.PresentRefreshCount;
  a2[2].LowPart = v8.SyncRefreshCount;
  SyncQPCTime = v8.SyncQPCTime;
  a2[3] = v8.SyncQPCTime;
  a2[1] = SyncQPCTime;
  *a3 = *(struct _UNSIGNED_RATIO *)(*((_QWORD *)this + 6) + 272LL);
  return 0LL;
}
