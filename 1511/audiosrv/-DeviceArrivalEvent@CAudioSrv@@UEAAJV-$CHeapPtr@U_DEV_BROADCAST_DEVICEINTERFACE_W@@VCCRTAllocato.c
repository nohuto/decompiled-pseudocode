/*
 * XREFs of ?DeviceArrivalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180067E50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z @ 0x18009B414 (-KsNotifications_AudioInterfaceArrival@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CAudioSrv::DeviceArrivalEvent(__int64 a1, void **a2)
{
  __int64 v3; // rcx
  BOOL v4; // ebx

  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoShared + 1, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoActual + 1, 1u);
  RtlReleaseResource(&PnpInfoResource);
  v4 = (int)FlushDeviceTopologyCache(v3) < 0;
  KsNotifications_AudioInterfaceArrival((const unsigned __int16 *)*a2 + 14);
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(a2);
  return v4;
}
