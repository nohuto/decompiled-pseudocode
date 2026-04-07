/*
 * XREFs of ??1?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x180075B5C
 * Callers:
 *     ??1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180075C5C (--1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180078584 (--1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180010460 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x180075B98 (--1ActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@VActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEAAXXZ @ 0x1800782C0 (-reset@-$shared_object@VActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEA.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::~ActivityBase<1,35184372088832,5>(__int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<1,35184372088832,5>::ActivityData>::reset(a1 + 312);
  wil::ActivityBase<1,35184372088832,5>::ActivityData::~ActivityData(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
