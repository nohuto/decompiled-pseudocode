/*
 * XREFs of ?UpdateFrameStatistics@CAnalogExclusiveView@@QEAAXPEBUDXGI_FRAME_STATISTICS@@@Z @ 0x18013BA0C
 * Callers:
 *     ?Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18013AFB0 (-Analog_UpdateFrameStatistics@@YAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x18013B60C (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 * Callees:
 *     ?RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x18002F594 (-RecordOutOfFrameDirectFlipStats@CCompositionSurfaceInfo@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CAnalogExclusiveView::UpdateFrameStatistics(
        CAnalogExclusiveView *this,
        const struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v2; // rcx
  __int128 v3; // xmm1
  struct DXGI_FRAME_STATISTICS v4; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_QWORD *)this + 8);
  v3 = *(_OWORD *)&a2->SyncQPCTime.LowPart;
  *(_OWORD *)&v4.PresentCount = *(_OWORD *)&a2->PresentCount;
  *(_OWORD *)&v4.SyncQPCTime.LowPart = v3;
  if ( v2 )
    v2 = *(_QWORD *)(v2 + 440);
  if ( v2 )
  {
    v4.PresentCount = *(_DWORD *)(v2 + 72);
    CCompositionSurfaceInfo::RecordOutOfFrameDirectFlipStats((CCompositionSurfaceInfo *)v2, *(_QWORD *)(v2 + 56), &v4);
  }
}
