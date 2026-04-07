/*
 * XREFs of ?IgnoreCurrentThread@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXXZ @ 0x18006E5A0
 * Callers:
 *     ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x18006FC54 (-Stop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18006FD60 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180070BE0 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180007218 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::IgnoreCurrentThread(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
