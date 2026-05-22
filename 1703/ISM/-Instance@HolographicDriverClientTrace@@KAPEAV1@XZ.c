/*
 * XREFs of ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x180088CD0 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING.c)
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x180088E60 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJ.c)
 *     ?DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x1800890B0 (-DeleteStaticNodes@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJW4SPATIAL_GRAPH_D.c)
 *     ?SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x1800895E0 (-SetStaticNodeDurability@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL.c)
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x1800896B0 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x180089780 (-GetSittingStandingOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 *     ?OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x18008A0F0 (-OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@PEAV?$shared_ptr@VGetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@@std@@@Z @ 0x18008A2A0 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@@Z @ 0x18008A740 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NOD.c)
 *     _lambda_f8380620b3870a98be7ea388687506c5_::operator() @ 0x18008AD1C (_lambda_f8380620b3870a98be7ea388687506c5_--operator().c)
 *     ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x18008B3AC (--1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ?CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18008B460 (-CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJ.c)
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@012@@Z @ 0x18008D670 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 *     ?StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18008E924 (-StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDri.c)
 *     ?SpatialGraphDeviceNotUsable_@HolographicDriverClientTrace@@QEAAXPEB_W@Z @ 0x18008F0BC (-SpatialGraphDeviceNotUsable_@HolographicDriverClientTrace@@QEAAXPEB_W@Z.c)
 *     ?SpatialGraphNodeReferenceFactoryDestroyed_@HolographicDriverClientTrace@@QEAAXPEBX@Z @ 0x18008F164 (-SpatialGraphNodeReferenceFactoryDestroyed_@HolographicDriverClientTrace@@QEAAXPEBX@Z.c)
 *     ?SpatialGraphNodeReferenceFactoryCreated_@HolographicDriverClientTrace@@QEAAXPEBX@Z @ 0x18008F1F0 (-SpatialGraphNodeReferenceFactoryCreated_@HolographicDriverClientTrace@@QEAAXPEBX@Z.c)
 *     ?StopTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008F5D4 (-StopTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z.c)
 *     ?StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z @ 0x18008F680 (-StartTracking_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@@Z.c)
 *     ?GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x18008F73C (-GetSittingStandingOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z.c)
 *     ?GetForwardOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z @ 0x18008F7F8 (-GetForwardOnly_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@_N@Z.c)
 *     ?SetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_STATIC_NODE_DURABILITY@@@Z @ 0x18008F8B4 (-SetStaticNodeDurability_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@.c)
 *     ?DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STATIC_NODE_OPERATION@@KPEBUSPATIAL_NODE_ID@@@Z @ 0x18008FB54 (-DeleteStaticNodes_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@W4SPATIAL_GRAPH_DELETE_STA.c)
 *     ?GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18008FC4C (-GetDynamicNodeTrackingCapabilities_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@AEBUSPATI.c)
 *     ?GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x18008FD20 (-GetDynamicNodeForDevice_@HolographicDriverClientTrace@@QEAAXPEBXAEBU_GUID@@PEB_WAEBUDynamicNode.c)
 *     ?TelemetryFirstValidPose_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z @ 0x18008FEE4 (-TelemetryFirstValidPose_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z.c)
 *     ??$Telemetry_GetPoseAtTime_CountsByPredictionType@$02@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@IAEAY02$$CBW4TracePredictionType@@AEAY02$$CBI@Z @ 0x18008FFB0 (--$Telemetry_GetPoseAtTime_CountsByPredictionType@$02@HolographicDriverClientTrace@@SAXAEBU_GUID.c)
 *     ??$Telemetry_GetPoseAtTime_CountsByExecutionTime@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@IAEAY04$$CBMAEAY05$$CBI@Z @ 0x1800900FC (--$Telemetry_GetPoseAtTime_CountsByExecutionTime@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@.c)
 *     ??$Telemetry_GetPoseAtTime_CountsByLatencyMsec@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@IAEAY04$$CBMAEAY05$$CBI@Z @ 0x18009024C (--$Telemetry_GetPoseAtTime_CountsByLatencyMsec@$04@HolographicDriverClientTrace@@SAXAEBU_GUID@@A.c)
 *     ??$Telemetry_GetPoseAtTime_CountsByTrackingValidityFlags@$03@HolographicDriverClientTrace@@SAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0W4GetPoseAtTimePurpose@Holographic@Internal@Windows@@AEAY03$$CBI33@Z @ 0x18009039C (--$Telemetry_GetPoseAtTime_CountsByTrackingValidityFlags@$03@HolographicDriverClientTrace@@SAXAE.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180090D68 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?NotifyFailure@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180090EF0 (-NotifyFailure@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflector.c)
 *     ?StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x180091550 (-StopActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 *     ??1?$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180091B4C (--1-$ActivityData@VHolographicDriverClientTrace@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800930B0 (-OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180093470 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOT.c)
 *     ?StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800936D4 (-StartActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDr.c)
 *     ?Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x180093900 (-Log_Information_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x1800939CC (-Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ?StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ @ 0x180093BB0 (-StopActivity@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@MEAAXXZ.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18009D26C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

struct HolographicDriverClientTrace *HolographicDriverClientTrace::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`HolographicDriverClientTrace::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1800D3AD8;
    qword_1800D3AD8 = (__int64)&HolographicDriverClientTrace::`vftable';
    qword_1800D3AF0 = (TraceLoggingHProvider)&`HolographicDriverClientTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    qword_1800D3AE0 = (__int64)qword_1800D3AF0;
    byte_1800D3AE8 = 1;
    TraceLoggingRegister(qword_1800D3AF0);
    dword_1800D3AEC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1800D3AD8 + 8))(&qword_1800D3AD8);
    InitOnceComplete(&`HolographicDriverClientTrace::Instance'::`2'::wrapper, 0, &qword_1800D3AD8);
  }
  return (struct HolographicDriverClientTrace *)Context;
}
