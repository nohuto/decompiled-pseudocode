/*
 * XREFs of ??1?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18006DAB4
 * Callers:
 *     ??1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18006DBB4 (--1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180070354 (--1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180007218 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18006DAF0 (--1ActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     ?reset@?$shared_object@VActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEAAXXZ @ 0x180070090 (-reset@-$shared_object@VActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEA.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::~ActivityBase<1,35184372088832,5>(__int64 a1)
{
  wil::details::shared_object<wil::ActivityBase<1,35184372088832,5>::ActivityData>::reset(a1 + 312);
  wil::ActivityBase<1,35184372088832,5>::ActivityData::~ActivityData(a1 + 56);
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
