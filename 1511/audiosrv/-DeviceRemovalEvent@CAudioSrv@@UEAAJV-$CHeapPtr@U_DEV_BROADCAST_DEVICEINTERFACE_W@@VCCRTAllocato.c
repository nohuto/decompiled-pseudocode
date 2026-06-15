/*
 * XREFs of ?DeviceRemovalEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x180067EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180066500 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x18009B574 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::DeviceRemovalEvent(__int64 a1, void **a2)
{
  unsigned int v3; // edi
  __int64 v4; // rcx

  v3 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x20) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30LL,
      &WPP_37d224ffc57d66a46fb94c867bf1aa0a_Traceguids,
      (char *)*a2 + 28);
  }
  RtlAcquireResourceExclusive(&PnpInfoResource, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoShared + 1, 1u);
  _InterlockedAdd((volatile signed __int32 *)g_pPnpInfoActual + 1, 1u);
  RtlReleaseResource(&PnpInfoResource);
  KsNotifications_AudioInterfaceRemoval((const unsigned __int16 *)*a2 + 14);
  if ( (int)FlushDeviceTopologyCache(v4) < 0 )
    v3 = 1;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>(a2);
  return v3;
}
