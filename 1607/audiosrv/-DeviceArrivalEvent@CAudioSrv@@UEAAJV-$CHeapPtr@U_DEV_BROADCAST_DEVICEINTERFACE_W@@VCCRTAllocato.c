/*
 * XREFs of ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800524E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x180083B40 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::DeviceArrivalEvent(__int64 a1, void **a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = 0;
  if ( (unsigned int)IsMmeAudioInterfaceArrivalSupported(a1) )
  {
    RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
    _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoShared + 1, 1u);
    _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoActual + 1, 1u);
    RtlReleaseResource(&PnpInfoResource);
  }
  if ( (int)FlushDeviceTopologyCache(v4) < 0 )
    v3 = 1;
  KsNotifications_AudioInterfaceArrival((const unsigned __int16 *)*a2 + 14);
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(a2);
  return v3;
}
