/*
 * XREFs of _TlgCreateWsz @ 0x1800701F4
 * Callers:
 *     ?ReportStopActivity@?$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z @ 0x180006FA8 (-ReportStopActivity@-$ActivityBase@$00$0A@$04@wil@@AEAAXJ@Z.c)
 *     ?StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180007270 (-StopActivity@CloneWindow@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18006ECD0 (-NotifyFailure@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18006F484 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x18006F61C (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x18006FD60 (-StopActivity@IconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ @ 0x180070BE0 (-StopActivity@ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@MEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180075D20 (-NotifyFailure@-$ActivityBase@$00$0A@$04@wil@@UEAA_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall TlgCreateWsz(PEVENT_DATA_DESCRIPTOR pDesc, LPCWSTR pwsz)
{
  LPCWSTR v2; // r8
  __int64 v3; // rax

  v2 = (LPCWSTR)&unk_1800A32F4;
  LODWORD(v3) = 0;
  if ( pwsz )
  {
    v2 = pwsz;
    v3 = -1LL;
    do
      ++v3;
    while ( pwsz[v3] );
  }
  pDesc->Ptr = (ULONGLONG)v2;
  *(_QWORD *)&pDesc->Size = (unsigned int)(2 * v3 + 2);
}
