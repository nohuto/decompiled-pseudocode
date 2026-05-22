/*
 * XREFs of ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x180063F5C
 * Callers:
 *     ?TelemetrySpatialInteractionDeviceOpened_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WPEAX@Z @ 0x180064070 (-TelemetrySpatialInteractionDeviceOpened_@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ?TelemetrySpatialInteractionDeviceClosed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WPEAX@Z @ 0x18006414C (-TelemetrySpatialInteractionDeviceClosed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800642E0 (--_GSpatialInteractionDevice@@UEAAPEAXI@Z.c)
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z @ 0x1800643B4 (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_W@Z.c)
 *     ?UpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@PEAUISpatialGraphDriverClient@345@PEAUHSTRING__@@PEAVSpatialInteractionController@SpatialInteractionDevices@@@Z @ 0x18007A2C0 (-UpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJPEAUISpatialGraphNodeRefer.c)
 *     ?ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEAUHSTRING__@@GGGGGE@Z @ 0x180098D64 (-ParsingInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKPEAUHSTRING__@@G.c)
 *     ?UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x180098EE8 (-UpdatePoseError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 *     ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x180098FD0 (-ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x18009907C (-ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z.c)
 *     ?SetHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKGEG@Z @ 0x180099128 (-SetHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKGEG@Z.c)
 *     ?StopHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x18009920C (-StopHapticsFeedback_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ?UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@@Z @ 0x180099DD0 (-UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNode.c)
 *     ?StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXXZ @ 0x18009A84C (-StopTracking@SpatialInteractionController@SpatialInteractionDevices@@QEAAXXZ.c)
 *     ?StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ @ 0x18009B000 (-StopHapticsFeedback@SpatialInteractionController@SpatialInteractionDevices@@QEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___::_ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___ @ 0x18009B164 (wil--details--ScopeExitFn__lambda_b55778b92a26814f5af4ddd6b8404138___--_ScopeExitFn__lambda_b557.c)
 *     wil::details::lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___::_lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___ @ 0x18009B1FC (wil--details--lambda_call__lambda_417363d58b469e4858bc9400fe1d141b___--_lambda_call__lambda_4173.c)
 *     ??$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEBU_GUID@@GGGIAEAY06$$CBW4ButtonFlags@1@AEAY06$$CBI@Z @ 0x18009B458 (--$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInter.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18009D26C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

struct SpatialInteractionDevices::SpatialInteractionTrace *SpatialInteractionDevices::SpatialInteractionTrace::Instance(
        void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(
    &`SpatialInteractionDevices::SpatialInteractionTrace::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    Context = &qword_1800D3A90;
    qword_1800D3A90 = (__int64)&HolographicDriverClientTrace::`vftable';
    qword_1800D3AA8 = (TraceLoggingHProvider)&`SpatialInteractionDevices::SpatialInteractionTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    qword_1800D3A98 = (__int64)qword_1800D3AA8;
    byte_1800D3AA0 = 1;
    TraceLoggingRegister(qword_1800D3AA8);
    dword_1800D3AA4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1800D3A90 + 8))(&qword_1800D3A90);
    InitOnceComplete(&`SpatialInteractionDevices::SpatialInteractionTrace::Instance'::`2'::wrapper, 0, &qword_1800D3A90);
  }
  return (struct SpatialInteractionDevices::SpatialInteractionTrace *)Context;
}
