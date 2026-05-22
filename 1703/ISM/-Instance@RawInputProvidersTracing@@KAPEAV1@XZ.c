/*
 * XREFs of ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x180075F74
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x180071350 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N0@Z @ 0x180076090 (-SpatialInputControllerCollection_Initialized_@RawInputProvidersTracing@@QEAAX_N0@Z.c)
 *     ?DeviceAttached_@RawInputProvidersTracing@@QEAAXJKK@Z @ 0x180076140 (-DeviceAttached_@RawInputProvidersTracing@@QEAAXJKK@Z.c)
 *     ?DeviceRemoved_@RawInputProvidersTracing@@QEAAXJKK@Z @ 0x1800761EC (-DeviceRemoved_@RawInputProvidersTracing@@QEAAXJKK@Z.c)
 *     ?InputReportReceived_@RawInputProvidersTracing@@QEAAXKK@Z @ 0x180076298 (-InputReportReceived_@RawInputProvidersTracing@@QEAAXKK@Z.c)
 *     ?InputReportProcessed_@RawInputProvidersTracing@@QEAAXKJAEBUInputInfo@@@Z @ 0x180076344 (-InputReportProcessed_@RawInputProvidersTracing@@QEAAXKJAEBUInputInfo@@@Z.c)
 *     ?OnHolographicDisplayChanged_@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z @ 0x180076544 (-OnHolographicDisplayChanged_@RawInputProvidersTracing@@QEAAXJPEBG_N1@Z.c)
 *     ?SpatialGraphDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z @ 0x180076650 (-SpatialGraphDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z.c)
 *     ?HolographicDisplayDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z @ 0x1800766F8 (-HolographicDisplayDriver_@RawInputProvidersTracing@@QEAAXPEBG@Z.c)
 *     ?ControllerNodeTracked_@RawInputProvidersTracing@@QEAAXJK@Z @ 0x1800767A0 (-ControllerNodeTracked_@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ?SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z @ 0x18007684C (-SetHapticsFeedback_@RawInputProvidersTracing@@QEAAXJKEEG@Z.c)
 *     ?TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXQEBG@Z @ 0x180076B10 (-TelemetrySpatialInputController_Added_@RawInputProvidersTracing@@QEAAXQEBG@Z.c)
 *     ?TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXQEBG@Z @ 0x180076D74 (-TelemetrySpatialInputController_Removed_@RawInputProvidersTracing@@QEAAXQEBG@Z.c)
 *     ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180077DE0 (-Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMe.c)
 *     ?OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ @ 0x1800784C0 (-OnFinalRelease@SpatialInputControllerCollection@@MEAAXXZ.c)
 *     ?OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800787C0 (-OnDeviceAttach@SpatialInputControllerCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180078B00 (-OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z @ 0x180078E90 (-OnInputReport@SpatialInputControllerCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@_N@Z @ 0x1800798C4 (-OnDisplayChanged@SpatialInputControllerCollection@@AEAAJAEBVSyncLockCriticalSection@Details@Wra.c)
 *     _lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_::operator() @ 0x18007A1C0 (_lambda_a65f3cbb6a5b5b3d53fda08bac78d7e4_--operator().c)
 *     ?QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z @ 0x18007A4F0 (-QueueInputReport@SpatialInputControllerCollection@@AEAAJAEAUInputInfo@@@Z.c)
 *     wil::details::lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___::_lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___ @ 0x18007A750 (wil--details--lambda_call__lambda_4361eceb4e5663aaadde433ebf2ce929___--_lambda_call__lambda_4361.c)
 *     wil::details::lambda_call__lambda_fd12116e55b93fce935965703f14cfad___::_lambda_call__lambda_fd12116e55b93fce935965703f14cfad___ @ 0x18007A7C4 (wil--details--lambda_call__lambda_fd12116e55b93fce935965703f14cfad___--_lambda_call__lambda_fd12.c)
 *     wil::details::lambda_call__lambda_c2f82cd3fc2287667072b20bc2eeeaf2___::_lambda_call__lambda_c2f82cd3fc2287667072b20bc2eeeaf2___ @ 0x18007A820 (wil--details--lambda_call__lambda_c2f82cd3fc2287667072b20bc2eeeaf2___--_lambda_call__lambda_c2f8.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18009D26C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

struct RawInputProvidersTracing *RawInputProvidersTracing::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1800D4BB8;
    qword_1800D4BB8 = (__int64)&HolographicDriverClientTrace::`vftable';
    qword_1800D4BD0 = (TraceLoggingHProvider)&`RawInputProvidersTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    qword_1800D4BC0 = (__int64)qword_1800D4BD0;
    byte_1800D4BC8 = 1;
    TraceLoggingRegister(qword_1800D4BD0);
    dword_1800D4BCC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1800D4BB8 + 8))(&qword_1800D4BB8);
    InitOnceComplete(&`RawInputProvidersTracing::Instance'::`2'::wrapper, 0, &qword_1800D4BB8);
  }
  return (struct RawInputProvidersTracing *)Context;
}
