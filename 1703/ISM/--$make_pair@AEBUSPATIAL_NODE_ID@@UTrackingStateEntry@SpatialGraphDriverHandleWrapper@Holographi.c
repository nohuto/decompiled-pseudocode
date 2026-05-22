/*
 * XREFs of ??$make_pair@AEBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@YA?AU?$pair@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@AEBUSPATIAL_NODE_ID@@$$QEAUTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x18008CA38
 * Callers:
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::make_pair<SPATIAL_NODE_ID const &,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>(
        __int64 a1,
        _OWORD *a2,
        __int64 a3)
{
  __int64 result; // rax

  *(_OWORD *)a1 = *a2;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a3 + 16);
  result = a1;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  return result;
}
